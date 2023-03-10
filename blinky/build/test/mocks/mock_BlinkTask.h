/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_BLINKTASK_H
#define _MOCK_BLINKTASK_H

#include "unity.h"
#include "BlinkTask.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_BlinkTask_Init(void);
void mock_BlinkTask_Destroy(void);
void mock_BlinkTask_Verify(void);




#define BlinkTask_Ignore() BlinkTask_CMockIgnore()
void BlinkTask_CMockIgnore(void);
#define BlinkTask_StopIgnore() BlinkTask_CMockStopIgnore()
void BlinkTask_CMockStopIgnore(void);
#define BlinkTask_Expect() BlinkTask_CMockExpect(__LINE__)
void BlinkTask_CMockExpect(UNITY_LINE_TYPE cmock_line);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
