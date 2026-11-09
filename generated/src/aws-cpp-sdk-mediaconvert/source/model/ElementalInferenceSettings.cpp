/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/ElementalInferenceSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

ElementalInferenceSettings::ElementalInferenceSettings(JsonView jsonValue) { *this = jsonValue; }

ElementalInferenceSettings& ElementalInferenceSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("feedConfigurationSource")) {
    m_feedConfigurationSource = jsonValue.GetObject("feedConfigurationSource");
    m_feedConfigurationSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue ElementalInferenceSettings::Jsonize() const {
  JsonValue payload;

  if (m_feedConfigurationSourceHasBeenSet) {
    payload.WithObject("feedConfigurationSource", m_feedConfigurationSource.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
