/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/DescribeRuleGroupMetadataRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DescribeRuleGroupMetadataRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_ruleGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_ruleGroupArnHasBeenSet) {
    mapSize++;
  }
  if (m_typeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_ruleGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ruleGroupName.c_str()));
  }

  if (m_ruleGroupArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleGroupArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ruleGroupArn.c_str()));
  }

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Type"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(RuleGroupTypeMapper::GetNameForRuleGroupType(m_type).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DescribeRuleGroupMetadataRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
