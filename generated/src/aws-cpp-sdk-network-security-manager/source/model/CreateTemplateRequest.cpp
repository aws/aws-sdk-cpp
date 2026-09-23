/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/CreateTemplateRequest.h>

#include <utility>

using namespace Aws::NetworkSecurityManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateTemplateRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_templateNameHasBeenSet) {
    payload.WithString("templateName", m_templateName);
  }

  if (m_templateDescriptionHasBeenSet) {
    payload.WithString("templateDescription", m_templateDescription);
  }

  if (m_associatedRuleListHasBeenSet) {
    Aws::Utils::Array<JsonValue> associatedRuleListJsonList(m_associatedRuleList.size());
    for (unsigned associatedRuleListIndex = 0; associatedRuleListIndex < associatedRuleListJsonList.GetLength();
         ++associatedRuleListIndex) {
      associatedRuleListJsonList[associatedRuleListIndex].AsObject(m_associatedRuleList[associatedRuleListIndex].Jsonize());
    }
    payload.WithArray("associatedRuleList", std::move(associatedRuleListJsonList));
  }

  if (m_firewallTypeHasBeenSet) {
    payload.WithString("firewallType", TemplateFirewallTypeMapper::GetNameForTemplateFirewallType(m_firewallType));
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
