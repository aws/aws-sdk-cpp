/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/support/SupportErrorMarshaller.h>
#include <aws/support/SupportErrors.h>

using namespace Aws::Client;
using namespace Aws::Support;

AWSError<CoreErrors> SupportErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SupportErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}