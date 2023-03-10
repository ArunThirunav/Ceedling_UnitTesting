/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_function.h"

static const char* CMockString_a = "a";
static const char* CMockString_printFunc = "printFunc";

typedef struct _CMOCK_printFunc_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;
  int CallOrder;
  int Expected_a;

} CMOCK_printFunc_CALL_INSTANCE;

static struct mock_functionInstance
{
  char printFunc_IgnoreBool;
  int printFunc_FinalReturn;
  char printFunc_CallbackBool;
  CMOCK_printFunc_CALLBACK printFunc_CallbackFunctionPointer;
  int printFunc_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE printFunc_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_function_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.printFunc_CallInstance;
  if (Mock.printFunc_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_printFunc);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.printFunc_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
}

void mock_function_Init(void)
{
  mock_function_Destroy();
}

void mock_function_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

int printFunc(int a)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_printFunc_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_printFunc);
  cmock_call_instance = (CMOCK_printFunc_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.printFunc_CallInstance);
  Mock.printFunc_CallInstance = CMock_Guts_MemNext(Mock.printFunc_CallInstance);
  if (Mock.printFunc_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.printFunc_FinalReturn;
    Mock.printFunc_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.printFunc_CallbackBool &&
      Mock.printFunc_CallbackFunctionPointer != NULL)
  {
    int cmock_cb_ret = Mock.printFunc_CallbackFunctionPointer(a, Mock.printFunc_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_printFunc,CMockString_a);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_a, a, cmock_line, CMockStringMismatch);
  }
  if (Mock.printFunc_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.printFunc_CallbackFunctionPointer(a, Mock.printFunc_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_printFunc(CMOCK_printFunc_CALL_INSTANCE* cmock_call_instance, int a);
void CMockExpectParameters_printFunc(CMOCK_printFunc_CALL_INSTANCE* cmock_call_instance, int a)
{
  cmock_call_instance->Expected_a = a;
}

void printFunc_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_printFunc_CALL_INSTANCE));
  CMOCK_printFunc_CALL_INSTANCE* cmock_call_instance = (CMOCK_printFunc_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.printFunc_CallInstance = CMock_Guts_MemChain(Mock.printFunc_CallInstance, cmock_guts_index);
  Mock.printFunc_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.printFunc_IgnoreBool = (char)1;
}

void printFunc_CMockStopIgnore(void)
{
  if(Mock.printFunc_IgnoreBool)
    Mock.printFunc_CallInstance = CMock_Guts_MemNext(Mock.printFunc_CallInstance);
  Mock.printFunc_IgnoreBool = (char)0;
}

void printFunc_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int a, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_printFunc_CALL_INSTANCE));
  CMOCK_printFunc_CALL_INSTANCE* cmock_call_instance = (CMOCK_printFunc_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.printFunc_CallInstance = CMock_Guts_MemChain(Mock.printFunc_CallInstance, cmock_guts_index);
  Mock.printFunc_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_printFunc(cmock_call_instance, a);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void printFunc_AddCallback(CMOCK_printFunc_CALLBACK Callback)
{
  Mock.printFunc_IgnoreBool = (char)0;
  Mock.printFunc_CallbackBool = (char)1;
  Mock.printFunc_CallbackFunctionPointer = Callback;
}

void printFunc_Stub(CMOCK_printFunc_CALLBACK Callback)
{
  Mock.printFunc_IgnoreBool = (char)0;
  Mock.printFunc_CallbackBool = (char)0;
  Mock.printFunc_CallbackFunctionPointer = Callback;
}

