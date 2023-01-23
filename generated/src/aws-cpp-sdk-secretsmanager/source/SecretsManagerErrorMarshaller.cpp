/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/secretsmanager/SecretsManagerErrorMarshaller.h>
#include <aws/secretsmanager/SecretsManagerErrors.h>

using namespace Aws::Client;
using namespace Aws::SecretsManager;

AWSError<CoreErrors> SecretsManagerErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SecretsManagerErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}