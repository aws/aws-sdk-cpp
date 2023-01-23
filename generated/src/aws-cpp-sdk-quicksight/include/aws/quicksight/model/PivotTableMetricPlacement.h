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
  enum class PivotTableMetricPlacement
  {
    NOT_SET,
    ROW,
    COLUMN
  };

namespace PivotTableMetricPlacementMapper
{
AWS_QUICKSIGHT_API PivotTableMetricPlacement GetPivotTableMetricPlacementForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForPivotTableMetricPlacement(PivotTableMetricPlacement value);
} // namespace PivotTableMetricPlacementMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
