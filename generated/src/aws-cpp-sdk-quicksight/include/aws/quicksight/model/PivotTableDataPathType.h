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
  enum class PivotTableDataPathType
  {
    NOT_SET,
    HIERARCHY_ROWS_LAYOUT_COLUMN,
    MULTIPLE_ROW_METRICS_COLUMN,
    EMPTY_COLUMN_HEADER,
    COUNT_METRIC_COLUMN
  };

namespace PivotTableDataPathTypeMapper
{
AWS_QUICKSIGHT_API PivotTableDataPathType GetPivotTableDataPathTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForPivotTableDataPathType(PivotTableDataPathType value);
} // namespace PivotTableDataPathTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
