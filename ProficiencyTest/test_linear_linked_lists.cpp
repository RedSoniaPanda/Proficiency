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

TEST_F(TestList, TestDisplayAllButHead) {
    new_linear_linked_list.insert_at_end_of_lll(1);
    new_linear_linked_list.insert_at_end_of_lll(2);
    new_linear_linked_list.insert_at_end_of_lll(1);

    EXPECT_TRUE(new_linear_linked_list.display_not_equal_head());
}

TEST_F(TestList, TestRemoveHead) {
    new_linear_linked_list.insert_at_end_of_lll(1);
    EXPECT_TRUE(new_linear_linked_list.remove_given_value(1));
}

TEST_F(TestList, TestRemoveTail) {
    new_linear_linked_list.insert_at_end_of_lll(1);
    new_linear_linked_list.insert_at_end_of_lll(2);
    EXPECT_TRUE(new_linear_linked_list.remove_given_value(2));
}

TEST_F(TestList, TestRemoveMiddle) {
    new_linear_linked_list.insert_at_end_of_lll(1);
    new_linear_linked_list.insert_at_end_of_lll(2);
    new_linear_linked_list.insert_at_end_of_lll(3);
    EXPECT_TRUE(new_linear_linked_list.remove_given_value(2));
}

TEST_F(TestList, TestRemoveMultipleInstances) {
    new_linear_linked_list.insert_at_end_of_lll(2);
    new_linear_linked_list.insert_at_end_of_lll(2);
    EXPECT_TRUE(new_linear_linked_list.remove_given_value(2));
}

TEST_F(TestList, TestFoundLastTwoPointsMoreThanOnce) {
    new_linear_linked_list.insert_at_end_of_lll(1);
    new_linear_linked_list.insert_at_end_of_lll(2);
    new_linear_linked_list.insert_at_end_of_lll(2);
    new_linear_linked_list.insert_at_end_of_lll(2);
    new_linear_linked_list.insert_at_end_of_lll(1);
    EXPECT_TRUE(new_linear_linked_list.did_find_more_than_once());
}

TEST_F(TestList, TestDidntFindLastTwoPointsMoreThanOnce) {
    new_linear_linked_list.insert_at_end_of_lll(2);
    new_linear_linked_list.insert_at_end_of_lll(2);
    new_linear_linked_list.insert_at_end_of_lll(20);
    new_linear_linked_list.insert_at_end_of_lll(10);
    EXPECT_FALSE(new_linear_linked_list.did_find_more_than_once());
}
