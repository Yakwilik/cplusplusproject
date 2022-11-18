#include "event_connector.hpp"

void EventConnector::create_event(std::string owner_nickname, std::string title,
                                  std::string address, std::string description,
                                  std::string date_time, size_t max_visitors) {}
void EventConnector::create_event(std::string owner_nickname, std::string title,
                                  std::string address, std::string description,
                                  std::string date_time) {}

void EventConnector::update_title(std::string owner_nickname,
                                  std::string old_title,
                                  std::string new_title) {}
void EventConnector::update_description(std::string owner_nickname,
                                        std::string title,
                                        std::string new_decription) {}
void EventConnector::update_date_time(std::string owner_nickname,
                                      std::string title,
                                      std::string new_date_time) {}
void EventConnector::update_max_visitors(std::string owner_nickname,
                                         std::string title,
                                         size_t new_max_visitors) {}
void EventConnector::update_address(std::string owner_nickname,
                                    std::string title,
                                    std::string new_address) {}

void EventConnector::add_visitor(std::string owner_nickname, std::string title,
                                 std::string visitor_nickname) {}

void EventConnector::delete_visitor(std::string owner_nickname,
                                    std::string title,
                                    std::string visitor_nickname) {}
void EventConnector::delete_event(std::string owner_nickname,
                                  std::string title) {}

Party EventConnector::get_event_data(std::string owner_nickname,
                                     std::string title) {
  Party party;
  return party;
}

std::vector<Party> EventConnector::get_visited_events(std::string nickname) {
  return {};
}
std::vector<Party> EventConnector::get_organized_events(std::string nickname) {
  return {};
}
