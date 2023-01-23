/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
namespace Model
{
  enum class TargetIdType
  {
    NOT_SET,
    ACCOUNT,
    OU,
    ROOT
  };

namespace TargetIdTypeMapper
{
AWS_RESOURCEGROUPSTAGGINGAPI_API TargetIdType GetTargetIdTypeForName(const Aws::String& name);

AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::String GetNameForTargetIdType(TargetIdType value);
} // namespace TargetIdTypeMapper
} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
