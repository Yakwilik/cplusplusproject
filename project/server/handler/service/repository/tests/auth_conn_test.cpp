#include <gtest/gtest.h>
#include <iostream>

#include "connector.hpp"


class AuthConnTest : public ::testing::Test {
 protected:
    void SetUp() override {}

    void TearDown() override {}

    Connector connector;
};


TEST_F(AuthConnTest, CreateProfileWithDescription) { 
    EXPECT_NO_THROW(connector.auth_conn->create_profile("ninja", "1234", "ninja@gmail.com", 18, "Учусь в бауманке."));
}

TEST_F(AuthConnTest, CreateProfileWithoutDescription) { 
    EXPECT_NO_THROW(connector.auth_conn->create_profile("ninja", "1234", "ninja@gmail.com", 18));
}

TEST_F(AuthConnTest, ExistenceNickname) { 
    EXPECT_TRUE(connector.auth_conn->existence_nickname("anna_kitty"));
}

TEST_F(AuthConnTest, ExistenceEmail) { 
    EXPECT_TRUE(connector.auth_conn->existence_email("anna_kitty@hello.ru"));
}

TEST_F(AuthConnTest, GetProfileDataByNickname) {
    EXPECT_NO_THROW(Profile profile = connector.auth_conn->get_profile_data_by_nickname("ninja"));
}


TEST_F(AuthConnTest, UpdateNickname) {
    EXPECT_NO_THROW(connector.auth_conn->update_nickname("ninja", "ninjago2.0"));
}

TEST_F(AuthConnTest, UpdateEmail) {
    EXPECT_NO_THROW(connector.auth_conn->update_email("ninja", "ninjago2.0@gmail.com"));
}

TEST_F(AuthConnTest, UpdatePassword) {
    EXPECT_NO_THROW(connector.auth_conn->update_password("ninja", "4321"));
}

TEST_F(AuthConnTest, UpdateAge) {
    EXPECT_NO_THROW(connector.auth_conn->update_age("ninja", 19));
}

TEST_F(AuthConnTest, UpdateDescription) {
    EXPECT_NO_THROW(connector.auth_conn->update_description("ninja", "Учусь теперь в УЛК :с"));
}

TEST_F(AuthConnTest, CheckPassword) {
    EXPECT_TRUE(connector.auth_conn->check_password("ninja", "2234"));
}

TEST_F(AuthConnTest, DeleteProfile) {
    EXPECT_NO_THROW(connector.auth_conn->delete_profile("ninja"));
}

TEST_F(AuthConnTest, CreateToken) {
    EXPECT_NO_THROW(connector.auth_conn->create_token("ninja"));
}

TEST_F(AuthConnTest, DeleteToken) {
    EXPECT_NO_THROW(connector.auth_conn->delete_token("ninja"));
}

TEST_F(AuthConnTest, IsActualToken) {
    EXPECT_TRUE(connector.auth_conn->is_actual_token("ninja"));
}
