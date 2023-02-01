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
  enum class LineChartType
  {
    NOT_SET,
    LINE,
    AREA,
    STACKED_AREA
  };

namespace LineChartTypeMapper
{
AWS_QUICKSIGHT_API LineChartType GetLineChartTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForLineChartType(LineChartType value);
} // namespace LineChartTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
