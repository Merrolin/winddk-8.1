/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    WdfGlobals.h

Environment:

    user mode

NOTE: This header is generated by stubwork.

      To modify contents, add or remove <shared> or <umdf>
      tags in the corresponding .x and .y template files.

--*/

#pragma once

#ifndef WDF_EXTERN_C
  #ifdef __cplusplus
    #define WDF_EXTERN_C       extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END   }
  #else
    #define WDF_EXTERN_C
    #define WDF_EXTERN_C_START
    #define WDF_EXTERN_C_END
  #endif
#endif

WDF_EXTERN_C_START

#ifdef __cplusplus
extern "C" {
#endif

#define WDF_DRIVER_GLOBALS_NAME_LEN (32)

typedef struct _WDF_DRIVER_GLOBALS {

    // backpointer to the handle for this driver
    WDFDRIVER Driver;

    // Flags indicated by the driver during create
    ULONG DriverFlags;

    // Tag generated by WDF for the driver.  Tag used by allocations made on
    // behalf of the driver by WDF.
    ULONG DriverTag;

    CHAR DriverName[WDF_DRIVER_GLOBALS_NAME_LEN];

    // If TRUE, the stub code will capture DriverObject->DriverUnload and insert
    // itself first in the unload chain.  If FALSE, DriverUnload is left alone
    // (but WDF will not be notified of unload and there will be no auto cleanup).
    BOOLEAN DisplaceDriverUnload;

} WDF_DRIVER_GLOBALS, *PWDF_DRIVER_GLOBALS;

#ifdef __cplusplus
}
#endif
WDF_EXTERN_C_END

