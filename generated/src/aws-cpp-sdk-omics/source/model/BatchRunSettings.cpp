/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/omics/model/BatchRunSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Omics {
namespace Model {

BatchRunSettings::BatchRunSettings(JsonView jsonValue) { *this = jsonValue; }

BatchRunSettings& BatchRunSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("inlineSettings")) {
    Aws::Utils::Array<JsonView> inlineSettingsJsonList = jsonValue.GetArray("inlineSettings");
    for (unsigned inlineSettingsIndex = 0; inlineSettingsIndex < inlineSettingsJsonList.GetLength(); ++inlineSettingsIndex) {
      m_inlineSettings.push_back(inlineSettingsJsonList[inlineSettingsIndex].AsObject());
    }
    m_inlineSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3UriSettings")) {
    m_s3UriSettings = jsonValue.GetString("s3UriSettings");
    m_s3UriSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchRunSettings::Jsonize() const {
  JsonValue payload;

  if (m_inlineSettingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> inlineSettingsJsonList(m_inlineSettings.size());
    for (unsigned inlineSettingsIndex = 0; inlineSettingsIndex < inlineSettingsJsonList.GetLength(); ++inlineSettingsIndex) {
      inlineSettingsJsonList[inlineSettingsIndex].AsObject(m_inlineSettings[inlineSettingsIndex].Jsonize());
    }
    payload.WithArray("inlineSettings", std::move(inlineSettingsJsonList));
  }

  if (m_s3UriSettingsHasBeenSet) {
    payload.WithString("s3UriSettings", m_s3UriSettings);
  }

  return payload;
}

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
