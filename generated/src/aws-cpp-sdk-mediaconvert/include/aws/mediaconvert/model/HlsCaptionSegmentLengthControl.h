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
  enum class HlsCaptionSegmentLengthControl
  {
    NOT_SET,
    LARGE_SEGMENTS,
    MATCH_VIDEO
  };

namespace HlsCaptionSegmentLengthControlMapper
{
AWS_MEDIACONVERT_API HlsCaptionSegmentLengthControl GetHlsCaptionSegmentLengthControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsCaptionSegmentLengthControl(HlsCaptionSegmentLengthControl value);
} // namespace HlsCaptionSegmentLengthControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
