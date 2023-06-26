/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class ResourceStatus
  {
    NOT_SET,
    CREATION_IN_PROGRESS,
    CREATION_SUCCESSFUL,
    CREATION_FAILED,
    UPDATE_IN_PROGRESS,
    UPDATE_SUCCESSFUL,
    UPDATE_FAILED,
    DELETED
  };

namespace ResourceStatusMapper
{
AWS_QUICKSIGHT_API ResourceStatus GetResourceStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForResourceStatus(ResourceStatus value);
} // namespace ResourceStatusMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
