/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/DeleteProxyRulesRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DeleteProxyRulesRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_proxyRuleGroupArnHasBeenSet) {
    mapSize++;
  }
  if (m_proxyRuleGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_rulesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_proxyRuleGroupArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProxyRuleGroupArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_proxyRuleGroupArn.c_str()));
  }

  if (m_proxyRuleGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProxyRuleGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_proxyRuleGroupName.c_str()));
  }

  if (m_rulesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Rules"));
    encoder.WriteArrayStart(m_rules.size());
    for (const auto& item_0 : m_rules) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DeleteProxyRulesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
