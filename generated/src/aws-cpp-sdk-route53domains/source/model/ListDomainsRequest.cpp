/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/route53domains/model/ListDomainsRequest.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ListDomainsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_filterConditionsHasBeenSet) {
    mapSize++;
  }
  if (m_sortConditionHasBeenSet) {
    mapSize++;
  }
  if (m_markerHasBeenSet) {
    mapSize++;
  }
  if (m_maxItemsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_filterConditionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FilterConditions"));
    encoder.WriteArrayStart(m_filterConditions.size());
    for (const auto& item_0 : m_filterConditions) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_sortConditionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SortCondition"));
    m_sortCondition.CborEncode(encoder);
  }

  if (m_markerHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Marker"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_marker.c_str()));
  }

  if (m_maxItemsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxItems"));
    (m_maxItems >= 0) ? encoder.WriteUInt(m_maxItems) : encoder.WriteNegInt(m_maxItems);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ListDomainsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
