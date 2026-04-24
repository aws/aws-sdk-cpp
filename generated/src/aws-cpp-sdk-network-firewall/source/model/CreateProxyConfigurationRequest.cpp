/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/CreateProxyConfigurationRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateProxyConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_proxyConfigurationNameHasBeenSet) {
    payload.WithString("ProxyConfigurationName", m_proxyConfigurationName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_ruleGroupNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> ruleGroupNamesJsonList(m_ruleGroupNames.size());
    for (unsigned ruleGroupNamesIndex = 0; ruleGroupNamesIndex < ruleGroupNamesJsonList.GetLength(); ++ruleGroupNamesIndex) {
      ruleGroupNamesJsonList[ruleGroupNamesIndex].AsString(m_ruleGroupNames[ruleGroupNamesIndex]);
    }
    payload.WithArray("RuleGroupNames", std::move(ruleGroupNamesJsonList));
  }

  if (m_ruleGroupArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> ruleGroupArnsJsonList(m_ruleGroupArns.size());
    for (unsigned ruleGroupArnsIndex = 0; ruleGroupArnsIndex < ruleGroupArnsJsonList.GetLength(); ++ruleGroupArnsIndex) {
      ruleGroupArnsJsonList[ruleGroupArnsIndex].AsString(m_ruleGroupArns[ruleGroupArnsIndex]);
    }
    payload.WithArray("RuleGroupArns", std::move(ruleGroupArnsJsonList));
  }

  if (m_defaultRulePhaseActionsHasBeenSet) {
    payload.WithObject("DefaultRulePhaseActions", m_defaultRulePhaseActions.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateProxyConfigurationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.CreateProxyConfiguration"));
  return headers;
}
