/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/CreateProxyConfigurationRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateProxyConfigurationRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_proxyConfigurationNameHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_ruleGroupNamesHasBeenSet) {
    mapSize++;
  }
  if (m_ruleGroupArnsHasBeenSet) {
    mapSize++;
  }
  if (m_defaultRulePhaseActionsHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_proxyConfigurationNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProxyConfigurationName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_proxyConfigurationName.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
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

  if (m_defaultRulePhaseActionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DefaultRulePhaseActions"));
    m_defaultRulePhaseActions.CborEncode(encoder);
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

Aws::Http::HeaderValueCollection CreateProxyConfigurationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
