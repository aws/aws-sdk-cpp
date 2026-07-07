/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-revenue-measurement/model/ListRevenueAttributionsRequest.h>

#include <utility>

using namespace Aws::PartnerCentralRevenueMeasurement::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ListRevenueAttributionsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_catalogHasBeenSet) {
    mapSize++;
  }
  if (m_identifiersHasBeenSet) {
    mapSize++;
  }
  if (m_createdAfterHasBeenSet) {
    mapSize++;
  }
  if (m_createdBeforeHasBeenSet) {
    mapSize++;
  }
  if (m_sortByHasBeenSet) {
    mapSize++;
  }
  if (m_sortOrderHasBeenSet) {
    mapSize++;
  }
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_catalogHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Catalog"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(CatalogNameMapper::GetNameForCatalogName(m_catalog).c_str()));
  }

  if (m_identifiersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Identifiers"));
    encoder.WriteArrayStart(m_identifiers.size());
    for (const auto& item_0 : m_identifiers) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_createdAfterHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CreatedAfter"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_createdAfter.Seconds());
  }

  if (m_createdBeforeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CreatedBefore"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_createdBefore.Seconds());
  }

  if (m_sortByHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SortBy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AttributionSortByMapper::GetNameForAttributionSortBy(m_sortBy).c_str()));
  }

  if (m_sortOrderHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SortOrder"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SortOrderMapper::GetNameForSortOrder(m_sortOrder).c_str()));
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

Aws::Http::HeaderValueCollection ListRevenueAttributionsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
