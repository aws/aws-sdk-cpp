/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/resourcegroupstaggingapi/model/GetComplianceSummaryRequest.h>

#include <utility>

using namespace Aws::ResourceGroupsTaggingAPI::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String GetComplianceSummaryRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_targetIdFiltersHasBeenSet) {
    mapSize++;
  }
  if (m_regionFiltersHasBeenSet) {
    mapSize++;
  }
  if (m_resourceTypeFiltersHasBeenSet) {
    mapSize++;
  }
  if (m_tagKeyFiltersHasBeenSet) {
    mapSize++;
  }
  if (m_groupByHasBeenSet) {
    mapSize++;
  }
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }
  if (m_paginationTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_targetIdFiltersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TargetIdFilters"));
    encoder.WriteArrayStart(m_targetIdFilters.size());
    for (const auto& item_0 : m_targetIdFilters) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_regionFiltersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RegionFilters"));
    encoder.WriteArrayStart(m_regionFilters.size());
    for (const auto& item_0 : m_regionFilters) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_resourceTypeFiltersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceTypeFilters"));
    encoder.WriteArrayStart(m_resourceTypeFilters.size());
    for (const auto& item_0 : m_resourceTypeFilters) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_tagKeyFiltersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TagKeyFilters"));
    encoder.WriteArrayStart(m_tagKeyFilters.size());
    for (const auto& item_0 : m_tagKeyFilters) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_groupByHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GroupBy"));
    encoder.WriteArrayStart(m_groupBy.size());
    for (const auto& item_0 : m_groupBy) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(GroupByAttributeMapper::GetNameForGroupByAttribute(item_0).c_str()));
    }
  }

  if (m_maxResultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxResults"));
    (m_maxResults >= 0) ? encoder.WriteUInt(m_maxResults) : encoder.WriteNegInt(m_maxResults);
  }

  if (m_paginationTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PaginationToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_paginationToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection GetComplianceSummaryRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
