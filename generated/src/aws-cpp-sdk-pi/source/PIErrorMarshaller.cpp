/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/pi/PIErrorMarshaller.h>
#include <aws/pi/PIErrors.h>

using namespace Aws::Client;
using namespace Aws::PI;

AWSError<CoreErrors> PIErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = PIErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}