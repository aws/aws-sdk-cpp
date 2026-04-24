/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/ActionCondition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

ActionCondition::ActionCondition(JsonView jsonValue) { *this = jsonValue; }

ActionCondition& ActionCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Action")) {
    m_action = ActionMapper::GetActionForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  return *this;
}

JsonValue ActionCondition::Jsonize() const {
  JsonValue payload;

  if (m_actionHasBeenSet) {
    payload.WithString("Action", ActionMapper::GetNameForAction(m_action));
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
