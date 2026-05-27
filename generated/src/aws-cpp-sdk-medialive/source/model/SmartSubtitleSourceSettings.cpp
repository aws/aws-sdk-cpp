/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/SmartSubtitleSourceSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

SmartSubtitleSourceSettings::SmartSubtitleSourceSettings(JsonView jsonValue) { *this = jsonValue; }

SmartSubtitleSourceSettings& SmartSubtitleSourceSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("captionSynchronizationMode")) {
    m_captionSynchronizationMode =
        CaptionSynchronizationModeMapper::GetCaptionSynchronizationModeForName(jsonValue.GetString("captionSynchronizationMode"));
    m_captionSynchronizationModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inferenceFeedOutput")) {
    m_inferenceFeedOutput = jsonValue.GetString("inferenceFeedOutput");
    m_inferenceFeedOutputHasBeenSet = true;
  }
  return *this;
}

JsonValue SmartSubtitleSourceSettings::Jsonize() const {
  JsonValue payload;

  if (m_captionSynchronizationModeHasBeenSet) {
    payload.WithString("captionSynchronizationMode",
                       CaptionSynchronizationModeMapper::GetNameForCaptionSynchronizationMode(m_captionSynchronizationMode));
  }

  if (m_inferenceFeedOutputHasBeenSet) {
    payload.WithString("inferenceFeedOutput", m_inferenceFeedOutput);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
