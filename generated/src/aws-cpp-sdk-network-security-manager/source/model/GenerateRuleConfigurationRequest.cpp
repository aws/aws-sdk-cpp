/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/GenerateRuleConfigurationRequest.h>

#include <utility>

using namespace Aws::NetworkSecurityManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GenerateRuleConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_promptHasBeenSet) {
    payload.WithString("prompt", m_prompt);
  }

  if (m_ruleFirewallTypeHasBeenSet) {
    payload.WithString("ruleFirewallType", RuleFirewallTypeMapper::GetNameForRuleFirewallType(m_ruleFirewallType));
  }

  if (m_ruleTypeHasBeenSet) {
    payload.WithString("ruleType", RuleTypeMapper::GetNameForRuleType(m_ruleType));
  }

  if (m_wafConfigDataTypeHasBeenSet) {
    payload.WithString("wafConfigDataType", WAFConfigDataTypeMapper::GetNameForWAFConfigDataType(m_wafConfigDataType));
  }

  if (m_currentConfigurationHasBeenSet) {
    payload.WithString("currentConfiguration", m_currentConfiguration);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
