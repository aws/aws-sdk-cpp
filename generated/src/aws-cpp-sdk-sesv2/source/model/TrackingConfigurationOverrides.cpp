/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/TrackingConfigurationOverrides.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {

TrackingConfigurationOverrides::TrackingConfigurationOverrides(JsonView jsonValue) { *this = jsonValue; }

TrackingConfigurationOverrides& TrackingConfigurationOverrides::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("OpenTrackingEnabled")) {
    m_openTrackingEnabled = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("OpenTrackingEnabled"));
    m_openTrackingEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClickTrackingEnabled")) {
    m_clickTrackingEnabled = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("ClickTrackingEnabled"));
    m_clickTrackingEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue TrackingConfigurationOverrides::Jsonize() const {
  JsonValue payload;

  if (m_openTrackingEnabledHasBeenSet) {
    payload.WithString("OpenTrackingEnabled", FeatureStatusMapper::GetNameForFeatureStatus(m_openTrackingEnabled));
  }

  if (m_clickTrackingEnabledHasBeenSet) {
    payload.WithString("ClickTrackingEnabled", FeatureStatusMapper::GetNameForFeatureStatus(m_clickTrackingEnabled));
  }

  return payload;
}

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
