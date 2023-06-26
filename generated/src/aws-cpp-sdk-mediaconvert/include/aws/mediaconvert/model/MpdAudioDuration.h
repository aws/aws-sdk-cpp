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
  enum class MpdAudioDuration
  {
    NOT_SET,
    DEFAULT_CODEC_DURATION,
    MATCH_VIDEO_DURATION
  };

namespace MpdAudioDurationMapper
{
AWS_MEDIACONVERT_API MpdAudioDuration GetMpdAudioDurationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpdAudioDuration(MpdAudioDuration value);
} // namespace MpdAudioDurationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
