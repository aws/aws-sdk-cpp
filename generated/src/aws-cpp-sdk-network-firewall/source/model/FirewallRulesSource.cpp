/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/FirewallRulesSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

FirewallRulesSource::FirewallRulesSource(JsonView jsonValue) { *this = jsonValue; }

FirewallRulesSource& FirewallRulesSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RulesString")) {
    m_rulesString = jsonValue.GetString("RulesString");
    m_rulesStringHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FirewallRules")) {
    Aws::Utils::Array<JsonView> firewallRulesJsonList = jsonValue.GetArray("FirewallRules");
    for (unsigned firewallRulesIndex = 0; firewallRulesIndex < firewallRulesJsonList.GetLength(); ++firewallRulesIndex) {
      m_firewallRules.push_back(firewallRulesJsonList[firewallRulesIndex].AsObject());
    }
    m_firewallRulesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RulesSourceList")) {
    m_rulesSourceList = jsonValue.GetObject("RulesSourceList");
    m_rulesSourceListHasBeenSet = true;
  }
  return *this;
}

JsonValue FirewallRulesSource::Jsonize() const {
  JsonValue payload;

  if (m_rulesStringHasBeenSet) {
    payload.WithString("RulesString", m_rulesString);
  }

  if (m_firewallRulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> firewallRulesJsonList(m_firewallRules.size());
    for (unsigned firewallRulesIndex = 0; firewallRulesIndex < firewallRulesJsonList.GetLength(); ++firewallRulesIndex) {
      firewallRulesJsonList[firewallRulesIndex].AsObject(m_firewallRules[firewallRulesIndex].Jsonize());
    }
    payload.WithArray("FirewallRules", std::move(firewallRulesJsonList));
  }

  if (m_rulesSourceListHasBeenSet) {
    payload.WithObject("RulesSourceList", m_rulesSourceList.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
