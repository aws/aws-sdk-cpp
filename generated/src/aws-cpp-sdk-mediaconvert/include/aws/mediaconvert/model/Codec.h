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
  enum class Codec
  {
    NOT_SET,
    UNKNOWN,
    AAC,
    AC3,
    EAC3,
    FLAC,
    MP3,
    OPUS,
    PCM,
    VORBIS,
    AV1,
    AVC,
    HEVC,
    JPEG2000,
    MJPEG,
    MP4V,
    MPEG2,
    PRORES,
    THEORA,
    VP8,
    VP9,
    C608,
    C708,
    WEBVTT
  };

namespace CodecMapper
{
AWS_MEDIACONVERT_API Codec GetCodecForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCodec(Codec value);
} // namespace CodecMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
