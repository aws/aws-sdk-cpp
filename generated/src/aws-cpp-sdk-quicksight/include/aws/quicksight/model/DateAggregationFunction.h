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
  enum class DateAggregationFunction
  {
    NOT_SET,
    COUNT,
    DISTINCT_COUNT,
    MIN,
    MAX
  };

namespace DateAggregationFunctionMapper
{
AWS_QUICKSIGHT_API DateAggregationFunction GetDateAggregationFunctionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDateAggregationFunction(DateAggregationFunction value);
} // namespace DateAggregationFunctionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
