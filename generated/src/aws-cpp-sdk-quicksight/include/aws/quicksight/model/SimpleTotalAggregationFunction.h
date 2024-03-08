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
  enum class SimpleTotalAggregationFunction
  {
    NOT_SET,
    DEFAULT,
    SUM,
    AVERAGE,
    MIN,
    MAX,
    NONE
  };

namespace SimpleTotalAggregationFunctionMapper
{
AWS_QUICKSIGHT_API SimpleTotalAggregationFunction GetSimpleTotalAggregationFunctionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSimpleTotalAggregationFunction(SimpleTotalAggregationFunction value);
} // namespace SimpleTotalAggregationFunctionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
