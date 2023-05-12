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
  enum class TopicRefreshStatus
  {
    NOT_SET,
    INITIALIZED,
    RUNNING,
    FAILED,
    COMPLETED,
    CANCELLED
  };

namespace TopicRefreshStatusMapper
{
AWS_QUICKSIGHT_API TopicRefreshStatus GetTopicRefreshStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTopicRefreshStatus(TopicRefreshStatus value);
} // namespace TopicRefreshStatusMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
