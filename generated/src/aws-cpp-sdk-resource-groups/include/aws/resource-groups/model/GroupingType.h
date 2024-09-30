/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{
  enum class GroupingType
  {
    NOT_SET,
    GROUP,
    UNGROUP
  };

namespace GroupingTypeMapper
{
AWS_RESOURCEGROUPS_API GroupingType GetGroupingTypeForName(const Aws::String& name);

AWS_RESOURCEGROUPS_API Aws::String GetNameForGroupingType(GroupingType value);
} // namespace GroupingTypeMapper
} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
