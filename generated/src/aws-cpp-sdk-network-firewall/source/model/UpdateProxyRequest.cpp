/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/UpdateProxyRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateProxyRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_natGatewayIdHasBeenSet) {
    mapSize++;
  }
  if (m_proxyNameHasBeenSet) {
    mapSize++;
  }
  if (m_proxyArnHasBeenSet) {
    mapSize++;
  }
  if (m_listenerPropertiesToAddHasBeenSet) {
    mapSize++;
  }
  if (m_listenerPropertiesToRemoveHasBeenSet) {
    mapSize++;
  }
  if (m_tlsInterceptPropertiesHasBeenSet) {
    mapSize++;
  }
  if (m_updateTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_natGatewayIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NatGatewayId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_natGatewayId.c_str()));
  }

  if (m_proxyNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProxyName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_proxyName.c_str()));
  }

  if (m_proxyArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProxyArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_proxyArn.c_str()));
  }

  if (m_listenerPropertiesToAddHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ListenerPropertiesToAdd"));
    encoder.WriteArrayStart(m_listenerPropertiesToAdd.size());
    for (const auto& item_0 : m_listenerPropertiesToAdd) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_listenerPropertiesToRemoveHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ListenerPropertiesToRemove"));
    encoder.WriteArrayStart(m_listenerPropertiesToRemove.size());
    for (const auto& item_0 : m_listenerPropertiesToRemove) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_tlsInterceptPropertiesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TlsInterceptProperties"));
    m_tlsInterceptProperties.CborEncode(encoder);
  }

  if (m_updateTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UpdateToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_updateToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateProxyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
