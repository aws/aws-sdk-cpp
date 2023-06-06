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
  enum class RadarChartAxesRangeScale
  {
    NOT_SET,
    AUTO,
    INDEPENDENT,
    SHARED
  };

namespace RadarChartAxesRangeScaleMapper
{
AWS_QUICKSIGHT_API RadarChartAxesRangeScale GetRadarChartAxesRangeScaleForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForRadarChartAxesRangeScale(RadarChartAxesRangeScale value);
} // namespace RadarChartAxesRangeScaleMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
