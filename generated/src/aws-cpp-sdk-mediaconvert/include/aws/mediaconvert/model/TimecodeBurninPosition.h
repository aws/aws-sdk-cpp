/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class TimecodeBurninPosition
  {
    NOT_SET,
    TOP_CENTER,
    TOP_LEFT,
    TOP_RIGHT,
    MIDDLE_LEFT,
    MIDDLE_CENTER,
    MIDDLE_RIGHT,
    BOTTOM_LEFT,
    BOTTOM_CENTER,
    BOTTOM_RIGHT
  };

namespace TimecodeBurninPositionMapper
{
AWS_MEDIACONVERT_API TimecodeBurninPosition GetTimecodeBurninPositionForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForTimecodeBurninPosition(TimecodeBurninPosition value);
} // namespace TimecodeBurninPositionMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
