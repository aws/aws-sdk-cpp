/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/supportauthz/model/Permit.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SupportAuthZ {
namespace Model {

Permit::Permit(JsonView jsonValue) { *this = jsonValue; }

Permit& Permit::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("actions")) {
    m_actions = jsonValue.GetObject("actions");
    m_actionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resources")) {
    m_resources = jsonValue.GetObject("resources");
    m_resourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("conditions")) {
    Aws::Utils::Array<JsonView> conditionsJsonList = jsonValue.GetArray("conditions");
    for (unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex) {
      m_conditions.push_back(conditionsJsonList[conditionsIndex].AsObject());
    }
    m_conditionsHasBeenSet = true;
  }
  return *this;
}

JsonValue Permit::Jsonize() const {
  JsonValue payload;

  if (m_actionsHasBeenSet) {
    payload.WithObject("actions", m_actions.Jsonize());
  }

  if (m_resourcesHasBeenSet) {
    payload.WithObject("resources", m_resources.Jsonize());
  }

  if (m_conditionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> conditionsJsonList(m_conditions.size());
    for (unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex) {
      conditionsJsonList[conditionsIndex].AsObject(m_conditions[conditionsIndex].Jsonize());
    }
    payload.WithArray("conditions", std::move(conditionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
