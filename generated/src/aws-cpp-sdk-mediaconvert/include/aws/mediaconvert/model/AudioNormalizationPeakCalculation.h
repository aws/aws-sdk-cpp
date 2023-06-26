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
  enum class AudioNormalizationPeakCalculation
  {
    NOT_SET,
    TRUE_PEAK,
    NONE
  };

namespace AudioNormalizationPeakCalculationMapper
{
AWS_MEDIACONVERT_API AudioNormalizationPeakCalculation GetAudioNormalizationPeakCalculationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAudioNormalizationPeakCalculation(AudioNormalizationPeakCalculation value);
} // namespace AudioNormalizationPeakCalculationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
