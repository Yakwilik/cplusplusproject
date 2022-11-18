#include <gtest/gtest.h>
#include <iostream>

#include "connector.hpp"


class EventConnTest : public ::testing::Test {
 protected:
    void SetUp() override {}

    void TearDown() override {}

    Connector connector;
};


TEST_F(EventConnTest, CreateEventWithMaxVisitors) { 
    EXPECT_NO_THROW(connector.event_conn->create_event("ninja", 
        "Very Cool Party", "г. Москва, 2-я Владимирская, 38/18",
        "Лаунж в подвале дома", "2007-05-08 12:35:29", 100));
}

TEST_F(EventConnTest, CreateEventWithoutMaxVisitors) { 
    EXPECT_NO_THROW(connector.event_conn->create_event("ninja", 
        "Very Cool Party", "г. Москва, 2-я Владимирская, 38/18",
        "Лаунж в подвале дома", "2007-05-08 12:35:29"));
}

TEST_F(EventConnTest, UpdateTitle) { 
    EXPECT_NO_THROW(connector.event_conn->update_title("anna_kitty", "Страшный праздник", "Хэллоуин"));
}

TEST_F(EventConnTest, UpdateDescription) { 
    EXPECT_NO_THROW(connector.event_conn->update_description("anna_kitty", "Хэллоуин",
                                                                    "И не забудьте про дресс-код"));
}

TEST_F(EventConnTest, UpdateDateTime) {
    EXPECT_NO_THROW(connector.event_conn->update_date_time("anna_kitty", "Хэллоуин", "2022-11-11 11:11:11"));
}


TEST_F(EventConnTest, UpdateMaxVisitors) {
    EXPECT_NO_THROW(connector.event_conn->update_max_visitors("anna_kitty", "Хэллоуин", 111));
}

TEST_F(EventConnTest, UpdateAddress) {
    EXPECT_NO_THROW(connector.event_conn->update_address("anna_kitty", "Хэллоуин", "В деревне у бабушки"));
}

TEST_F(EventConnTest, AddVisitor) {
    EXPECT_NO_THROW(connector.event_conn->add_visitor("anna_kitty", "Хэллоуин", "ninja"));
}

TEST_F(EventConnTest, DeleteVisitor) {
    EXPECT_NO_THROW(connector.event_conn->delete_visitor("anna_kitty", "Хэллоуин", "ninja"));
}

TEST_F(EventConnTest, DeleteEvent) {
    EXPECT_NO_THROW(connector.event_conn->delete_event("anna_kitty", "Хэллоуин"));
}

TEST_F(EventConnTest, GetEventData) {
    EXPECT_NO_THROW(Party party = connector.event_conn->get_event_data("anna_kitty", "Хэллоуин"));
}

TEST_F(EventConnTest, GetVisitedEvents) {
    EXPECT_NO_THROW(std::vector<Party> visited_party = connector.event_conn->get_visited_events("anna_kitty"));
}

TEST_F(EventConnTest, GetOrganizedEvents) {
    EXPECT_NO_THROW(std::vector<Party> organized_party = connector.event_conn->get_organized_events("anna_kitty"));
}
