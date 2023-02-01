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
  enum class PivotTableSubtotalLevel
  {
    NOT_SET,
    ALL,
    CUSTOM,
    LAST
  };

namespace PivotTableSubtotalLevelMapper
{
AWS_QUICKSIGHT_API PivotTableSubtotalLevel GetPivotTableSubtotalLevelForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForPivotTableSubtotalLevel(PivotTableSubtotalLevel value);
} // namespace PivotTableSubtotalLevelMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
