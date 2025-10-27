/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/UpdateOdbPeeringConnectionRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateOdbPeeringConnectionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_odbPeeringConnectionIdHasBeenSet) {
    payload.WithString("odbPeeringConnectionId", m_odbPeeringConnectionId);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_peerNetworkCidrsToBeAddedHasBeenSet) {
    Aws::Utils::Array<JsonValue> peerNetworkCidrsToBeAddedJsonList(m_peerNetworkCidrsToBeAdded.size());
    for (unsigned peerNetworkCidrsToBeAddedIndex = 0; peerNetworkCidrsToBeAddedIndex < peerNetworkCidrsToBeAddedJsonList.GetLength();
         ++peerNetworkCidrsToBeAddedIndex) {
      peerNetworkCidrsToBeAddedJsonList[peerNetworkCidrsToBeAddedIndex].AsString(
          m_peerNetworkCidrsToBeAdded[peerNetworkCidrsToBeAddedIndex]);
    }
    payload.WithArray("peerNetworkCidrsToBeAdded", std::move(peerNetworkCidrsToBeAddedJsonList));
  }

  if (m_peerNetworkCidrsToBeRemovedHasBeenSet) {
    Aws::Utils::Array<JsonValue> peerNetworkCidrsToBeRemovedJsonList(m_peerNetworkCidrsToBeRemoved.size());
    for (unsigned peerNetworkCidrsToBeRemovedIndex = 0; peerNetworkCidrsToBeRemovedIndex < peerNetworkCidrsToBeRemovedJsonList.GetLength();
         ++peerNetworkCidrsToBeRemovedIndex) {
      peerNetworkCidrsToBeRemovedJsonList[peerNetworkCidrsToBeRemovedIndex].AsString(
          m_peerNetworkCidrsToBeRemoved[peerNetworkCidrsToBeRemovedIndex]);
    }
    payload.WithArray("peerNetworkCidrsToBeRemoved", std::move(peerNetworkCidrsToBeRemovedJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateOdbPeeringConnectionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.UpdateOdbPeeringConnection"));
  return headers;
}
