/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/migrationhub-config/MigrationHubConfigErrorMarshaller.h>
#include <aws/migrationhub-config/MigrationHubConfigErrors.h>

using namespace Aws::Client;
using namespace Aws::MigrationHubConfig;

AWSError<CoreErrors> MigrationHubConfigErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MigrationHubConfigErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}