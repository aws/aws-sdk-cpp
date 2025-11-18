/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/PassthroughSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

PassthroughSettings::PassthroughSettings(JsonView jsonValue) { *this = jsonValue; }

PassthroughSettings& PassthroughSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("frameControl")) {
    m_frameControl = FrameControlMapper::GetFrameControlForName(jsonValue.GetString("frameControl"));
    m_frameControlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("videoSelectorMode")) {
    m_videoSelectorMode = VideoSelectorModeMapper::GetVideoSelectorModeForName(jsonValue.GetString("videoSelectorMode"));
    m_videoSelectorModeHasBeenSet = true;
  }
  return *this;
}

JsonValue PassthroughSettings::Jsonize() const {
  JsonValue payload;

  if (m_frameControlHasBeenSet) {
    payload.WithString("frameControl", FrameControlMapper::GetNameForFrameControl(m_frameControl));
  }

  if (m_videoSelectorModeHasBeenSet) {
    payload.WithString("videoSelectorMode", VideoSelectorModeMapper::GetNameForVideoSelectorMode(m_videoSelectorMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
