/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/shield/model/UpdateProtectionGroupRequest.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateProtectionGroupRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_protectionGroupIdHasBeenSet) {
    mapSize++;
  }
  if (m_aggregationHasBeenSet) {
    mapSize++;
  }
  if (m_patternHasBeenSet) {
    mapSize++;
  }
  if (m_resourceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_membersHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_protectionGroupIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProtectionGroupId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_protectionGroupId.c_str()));
  }

  if (m_aggregationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Aggregation"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ProtectionGroupAggregationMapper::GetNameForProtectionGroupAggregation(m_aggregation).c_str()));
  }

  if (m_patternHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Pattern"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ProtectionGroupPatternMapper::GetNameForProtectionGroupPattern(m_pattern).c_str()));
  }

  if (m_resourceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceType"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ProtectedResourceTypeMapper::GetNameForProtectedResourceType(m_resourceType).c_str()));
  }

  if (m_membersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Members"));
    encoder.WriteArrayStart(m_members.size());
    for (const auto& item_0 : m_members) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateProtectionGroupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
