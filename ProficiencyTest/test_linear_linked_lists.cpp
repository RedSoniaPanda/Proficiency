//
// Created by sophi on 8/27/2020.
//

#include "gtest/gtest.h"
#include "../List.h"

TEST(TestingEnvironment, TestHarness) {
    EXPECT_EQ(0, 0);
}

class TestList : public ::testing::Test {
protected:
    void SetUp() override {}
public:
    List new_linear_linked_list;
};

TEST_F(TestList, TestInsertOneAtTail) {
    new_linear_linked_list.insert_at_end_of_lll(1);
    EXPECT_EQ(sizeof(new_linear_linked_list), 1);
}