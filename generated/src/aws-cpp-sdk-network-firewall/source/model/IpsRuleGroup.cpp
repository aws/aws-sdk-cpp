/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/IpsRuleGroup.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

IpsRuleGroup::IpsRuleGroup(JsonView jsonValue) { *this = jsonValue; }

IpsRuleGroup& IpsRuleGroup::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RulesSource")) {
    m_rulesSource = jsonValue.GetObject("RulesSource");
    m_rulesSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RuleVariables")) {
    m_ruleVariables = jsonValue.GetObject("RuleVariables");
    m_ruleVariablesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReferenceSets")) {
    m_referenceSets = jsonValue.GetObject("ReferenceSets");
    m_referenceSetsHasBeenSet = true;
  }
  return *this;
}

JsonValue IpsRuleGroup::Jsonize() const {
  JsonValue payload;

  if (m_rulesSourceHasBeenSet) {
    payload.WithObject("RulesSource", m_rulesSource.Jsonize());
  }

  if (m_ruleVariablesHasBeenSet) {
    payload.WithObject("RuleVariables", m_ruleVariables.Jsonize());
  }

  if (m_referenceSetsHasBeenSet) {
    payload.WithObject("ReferenceSets", m_referenceSets.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
