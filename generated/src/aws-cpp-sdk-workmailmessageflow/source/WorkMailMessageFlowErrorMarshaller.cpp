/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowErrorMarshaller.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowErrors.h>

using namespace Aws::Client;
using namespace Aws::WorkMailMessageFlow;

AWSError<CoreErrors> WorkMailMessageFlowErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = WorkMailMessageFlowErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}