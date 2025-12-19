/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/EnableInsightRulesRequest.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String EnableInsightRulesRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_ruleNamesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_ruleNamesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleNames"));
    encoder.WriteArrayStart(m_ruleNames.size());
    for (const auto& item_0 : m_ruleNames) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection EnableInsightRulesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
