/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/securitylake/SecurityLakeErrorMarshaller.h>
#include <aws/securitylake/SecurityLakeErrors.h>

using namespace Aws::Client;
using namespace Aws::SecurityLake;

AWSError<CoreErrors> SecurityLakeErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SecurityLakeErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}