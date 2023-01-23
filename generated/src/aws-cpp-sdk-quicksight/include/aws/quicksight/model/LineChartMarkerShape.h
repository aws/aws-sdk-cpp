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
  enum class LineChartMarkerShape
  {
    NOT_SET,
    CIRCLE,
    TRIANGLE,
    SQUARE,
    DIAMOND,
    ROUNDED_SQUARE
  };

namespace LineChartMarkerShapeMapper
{
AWS_QUICKSIGHT_API LineChartMarkerShape GetLineChartMarkerShapeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForLineChartMarkerShape(LineChartMarkerShape value);
} // namespace LineChartMarkerShapeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
