/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/IpsRuleGroupOverride.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

IpsRuleGroupOverride::IpsRuleGroupOverride(JsonView jsonValue) { *this = jsonValue; }

IpsRuleGroupOverride& IpsRuleGroupOverride::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Action")) {
    m_action = OverrideActionMapper::GetOverrideActionForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  return *this;
}

JsonValue IpsRuleGroupOverride::Jsonize() const {
  JsonValue payload;

  if (m_actionHasBeenSet) {
    payload.WithString("Action", OverrideActionMapper::GetNameForOverrideAction(m_action));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
