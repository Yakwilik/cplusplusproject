#include "tcp_server.hpp"

#include <boost/asio/connect.hpp>
#include <boost/asio/ip/tcp.hpp>

#include "http_connection.hpp"

#include <iostream>

namespace net = boost::asio;        // from <boost/asio.hpp>
using tcp = net::ip::tcp;           // from <boost/asio/ip/tcp.hpp>
using namespace boost::asio;

void http_server(tcp::acceptor& acceptor, tcp::socket& socket) {
    acceptor.async_accept(socket,
          [&](beast::error_code ec)
          {
              if (!ec) {
                  std::make_shared<http_connection>(std::move(socket))->start();
              }
              http_server(acceptor, socket);
          });
}

tcp_server::tcp_server(IPV ipv, unsigned short port) :
    ip_version_(ipv),
    port_(port),
    acceptor_(io_context_, tcp::endpoint(ip::address::from_string("0.0.0.0"), port_)) {}

int tcp_server::run() {
    try {
        tcp::socket socket {io_context_};
        http_server(acceptor_, socket);
        io_context_.run();
    }
    catch (std::exception const &e)
    {
        std::cerr << "Error " << e.what() << std::endl;
        return -1;
    }
    return 0;
}


