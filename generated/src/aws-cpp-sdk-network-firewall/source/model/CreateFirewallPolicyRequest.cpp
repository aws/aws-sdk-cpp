/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/CreateFirewallPolicyRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateFirewallPolicyRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_firewallPolicyNameHasBeenSet) {
    mapSize++;
  }
  if (m_firewallPolicyHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_dryRunHasBeenSet) {
    mapSize++;
  }
  if (m_encryptionConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_firewallPolicyNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallPolicyName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_firewallPolicyName.c_str()));
  }

  if (m_firewallPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallPolicy"));
    m_firewallPolicy.CborEncode(encoder);
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
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

Aws::Http::HeaderValueCollection CreateFirewallPolicyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
