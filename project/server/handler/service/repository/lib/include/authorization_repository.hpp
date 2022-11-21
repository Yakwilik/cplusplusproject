#pragma once

#include <cstddef>
#include <string>

#include "iauthorization_repository.hpp"

class AuthorizationRepository : public IAuthorizationRepository {
 public:
  User create_user(User user);

  bool existence_nickname(std::string nickname);
  bool existence_email(std::string email);

  bool check_password(size_t user_id, std::string input_password);
};
