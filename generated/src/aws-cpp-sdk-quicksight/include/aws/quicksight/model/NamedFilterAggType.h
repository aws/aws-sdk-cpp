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
  enum class NamedFilterAggType
  {
    NOT_SET,
    NO_AGGREGATION,
    SUM,
    AVERAGE,
    COUNT,
    DISTINCT_COUNT,
    MAX,
    MEDIAN,
    MIN,
    STDEV,
    STDEVP,
    VAR,
    VARP
  };

namespace NamedFilterAggTypeMapper
{
AWS_QUICKSIGHT_API NamedFilterAggType GetNamedFilterAggTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForNamedFilterAggType(NamedFilterAggType value);
} // namespace NamedFilterAggTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
