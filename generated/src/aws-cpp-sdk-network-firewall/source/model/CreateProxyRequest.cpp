/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/CreateProxyRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateProxyRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_proxyNameHasBeenSet) {
    mapSize++;
  }
  if (m_natGatewayIdHasBeenSet) {
    mapSize++;
  }
  if (m_proxyConfigurationNameHasBeenSet) {
    mapSize++;
  }
  if (m_proxyConfigurationArnHasBeenSet) {
    mapSize++;
  }
  if (m_listenerPropertiesHasBeenSet) {
    mapSize++;
  }
  if (m_tlsInterceptPropertiesHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_proxyNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProxyName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_proxyName.c_str()));
  }

  if (m_natGatewayIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NatGatewayId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_natGatewayId.c_str()));
  }

  if (m_proxyConfigurationNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProxyConfigurationName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_proxyConfigurationName.c_str()));
  }

  if (m_proxyConfigurationArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProxyConfigurationArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_proxyConfigurationArn.c_str()));
  }

  if (m_listenerPropertiesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ListenerProperties"));
    encoder.WriteArrayStart(m_listenerProperties.size());
    for (const auto& item_0 : m_listenerProperties) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_tlsInterceptPropertiesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TlsInterceptProperties"));
    m_tlsInterceptProperties.CborEncode(encoder);
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateProxyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
