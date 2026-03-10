/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/PutInsightRuleRequest.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String PutInsightRuleRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_ruleNameHasBeenSet) {
    mapSize++;
  }
  if (m_ruleStateHasBeenSet) {
    mapSize++;
  }
  if (m_ruleDefinitionHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_applyOnTransformedLogsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_ruleNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ruleName.c_str()));
  }

  if (m_ruleStateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleState"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ruleState.c_str()));
  }

  if (m_ruleDefinitionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleDefinition"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ruleDefinition.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_applyOnTransformedLogsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ApplyOnTransformedLogs"));
    encoder.WriteBool(m_applyOnTransformedLogs);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection PutInsightRuleRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
