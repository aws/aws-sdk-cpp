/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/mq/MQErrorMarshaller.h>
#include <aws/mq/MQErrors.h>

using namespace Aws::Client;
using namespace Aws::MQ;

AWSError<CoreErrors> MQErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MQErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}