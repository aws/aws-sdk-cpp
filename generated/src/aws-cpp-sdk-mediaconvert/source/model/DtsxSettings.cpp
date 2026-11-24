/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/DtsxSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

DtsxSettings::DtsxSettings(JsonView jsonValue) { *this = jsonValue; }

DtsxSettings& DtsxSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bitrate")) {
    m_bitrate = jsonValue.GetInteger("bitrate");
    m_bitrateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codingMode")) {
    m_codingMode = DtsxCodingModeMapper::GetDtsxCodingModeForName(jsonValue.GetString("codingMode"));
    m_codingModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sampleRate")) {
    m_sampleRate = jsonValue.GetInteger("sampleRate");
    m_sampleRateHasBeenSet = true;
  }
  return *this;
}

JsonValue DtsxSettings::Jsonize() const {
  JsonValue payload;

  if (m_bitrateHasBeenSet) {
    payload.WithInteger("bitrate", m_bitrate);
  }

  if (m_codingModeHasBeenSet) {
    payload.WithString("codingMode", DtsxCodingModeMapper::GetNameForDtsxCodingMode(m_codingMode));
  }

  if (m_sampleRateHasBeenSet) {
    payload.WithInteger("sampleRate", m_sampleRate);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
