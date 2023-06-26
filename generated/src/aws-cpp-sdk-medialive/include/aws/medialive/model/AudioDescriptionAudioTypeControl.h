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
  enum class AudioDescriptionAudioTypeControl
  {
    NOT_SET,
    FOLLOW_INPUT,
    USE_CONFIGURED
  };

namespace AudioDescriptionAudioTypeControlMapper
{
AWS_MEDIALIVE_API AudioDescriptionAudioTypeControl GetAudioDescriptionAudioTypeControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAudioDescriptionAudioTypeControl(AudioDescriptionAudioTypeControl value);
} // namespace AudioDescriptionAudioTypeControlMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
