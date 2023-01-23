/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/states/SFNErrorMarshaller.h>
#include <aws/states/SFNErrors.h>

using namespace Aws::Client;
using namespace Aws::SFN;

AWSError<CoreErrors> SFNErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SFNErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}