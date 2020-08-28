//
// Created by sophi on 8/27/2020.
//

#include "gtest/gtest.h"
#include "../List.h"

class TestList : public ::testing::Test {
protected:
    void SetUp() override {}

public:
    List new_linear_linked_list{};

};

// Demonstrating test harness for framework and disabling effect
TEST_F(TestList, DISABLED_TestHarness) {
    EXPECT_EQ(0, 0);
}

TEST_F(TestList, TestInsertOneAtTail) {
    new_linear_linked_list.insert_at_end_of_lll(1);
    EXPECT_TRUE(new_linear_linked_list.was_insert_successful(1));

    new_linear_linked_list.insert_at_end_of_lll(2);
    EXPECT_TRUE(new_linear_linked_list.was_insert_successful(2));
}
