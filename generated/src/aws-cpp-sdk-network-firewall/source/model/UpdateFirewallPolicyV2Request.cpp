/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/UpdateFirewallPolicyV2Request.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateFirewallPolicyV2Request::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_updateTokenHasBeenSet) {
    mapSize++;
  }
  if (m_firewallPolicyV2ArnHasBeenSet) {
    mapSize++;
  }
  if (m_firewallPolicyV2NameHasBeenSet) {
    mapSize++;
  }
  if (m_firewallPolicyV2HasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_dryRunHasBeenSet) {
    mapSize++;
  }
  if (m_encryptionConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_updateTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UpdateToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_updateToken.c_str()));
  }

  if (m_firewallPolicyV2ArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallPolicyV2Arn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_firewallPolicyV2Arn.c_str()));
  }

  if (m_firewallPolicyV2NameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallPolicyV2Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_firewallPolicyV2Name.c_str()));
  }

  if (m_firewallPolicyV2HasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallPolicyV2"));
    m_firewallPolicyV2.CborEncode(encoder);
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_dryRunHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DryRun"));
    encoder.WriteBool(m_dryRun);
  }

  if (m_encryptionConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EncryptionConfiguration"));
    m_encryptionConfiguration.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateFirewallPolicyV2Request::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
