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
  enum class GroupLifecycleEventsStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE,
    IN_PROGRESS,
    ERROR_
  };

namespace GroupLifecycleEventsStatusMapper
{
AWS_RESOURCEGROUPS_API GroupLifecycleEventsStatus GetGroupLifecycleEventsStatusForName(const Aws::String& name);

AWS_RESOURCEGROUPS_API Aws::String GetNameForGroupLifecycleEventsStatus(GroupLifecycleEventsStatus value);
} // namespace GroupLifecycleEventsStatusMapper
} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
