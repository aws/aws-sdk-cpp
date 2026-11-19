/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/model/UpdateCampaignRequest.h>

#include <utility>

using namespace Aws::PartnerCentralMarketing::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateCampaignRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_catalogHasBeenSet) {
    mapSize++;
  }
  if (m_campaignIdentifierHasBeenSet) {
    mapSize++;
  }
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_senderEmailHasBeenSet) {
    mapSize++;
  }
  if (m_privacyPolicyUrlHasBeenSet) {
    mapSize++;
  }
  if (m_partnerAddressHasBeenSet) {
    mapSize++;
  }
  if (m_partnerBadgeHasBeenSet) {
    mapSize++;
  }
  if (m_emailTargetHasBeenSet) {
    mapSize++;
  }
  if (m_emailTargetEngagementGroupIdsHasBeenSet) {
    mapSize++;
  }
  if (m_socialConnectionsHasBeenSet) {
    mapSize++;
  }
  if (m_estimatedBudgetHasBeenSet) {
    mapSize++;
  }
  if (m_totalBudgetHasBeenSet) {
    mapSize++;
  }
  if (m_targetAudienceHasBeenSet) {
    mapSize++;
  }
  if (m_clientTokenHasBeenSet) {
    mapSize++;
  }
  if (m_startOnHasBeenSet) {
    mapSize++;
  }
  if (m_endOnHasBeenSet) {
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

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_senderEmailHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SenderEmail"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_senderEmail.c_str()));
  }

  if (m_privacyPolicyUrlHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PrivacyPolicyUrl"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_privacyPolicyUrl.c_str()));
  }

  if (m_partnerAddressHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PartnerAddress"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_partnerAddress.c_str()));
  }

  if (m_partnerBadgeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PartnerBadge"));
    m_partnerBadge.CborEncode(encoder);
  }

  if (m_emailTargetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EmailTarget"));
    m_emailTarget.CborEncode(encoder);
  }

  if (m_emailTargetEngagementGroupIdsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EmailTargetEngagementGroupIds"));
    encoder.WriteArrayStart(m_emailTargetEngagementGroupIds.size());
    for (const auto& item_0 : m_emailTargetEngagementGroupIds) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_socialConnectionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SocialConnections"));
    encoder.WriteMapStart(m_socialConnections.size());
    for (const auto& item_0 : m_socialConnections) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(PlatformMapper::GetNameForPlatform(item_0.first).c_str()));
      encoder.WriteArrayStart(item_0.second.size());
      for (const auto& item_1 : item_0.second) {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_1.c_str()));
      }
    }
  }

  if (m_estimatedBudgetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EstimatedBudget"));
    m_estimatedBudget.CborEncode(encoder);
  }

  if (m_totalBudgetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TotalBudget"));
    m_totalBudget.CborEncode(encoder);
  }

  if (m_targetAudienceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TargetAudience"));
    m_targetAudience.CborEncode(encoder);
  }

  if (m_clientTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClientToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientToken.c_str()));
  }

  if (m_startOnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StartOn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_startOn.c_str()));
  }

  if (m_endOnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EndOn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_endOn.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateCampaignRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
