/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/resource-groups/ResourceGroupsErrorMarshaller.h>
#include <aws/resource-groups/ResourceGroupsErrors.h>

using namespace Aws::Client;
using namespace Aws::ResourceGroups;

AWSError<CoreErrors> ResourceGroupsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ResourceGroupsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}