
//==============================================================================
// Copyright (c) 2015 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief Intercepted OpenCL APIs
//==============================================================================

#ifndef _CL_INTERCEPT_H_
#define _CL_INTERCEPT_H_

#include <CL/opencl.h>

extern cl_int CL_API_CALL
CL_OCCUPANCY_API_ENTRY_EnqueueNDRangeKernel(
    cl_command_queue cq,
    cl_kernel        kernel,
    cl_uint          wgDim,
    const size_t*    globalOffset,
    const size_t*    globalWS,
    const size_t*    localWS,
    cl_uint          nEventsInWaitList,
    const cl_event*  pEventList,
    cl_event*        pEvent);

extern cl_int CL_API_CALL
CL_OCCUPANCY_API_ENTRY_ReleaseContext(cl_context context);

extern cl_int CL_API_CALL
CL_OCCUPANCY_API_ENTRY_GetDeviceIDs(
    cl_platform_id    platform,
    cl_device_type    device_type,
    cl_uint           num_entries,
    cl_device_id*     device_list,
    cl_uint*          num_devices);

#endif // _CL_INTERCEPT_H_
