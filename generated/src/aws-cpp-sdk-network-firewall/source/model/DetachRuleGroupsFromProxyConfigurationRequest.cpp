/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/DetachRuleGroupsFromProxyConfigurationRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DetachRuleGroupsFromProxyConfigurationRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_proxyConfigurationNameHasBeenSet) {
    mapSize++;
  }
  if (m_proxyConfigurationArnHasBeenSet) {
    mapSize++;
  }
  if (m_ruleGroupNamesHasBeenSet) {
    mapSize++;
  }
  if (m_ruleGroupArnsHasBeenSet) {
    mapSize++;
  }
  if (m_updateTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_proxyConfigurationNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProxyConfigurationName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_proxyConfigurationName.c_str()));
  }

  if (m_proxyConfigurationArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProxyConfigurationArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_proxyConfigurationArn.c_str()));
  }

  if (m_ruleGroupNamesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleGroupNames"));
    encoder.WriteArrayStart(m_ruleGroupNames.size());
    for (const auto& item_0 : m_ruleGroupNames) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_ruleGroupArnsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleGroupArns"));
    encoder.WriteArrayStart(m_ruleGroupArns.size());
    for (const auto& item_0 : m_ruleGroupArns) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_updateTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UpdateToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_updateToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DetachRuleGroupsFromProxyConfigurationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
