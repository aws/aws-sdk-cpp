/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/quicksight/QuickSightErrorMarshaller.h>
#include <aws/quicksight/QuickSightErrors.h>

using namespace Aws::Client;
using namespace Aws::QuickSight;

AWSError<CoreErrors> QuickSightErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = QuickSightErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}