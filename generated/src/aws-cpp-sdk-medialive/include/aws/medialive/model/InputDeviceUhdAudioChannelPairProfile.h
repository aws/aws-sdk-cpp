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
  enum class InputDeviceUhdAudioChannelPairProfile
  {
    NOT_SET,
    DISABLED,
    VBR_AAC_HHE_16000,
    VBR_AAC_HE_64000,
    VBR_AAC_LC_128000,
    CBR_AAC_HQ_192000,
    CBR_AAC_HQ_256000,
    CBR_AAC_HQ_384000,
    CBR_AAC_HQ_512000
  };

namespace InputDeviceUhdAudioChannelPairProfileMapper
{
AWS_MEDIALIVE_API InputDeviceUhdAudioChannelPairProfile GetInputDeviceUhdAudioChannelPairProfileForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputDeviceUhdAudioChannelPairProfile(InputDeviceUhdAudioChannelPairProfile value);
} // namespace InputDeviceUhdAudioChannelPairProfileMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
