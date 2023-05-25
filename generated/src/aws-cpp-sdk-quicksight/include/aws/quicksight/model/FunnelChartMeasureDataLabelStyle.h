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
  enum class FunnelChartMeasureDataLabelStyle
  {
    NOT_SET,
    VALUE_ONLY,
    PERCENTAGE_BY_FIRST_STAGE,
    PERCENTAGE_BY_PREVIOUS_STAGE,
    VALUE_AND_PERCENTAGE_BY_FIRST_STAGE,
    VALUE_AND_PERCENTAGE_BY_PREVIOUS_STAGE
  };

namespace FunnelChartMeasureDataLabelStyleMapper
{
AWS_QUICKSIGHT_API FunnelChartMeasureDataLabelStyle GetFunnelChartMeasureDataLabelStyleForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForFunnelChartMeasureDataLabelStyle(FunnelChartMeasureDataLabelStyle value);
} // namespace FunnelChartMeasureDataLabelStyleMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
