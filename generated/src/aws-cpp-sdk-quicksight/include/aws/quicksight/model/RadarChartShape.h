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
  enum class RadarChartShape
  {
    NOT_SET,
    CIRCLE,
    POLYGON
  };

namespace RadarChartShapeMapper
{
AWS_QUICKSIGHT_API RadarChartShape GetRadarChartShapeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForRadarChartShape(RadarChartShape value);
} // namespace RadarChartShapeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
