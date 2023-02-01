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
  enum class BarChartOrientation
  {
    NOT_SET,
    HORIZONTAL,
    VERTICAL
  };

namespace BarChartOrientationMapper
{
AWS_QUICKSIGHT_API BarChartOrientation GetBarChartOrientationForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForBarChartOrientation(BarChartOrientation value);
} // namespace BarChartOrientationMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
