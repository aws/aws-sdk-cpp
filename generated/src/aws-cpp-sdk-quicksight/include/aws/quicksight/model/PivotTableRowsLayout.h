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
  enum class PivotTableRowsLayout
  {
    NOT_SET,
    TABULAR,
    HIERARCHY
  };

namespace PivotTableRowsLayoutMapper
{
AWS_QUICKSIGHT_API PivotTableRowsLayout GetPivotTableRowsLayoutForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForPivotTableRowsLayout(PivotTableRowsLayout value);
} // namespace PivotTableRowsLayoutMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
