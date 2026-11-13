/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/servicecatalog/model/SearchProductsAsAdminRequest.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String SearchProductsAsAdminRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_acceptLanguageHasBeenSet) {
    mapSize++;
  }
  if (m_portfolioIdHasBeenSet) {
    mapSize++;
  }
  if (m_filtersHasBeenSet) {
    mapSize++;
  }
  if (m_sortByHasBeenSet) {
    mapSize++;
  }
  if (m_sortOrderHasBeenSet) {
    mapSize++;
  }
  if (m_pageTokenHasBeenSet) {
    mapSize++;
  }
  if (m_pageSizeHasBeenSet) {
    mapSize++;
  }
  if (m_productSourceHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_acceptLanguageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AcceptLanguage"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_acceptLanguage.c_str()));
  }

  if (m_portfolioIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PortfolioId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_portfolioId.c_str()));
  }

  if (m_filtersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Filters"));
    encoder.WriteMapStart(m_filters.size());
    for (const auto& item_0 : m_filters) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(ProductViewFilterByMapper::GetNameForProductViewFilterBy(item_0.first).c_str()));
      encoder.WriteArrayStart(item_0.second.size());
      for (const auto& item_1 : item_0.second) {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_1.c_str()));
      }
    }
  }

  if (m_sortByHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SortBy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ProductViewSortByMapper::GetNameForProductViewSortBy(m_sortBy).c_str()));
  }

  if (m_sortOrderHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SortOrder"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SortOrderMapper::GetNameForSortOrder(m_sortOrder).c_str()));
  }

  if (m_pageTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PageToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_pageToken.c_str()));
  }

  if (m_pageSizeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PageSize"));
    (m_pageSize >= 0) ? encoder.WriteUInt(m_pageSize) : encoder.WriteNegInt(m_pageSize);
  }

  if (m_productSourceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProductSource"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ProductSourceMapper::GetNameForProductSource(m_productSource).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection SearchProductsAsAdminRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
