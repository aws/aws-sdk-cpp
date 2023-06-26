/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/workspaces-web/WorkSpacesWebErrorMarshaller.h>
#include <aws/workspaces-web/WorkSpacesWebErrors.h>

using namespace Aws::Client;
using namespace Aws::WorkSpacesWeb;

AWSError<CoreErrors> WorkSpacesWebErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = WorkSpacesWebErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}