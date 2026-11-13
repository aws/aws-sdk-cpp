/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/AssociateSubnetsRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String AssociateSubnetsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_updateTokenHasBeenSet) {
    mapSize++;
  }
  if (m_firewallArnHasBeenSet) {
    mapSize++;
  }
  if (m_firewallNameHasBeenSet) {
    mapSize++;
  }
  if (m_subnetMappingsHasBeenSet) {
    mapSize++;
  }
  if (m_natGatewayCreateMappingsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_updateTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UpdateToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_updateToken.c_str()));
  }

  if (m_firewallArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_firewallArn.c_str()));
  }

  if (m_firewallNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_firewallName.c_str()));
  }

  if (m_subnetMappingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SubnetMappings"));
    encoder.WriteArrayStart(m_subnetMappings.size());
    for (const auto& item_0 : m_subnetMappings) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_natGatewayCreateMappingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NatGatewayCreateMappings"));
    encoder.WriteArrayStart(m_natGatewayCreateMappings.size());
    for (const auto& item_0 : m_natGatewayCreateMappings) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection AssociateSubnetsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
