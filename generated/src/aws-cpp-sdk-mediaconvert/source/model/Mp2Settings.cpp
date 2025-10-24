﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/Mp2Settings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

Mp2Settings::Mp2Settings(JsonView jsonValue) { *this = jsonValue; }

Mp2Settings& Mp2Settings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("audioDescriptionMix")) {
    m_audioDescriptionMix = Mp2AudioDescriptionMixMapper::GetMp2AudioDescriptionMixForName(jsonValue.GetString("audioDescriptionMix"));
    m_audioDescriptionMixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bitrate")) {
    m_bitrate = jsonValue.GetInteger("bitrate");
    m_bitrateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("channels")) {
    m_channels = jsonValue.GetInteger("channels");
    m_channelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sampleRate")) {
    m_sampleRate = jsonValue.GetInteger("sampleRate");
    m_sampleRateHasBeenSet = true;
  }
  return *this;
}

JsonValue Mp2Settings::Jsonize() const {
  JsonValue payload;

  if (m_audioDescriptionMixHasBeenSet) {
    payload.WithString("audioDescriptionMix", Mp2AudioDescriptionMixMapper::GetNameForMp2AudioDescriptionMix(m_audioDescriptionMix));
  }

  if (m_bitrateHasBeenSet) {
    payload.WithInteger("bitrate", m_bitrate);
  }

  if (m_channelsHasBeenSet) {
    payload.WithInteger("channels", m_channels);
  }

  if (m_sampleRateHasBeenSet) {
    payload.WithInteger("sampleRate", m_sampleRate);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
