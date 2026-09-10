/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberPreferenceItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

NumberPreferenceItem::NumberPreferenceItem(JsonView jsonValue) { *this = jsonValue; }

NumberPreferenceItem& NumberPreferenceItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PreferenceType")) {
    Aws::Utils::Array<JsonView> preferenceTypeJsonList = jsonValue.GetArray("PreferenceType");
    for (unsigned preferenceTypeIndex = 0; preferenceTypeIndex < preferenceTypeJsonList.GetLength(); ++preferenceTypeIndex) {
      m_preferenceType.push_back(PreferenceTypeMapper::GetPreferenceTypeForName(preferenceTypeJsonList[preferenceTypeIndex].AsString()));
    }
    m_preferenceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Filter")) {
    Aws::Utils::Array<JsonView> filterJsonList = jsonValue.GetArray("Filter");
    for (unsigned filterIndex = 0; filterIndex < filterJsonList.GetLength(); ++filterIndex) {
      m_filter.push_back(filterJsonList[filterIndex].AsString());
    }
    m_filterHasBeenSet = true;
  }
  return *this;
}

JsonValue NumberPreferenceItem::Jsonize() const {
  JsonValue payload;

  if (m_preferenceTypeHasBeenSet) {
    Aws::Utils::Array<JsonValue> preferenceTypeJsonList(m_preferenceType.size());
    for (unsigned preferenceTypeIndex = 0; preferenceTypeIndex < preferenceTypeJsonList.GetLength(); ++preferenceTypeIndex) {
      preferenceTypeJsonList[preferenceTypeIndex].AsString(
          PreferenceTypeMapper::GetNameForPreferenceType(m_preferenceType[preferenceTypeIndex]));
    }
    payload.WithArray("PreferenceType", std::move(preferenceTypeJsonList));
  }

  if (m_filterHasBeenSet) {
    Aws::Utils::Array<JsonValue> filterJsonList(m_filter.size());
    for (unsigned filterIndex = 0; filterIndex < filterJsonList.GetLength(); ++filterIndex) {
      filterJsonList[filterIndex].AsString(m_filter[filterIndex]);
    }
    payload.WithArray("Filter", std::move(filterJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
