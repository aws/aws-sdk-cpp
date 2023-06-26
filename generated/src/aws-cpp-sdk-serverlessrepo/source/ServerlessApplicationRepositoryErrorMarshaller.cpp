/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryErrorMarshaller.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryErrors.h>

using namespace Aws::Client;
using namespace Aws::ServerlessApplicationRepository;

AWSError<CoreErrors> ServerlessApplicationRepositoryErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ServerlessApplicationRepositoryErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}