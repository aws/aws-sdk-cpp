/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/model/ListAdapterVersionsRequest.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ListAdapterVersionsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_adapterIdHasBeenSet) {
    mapSize++;
  }
  if (m_afterCreationTimeHasBeenSet) {
    mapSize++;
  }
  if (m_beforeCreationTimeHasBeenSet) {
    mapSize++;
  }
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_adapterIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AdapterId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_adapterId.c_str()));
  }

  if (m_afterCreationTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AfterCreationTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_afterCreationTime.Seconds());
  }

  if (m_beforeCreationTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BeforeCreationTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_beforeCreationTime.Seconds());
  }

  if (m_maxResultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxResults"));
    (m_maxResults >= 0) ? encoder.WriteUInt(m_maxResults) : encoder.WriteNegInt(m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ListAdapterVersionsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
