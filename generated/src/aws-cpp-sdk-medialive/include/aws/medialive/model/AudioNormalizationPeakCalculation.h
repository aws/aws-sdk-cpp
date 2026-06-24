/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace MediaLive {
namespace Model {
enum class AudioNormalizationPeakCalculation { NOT_SET, NONE, TRUE_PEAK };

namespace AudioNormalizationPeakCalculationMapper {
AWS_MEDIALIVE_API AudioNormalizationPeakCalculation GetAudioNormalizationPeakCalculationForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAudioNormalizationPeakCalculation(AudioNormalizationPeakCalculation value);
}  // namespace AudioNormalizationPeakCalculationMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
