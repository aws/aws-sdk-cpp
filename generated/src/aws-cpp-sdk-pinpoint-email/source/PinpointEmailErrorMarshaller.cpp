/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/pinpoint-email/PinpointEmailErrorMarshaller.h>
#include <aws/pinpoint-email/PinpointEmailErrors.h>

using namespace Aws::Client;
using namespace Aws::PinpointEmail;

AWSError<CoreErrors> PinpointEmailErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = PinpointEmailErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}