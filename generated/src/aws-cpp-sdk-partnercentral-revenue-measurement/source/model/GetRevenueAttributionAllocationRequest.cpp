/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-revenue-measurement/model/GetRevenueAttributionAllocationRequest.h>

#include <utility>

using namespace Aws::PartnerCentralRevenueMeasurement::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String GetRevenueAttributionAllocationRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_catalogHasBeenSet) {
    mapSize++;
  }
  if (m_revenueAttributionIdentifierHasBeenSet) {
    mapSize++;
  }
  if (m_revenueAttributionAllocationIdHasBeenSet) {
    mapSize++;
  }
  if (m_revenueAttributionRevisionHasBeenSet) {
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

  if (m_revenueAttributionAllocationIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RevenueAttributionAllocationId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_revenueAttributionAllocationId.c_str()));
  }

  if (m_revenueAttributionRevisionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RevenueAttributionRevision"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_revenueAttributionRevision.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection GetRevenueAttributionAllocationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
