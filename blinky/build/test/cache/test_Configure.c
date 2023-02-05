#include "mock_stub_interrupt.h"
#include "test/support/stub_io.h"
#include "src/Configure.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_Configure_should_setup_timer_and_port(void)

    {









    cli_CMockExpect(20);

    sei_CMockExpect(21);



    Configure();





    UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((TCCR0B)), (

   ((void *)0)

   ), (UNITY_UINT)(26), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((TIMSK0)), (

   ((void *)0)

   ), (UNITY_UINT)(27), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0x20)), (UNITY_INT)((DDRB)), (

   ((void *)0)

   ), (UNITY_UINT)(28), UNITY_DISPLAY_STYLE_INT);

}
