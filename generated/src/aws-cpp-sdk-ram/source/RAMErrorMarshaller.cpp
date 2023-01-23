/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/ram/RAMErrorMarshaller.h>
#include <aws/ram/RAMErrors.h>

using namespace Aws::Client;
using namespace Aws::RAM;

AWSError<CoreErrors> RAMErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = RAMErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}