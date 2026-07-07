/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-revenue-measurement/model/CreateMarketplaceRevenueShareAllocationRequest.h>

#include <utility>

using namespace Aws::PartnerCentralRevenueMeasurement::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateMarketplaceRevenueShareAllocationRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_catalogHasBeenSet) {
    mapSize++;
  }
  if (m_productIdHasBeenSet) {
    mapSize++;
  }
  if (m_clientTokenHasBeenSet) {
    mapSize++;
  }
  if (m_effectiveFromHasBeenSet) {
    mapSize++;
  }
  if (m_effectiveUntilHasBeenSet) {
    mapSize++;
  }
  if (m_revenueSharePercentHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_catalogHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Catalog"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(CatalogNameMapper::GetNameForCatalogName(m_catalog).c_str()));
  }

  if (m_productIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProductId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_productId.c_str()));
  }

  if (m_clientTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClientToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientToken.c_str()));
  }

  if (m_effectiveFromHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EffectiveFrom"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_effectiveFrom.c_str()));
  }

  if (m_effectiveUntilHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EffectiveUntil"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_effectiveUntil.c_str()));
  }

  if (m_revenueSharePercentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RevenueSharePercent"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_revenueSharePercent.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateMarketplaceRevenueShareAllocationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
