/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/model/ListBlueprintsRequest.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ListBlueprintsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }
  if (m_blueprintArnHasBeenSet) {
    mapSize++;
  }
  if (m_projectFilterHasBeenSet) {
    mapSize++;
  }
  if (m_resourceOwnerHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_maxResultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxResults"));
    (m_maxResults >= 0) ? encoder.WriteUInt(m_maxResults) : encoder.WriteNegInt(m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }

  if (m_blueprintArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BlueprintArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_blueprintArn.c_str()));
  }

  if (m_projectFilterHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProjectFilter"));
    m_projectFilter.CborEncode(encoder);
  }

  if (m_resourceOwnerHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceOwner"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ResourceOwnerMapper::GetNameForResourceOwner(m_resourceOwner).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ListBlueprintsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
