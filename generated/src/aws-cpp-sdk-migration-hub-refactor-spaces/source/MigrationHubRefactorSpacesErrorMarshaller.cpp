/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesErrorMarshaller.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesErrors.h>

using namespace Aws::Client;
using namespace Aws::MigrationHubRefactorSpaces;

AWSError<CoreErrors> MigrationHubRefactorSpacesErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MigrationHubRefactorSpacesErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}