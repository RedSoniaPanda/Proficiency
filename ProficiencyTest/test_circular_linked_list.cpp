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

TEST_F(TestCLL, TestTailInit) {
    EXPECT_NO_THROW(CLL *list_object{});
}

TEST_F(TestCLL, TestInsertWhenListIsEmpty) {
    CLL list_object{};
    EXPECT_TRUE(list_object.insert(0));
}

TEST_F(TestCLL, TestInsertFourItemsEmptyList) {
    CLL list_object{};
    EXPECT_TRUE(list_object.insert(0));
    EXPECT_TRUE(list_object.insert(1));
    EXPECT_TRUE(list_object.insert(3));
    EXPECT_TRUE(list_object.insert(4));
}

TEST_F(TestCLL, TestDisplayAll) {
    CLL list_object{};
    EXPECT_EQ(0, list_object.display_all());

    list_object.insert(1);
    EXPECT_EQ(1, list_object.display_all());

    list_object.insert(2);
    EXPECT_EQ(2, list_object.display_all());

    list_object.insert(3);
    EXPECT_EQ(3, list_object.display_all());

    list_object.insert(4);
    EXPECT_EQ(4, list_object.display_all());
}
