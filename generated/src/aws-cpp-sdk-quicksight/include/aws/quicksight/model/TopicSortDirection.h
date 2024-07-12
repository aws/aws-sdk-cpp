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
  enum class TopicSortDirection
  {
    NOT_SET,
    ASCENDING,
    DESCENDING
  };

namespace TopicSortDirectionMapper
{
AWS_QUICKSIGHT_API TopicSortDirection GetTopicSortDirectionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTopicSortDirection(TopicSortDirection value);
} // namespace TopicSortDirectionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
