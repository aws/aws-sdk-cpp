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
  enum class DashboardBehavior
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace DashboardBehaviorMapper
{
AWS_QUICKSIGHT_API DashboardBehavior GetDashboardBehaviorForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDashboardBehavior(DashboardBehavior value);
} // namespace DashboardBehaviorMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
