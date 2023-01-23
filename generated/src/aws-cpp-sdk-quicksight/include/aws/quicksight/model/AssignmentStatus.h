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
  enum class AssignmentStatus
  {
    NOT_SET,
    ENABLED,
    DRAFT,
    DISABLED
  };

namespace AssignmentStatusMapper
{
AWS_QUICKSIGHT_API AssignmentStatus GetAssignmentStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAssignmentStatus(AssignmentStatus value);
} // namespace AssignmentStatusMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
