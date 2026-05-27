/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/AudioFeedInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

AudioFeedInput::AudioFeedInput(JsonView jsonValue) { *this = jsonValue; }

AudioFeedInput& AudioFeedInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("audioSelectorName")) {
    m_audioSelectorName = jsonValue.GetString("audioSelectorName");
    m_audioSelectorNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("feedInput")) {
    m_feedInput = jsonValue.GetString("feedInput");
    m_feedInputHasBeenSet = true;
  }
  return *this;
}

JsonValue AudioFeedInput::Jsonize() const {
  JsonValue payload;

  if (m_audioSelectorNameHasBeenSet) {
    payload.WithString("audioSelectorName", m_audioSelectorName);
  }

  if (m_feedInputHasBeenSet) {
    payload.WithString("feedInput", m_feedInput);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
