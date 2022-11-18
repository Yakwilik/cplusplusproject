#pragma once

#include <cstddef>
#include <string>
#include <vector>

#include "ievent_connector.hpp"

class EventConnector : public IEventConnector {
  void create_event(std::string owner_nickname, std::string title,
                    std::string address, std::string description,
                    std::string date_time, size_t max_visitors);
  void create_event(std::string owner_nickname, std::string title,
                    std::string address, std::string description,
                    std::string date_time);

  void update_title(std::string owner_nickname, std::string old_title,
                    std::string new_title);
  void update_description(std::string owner_nickname, std::string title,
                          std::string new_decription);
  void update_date_time(std::string owner_nickname, std::string title,
                        std::string new_date_time);
  void update_max_visitors(std::string owner_nickname, std::string title,
                           size_t new_max_visitors);
  void update_address(std::string owner_nickname, std::string title,
                      std::string new_address);

  void add_visitor(std::string owner_nickname, std::string title,
                   std::string visitor_nickname);

  void delete_visitor(std::string owner_nickname, std::string title,
                      std::string visitor_nickname);
  void delete_event(std::string owner_nickname, std::string title);

  Party get_event_data(std::string owner_nickname, std::string title);

  std::vector<Party> get_visited_events(std::string nickname);
  std::vector<Party> get_organized_events(std::string nickname);
};
