/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/FirewallRule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

FirewallRule::FirewallRule(JsonView jsonValue) { *this = jsonValue; }

FirewallRule& FirewallRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Action")) {
    m_action = FirewallRuleActionMapper::GetFirewallRuleActionForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ActionScope")) {
    m_actionScope = ActionScopeMapper::GetActionScopeForName(jsonValue.GetString("ActionScope"));
    m_actionScopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Hook")) {
    m_hook = HookKeyMapper::GetHookKeyForName(jsonValue.GetString("Hook"));
    m_hookHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Protocol")) {
    m_protocol = FirewallRuleProtocolMapper::GetFirewallRuleProtocolForName(jsonValue.GetString("Protocol"));
    m_protocolHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceIPs")) {
    m_sourceIPs = jsonValue.GetString("SourceIPs");
    m_sourceIPsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DestIPs")) {
    m_destIPs = jsonValue.GetString("DestIPs");
    m_destIPsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourcePorts")) {
    m_sourcePorts = jsonValue.GetString("SourcePorts");
    m_sourcePortsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DestPorts")) {
    m_destPorts = jsonValue.GetString("DestPorts");
    m_destPortsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RuleOptions")) {
    Aws::Utils::Array<JsonView> ruleOptionsJsonList = jsonValue.GetArray("RuleOptions");
    for (unsigned ruleOptionsIndex = 0; ruleOptionsIndex < ruleOptionsJsonList.GetLength(); ++ruleOptionsIndex) {
      m_ruleOptions.push_back(ruleOptionsJsonList[ruleOptionsIndex].AsObject());
    }
    m_ruleOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AcceptPriorHooks")) {
    m_acceptPriorHooks = jsonValue.GetBool("AcceptPriorHooks");
    m_acceptPriorHooksHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AlertEnabled")) {
    m_alertEnabled = jsonValue.GetBool("AlertEnabled");
    m_alertEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BypassIPSEnabled")) {
    m_bypassIPSEnabled = jsonValue.GetBool("BypassIPSEnabled");
    m_bypassIPSEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RuleMetadata")) {
    m_ruleMetadata = jsonValue.GetObject("RuleMetadata");
    m_ruleMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue FirewallRule::Jsonize() const {
  JsonValue payload;

  if (m_actionHasBeenSet) {
    payload.WithString("Action", FirewallRuleActionMapper::GetNameForFirewallRuleAction(m_action));
  }

  if (m_actionScopeHasBeenSet) {
    payload.WithString("ActionScope", ActionScopeMapper::GetNameForActionScope(m_actionScope));
  }

  if (m_hookHasBeenSet) {
    payload.WithString("Hook", HookKeyMapper::GetNameForHookKey(m_hook));
  }

  if (m_protocolHasBeenSet) {
    payload.WithString("Protocol", FirewallRuleProtocolMapper::GetNameForFirewallRuleProtocol(m_protocol));
  }

  if (m_sourceIPsHasBeenSet) {
    payload.WithString("SourceIPs", m_sourceIPs);
  }

  if (m_destIPsHasBeenSet) {
    payload.WithString("DestIPs", m_destIPs);
  }

  if (m_sourcePortsHasBeenSet) {
    payload.WithString("SourcePorts", m_sourcePorts);
  }

  if (m_destPortsHasBeenSet) {
    payload.WithString("DestPorts", m_destPorts);
  }

  if (m_ruleOptionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> ruleOptionsJsonList(m_ruleOptions.size());
    for (unsigned ruleOptionsIndex = 0; ruleOptionsIndex < ruleOptionsJsonList.GetLength(); ++ruleOptionsIndex) {
      ruleOptionsJsonList[ruleOptionsIndex].AsObject(m_ruleOptions[ruleOptionsIndex].Jsonize());
    }
    payload.WithArray("RuleOptions", std::move(ruleOptionsJsonList));
  }

  if (m_acceptPriorHooksHasBeenSet) {
    payload.WithBool("AcceptPriorHooks", m_acceptPriorHooks);
  }

  if (m_alertEnabledHasBeenSet) {
    payload.WithBool("AlertEnabled", m_alertEnabled);
  }

  if (m_bypassIPSEnabledHasBeenSet) {
    payload.WithBool("BypassIPSEnabled", m_bypassIPSEnabled);
  }

  if (m_ruleMetadataHasBeenSet) {
    payload.WithObject("RuleMetadata", m_ruleMetadata.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
