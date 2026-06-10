/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/AudioTrack.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

AudioTrack::AudioTrack(JsonView jsonValue) { *this = jsonValue; }

AudioTrack& AudioTrack::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("track")) {
    m_track = jsonValue.GetInteger("track");
    m_trackHasBeenSet = true;
  }
  if (jsonValue.ValueExists("premixSettings")) {
    m_premixSettings = jsonValue.GetObject("premixSettings");
    m_premixSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue AudioTrack::Jsonize() const {
  JsonValue payload;

  if (m_trackHasBeenSet) {
    payload.WithInteger("track", m_track);
  }

  if (m_premixSettingsHasBeenSet) {
    payload.WithObject("premixSettings", m_premixSettings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
