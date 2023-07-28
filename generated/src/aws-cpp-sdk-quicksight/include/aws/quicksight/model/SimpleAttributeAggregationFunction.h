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
  enum class SimpleAttributeAggregationFunction
  {
    NOT_SET,
    UNIQUE_VALUE
  };

namespace SimpleAttributeAggregationFunctionMapper
{
AWS_QUICKSIGHT_API SimpleAttributeAggregationFunction GetSimpleAttributeAggregationFunctionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSimpleAttributeAggregationFunction(SimpleAttributeAggregationFunction value);
} // namespace SimpleAttributeAggregationFunctionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
