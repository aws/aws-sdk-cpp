/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/model/UpdateAdapterRequest.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateAdapterRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_adapterIdHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_adapterNameHasBeenSet) {
    mapSize++;
  }
  if (m_autoUpdateHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_adapterIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AdapterId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_adapterId.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_adapterNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AdapterName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_adapterName.c_str()));
  }

  if (m_autoUpdateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AutoUpdate"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AutoUpdateMapper::GetNameForAutoUpdate(m_autoUpdate).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateAdapterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
