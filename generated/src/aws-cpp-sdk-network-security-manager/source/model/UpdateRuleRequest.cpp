/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/UpdateRuleRequest.h>

#include <utility>

using namespace Aws::NetworkSecurityManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateRuleRequest::SerializePayload() const {
  JsonValue payload;

  if (m_updateTokenHasBeenSet) {
    payload.WithString("updateToken", m_updateToken);
  }

  if (m_ruleTypeHasBeenSet) {
    payload.WithString("ruleType", RuleTypeMapper::GetNameForRuleType(m_ruleType));
  }

  if (m_ruleDescriptionHasBeenSet) {
    payload.WithString("ruleDescription", m_ruleDescription);
  }

  if (m_configurationHasBeenSet) {
    if (!m_configuration.View().IsNull()) {
      payload.WithObject("configuration", JsonValue(m_configuration.View()));
    }
  }

  if (m_isPublishedHasBeenSet) {
    payload.WithBool("isPublished", m_isPublished);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
