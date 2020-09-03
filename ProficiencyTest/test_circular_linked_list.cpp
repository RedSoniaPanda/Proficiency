#include "gtest/gtest.h"
#include "../CircularList.h"

class TestCLL: public testing::Test {
protected:
    void SetUp() override {}

};

TEST_F(TestCLL, DISABLED_TestHarness) {
    EXPECT_EQ(0, 1);
}

TEST_F(TestCLL, TestStructInit) {
    EXPECT_NO_THROW(Node * temp{});
}

TEST_F(TestCLL, TestClassInit) {
    EXPECT_NO_THROW(CLL *list_object{});
}
