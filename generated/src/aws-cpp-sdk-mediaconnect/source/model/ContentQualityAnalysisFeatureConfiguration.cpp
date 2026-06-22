/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/ContentQualityAnalysisFeatureConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

ContentQualityAnalysisFeatureConfiguration::ContentQualityAnalysisFeatureConfiguration(JsonView jsonValue) { *this = jsonValue; }

ContentQualityAnalysisFeatureConfiguration& ContentQualityAnalysisFeatureConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("blackFrames")) {
    m_blackFrames = jsonValue.GetObject("blackFrames");
    m_blackFramesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("frozenFrames")) {
    m_frozenFrames = jsonValue.GetObject("frozenFrames");
    m_frozenFramesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("silentAudio")) {
    m_silentAudio = jsonValue.GetObject("silentAudio");
    m_silentAudioHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentQualityAnalysisFeatureConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_blackFramesHasBeenSet) {
    payload.WithObject("blackFrames", m_blackFrames.Jsonize());
  }

  if (m_frozenFramesHasBeenSet) {
    payload.WithObject("frozenFrames", m_frozenFrames.Jsonize());
  }

  if (m_silentAudioHasBeenSet) {
    payload.WithObject("silentAudio", m_silentAudio.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
