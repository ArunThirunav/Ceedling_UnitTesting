#ifdef TEST

#include "unity.h"

#include "function.h"

void setUp(void)
{
    int a = 10;
}

void tearDown(void)
{
}

void test_function_NeedToImplement(void)
{
    TEST_ASSERT_EQUAL_INT(printFunc(10), 10);
    // TEST_IGNORE_MESSAGE("Need to Implement function");
}

#endif // TEST
