#pragma once

#include <cstddef>
#include <string>

#include "iauthorization_connector.hpp"

class AuthorizationConnector : public IAuthorizationConnector {
  void create_profile(std::string nickname, std::string password,
                      std::string email, size_t age);
  void create_profile(std::string nickname, std::string password,
                      std::string email, size_t age, std::string description);

  bool existence_nickname(std::string nickname);
  bool existence_email(std::string email);

  Profile get_profile_data_by_nickname(std::string nickname);

  void update_nickname(std::string old_nickname, std::string new_nickname);
  void update_email(std::string nickname, std::string new_email);
  void update_password(std::string nickname, std::string new_password);
  void update_age(std::string nickname, size_t new_age);
  void update_description(std::string nickname, std::string new_description);

  bool check_password(std::string nickname, std::string input_password);

  void delete_profile(std::string nickname);

  void create_token(std::string nickname);
  void delete_token(std::string nickname);
  bool is_actual_token(std::string nickname);  // Удаляю токен при устаревании
};
