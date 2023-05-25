/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class TimecodeBurninPosition
  {
    NOT_SET,
    BOTTOM_CENTER,
    BOTTOM_LEFT,
    BOTTOM_RIGHT,
    MIDDLE_CENTER,
    MIDDLE_LEFT,
    MIDDLE_RIGHT,
    TOP_CENTER,
    TOP_LEFT,
    TOP_RIGHT
  };

namespace TimecodeBurninPositionMapper
{
AWS_MEDIALIVE_API TimecodeBurninPosition GetTimecodeBurninPositionForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForTimecodeBurninPosition(TimecodeBurninPosition value);
} // namespace TimecodeBurninPositionMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
