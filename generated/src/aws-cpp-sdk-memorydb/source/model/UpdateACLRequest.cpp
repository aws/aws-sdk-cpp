/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/memorydb/model/UpdateACLRequest.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateACLRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_aCLNameHasBeenSet) {
    mapSize++;
  }
  if (m_userNamesToAddHasBeenSet) {
    mapSize++;
  }
  if (m_userNamesToRemoveHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_aCLNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ACLName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_aCLName.c_str()));
  }

  if (m_userNamesToAddHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UserNamesToAdd"));
    encoder.WriteArrayStart(m_userNamesToAdd.size());
    for (const auto& item_0 : m_userNamesToAdd) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_userNamesToRemoveHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UserNamesToRemove"));
    encoder.WriteArrayStart(m_userNamesToRemove.size());
    for (const auto& item_0 : m_userNamesToRemove) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateACLRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
