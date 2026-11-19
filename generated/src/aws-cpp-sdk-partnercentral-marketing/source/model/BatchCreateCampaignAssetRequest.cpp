/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/model/BatchCreateCampaignAssetRequest.h>

#include <utility>

using namespace Aws::PartnerCentralMarketing::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String BatchCreateCampaignAssetRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_catalogHasBeenSet) {
    mapSize++;
  }
  if (m_campaignIdentifierHasBeenSet) {
    mapSize++;
  }
  if (m_entriesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_catalogHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Catalog"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(CatalogMapper::GetNameForCatalog(m_catalog).c_str()));
  }

  if (m_campaignIdentifierHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CampaignIdentifier"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_campaignIdentifier.c_str()));
  }

  if (m_entriesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Entries"));
    encoder.WriteArrayStart(m_entries.size());
    for (const auto& item_0 : m_entries) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection BatchCreateCampaignAssetRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
