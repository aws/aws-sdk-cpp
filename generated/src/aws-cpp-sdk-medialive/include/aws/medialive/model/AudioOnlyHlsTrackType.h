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
  enum class AudioOnlyHlsTrackType
  {
    NOT_SET,
    ALTERNATE_AUDIO_AUTO_SELECT,
    ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT,
    ALTERNATE_AUDIO_NOT_AUTO_SELECT,
    AUDIO_ONLY_VARIANT_STREAM
  };

namespace AudioOnlyHlsTrackTypeMapper
{
AWS_MEDIALIVE_API AudioOnlyHlsTrackType GetAudioOnlyHlsTrackTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAudioOnlyHlsTrackType(AudioOnlyHlsTrackType value);
} // namespace AudioOnlyHlsTrackTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
