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
  enum class AggType
  {
    NOT_SET,
    SUM,
    MIN,
    MAX,
    COUNT,
    AVERAGE,
    DISTINCT_COUNT,
    STDEV,
    STDEVP,
    VAR,
    VARP,
    PERCENTILE,
    MEDIAN,
    PTD_SUM,
    PTD_MIN,
    PTD_MAX,
    PTD_COUNT,
    PTD_DISTINCT_COUNT,
    PTD_AVERAGE,
    COLUMN,
    CUSTOM
  };

namespace AggTypeMapper
{
AWS_QUICKSIGHT_API AggType GetAggTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAggType(AggType value);
} // namespace AggTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
