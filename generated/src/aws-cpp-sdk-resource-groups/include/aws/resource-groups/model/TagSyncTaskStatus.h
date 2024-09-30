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
  enum class TagSyncTaskStatus
  {
    NOT_SET,
    ACTIVE,
    ERROR_
  };

namespace TagSyncTaskStatusMapper
{
AWS_RESOURCEGROUPS_API TagSyncTaskStatus GetTagSyncTaskStatusForName(const Aws::String& name);

AWS_RESOURCEGROUPS_API Aws::String GetNameForTagSyncTaskStatus(TagSyncTaskStatus value);
} // namespace TagSyncTaskStatusMapper
} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
