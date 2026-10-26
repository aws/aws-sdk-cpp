/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/H264FilterSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

H264FilterSettings::H264FilterSettings(JsonView jsonValue) { *this = jsonValue; }

H264FilterSettings& H264FilterSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("temporalFilterSettings")) {
    m_temporalFilterSettings = jsonValue.GetObject("temporalFilterSettings");
    m_temporalFilterSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bandwidthReductionFilterSettings")) {
    m_bandwidthReductionFilterSettings = jsonValue.GetObject("bandwidthReductionFilterSettings");
    m_bandwidthReductionFilterSettingsHasBeenSet = true;
  }
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

JsonValue H264FilterSettings::Jsonize() const {
  JsonValue payload;

  if (m_temporalFilterSettingsHasBeenSet) {
    payload.WithObject("temporalFilterSettings", m_temporalFilterSettings.Jsonize());
  }

  if (m_bandwidthReductionFilterSettingsHasBeenSet) {
    payload.WithObject("bandwidthReductionFilterSettings", m_bandwidthReductionFilterSettings.Jsonize());
  }

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
