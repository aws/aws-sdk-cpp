/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/shield/model/ListResourcesInProtectionGroupRequest.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ListResourcesInProtectionGroupRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_protectionGroupIdHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_protectionGroupIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProtectionGroupId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_protectionGroupId.c_str()));
  }

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }

  if (m_maxResultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxResults"));
    (m_maxResults >= 0) ? encoder.WriteUInt(m_maxResults) : encoder.WriteNegInt(m_maxResults);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ListResourcesInProtectionGroupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
