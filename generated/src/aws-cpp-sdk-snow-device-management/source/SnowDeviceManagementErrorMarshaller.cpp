/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/snow-device-management/SnowDeviceManagementErrorMarshaller.h>
#include <aws/snow-device-management/SnowDeviceManagementErrors.h>

using namespace Aws::Client;
using namespace Aws::SnowDeviceManagement;

AWSError<CoreErrors> SnowDeviceManagementErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SnowDeviceManagementErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}