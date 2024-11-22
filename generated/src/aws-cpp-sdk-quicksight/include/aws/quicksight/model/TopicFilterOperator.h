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
  enum class TopicFilterOperator
  {
    NOT_SET,
    StringEquals,
    StringLike
  };

namespace TopicFilterOperatorMapper
{
AWS_QUICKSIGHT_API TopicFilterOperator GetTopicFilterOperatorForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTopicFilterOperator(TopicFilterOperator value);
} // namespace TopicFilterOperatorMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
