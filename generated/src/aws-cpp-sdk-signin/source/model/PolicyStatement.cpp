/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/PolicyStatement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Signin {
namespace Model {

PolicyStatement::PolicyStatement(JsonView jsonValue) { *this = jsonValue; }

PolicyStatement& PolicyStatement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Effect")) {
    m_effect = jsonValue.GetString("Effect");
    m_effectHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Principal")) {
    Aws::Map<Aws::String, JsonView> principalJsonMap = jsonValue.GetObject("Principal").GetAllObjects();
    for (auto& principalItem : principalJsonMap) {
      m_principal[principalItem.first] = principalItem.second.AsString();
    }
    m_principalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Action")) {
    Aws::Utils::Array<JsonView> actionJsonList = jsonValue.GetArray("Action");
    for (unsigned actionIndex = 0; actionIndex < actionJsonList.GetLength(); ++actionIndex) {
      m_action.push_back(actionJsonList[actionIndex].AsString());
    }
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Resource")) {
    m_resource = jsonValue.GetString("Resource");
    m_resourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Condition")) {
    Aws::Map<Aws::String, JsonView> conditionJsonMap = jsonValue.GetObject("Condition").GetAllObjects();
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

JsonValue PolicyStatement::Jsonize() const {
  JsonValue payload;

  if (m_effectHasBeenSet) {
    payload.WithString("Effect", m_effect);
  }

  if (m_principalHasBeenSet) {
    JsonValue principalJsonMap;
    for (auto& principalItem : m_principal) {
      principalJsonMap.WithString(principalItem.first, principalItem.second);
    }
    payload.WithObject("Principal", std::move(principalJsonMap));
  }

  if (m_actionHasBeenSet) {
    Aws::Utils::Array<JsonValue> actionJsonList(m_action.size());
    for (unsigned actionIndex = 0; actionIndex < actionJsonList.GetLength(); ++actionIndex) {
      actionJsonList[actionIndex].AsString(m_action[actionIndex]);
    }
    payload.WithArray("Action", std::move(actionJsonList));
  }

  if (m_resourceHasBeenSet) {
    payload.WithString("Resource", m_resource);
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
    payload.WithObject("Condition", std::move(conditionJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
