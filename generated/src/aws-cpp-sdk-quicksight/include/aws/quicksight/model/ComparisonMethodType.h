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
  enum class ComparisonMethodType
  {
    NOT_SET,
    DIFF,
    PERC_DIFF,
    DIFF_AS_PERC,
    POP_CURRENT_DIFF_AS_PERC,
    POP_CURRENT_DIFF,
    POP_OVERTIME_DIFF_AS_PERC,
    POP_OVERTIME_DIFF,
    PERCENT_OF_TOTAL,
    RUNNING_SUM,
    MOVING_AVERAGE
  };

namespace ComparisonMethodTypeMapper
{
AWS_QUICKSIGHT_API ComparisonMethodType GetComparisonMethodTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForComparisonMethodType(ComparisonMethodType value);
} // namespace ComparisonMethodTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
