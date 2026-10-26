/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/Av1FilterSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

Av1FilterSettings::Av1FilterSettings(JsonView jsonValue) { *this = jsonValue; }

Av1FilterSettings& Av1FilterSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("autoFilterSettings")) {
    m_autoFilterSettings = jsonValue.GetObject("autoFilterSettings");
    m_autoFilterSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("noneFilterSettings")) {
    m_noneFilterSettings = jsonValue.GetObject("noneFilterSettings");
    m_noneFilterSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("perceptualFilterSettings")) {
    m_perceptualFilterSettings = jsonValue.GetObject("perceptualFilterSettings");
    m_perceptualFilterSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue Av1FilterSettings::Jsonize() const {
  JsonValue payload;

  if (m_autoFilterSettingsHasBeenSet) {
    payload.WithObject("autoFilterSettings", m_autoFilterSettings.Jsonize());
  }

  if (m_noneFilterSettingsHasBeenSet) {
    payload.WithObject("noneFilterSettings", m_noneFilterSettings.Jsonize());
  }

  if (m_perceptualFilterSettingsHasBeenSet) {
    payload.WithObject("perceptualFilterSettings", m_perceptualFilterSettings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
