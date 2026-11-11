/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/UpdateProxyRuleRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateProxyRuleRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_proxyRuleGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_proxyRuleGroupArnHasBeenSet) {
    mapSize++;
  }
  if (m_proxyRuleNameHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_actionHasBeenSet) {
    mapSize++;
  }
  if (m_addConditionsHasBeenSet) {
    mapSize++;
  }
  if (m_removeConditionsHasBeenSet) {
    mapSize++;
  }
  if (m_updateTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_proxyRuleGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProxyRuleGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_proxyRuleGroupName.c_str()));
  }

  if (m_proxyRuleGroupArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProxyRuleGroupArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_proxyRuleGroupArn.c_str()));
  }

  if (m_proxyRuleNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProxyRuleName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_proxyRuleName.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_actionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Action"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ProxyRulePhaseActionMapper::GetNameForProxyRulePhaseAction(m_action).c_str()));
  }

  if (m_addConditionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AddConditions"));
    encoder.WriteArrayStart(m_addConditions.size());
    for (const auto& item_0 : m_addConditions) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_removeConditionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RemoveConditions"));
    encoder.WriteArrayStart(m_removeConditions.size());
    for (const auto& item_0 : m_removeConditions) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_updateTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UpdateToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_updateToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateProxyRuleRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
