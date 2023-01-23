/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/resource-explorer-2/ResourceExplorer2ErrorMarshaller.h>
#include <aws/resource-explorer-2/ResourceExplorer2Errors.h>

using namespace Aws::Client;
using namespace Aws::ResourceExplorer2;

AWSError<CoreErrors> ResourceExplorer2ErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ResourceExplorer2ErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}