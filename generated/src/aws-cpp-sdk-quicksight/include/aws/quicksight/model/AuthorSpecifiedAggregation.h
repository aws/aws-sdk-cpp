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
  enum class AuthorSpecifiedAggregation
  {
    NOT_SET,
    COUNT,
    DISTINCT_COUNT,
    MIN,
    MAX,
    MEDIAN,
    SUM,
    AVERAGE,
    STDEV,
    STDEVP,
    VAR,
    VARP,
    PERCENTILE
  };

namespace AuthorSpecifiedAggregationMapper
{
AWS_QUICKSIGHT_API AuthorSpecifiedAggregation GetAuthorSpecifiedAggregationForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAuthorSpecifiedAggregation(AuthorSpecifiedAggregation value);
} // namespace AuthorSpecifiedAggregationMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
