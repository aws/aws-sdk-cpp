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
  enum class TopicRelativeDateFilterFunction
  {
    NOT_SET,
    PREVIOUS,
    THIS,
    LAST,
    NEXT,
    NOW
  };

namespace TopicRelativeDateFilterFunctionMapper
{
AWS_QUICKSIGHT_API TopicRelativeDateFilterFunction GetTopicRelativeDateFilterFunctionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTopicRelativeDateFilterFunction(TopicRelativeDateFilterFunction value);
} // namespace TopicRelativeDateFilterFunctionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
