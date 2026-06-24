/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/PermissionStatementSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Signin {
namespace Model {

PermissionStatementSummary::PermissionStatementSummary(JsonView jsonValue) { *this = jsonValue; }

PermissionStatementSummary& PermissionStatementSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sid")) {
    m_sid = jsonValue.GetString("sid");
    m_sidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("condition")) {
    Aws::Map<Aws::String, JsonView> conditionJsonMap = jsonValue.GetObject("condition").GetAllObjects();
    for (auto& conditionItem : conditionJsonMap) {
      Aws::Map<Aws::String, JsonView> condition2JsonMap = conditionItem.second.GetAllObjects();
      Aws::Map<Aws::String, Aws::Vector<Aws::String>> condition2Map;
      for (auto& condition2Item : condition2JsonMap) {
        Aws::Utils::Array<JsonView> conditionValues3JsonList = condition2Item.second.AsArray();
        Aws::Vector<Aws::String> conditionValues3List;
        conditionValues3List.reserve((size_t)conditionValues3JsonList.GetLength());
        for (unsigned conditionValues3Index = 0; conditionValues3Index < conditionValues3JsonList.GetLength(); ++conditionValues3Index) {
          conditionValues3List.push_back(conditionValues3JsonList[conditionValues3Index].AsString());
        }
        condition2Map[condition2Item.first] = std::move(conditionValues3List);
      }
      m_condition[conditionItem.first] = std::move(condition2Map);
    }
    m_conditionHasBeenSet = true;
  }
  return *this;
}

JsonValue PermissionStatementSummary::Jsonize() const {
  JsonValue payload;

  if (m_sidHasBeenSet) {
    payload.WithString("sid", m_sid);
  }

  if (m_conditionHasBeenSet) {
    JsonValue conditionJsonMap;
    for (auto& conditionItem : m_condition) {
      JsonValue conditionInnerJsonMap;
      for (auto& conditionInnerItem : conditionItem.second) {
        Aws::Utils::Array<JsonValue> conditionValuesJsonList(conditionInnerItem.second.size());
        for (unsigned conditionValuesIndex = 0; conditionValuesIndex < conditionValuesJsonList.GetLength(); ++conditionValuesIndex) {
          conditionValuesJsonList[conditionValuesIndex].AsString(conditionInnerItem.second[conditionValuesIndex]);
        }
        conditionInnerJsonMap.WithArray(conditionInnerItem.first, std::move(conditionValuesJsonList));
      }
      conditionJsonMap.WithObject(conditionItem.first, std::move(conditionJsonMap));
    }
    payload.WithObject("condition", std::move(conditionJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
