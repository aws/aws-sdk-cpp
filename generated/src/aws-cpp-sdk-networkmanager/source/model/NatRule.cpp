/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/model/NatRule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {

NatRule::NatRule(JsonView jsonValue) { *this = jsonValue; }

NatRule& NatRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RuleNumber")) {
    m_ruleNumber = jsonValue.GetInteger("RuleNumber");
    m_ruleNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MatchSourceCidr")) {
    m_matchSourceCidr = jsonValue.GetString("MatchSourceCidr");
    m_matchSourceCidrHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NatCidr")) {
    m_natCidr = jsonValue.GetString("NatCidr");
    m_natCidrHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = NatRuleStateMapper::GetNatRuleStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue NatRule::Jsonize() const {
  JsonValue payload;

  if (m_ruleNumberHasBeenSet) {
    payload.WithInteger("RuleNumber", m_ruleNumber);
  }

  if (m_matchSourceCidrHasBeenSet) {
    payload.WithString("MatchSourceCidr", m_matchSourceCidr);
  }

  if (m_natCidrHasBeenSet) {
    payload.WithString("NatCidr", m_natCidr);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", NatRuleStateMapper::GetNameForNatRuleState(m_state));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
