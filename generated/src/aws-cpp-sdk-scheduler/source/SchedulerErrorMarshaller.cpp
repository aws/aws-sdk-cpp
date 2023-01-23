/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/scheduler/SchedulerErrorMarshaller.h>
#include <aws/scheduler/SchedulerErrors.h>

using namespace Aws::Client;
using namespace Aws::Scheduler;

AWSError<CoreErrors> SchedulerErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SchedulerErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}