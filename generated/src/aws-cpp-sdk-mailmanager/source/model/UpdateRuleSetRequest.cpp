/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/mailmanager/model/UpdateRuleSetRequest.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateRuleSetRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_ruleSetIdHasBeenSet) {
    mapSize++;
  }
  if (m_ruleSetNameHasBeenSet) {
    mapSize++;
  }
  if (m_rulesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_ruleSetIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleSetId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ruleSetId.c_str()));
  }

  if (m_ruleSetNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleSetName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ruleSetName.c_str()));
  }

  if (m_rulesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Rules"));
    encoder.WriteArrayStart(m_rules.size());
    for (const auto& item_0 : m_rules) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateRuleSetRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
