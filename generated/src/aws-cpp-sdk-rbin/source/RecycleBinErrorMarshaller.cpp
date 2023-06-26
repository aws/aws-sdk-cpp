/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/rbin/RecycleBinErrorMarshaller.h>
#include <aws/rbin/RecycleBinErrors.h>

using namespace Aws::Client;
using namespace Aws::RecycleBin;

AWSError<CoreErrors> RecycleBinErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = RecycleBinErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}