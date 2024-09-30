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
  enum class GroupingStatus
  {
    NOT_SET,
    SUCCESS,
    FAILED,
    IN_PROGRESS,
    SKIPPED
  };

namespace GroupingStatusMapper
{
AWS_RESOURCEGROUPS_API GroupingStatus GetGroupingStatusForName(const Aws::String& name);

AWS_RESOURCEGROUPS_API Aws::String GetNameForGroupingStatus(GroupingStatus value);
} // namespace GroupingStatusMapper
} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
