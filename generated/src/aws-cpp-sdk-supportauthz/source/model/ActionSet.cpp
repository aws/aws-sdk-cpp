/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/supportauthz/model/ActionSet.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SupportAuthZ {
namespace Model {

ActionSet::ActionSet(JsonView jsonValue) { *this = jsonValue; }

ActionSet& ActionSet::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("allActions")) {
    m_allActions = jsonValue.GetObject("allActions");
    m_allActionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("actions")) {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("actions");
    for (unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex) {
      m_actions.push_back(actionsJsonList[actionsIndex].AsString());
    }
    m_actionsHasBeenSet = true;
  }
  return *this;
}

JsonValue ActionSet::Jsonize() const {
  JsonValue payload;

  if (m_allActionsHasBeenSet) {
    payload.WithObject("allActions", m_allActions.Jsonize());
  }

  if (m_actionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
    for (unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex) {
      actionsJsonList[actionsIndex].AsString(m_actions[actionsIndex]);
    }
    payload.WithArray("actions", std::move(actionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
