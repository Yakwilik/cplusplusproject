#pragma once

#include <cstddef>
#include <string>

#include "objects.hpp"

class IAuthorizationConnector {
 public:
    virtual void create_profile(std::string nickname, std::string password, std::string email, size_t age) = 0;
    virtual void create_profile(std::string nickname, std::string password, std::string email, size_t age, std::string description) = 0;

    virtual bool existence_nickname(std::string nickname) = 0;
    virtual bool existence_email(std::string email) = 0;

    virtual Profile get_profile_data_by_nickname(std::string nickname) = 0;

    virtual void update_nickname(std::string old_nickname, std::string new_nickname) = 0;
    virtual void update_email(std::string nickname, std::string new_email) = 0;
    virtual void update_password(std::string nickname, std::string new_password) = 0;
    virtual void update_age(std::string nickname, size_t new_age) = 0;
    virtual void update_description(std::string nickname, size_t new_description) = 0;

    virtual bool check_password(std::string nickname, std::string input_password) = 0;

    virtual void delete_profile(std::string nickname) = 0;

    virtual void create_token(std::string nickname) = 0;
    virtual void delete_token(std::string nickname) = 0;
    virtual bool is_actual_token(std::string nickname) = 0;  // Удаляю токен при устаревании
};
