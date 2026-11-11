/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/model/GetAdapterVersionRequest.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String GetAdapterVersionRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_adapterIdHasBeenSet) {
    mapSize++;
  }
  if (m_adapterVersionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_adapterIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AdapterId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_adapterId.c_str()));
  }

  if (m_adapterVersionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AdapterVersion"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_adapterVersion.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection GetAdapterVersionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
