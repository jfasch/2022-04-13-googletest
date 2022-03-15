#include <gtest/gtest.h>


TEST(DummySuite, FailingTest)
{
    FAIL();
}

TEST(DummySuite, AnotherFailingTest)
{
    ASSERT_EQ('X', 'U');
}

TEST(DummySuite, SucceedingTest)
{
}
