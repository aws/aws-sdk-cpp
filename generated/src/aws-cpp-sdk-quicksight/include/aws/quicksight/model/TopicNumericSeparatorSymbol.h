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
  enum class TopicNumericSeparatorSymbol
  {
    NOT_SET,
    COMMA,
    DOT
  };

namespace TopicNumericSeparatorSymbolMapper
{
AWS_QUICKSIGHT_API TopicNumericSeparatorSymbol GetTopicNumericSeparatorSymbolForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTopicNumericSeparatorSymbol(TopicNumericSeparatorSymbol value);
} // namespace TopicNumericSeparatorSymbolMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
