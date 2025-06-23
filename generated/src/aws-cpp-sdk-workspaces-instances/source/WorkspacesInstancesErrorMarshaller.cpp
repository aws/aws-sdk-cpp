/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/workspaces-instances/WorkspacesInstancesErrorMarshaller.h>
#include <aws/workspaces-instances/WorkspacesInstancesErrors.h>

using namespace Aws::Client;
using namespace Aws::WorkspacesInstances;

AWSError<CoreErrors> WorkspacesInstancesErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = WorkspacesInstancesErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}