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
  enum class CmfcAudioDuration
  {
    NOT_SET,
    DEFAULT_CODEC_DURATION,
    MATCH_VIDEO_DURATION
  };

namespace CmfcAudioDurationMapper
{
AWS_MEDIACONVERT_API CmfcAudioDuration GetCmfcAudioDurationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmfcAudioDuration(CmfcAudioDuration value);
} // namespace CmfcAudioDurationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
