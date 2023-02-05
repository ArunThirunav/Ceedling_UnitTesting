#include "src/main.h"
#include "build/test/mocks/mock_function.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"






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

    printFunc_CMockExpectAndReturn(20, a, 10);

    UnityAssertEqualNumber((UNITY_INT)((b)), (UNITY_INT)((a)), (

   ((void *)0)

   ), (UNITY_UINT)(21), UNITY_DISPLAY_STYLE_INT);



}
