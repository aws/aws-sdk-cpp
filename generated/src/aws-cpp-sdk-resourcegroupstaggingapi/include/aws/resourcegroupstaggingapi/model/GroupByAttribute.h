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
  enum class GroupByAttribute
  {
    NOT_SET,
    TARGET_ID,
    REGION,
    RESOURCE_TYPE
  };

namespace GroupByAttributeMapper
{
AWS_RESOURCEGROUPSTAGGINGAPI_API GroupByAttribute GetGroupByAttributeForName(const Aws::String& name);

AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::String GetNameForGroupByAttribute(GroupByAttribute value);
} // namespace GroupByAttributeMapper
} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
