//
// Created by sophi on 8/27/2020.
//

#include "gtest/gtest.h"
#include "../List.h"

TEST(TestingEnvironment, TestHarness) {
    EXPECT_EQ(0, 0);
}

TEST(TestLLL, TestCreateClass) {
    List new_linear_linked_list;
    EXPECT_EQ(sizeof(new_linear_linked_list), 0);
}
