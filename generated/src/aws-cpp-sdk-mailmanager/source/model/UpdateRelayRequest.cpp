/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/mailmanager/model/UpdateRelayRequest.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateRelayRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_relayIdHasBeenSet) {
    mapSize++;
  }
  if (m_relayNameHasBeenSet) {
    mapSize++;
  }
  if (m_serverNameHasBeenSet) {
    mapSize++;
  }
  if (m_serverPortHasBeenSet) {
    mapSize++;
  }
  if (m_authenticationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_relayIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RelayId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_relayId.c_str()));
  }

  if (m_relayNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RelayName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_relayName.c_str()));
  }

  if (m_serverNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ServerName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_serverName.c_str()));
  }

  if (m_serverPortHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ServerPort"));
    (m_serverPort >= 0) ? encoder.WriteUInt(m_serverPort) : encoder.WriteNegInt(m_serverPort);
  }

  if (m_authenticationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Authentication"));
    m_authentication.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateRelayRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
