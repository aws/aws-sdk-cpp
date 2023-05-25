/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/opensearchserverless/OpenSearchServerlessErrorMarshaller.h>
#include <aws/opensearchserverless/OpenSearchServerlessErrors.h>

using namespace Aws::Client;
using namespace Aws::OpenSearchServerless;

AWSError<CoreErrors> OpenSearchServerlessErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = OpenSearchServerlessErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}