/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/FirewallPolicyV2.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

FirewallPolicyV2::FirewallPolicyV2(JsonView jsonValue) { *this = jsonValue; }

FirewallPolicyV2& FirewallPolicyV2::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FirewallRuleGroupEntries")) {
    Aws::Utils::Array<JsonView> firewallRuleGroupEntriesJsonList = jsonValue.GetArray("FirewallRuleGroupEntries");
    for (unsigned firewallRuleGroupEntriesIndex = 0; firewallRuleGroupEntriesIndex < firewallRuleGroupEntriesJsonList.GetLength();
         ++firewallRuleGroupEntriesIndex) {
      m_firewallRuleGroupEntries.push_back(firewallRuleGroupEntriesJsonList[firewallRuleGroupEntriesIndex].AsObject());
    }
    m_firewallRuleGroupEntriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IpsRuleGroupEntries")) {
    Aws::Utils::Array<JsonView> ipsRuleGroupEntriesJsonList = jsonValue.GetArray("IpsRuleGroupEntries");
    for (unsigned ipsRuleGroupEntriesIndex = 0; ipsRuleGroupEntriesIndex < ipsRuleGroupEntriesJsonList.GetLength();
         ++ipsRuleGroupEntriesIndex) {
      m_ipsRuleGroupEntries.push_back(ipsRuleGroupEntriesJsonList[ipsRuleGroupEntriesIndex].AsObject());
    }
    m_ipsRuleGroupEntriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PolicyMode")) {
    m_policyMode = PolicyModeMapper::GetPolicyModeForName(jsonValue.GetString("PolicyMode"));
    m_policyModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FirewallDefaultAction")) {
    m_firewallDefaultAction = PolicyDefaultActionMapper::GetPolicyDefaultActionForName(jsonValue.GetString("FirewallDefaultAction"));
    m_firewallDefaultActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatefulEngineOptions")) {
    m_statefulEngineOptions = jsonValue.GetObject("StatefulEngineOptions");
    m_statefulEngineOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TLSInspectionConfigurationArn")) {
    m_tLSInspectionConfigurationArn = jsonValue.GetString("TLSInspectionConfigurationArn");
    m_tLSInspectionConfigurationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PolicyVariables")) {
    m_policyVariables = jsonValue.GetObject("PolicyVariables");
    m_policyVariablesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Route53ResolvedIPValidation")) {
    m_route53ResolvedIPValidation = jsonValue.GetObject("Route53ResolvedIPValidation");
    m_route53ResolvedIPValidationHasBeenSet = true;
  }
  return *this;
}

JsonValue FirewallPolicyV2::Jsonize() const {
  JsonValue payload;

  if (m_firewallRuleGroupEntriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> firewallRuleGroupEntriesJsonList(m_firewallRuleGroupEntries.size());
    for (unsigned firewallRuleGroupEntriesIndex = 0; firewallRuleGroupEntriesIndex < firewallRuleGroupEntriesJsonList.GetLength();
         ++firewallRuleGroupEntriesIndex) {
      firewallRuleGroupEntriesJsonList[firewallRuleGroupEntriesIndex].AsObject(
          m_firewallRuleGroupEntries[firewallRuleGroupEntriesIndex].Jsonize());
    }
    payload.WithArray("FirewallRuleGroupEntries", std::move(firewallRuleGroupEntriesJsonList));
  }

  if (m_ipsRuleGroupEntriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> ipsRuleGroupEntriesJsonList(m_ipsRuleGroupEntries.size());
    for (unsigned ipsRuleGroupEntriesIndex = 0; ipsRuleGroupEntriesIndex < ipsRuleGroupEntriesJsonList.GetLength();
         ++ipsRuleGroupEntriesIndex) {
      ipsRuleGroupEntriesJsonList[ipsRuleGroupEntriesIndex].AsObject(m_ipsRuleGroupEntries[ipsRuleGroupEntriesIndex].Jsonize());
    }
    payload.WithArray("IpsRuleGroupEntries", std::move(ipsRuleGroupEntriesJsonList));
  }

  if (m_policyModeHasBeenSet) {
    payload.WithString("PolicyMode", PolicyModeMapper::GetNameForPolicyMode(m_policyMode));
  }

  if (m_firewallDefaultActionHasBeenSet) {
    payload.WithString("FirewallDefaultAction", PolicyDefaultActionMapper::GetNameForPolicyDefaultAction(m_firewallDefaultAction));
  }

  if (m_statefulEngineOptionsHasBeenSet) {
    payload.WithObject("StatefulEngineOptions", m_statefulEngineOptions.Jsonize());
  }

  if (m_tLSInspectionConfigurationArnHasBeenSet) {
    payload.WithString("TLSInspectionConfigurationArn", m_tLSInspectionConfigurationArn);
  }

  if (m_policyVariablesHasBeenSet) {
    payload.WithObject("PolicyVariables", m_policyVariables.Jsonize());
  }

  if (m_route53ResolvedIPValidationHasBeenSet) {
    payload.WithObject("Route53ResolvedIPValidation", m_route53ResolvedIPValidation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
