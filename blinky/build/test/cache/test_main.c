#include "build/test/mocks/mock_BlinkTask.h"
#include "build/test/mocks/mock_Configure.h"
#include "test/support/stub_io.h"
#include "src/main.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"
void setUp(void) {}



void tearDown(void) {}





void test_AppMain_should_call_configure(void)

{



    BlinkTaskReady=0;



    Configure_CMockExpect(16);



    AppMain();





    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((BlinkTaskReady)), (

   ((void *)0)

   ), (UNITY_UINT)(21), UNITY_DISPLAY_STYLE_INT);

}

void test_AppMain_should_call_configure_and_BlinkTask(void)

{



    BlinkTaskReady=1;



    Configure_CMockExpect(28);

    BlinkTask_CMockExpect(29);



    AppMain();





    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((BlinkTaskReady)), (

   ((void *)0)

   ), (UNITY_UINT)(34), UNITY_DISPLAY_STYLE_INT);

}

void test_ISR_should_increment_tick(void)

{



    tick = 0;







    ISR();





    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((tick)), (

   ((void *)0)

   ), (UNITY_UINT)(46), UNITY_DISPLAY_STYLE_INT);

}

void test_ISR_should_set_blinkReady_increment_tick(void)

{



    tick = 1000;







    ISR();





    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((tick)), (

   ((void *)0)

   ), (UNITY_UINT)(58), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((BlinkTaskReady)), (

   ((void *)0)

   ), (UNITY_UINT)(59), UNITY_DISPLAY_STYLE_INT);

}
