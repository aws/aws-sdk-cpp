/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ListChannelHandshakesRequest.h>

#include <utility>

using namespace Aws::PartnerCentralChannel::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListChannelHandshakesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_handshakeTypeHasBeenSet) {
    payload.WithString("handshakeType", HandshakeTypeMapper::GetNameForHandshakeType(m_handshakeType));
  }

  if (m_catalogHasBeenSet) {
    payload.WithString("catalog", m_catalog);
  }

  if (m_participantTypeHasBeenSet) {
    payload.WithString("participantType", ParticipantTypeMapper::GetNameForParticipantType(m_participantType));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_statusesHasBeenSet) {
    Aws::Utils::Array<JsonValue> statusesJsonList(m_statuses.size());
    for (unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex) {
      statusesJsonList[statusesIndex].AsString(HandshakeStatusMapper::GetNameForHandshakeStatus(m_statuses[statusesIndex]));
    }
    payload.WithArray("statuses", std::move(statusesJsonList));
  }

  if (m_associatedResourceIdentifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> associatedResourceIdentifiersJsonList(m_associatedResourceIdentifiers.size());
    for (unsigned associatedResourceIdentifiersIndex = 0;
         associatedResourceIdentifiersIndex < associatedResourceIdentifiersJsonList.GetLength(); ++associatedResourceIdentifiersIndex) {
      associatedResourceIdentifiersJsonList[associatedResourceIdentifiersIndex].AsString(
          m_associatedResourceIdentifiers[associatedResourceIdentifiersIndex]);
    }
    payload.WithArray("associatedResourceIdentifiers", std::move(associatedResourceIdentifiersJsonList));
  }

  if (m_handshakeTypeFiltersHasBeenSet) {
    payload.WithObject("handshakeTypeFilters", m_handshakeTypeFilters.Jsonize());
  }

  if (m_handshakeTypeSortHasBeenSet) {
    payload.WithObject("handshakeTypeSort", m_handshakeTypeSort.Jsonize());
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListChannelHandshakesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PartnerCentralChannel.ListChannelHandshakes"));
  return headers;
}
