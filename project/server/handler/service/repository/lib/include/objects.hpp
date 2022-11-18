#pragma once

#include <string>
#include <cstddef>

struct User {
    std::string nickname;  // UNIQUE
    std::string password;
};

struct Profile {
    std::string email;  // UNIQUE
    size_t age;
    std::string description;  // ALLOW NULL

    User user;
};

struct Token {
    std::string token;  // UNIQUE
    std::string expire_date_time;

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
    std::string date_time;
    size_t max_visitors;  // ALLOW NULL
    
    Address address;
};
