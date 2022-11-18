#pragma once

#include <cstddef>
#include <string>

struct User {
  std::string nickname;  // UNIQUE
  std::string password;
};

struct Profile {
  std::string email;  // UNIQUE
  size_t age;
  std::string description = "";  // ALLOW NULL

  User user;
};

struct Token {
  std::string token;             // UNIQUE
  std::string expire_date_time;  // Format: "yyyy-mm-dd hh:mm:ss"

  User user;
};

struct Address {
  std::string address;
  double longitude;
  double latitude;
};

struct Party {
  std::string title;
  std::string decription;
  std::string date_time;    // Format: "yyyy-mm-dd hh:mm:ss"
  size_t max_visitors = 0;  // ALLOW NULL

  Address address;
};
