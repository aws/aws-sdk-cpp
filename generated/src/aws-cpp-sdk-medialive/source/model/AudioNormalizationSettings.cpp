/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/AudioNormalizationSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

AudioNormalizationSettings::AudioNormalizationSettings(JsonView jsonValue) { *this = jsonValue; }

AudioNormalizationSettings& AudioNormalizationSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("algorithm")) {
    m_algorithm = AudioNormalizationAlgorithmMapper::GetAudioNormalizationAlgorithmForName(jsonValue.GetString("algorithm"));
    m_algorithmHasBeenSet = true;
  }
  if (jsonValue.ValueExists("algorithmControl")) {
    m_algorithmControl =
        AudioNormalizationAlgorithmControlMapper::GetAudioNormalizationAlgorithmControlForName(jsonValue.GetString("algorithmControl"));
    m_algorithmControlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetLkfs")) {
    m_targetLkfs = jsonValue.GetDouble("targetLkfs");
    m_targetLkfsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("peakCalculation")) {
    m_peakCalculation =
        AudioNormalizationPeakCalculationMapper::GetAudioNormalizationPeakCalculationForName(jsonValue.GetString("peakCalculation"));
    m_peakCalculationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("peakLimiterThreshold")) {
    m_peakLimiterThreshold = jsonValue.GetDouble("peakLimiterThreshold");
    m_peakLimiterThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue AudioNormalizationSettings::Jsonize() const {
  JsonValue payload;

  if (m_algorithmHasBeenSet) {
    payload.WithString("algorithm", AudioNormalizationAlgorithmMapper::GetNameForAudioNormalizationAlgorithm(m_algorithm));
  }

  if (m_algorithmControlHasBeenSet) {
    payload.WithString("algorithmControl",
                       AudioNormalizationAlgorithmControlMapper::GetNameForAudioNormalizationAlgorithmControl(m_algorithmControl));
  }

  if (m_targetLkfsHasBeenSet) {
    payload.WithDouble("targetLkfs", m_targetLkfs);
  }

  if (m_peakCalculationHasBeenSet) {
    payload.WithString("peakCalculation",
                       AudioNormalizationPeakCalculationMapper::GetNameForAudioNormalizationPeakCalculation(m_peakCalculation));
  }

  if (m_peakLimiterThresholdHasBeenSet) {
    payload.WithDouble("peakLimiterThreshold", m_peakLimiterThreshold);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
