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
  enum class TopicTimeGranularity
  {
    NOT_SET,
    SECOND,
    MINUTE,
    HOUR,
    DAY,
    WEEK,
    MONTH,
    QUARTER,
    YEAR
  };

namespace TopicTimeGranularityMapper
{
AWS_QUICKSIGHT_API TopicTimeGranularity GetTopicTimeGranularityForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTopicTimeGranularity(TopicTimeGranularity value);
} // namespace TopicTimeGranularityMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
