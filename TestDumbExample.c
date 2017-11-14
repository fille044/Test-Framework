#include "unity/src/unity.h"
#include "DumbExample.h"

// Compile commands     gcc TestDumbExample.c DumbExample.c
//           -->        unity/src/unity.c -o TestDumbExample

void test_AverageThreeBytes_should_AverageMidRangeValues(void)
{
TEST_ASSERT_EQUAL(20, AverageThreeBytes(30, 40, 50));
TEST_ASSERT_EQUAL(40, AverageThreeBytes(10, 70, 40));
TEST_ASSERT_EQUAL(33, AverageThreeBytes(33, 33, 33));
}

void test_AverageThreeBytes_should_AverageHighValues(void)
{
TEST_ASSERT_EQUAL_HEX8(80, AverageThreeBytes(70, 80, 90));
TEST_ASSERT_EQUAL_HEX8(127, AverageThreeBytes(127, 127, 127));
TEST_ASSERT_EQUAL_HEX8(85, AverageThreeBytes(0, 126, 126));
}

int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_AverageThreeBytes_should_AverageMidRangeValues);
RUN_TEST(test_AverageThreeBytes_should_AverageHighValues);
return UNITY_END();
}
