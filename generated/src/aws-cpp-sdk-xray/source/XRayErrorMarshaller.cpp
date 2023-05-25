/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/xray/XRayErrorMarshaller.h>
#include <aws/xray/XRayErrors.h>

using namespace Aws::Client;
using namespace Aws::XRay;

AWSError<CoreErrors> XRayErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = XRayErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}