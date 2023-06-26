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
  enum class GroupLifecycleEventsDesiredStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace GroupLifecycleEventsDesiredStatusMapper
{
AWS_RESOURCEGROUPS_API GroupLifecycleEventsDesiredStatus GetGroupLifecycleEventsDesiredStatusForName(const Aws::String& name);

AWS_RESOURCEGROUPS_API Aws::String GetNameForGroupLifecycleEventsDesiredStatus(GroupLifecycleEventsDesiredStatus value);
} // namespace GroupLifecycleEventsDesiredStatusMapper
} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
