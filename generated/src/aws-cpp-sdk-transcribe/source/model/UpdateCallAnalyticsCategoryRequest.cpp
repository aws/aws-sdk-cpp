/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/UpdateCallAnalyticsCategoryRequest.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateCallAnalyticsCategoryRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_categoryNameHasBeenSet) {
    mapSize++;
  }
  if (m_rulesHasBeenSet) {
    mapSize++;
  }
  if (m_inputTypeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_categoryNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CategoryName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_categoryName.c_str()));
  }

  if (m_rulesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Rules"));
    encoder.WriteArrayStart(m_rules.size());
    for (const auto& item_0 : m_rules) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_inputTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InputType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(InputTypeMapper::GetNameForInputType(m_inputType).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateCallAnalyticsCategoryRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
