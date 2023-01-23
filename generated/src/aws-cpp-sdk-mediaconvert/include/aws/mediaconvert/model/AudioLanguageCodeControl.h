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
  enum class AudioLanguageCodeControl
  {
    NOT_SET,
    FOLLOW_INPUT,
    USE_CONFIGURED
  };

namespace AudioLanguageCodeControlMapper
{
AWS_MEDIACONVERT_API AudioLanguageCodeControl GetAudioLanguageCodeControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAudioLanguageCodeControl(AudioLanguageCodeControl value);
} // namespace AudioLanguageCodeControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
