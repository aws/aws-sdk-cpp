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
  enum class AudioNormalizationAlgorithmControl
  {
    NOT_SET,
    CORRECT_AUDIO,
    MEASURE_ONLY
  };

namespace AudioNormalizationAlgorithmControlMapper
{
AWS_MEDIACONVERT_API AudioNormalizationAlgorithmControl GetAudioNormalizationAlgorithmControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAudioNormalizationAlgorithmControl(AudioNormalizationAlgorithmControl value);
} // namespace AudioNormalizationAlgorithmControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
