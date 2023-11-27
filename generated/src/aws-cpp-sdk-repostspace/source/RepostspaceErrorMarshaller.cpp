/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/repostspace/RepostspaceErrorMarshaller.h>
#include <aws/repostspace/RepostspaceErrors.h>

using namespace Aws::Client;
using namespace Aws::repostspace;

AWSError<CoreErrors> RepostspaceErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = RepostspaceErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}