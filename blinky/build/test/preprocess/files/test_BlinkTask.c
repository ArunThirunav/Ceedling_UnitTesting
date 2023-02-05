#include "test/support/stub_io.h"
#include "src/BlinkTask.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"






void setUp(void)

{

    PORTB = 0;

}







void tearDown(void)

{

}



void test_BlinkTask_should_toggle_led(void)

{











    BlinkTask();





    UnityAssertEqualNumber((UNITY_INT)((0x20)), (UNITY_INT)((PORTB)), (

   ((void *)0)

   ), (UNITY_UINT)(28), UNITY_DISPLAY_STYLE_INT);

}

void test_BlinkTask_should_toggle_led_LOW(void)

{



    PORTB = 0x20;









    BlinkTask();





    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((PORTB)), (

   ((void *)0)

   ), (UNITY_UINT)(41), UNITY_DISPLAY_STYLE_INT);

}
