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
  enum class VideoOverlayUnit
  {
    NOT_SET,
    PIXELS,
    PERCENTAGE
  };

namespace VideoOverlayUnitMapper
{
AWS_MEDIACONVERT_API VideoOverlayUnit GetVideoOverlayUnitForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVideoOverlayUnit(VideoOverlayUnit value);
} // namespace VideoOverlayUnitMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
