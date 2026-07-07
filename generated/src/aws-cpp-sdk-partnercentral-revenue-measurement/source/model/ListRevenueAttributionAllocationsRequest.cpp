/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-revenue-measurement/model/ListRevenueAttributionAllocationsRequest.h>

#include <utility>

using namespace Aws::PartnerCentralRevenueMeasurement::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ListRevenueAttributionAllocationsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_catalogHasBeenSet) {
    mapSize++;
  }
  if (m_revenueAttributionIdentifierHasBeenSet) {
    mapSize++;
  }
  if (m_entityTypeFiltersHasBeenSet) {
    mapSize++;
  }
  if (m_entityIdentifierFiltersHasBeenSet) {
    mapSize++;
  }
  if (m_customerAwsAccountIdFiltersHasBeenSet) {
    mapSize++;
  }
  if (m_statusFilterHasBeenSet) {
    mapSize++;
  }
  if (m_afterEffectiveFromHasBeenSet) {
    mapSize++;
  }
  if (m_beforeEffectiveFromHasBeenSet) {
    mapSize++;
  }
  if (m_afterEffectiveUntilHasBeenSet) {
    mapSize++;
  }
  if (m_beforeEffectiveUntilHasBeenSet) {
    mapSize++;
  }
  if (m_sortByHasBeenSet) {
    mapSize++;
  }
  if (m_sortOrderHasBeenSet) {
    mapSize++;
  }
  if (m_revenueAttributionRevisionHasBeenSet) {
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

  if (m_revenueAttributionIdentifierHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RevenueAttributionIdentifier"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_revenueAttributionIdentifier.c_str()));
  }

  if (m_entityTypeFiltersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EntityTypeFilters"));
    encoder.WriteArrayStart(m_entityTypeFilters.size());
    for (const auto& item_0 : m_entityTypeFilters) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(EntityTypeMapper::GetNameForEntityType(item_0).c_str()));
    }
  }

  if (m_entityIdentifierFiltersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EntityIdentifierFilters"));
    encoder.WriteArrayStart(m_entityIdentifierFilters.size());
    for (const auto& item_0 : m_entityIdentifierFilters) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_customerAwsAccountIdFiltersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CustomerAwsAccountIdFilters"));
    encoder.WriteArrayStart(m_customerAwsAccountIdFilters.size());
    for (const auto& item_0 : m_customerAwsAccountIdFilters) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_statusFilterHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StatusFilter"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AllocationStatusMapper::GetNameForAllocationStatus(m_statusFilter).c_str()));
  }

  if (m_afterEffectiveFromHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AfterEffectiveFrom"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_afterEffectiveFrom.c_str()));
  }

  if (m_beforeEffectiveFromHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BeforeEffectiveFrom"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_beforeEffectiveFrom.c_str()));
  }

  if (m_afterEffectiveUntilHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AfterEffectiveUntil"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_afterEffectiveUntil.c_str()));
  }

  if (m_beforeEffectiveUntilHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BeforeEffectiveUntil"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_beforeEffectiveUntil.c_str()));
  }

  if (m_sortByHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SortBy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        RevenueAttributionAllocationSortFieldMapper::GetNameForRevenueAttributionAllocationSortField(m_sortBy).c_str()));
  }

  if (m_sortOrderHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SortOrder"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SortOrderMapper::GetNameForSortOrder(m_sortOrder).c_str()));
  }

  if (m_revenueAttributionRevisionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RevenueAttributionRevision"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_revenueAttributionRevision.c_str()));
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

Aws::Http::HeaderValueCollection ListRevenueAttributionAllocationsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
