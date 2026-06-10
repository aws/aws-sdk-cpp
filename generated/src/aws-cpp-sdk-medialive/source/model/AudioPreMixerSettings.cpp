/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/AudioPreMixerSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

AudioPreMixerSettings::AudioPreMixerSettings(JsonView jsonValue) { *this = jsonValue; }

AudioPreMixerSettings& AudioPreMixerSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("audioNormalizationSettings")) {
    m_audioNormalizationSettings = jsonValue.GetObject("audioNormalizationSettings");
    m_audioNormalizationSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("channels")) {
    m_channels = jsonValue.GetInteger("channels");
    m_channelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gainDb")) {
    m_gainDb = jsonValue.GetDouble("gainDb");
    m_gainDbHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remixSettings")) {
    m_remixSettings = jsonValue.GetObject("remixSettings");
    m_remixSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue AudioPreMixerSettings::Jsonize() const {
  JsonValue payload;

  if (m_audioNormalizationSettingsHasBeenSet) {
    payload.WithObject("audioNormalizationSettings", m_audioNormalizationSettings.Jsonize());
  }

  if (m_channelsHasBeenSet) {
    payload.WithInteger("channels", m_channels);
  }

  if (m_gainDbHasBeenSet) {
    payload.WithDouble("gainDb", m_gainDb);
  }

  if (m_remixSettingsHasBeenSet) {
    payload.WithObject("remixSettings", m_remixSettings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
