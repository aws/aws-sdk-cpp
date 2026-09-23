/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/AdminFirewallTypeScope.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

AdminFirewallTypeScope::AdminFirewallTypeScope(JsonView jsonValue) { *this = jsonValue; }

AdminFirewallTypeScope& AdminFirewallTypeScope::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("allFirewallTypesEnabled")) {
    m_allFirewallTypesEnabled = jsonValue.GetBool("allFirewallTypesEnabled");
    m_allFirewallTypesEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("firewallTypes")) {
    Aws::Utils::Array<JsonView> firewallTypesJsonList = jsonValue.GetArray("firewallTypes");
    for (unsigned firewallTypesIndex = 0; firewallTypesIndex < firewallTypesJsonList.GetLength(); ++firewallTypesIndex) {
      m_firewallTypes.push_back(
          PolicyFirewallTypeMapper::GetPolicyFirewallTypeForName(firewallTypesJsonList[firewallTypesIndex].AsString()));
    }
    m_firewallTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue AdminFirewallTypeScope::Jsonize() const {
  JsonValue payload;

  if (m_allFirewallTypesEnabledHasBeenSet) {
    payload.WithBool("allFirewallTypesEnabled", m_allFirewallTypesEnabled);
  }

  if (m_firewallTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> firewallTypesJsonList(m_firewallTypes.size());
    for (unsigned firewallTypesIndex = 0; firewallTypesIndex < firewallTypesJsonList.GetLength(); ++firewallTypesIndex) {
      firewallTypesJsonList[firewallTypesIndex].AsString(
          PolicyFirewallTypeMapper::GetNameForPolicyFirewallType(m_firewallTypes[firewallTypesIndex]));
    }
    payload.WithArray("firewallTypes", std::move(firewallTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
