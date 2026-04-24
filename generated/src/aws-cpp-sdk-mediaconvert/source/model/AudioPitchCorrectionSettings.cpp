/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/AudioPitchCorrectionSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

AudioPitchCorrectionSettings::AudioPitchCorrectionSettings(JsonView jsonValue) { *this = jsonValue; }

AudioPitchCorrectionSettings& AudioPitchCorrectionSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("slowPalPitchCorrection")) {
    m_slowPalPitchCorrection =
        SlowPalPitchCorrectionMapper::GetSlowPalPitchCorrectionForName(jsonValue.GetString("slowPalPitchCorrection"));
    m_slowPalPitchCorrectionHasBeenSet = true;
  }
  return *this;
}

JsonValue AudioPitchCorrectionSettings::Jsonize() const {
  JsonValue payload;

  if (m_slowPalPitchCorrectionHasBeenSet) {
    payload.WithString("slowPalPitchCorrection", SlowPalPitchCorrectionMapper::GetNameForSlowPalPitchCorrection(m_slowPalPitchCorrection));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
