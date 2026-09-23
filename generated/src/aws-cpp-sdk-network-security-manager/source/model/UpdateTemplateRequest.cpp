/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/UpdateTemplateRequest.h>

#include <utility>

using namespace Aws::NetworkSecurityManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateTemplateRequest::SerializePayload() const {
  JsonValue payload;

  if (m_updateTokenHasBeenSet) {
    payload.WithString("updateToken", m_updateToken);
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

  if (m_isPublishedHasBeenSet) {
    payload.WithBool("isPublished", m_isPublished);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
