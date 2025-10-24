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
  return *this;
}

JsonValue AudioTrack::Jsonize() const {
  JsonValue payload;

  if (m_trackHasBeenSet) {
    payload.WithInteger("track", m_track);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
