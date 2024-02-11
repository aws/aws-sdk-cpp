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
  enum class DefaultAggregation
  {
    NOT_SET,
    SUM,
    MAX,
    MIN,
    COUNT,
    DISTINCT_COUNT,
    AVERAGE,
    MEDIAN,
    STDEV,
    STDEVP,
    VAR,
    VARP
  };

namespace DefaultAggregationMapper
{
AWS_QUICKSIGHT_API DefaultAggregation GetDefaultAggregationForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDefaultAggregation(DefaultAggregation value);
} // namespace DefaultAggregationMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
