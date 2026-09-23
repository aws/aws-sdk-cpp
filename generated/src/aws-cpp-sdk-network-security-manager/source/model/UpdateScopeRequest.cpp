/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/UpdateScopeRequest.h>

#include <utility>

using namespace Aws::NetworkSecurityManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateScopeRequest::SerializePayload() const {
  JsonValue payload;

  if (m_updateTokenHasBeenSet) {
    payload.WithString("updateToken", m_updateToken);
  }

  if (m_scopeDescriptionHasBeenSet) {
    payload.WithString("scopeDescription", m_scopeDescription);
  }

  if (m_scopeConfigurationHasBeenSet) {
    payload.WithObject("scopeConfiguration", m_scopeConfiguration.Jsonize());
  }

  if (m_isPublishedHasBeenSet) {
    payload.WithBool("isPublished", m_isPublished);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
