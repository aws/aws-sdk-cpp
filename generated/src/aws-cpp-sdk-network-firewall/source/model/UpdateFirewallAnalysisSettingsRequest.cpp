/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/UpdateFirewallAnalysisSettingsRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateFirewallAnalysisSettingsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_enabledAnalysisTypesHasBeenSet) {
    mapSize++;
  }
  if (m_firewallArnHasBeenSet) {
    mapSize++;
  }
  if (m_firewallNameHasBeenSet) {
    mapSize++;
  }
  if (m_updateTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_enabledAnalysisTypesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EnabledAnalysisTypes"));
    encoder.WriteArrayStart(m_enabledAnalysisTypes.size());
    for (const auto& item_0 : m_enabledAnalysisTypes) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(EnabledAnalysisTypeMapper::GetNameForEnabledAnalysisType(item_0).c_str()));
    }
  }

  if (m_firewallArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_firewallArn.c_str()));
  }

  if (m_firewallNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_firewallName.c_str()));
  }

  if (m_updateTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UpdateToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_updateToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateFirewallAnalysisSettingsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
