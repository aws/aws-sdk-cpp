/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/CreateDeploymentRequest.h>

#include <utility>

using namespace Aws::NetworkSecurityManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDeploymentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_deploymentNameHasBeenSet) {
    payload.WithString("deploymentName", m_deploymentName);
  }

  if (m_deploymentDescriptionHasBeenSet) {
    payload.WithString("deploymentDescription", m_deploymentDescription);
  }

  if (m_deploymentConfigurationHasBeenSet) {
    payload.WithObject("deploymentConfiguration", m_deploymentConfiguration.Jsonize());
  }

  if (m_associatedPolicyListHasBeenSet) {
    Aws::Utils::Array<JsonValue> associatedPolicyListJsonList(m_associatedPolicyList.size());
    for (unsigned associatedPolicyListIndex = 0; associatedPolicyListIndex < associatedPolicyListJsonList.GetLength();
         ++associatedPolicyListIndex) {
      associatedPolicyListJsonList[associatedPolicyListIndex].AsObject(m_associatedPolicyList[associatedPolicyListIndex].Jsonize());
    }
    payload.WithArray("associatedPolicyList", std::move(associatedPolicyListJsonList));
  }

  if (m_associatedScopeListHasBeenSet) {
    Aws::Utils::Array<JsonValue> associatedScopeListJsonList(m_associatedScopeList.size());
    for (unsigned associatedScopeListIndex = 0; associatedScopeListIndex < associatedScopeListJsonList.GetLength();
         ++associatedScopeListIndex) {
      associatedScopeListJsonList[associatedScopeListIndex].AsObject(m_associatedScopeList[associatedScopeListIndex].Jsonize());
    }
    payload.WithArray("associatedScopeList", std::move(associatedScopeListJsonList));
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
