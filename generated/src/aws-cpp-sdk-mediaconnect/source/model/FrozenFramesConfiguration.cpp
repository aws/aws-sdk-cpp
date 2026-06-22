/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/FrozenFramesConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

FrozenFramesConfiguration::FrozenFramesConfiguration(JsonView jsonValue) { *this = jsonValue; }

FrozenFramesConfiguration& FrozenFramesConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("state")) {
    m_state = ContentQualityAnalysisStateMapper::GetContentQualityAnalysisStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("thresholdSeconds")) {
    m_thresholdSeconds = jsonValue.GetInteger("thresholdSeconds");
    m_thresholdSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue FrozenFramesConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_stateHasBeenSet) {
    payload.WithString("state", ContentQualityAnalysisStateMapper::GetNameForContentQualityAnalysisState(m_state));
  }

  if (m_thresholdSecondsHasBeenSet) {
    payload.WithInteger("thresholdSeconds", m_thresholdSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
