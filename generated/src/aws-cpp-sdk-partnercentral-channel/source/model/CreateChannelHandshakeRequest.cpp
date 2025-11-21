/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/CreateChannelHandshakeRequest.h>

#include <utility>

using namespace Aws::PartnerCentralChannel::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateChannelHandshakeRequest::SerializePayload() const {
  JsonValue payload;

  if (m_handshakeTypeHasBeenSet) {
    payload.WithString("handshakeType", HandshakeTypeMapper::GetNameForHandshakeType(m_handshakeType));
  }

  if (m_catalogHasBeenSet) {
    payload.WithString("catalog", m_catalog);
  }

  if (m_associatedResourceIdentifierHasBeenSet) {
    payload.WithString("associatedResourceIdentifier", m_associatedResourceIdentifier);
  }

  if (m_payloadHasBeenSet) {
    payload.WithObject("payload", m_payload.Jsonize());
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("tags", std::move(tagsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateChannelHandshakeRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PartnerCentralChannel.CreateChannelHandshake"));
  return headers;
}
