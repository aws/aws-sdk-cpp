/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIErrorMarshaller.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIErrors.h>

using namespace Aws::Client;
using namespace Aws::ResourceGroupsTaggingAPI;

AWSError<CoreErrors> ResourceGroupsTaggingAPIErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ResourceGroupsTaggingAPIErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}