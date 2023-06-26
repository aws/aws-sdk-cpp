/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/workspaces/WorkSpacesErrorMarshaller.h>
#include <aws/workspaces/WorkSpacesErrors.h>

using namespace Aws::Client;
using namespace Aws::WorkSpaces;

AWSError<CoreErrors> WorkSpacesErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = WorkSpacesErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}