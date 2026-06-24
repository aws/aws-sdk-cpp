/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/CreateThreatModelRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateThreatModelRequest::SerializePayload() const {
  JsonValue payload;

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_assetsHasBeenSet) {
    payload.WithObject("assets", m_assets.Jsonize());
  }

  if (m_scopeDocsHasBeenSet) {
    Aws::Utils::Array<JsonValue> scopeDocsJsonList(m_scopeDocs.size());
    for (unsigned scopeDocsIndex = 0; scopeDocsIndex < scopeDocsJsonList.GetLength(); ++scopeDocsIndex) {
      scopeDocsJsonList[scopeDocsIndex].AsObject(m_scopeDocs[scopeDocsIndex].Jsonize());
    }
    payload.WithArray("scopeDocs", std::move(scopeDocsJsonList));
  }

  if (m_serviceRoleHasBeenSet) {
    payload.WithString("serviceRole", m_serviceRole);
  }

  if (m_logConfigHasBeenSet) {
    payload.WithObject("logConfig", m_logConfig.Jsonize());
  }

  if (m_reportDestinationHasBeenSet) {
    payload.WithObject("reportDestination", m_reportDestination.Jsonize());
  }

  return payload.View().WriteReadable();
}
