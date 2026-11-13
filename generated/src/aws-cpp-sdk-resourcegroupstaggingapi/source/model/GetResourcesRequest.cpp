/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/resourcegroupstaggingapi/model/GetResourcesRequest.h>

#include <utility>

using namespace Aws::ResourceGroupsTaggingAPI::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String GetResourcesRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_paginationTokenHasBeenSet) {
    mapSize++;
  }
  if (m_tagFiltersHasBeenSet) {
    mapSize++;
  }
  if (m_resourcesPerPageHasBeenSet) {
    mapSize++;
  }
  if (m_tagsPerPageHasBeenSet) {
    mapSize++;
  }
  if (m_resourceTypeFiltersHasBeenSet) {
    mapSize++;
  }
  if (m_includeComplianceDetailsHasBeenSet) {
    mapSize++;
  }
  if (m_excludeCompliantResourcesHasBeenSet) {
    mapSize++;
  }
  if (m_resourceARNListHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_paginationTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PaginationToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_paginationToken.c_str()));
  }

  if (m_tagFiltersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TagFilters"));
    encoder.WriteArrayStart(m_tagFilters.size());
    for (const auto& item_0 : m_tagFilters) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_resourcesPerPageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourcesPerPage"));
    (m_resourcesPerPage >= 0) ? encoder.WriteUInt(m_resourcesPerPage) : encoder.WriteNegInt(m_resourcesPerPage);
  }

  if (m_tagsPerPageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TagsPerPage"));
    (m_tagsPerPage >= 0) ? encoder.WriteUInt(m_tagsPerPage) : encoder.WriteNegInt(m_tagsPerPage);
  }

  if (m_resourceTypeFiltersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceTypeFilters"));
    encoder.WriteArrayStart(m_resourceTypeFilters.size());
    for (const auto& item_0 : m_resourceTypeFilters) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_includeComplianceDetailsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IncludeComplianceDetails"));
    encoder.WriteBool(m_includeComplianceDetails);
  }

  if (m_excludeCompliantResourcesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ExcludeCompliantResources"));
    encoder.WriteBool(m_excludeCompliantResources);
  }

  if (m_resourceARNListHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceARNList"));
    encoder.WriteArrayStart(m_resourceARNList.size());
    for (const auto& item_0 : m_resourceARNList) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection GetResourcesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
