/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/ListLanguageModelsRequest.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ListLanguageModelsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_statusEqualsHasBeenSet) {
    mapSize++;
  }
  if (m_nameContainsHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_statusEqualsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StatusEquals"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ModelStatusMapper::GetNameForModelStatus(m_statusEquals).c_str()));
  }

  if (m_nameContainsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NameContains"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nameContains.c_str()));
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

Aws::Http::HeaderValueCollection ListLanguageModelsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
