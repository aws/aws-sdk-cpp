/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/UpdateIntegrationRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateIntegrationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_integrationIdHasBeenSet) {
    payload.WithString("integrationId", m_integrationId);
  }

  if (m_webhookActionHasBeenSet) {
    payload.WithString("webhookAction", WebhookActionMapper::GetNameForWebhookAction(m_webhookAction));
  }

  return payload.View().WriteReadable();
}
