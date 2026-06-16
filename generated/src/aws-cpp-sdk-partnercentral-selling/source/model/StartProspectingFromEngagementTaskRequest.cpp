/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/StartProspectingFromEngagementTaskRequest.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartProspectingFromEngagementTaskRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_identifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> identifiersJsonList(m_identifiers.size());
    for (unsigned identifiersIndex = 0; identifiersIndex < identifiersJsonList.GetLength(); ++identifiersIndex) {
      identifiersJsonList[identifiersIndex].AsString(m_identifiers[identifiersIndex]);
    }
    payload.WithArray("Identifiers", std::move(identifiersJsonList));
  }

  if (m_taskNameHasBeenSet) {
    payload.WithString("TaskName", m_taskName);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartProspectingFromEngagementTaskRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.StartProspectingFromEngagementTask"));
  return headers;
}
