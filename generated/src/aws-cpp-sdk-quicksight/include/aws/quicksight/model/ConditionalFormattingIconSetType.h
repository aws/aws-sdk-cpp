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
  enum class ConditionalFormattingIconSetType
  {
    NOT_SET,
    PLUS_MINUS,
    CHECK_X,
    THREE_COLOR_ARROW,
    THREE_GRAY_ARROW,
    CARET_UP_MINUS_DOWN,
    THREE_SHAPE,
    THREE_CIRCLE,
    FLAGS,
    BARS,
    FOUR_COLOR_ARROW,
    FOUR_GRAY_ARROW
  };

namespace ConditionalFormattingIconSetTypeMapper
{
AWS_QUICKSIGHT_API ConditionalFormattingIconSetType GetConditionalFormattingIconSetTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForConditionalFormattingIconSetType(ConditionalFormattingIconSetType value);
} // namespace ConditionalFormattingIconSetTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
