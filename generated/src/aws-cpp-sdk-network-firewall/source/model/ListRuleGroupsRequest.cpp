/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/ListRuleGroupsRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ListRuleGroupsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }
  if (m_scopeHasBeenSet) {
    mapSize++;
  }
  if (m_managedTypeHasBeenSet) {
    mapSize++;
  }
  if (m_subscriptionStatusHasBeenSet) {
    mapSize++;
  }
  if (m_typeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }

  if (m_maxResultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxResults"));
    (m_maxResults >= 0) ? encoder.WriteUInt(m_maxResults) : encoder.WriteNegInt(m_maxResults);
  }

  if (m_scopeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Scope"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ResourceManagedStatusMapper::GetNameForResourceManagedStatus(m_scope).c_str()));
  }

  if (m_managedTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ManagedType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ResourceManagedTypeMapper::GetNameForResourceManagedType(m_managedType).c_str()));
  }

  if (m_subscriptionStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SubscriptionStatus"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(SubscriptionStatusMapper::GetNameForSubscriptionStatus(m_subscriptionStatus).c_str()));
  }

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Type"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(RuleGroupTypeMapper::GetNameForRuleGroupType(m_type).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ListRuleGroupsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
