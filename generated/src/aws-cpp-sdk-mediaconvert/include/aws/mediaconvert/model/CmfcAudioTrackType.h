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
  enum class CmfcAudioTrackType
  {
    NOT_SET,
    ALTERNATE_AUDIO_AUTO_SELECT_DEFAULT,
    ALTERNATE_AUDIO_AUTO_SELECT,
    ALTERNATE_AUDIO_NOT_AUTO_SELECT,
    AUDIO_ONLY_VARIANT_STREAM
  };

namespace CmfcAudioTrackTypeMapper
{
AWS_MEDIACONVERT_API CmfcAudioTrackType GetCmfcAudioTrackTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmfcAudioTrackType(CmfcAudioTrackType value);
} // namespace CmfcAudioTrackTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
