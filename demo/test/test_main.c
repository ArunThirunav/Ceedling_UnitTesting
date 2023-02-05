#ifdef TEST

#include "unity.h"
#include "mock_function.h"
#include "main.h"

int a = 0;
void setUp(void)
{
    a = 10;
}

void tearDown(void)
{
}

void test_main_NeedToImplement(void)
{
    int b = 10;
    printFunc_ExpectAndReturn(a, 10);
    TEST_ASSERT_EQUAL(b, a);
    // TEST_IGNORE_MESSAGE("Need to Implement main");
}

#endif // TEST
