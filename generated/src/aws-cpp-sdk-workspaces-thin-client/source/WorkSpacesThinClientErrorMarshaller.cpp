/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClientErrorMarshaller.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClientErrors.h>

using namespace Aws::Client;
using namespace Aws::WorkSpacesThinClient;

AWSError<CoreErrors> WorkSpacesThinClientErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = WorkSpacesThinClientErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}