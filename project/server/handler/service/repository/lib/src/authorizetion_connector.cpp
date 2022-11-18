#include "authorization_connector.hpp"

void AuthorizationConnector::create_profile(std::string nickname,
                                            std::string password,
                                            std::string email, size_t age) {}
void AuthorizationConnector::create_profile(std::string nickname,
                                            std::string password,
                                            std::string email, size_t age,
                                            std::string description) {}

bool AuthorizationConnector::existence_nickname(std::string nickname) {
  return true;
}
bool AuthorizationConnector::existence_email(std::string email) {
  return true;
}

Profile
AuthorizationConnector::get_profile_data_by_nickname(std::string nickname) {
  Profile profile;
  return profile;
}

void AuthorizationConnector::update_nickname(std::string old_nickname,
                                             std::string new_nickname) {}
void AuthorizationConnector::update_email(std::string nickname,
                                          std::string new_email) {}
void AuthorizationConnector::update_password(std::string nickname,
                                             std::string new_password) {}
void AuthorizationConnector::update_age(std::string nickname, size_t new_age) {}
void AuthorizationConnector::update_description(std::string nickname,
                                                std::string new_description) {}

bool AuthorizationConnector::check_password(std::string nickname,
                                            std::string input_password) {
  return true;
}

void AuthorizationConnector::delete_profile(std::string nickname) {}

void AuthorizationConnector::create_token(std::string nickname) {}
void AuthorizationConnector::delete_token(std::string nickname) {}
bool AuthorizationConnector::is_actual_token(std::string nickname) {
  return true;
}
