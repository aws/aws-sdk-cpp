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
  enum class NamedEntityAggType
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
    CUSTOM
  };

namespace NamedEntityAggTypeMapper
{
AWS_QUICKSIGHT_API NamedEntityAggType GetNamedEntityAggTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForNamedEntityAggType(NamedEntityAggType value);
} // namespace NamedEntityAggTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
