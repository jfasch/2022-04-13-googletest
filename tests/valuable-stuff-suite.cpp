#include <gtest/gtest.h>

#include <feature1.h>


TEST(MyValuableStuffSuite, Feature1Test)
{
    int result = super_feature(1, 2);
    ASSERT_EQ(result, 3);
}
