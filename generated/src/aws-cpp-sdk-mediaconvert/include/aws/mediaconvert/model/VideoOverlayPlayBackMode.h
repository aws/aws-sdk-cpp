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
  enum class VideoOverlayPlayBackMode
  {
    NOT_SET,
    ONCE,
    REPEAT
  };

namespace VideoOverlayPlayBackModeMapper
{
AWS_MEDIACONVERT_API VideoOverlayPlayBackMode GetVideoOverlayPlayBackModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVideoOverlayPlayBackMode(VideoOverlayPlayBackMode value);
} // namespace VideoOverlayPlayBackModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
