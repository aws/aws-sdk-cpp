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
  enum class DashboardsQAStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace DashboardsQAStatusMapper
{
AWS_QUICKSIGHT_API DashboardsQAStatus GetDashboardsQAStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDashboardsQAStatus(DashboardsQAStatus value);
} // namespace DashboardsQAStatusMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
