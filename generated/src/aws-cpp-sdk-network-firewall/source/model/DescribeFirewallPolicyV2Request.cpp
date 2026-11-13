/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/DescribeFirewallPolicyV2Request.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DescribeFirewallPolicyV2Request::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_firewallPolicyV2ArnHasBeenSet) {
    mapSize++;
  }
  if (m_firewallPolicyV2NameHasBeenSet) {
    mapSize++;
  }
  if (m_ruleOutputFormatHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_firewallPolicyV2ArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallPolicyV2Arn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_firewallPolicyV2Arn.c_str()));
  }

  if (m_firewallPolicyV2NameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallPolicyV2Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_firewallPolicyV2Name.c_str()));
  }

  if (m_ruleOutputFormatHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleOutputFormat"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(RuleOutputFormatMapper::GetNameForRuleOutputFormat(m_ruleOutputFormat).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DescribeFirewallPolicyV2Request::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
