/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/ListConnectionsRequest.h>

#include <utility>

using namespace Aws::PartnerCentralAccount::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListConnectionsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_connectionTypeHasBeenSet) {
    payload.WithString("ConnectionType", m_connectionType);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_otherParticipantIdentifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> otherParticipantIdentifiersJsonList(m_otherParticipantIdentifiers.size());
    for (unsigned otherParticipantIdentifiersIndex = 0; otherParticipantIdentifiersIndex < otherParticipantIdentifiersJsonList.GetLength();
         ++otherParticipantIdentifiersIndex) {
      otherParticipantIdentifiersJsonList[otherParticipantIdentifiersIndex].AsString(
          m_otherParticipantIdentifiers[otherParticipantIdentifiersIndex]);
    }
    payload.WithArray("OtherParticipantIdentifiers", std::move(otherParticipantIdentifiersJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListConnectionsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PartnerCentralAccount.ListConnections"));
  return headers;
}
