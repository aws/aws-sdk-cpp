/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/model/UpdateCampaignAssetRequest.h>

#include <utility>

using namespace Aws::PartnerCentralMarketing::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateCampaignAssetRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_catalogHasBeenSet) {
    mapSize++;
  }
  if (m_campaignIdentifierHasBeenSet) {
    mapSize++;
  }
  if (m_campaignAssetIdentifierHasBeenSet) {
    mapSize++;
  }
  if (m_fieldValuesHasBeenSet) {
    mapSize++;
  }
  if (m_layoutHasBeenSet) {
    mapSize++;
  }
  if (m_sendModeHasBeenSet) {
    mapSize++;
  }
  if (m_scheduledSendAtHasBeenSet) {
    mapSize++;
  }
  if (m_clientTokenHasBeenSet) {
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

  if (m_campaignAssetIdentifierHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CampaignAssetIdentifier"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_campaignAssetIdentifier.c_str()));
  }

  if (m_fieldValuesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FieldValues"));
    encoder.WriteArrayStart(m_fieldValues.size());
    for (const auto& item_0 : m_fieldValues) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_layoutHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Layout"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_layout.c_str()));
  }

  if (m_sendModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SendMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SendModeMapper::GetNameForSendMode(m_sendMode).c_str()));
  }

  if (m_scheduledSendAtHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ScheduledSendAt"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_scheduledSendAt.Seconds());
  }

  if (m_clientTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClientToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateCampaignAssetRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
