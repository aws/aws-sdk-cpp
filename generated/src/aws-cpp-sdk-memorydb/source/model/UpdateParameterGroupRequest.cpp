/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/memorydb/model/UpdateParameterGroupRequest.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateParameterGroupRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_parameterGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_parameterNameValuesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_parameterGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ParameterGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_parameterGroupName.c_str()));
  }

  if (m_parameterNameValuesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ParameterNameValues"));
    encoder.WriteArrayStart(m_parameterNameValues.size());
    for (const auto& item_0 : m_parameterNameValues) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateParameterGroupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
