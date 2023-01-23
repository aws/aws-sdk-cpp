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
  enum class AacAudioDescriptionBroadcasterMix
  {
    NOT_SET,
    BROADCASTER_MIXED_AD,
    NORMAL
  };

namespace AacAudioDescriptionBroadcasterMixMapper
{
AWS_MEDIACONVERT_API AacAudioDescriptionBroadcasterMix GetAacAudioDescriptionBroadcasterMixForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAacAudioDescriptionBroadcasterMix(AacAudioDescriptionBroadcasterMix value);
} // namespace AacAudioDescriptionBroadcasterMixMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
