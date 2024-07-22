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
  enum class TopicIRFilterType
  {
    NOT_SET,
    CATEGORY_FILTER,
    NUMERIC_EQUALITY_FILTER,
    NUMERIC_RANGE_FILTER,
    DATE_RANGE_FILTER,
    RELATIVE_DATE_FILTER,
    TOP_BOTTOM_FILTER,
    EQUALS,
    RANK_LIMIT_FILTER,
    ACCEPT_ALL_FILTER
  };

namespace TopicIRFilterTypeMapper
{
AWS_QUICKSIGHT_API TopicIRFilterType GetTopicIRFilterTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTopicIRFilterType(TopicIRFilterType value);
} // namespace TopicIRFilterTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
