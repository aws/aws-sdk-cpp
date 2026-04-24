/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehub/model/AppComponent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ResilienceHub {
namespace Model {

AppComponent::AppComponent(JsonView jsonValue) { *this = jsonValue; }

AppComponent& AppComponent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("additionalInfo")) {
    Aws::Map<Aws::String, JsonView> additionalInfoJsonMap = jsonValue.GetObject("additionalInfo").GetAllObjects();
    for (auto& additionalInfoItem : additionalInfoJsonMap) {
      Aws::Utils::Array<JsonView> additionalInfoValueList2JsonList = additionalInfoItem.second.AsArray();
      Aws::Vector<Aws::String> additionalInfoValueList2List;
      additionalInfoValueList2List.reserve((size_t)additionalInfoValueList2JsonList.GetLength());
      for (unsigned additionalInfoValueList2Index = 0; additionalInfoValueList2Index < additionalInfoValueList2JsonList.GetLength();
           ++additionalInfoValueList2Index) {
        additionalInfoValueList2List.push_back(additionalInfoValueList2JsonList[additionalInfoValueList2Index].AsString());
      }
      m_additionalInfo[additionalInfoItem.first] = std::move(additionalInfoValueList2List);
    }
    m_additionalInfoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue AppComponent::Jsonize() const {
  JsonValue payload;

  if (m_additionalInfoHasBeenSet) {
    JsonValue additionalInfoJsonMap;
    for (auto& additionalInfoItem : m_additionalInfo) {
      Aws::Utils::Array<JsonValue> additionalInfoValueListJsonList(additionalInfoItem.second.size());
      for (unsigned additionalInfoValueListIndex = 0; additionalInfoValueListIndex < additionalInfoValueListJsonList.GetLength();
           ++additionalInfoValueListIndex) {
        additionalInfoValueListJsonList[additionalInfoValueListIndex].AsString(additionalInfoItem.second[additionalInfoValueListIndex]);
      }
      additionalInfoJsonMap.WithArray(additionalInfoItem.first, std::move(additionalInfoValueListJsonList));
    }
    payload.WithObject("additionalInfo", std::move(additionalInfoJsonMap));
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", m_type);
  }

  return payload;
}

}  // namespace Model
}  // namespace ResilienceHub
}  // namespace Aws
