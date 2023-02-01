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
  enum class AudioDescriptionLanguageCodeControl
  {
    NOT_SET,
    FOLLOW_INPUT,
    USE_CONFIGURED
  };

namespace AudioDescriptionLanguageCodeControlMapper
{
AWS_MEDIALIVE_API AudioDescriptionLanguageCodeControl GetAudioDescriptionLanguageCodeControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAudioDescriptionLanguageCodeControl(AudioDescriptionLanguageCodeControl value);
} // namespace AudioDescriptionLanguageCodeControlMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
