/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/CreatePolicyRequest.h>

#include <utility>

using namespace Aws::NetworkSecurityManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreatePolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_policyNameHasBeenSet) {
    payload.WithString("policyName", m_policyName);
  }

  if (m_policyDescriptionHasBeenSet) {
    payload.WithString("policyDescription", m_policyDescription);
  }

  if (m_priorityHasBeenSet) {
    payload.WithInteger("priority", m_priority);
  }

  if (m_associatedTemplateAndRuleListHasBeenSet) {
    Aws::Utils::Array<JsonValue> associatedTemplateAndRuleListJsonList(m_associatedTemplateAndRuleList.size());
    for (unsigned associatedTemplateAndRuleListIndex = 0;
         associatedTemplateAndRuleListIndex < associatedTemplateAndRuleListJsonList.GetLength(); ++associatedTemplateAndRuleListIndex) {
      associatedTemplateAndRuleListJsonList[associatedTemplateAndRuleListIndex].AsObject(
          m_associatedTemplateAndRuleList[associatedTemplateAndRuleListIndex].Jsonize());
    }
    payload.WithArray("associatedTemplateAndRuleList", std::move(associatedTemplateAndRuleListJsonList));
  }

  if (m_firewallTypeHasBeenSet) {
    payload.WithString("firewallType", PolicyFirewallTypeMapper::GetNameForPolicyFirewallType(m_firewallType));
  }

  if (m_policyConfigurationHasBeenSet) {
    payload.WithObject("policyConfiguration", m_policyConfiguration.Jsonize());
  }

  if (m_isPublishedHasBeenSet) {
    payload.WithBool("isPublished", m_isPublished);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
