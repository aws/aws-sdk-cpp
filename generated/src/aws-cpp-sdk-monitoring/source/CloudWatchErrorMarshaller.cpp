/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/monitoring/CloudWatchErrorMarshaller.h>
#include <aws/monitoring/CloudWatchErrors.h>

using namespace Aws::Client;
using namespace Aws::CloudWatch;

AWSError<CoreErrors> CloudWatchErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CloudWatchErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}