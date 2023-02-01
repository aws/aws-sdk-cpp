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
  enum class Icon
  {
    NOT_SET,
    CARET_UP,
    CARET_DOWN,
    PLUS,
    MINUS,
    ARROW_UP,
    ARROW_DOWN,
    ARROW_LEFT,
    ARROW_UP_LEFT,
    ARROW_DOWN_LEFT,
    ARROW_RIGHT,
    ARROW_UP_RIGHT,
    ARROW_DOWN_RIGHT,
    FACE_UP,
    FACE_DOWN,
    FACE_FLAT,
    ONE_BAR,
    TWO_BAR,
    THREE_BAR,
    CIRCLE,
    TRIANGLE,
    SQUARE,
    FLAG,
    THUMBS_UP,
    THUMBS_DOWN,
    CHECKMARK,
    X
  };

namespace IconMapper
{
AWS_QUICKSIGHT_API Icon GetIconForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForIcon(Icon value);
} // namespace IconMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
