/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_CONFIGURE_H
#define _MOCK_CONFIGURE_H

#include "unity.h"
#include "Configure.h"

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

void mock_Configure_Init(void);
void mock_Configure_Destroy(void);
void mock_Configure_Verify(void);




#define Configure_Ignore() Configure_CMockIgnore()
void Configure_CMockIgnore(void);
#define Configure_StopIgnore() Configure_CMockStopIgnore()
void Configure_CMockStopIgnore(void);
#define Configure_Expect() Configure_CMockExpect(__LINE__)
void Configure_CMockExpect(UNITY_LINE_TYPE cmock_line);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
