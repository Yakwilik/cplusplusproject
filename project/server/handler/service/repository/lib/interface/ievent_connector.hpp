#pragma once

#include <cstddef>
#include <string>

#include "objects.hpp"

class IEventConnector {
public:
  virtual void create_event(std::string owner_nickname, std::string title,
                            std::string address, std::string description,
                            std::string date_time, size_t max_visitors) = 0;
  virtual void create_event(std::string owner_nickname, std::string title,
                            std::string address, std::string description,
                            std::string date_time) = 0;

  virtual void update_title(std::string owner_nickname, std::string old_title,
                            std::string new_title) = 0;
  virtual void update_description(std::string owner_nickname, std::string title,
                                  std::string new_decription) = 0;
  virtual void update_date_time(std::string owner_nickname, std::string title,
                                std::string new_date_time) = 0;
  virtual void update_max_visitors(std::string owner_nickname,
                                   std::string title,
                                   size_t new_max_visitors) = 0;
  virtual void update_address(std::string owner_nickname, std::string title,
                              std::string new_address) = 0;

  virtual void add_visitor(std::string owner_nickname, std::string title,
                           std::string visitor_nickname) = 0;

  virtual void delete_visitor(std::string owner_nickname, std::string title,
                              std::string visitor_nickname) = 0;
  virtual void delete_event(std::string owner_nickname, std::string title) = 0;

  virtual Party get_event_data(std::string owner_nickname,
                               std::string title) = 0;

  virtual std::vector<Party> get_visited_events(std::string nickname) = 0;
  virtual std::vector<Party> get_organized_events(std::string nickname) = 0;
};
