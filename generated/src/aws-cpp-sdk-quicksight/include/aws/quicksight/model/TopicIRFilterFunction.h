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
  enum class TopicIRFilterFunction
  {
    NOT_SET,
    CONTAINS,
    EXACT,
    STARTS_WITH,
    ENDS_WITH,
    CONTAINS_STRING,
    PREVIOUS,
    THIS,
    LAST,
    NEXT,
    NOW
  };

namespace TopicIRFilterFunctionMapper
{
AWS_QUICKSIGHT_API TopicIRFilterFunction GetTopicIRFilterFunctionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTopicIRFilterFunction(TopicIRFilterFunction value);
} // namespace TopicIRFilterFunctionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
