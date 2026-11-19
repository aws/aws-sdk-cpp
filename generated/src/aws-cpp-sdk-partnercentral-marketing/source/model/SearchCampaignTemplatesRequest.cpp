/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/model/SearchCampaignTemplatesRequest.h>

#include <utility>

using namespace Aws::PartnerCentralMarketing::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String SearchCampaignTemplatesRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_catalogHasBeenSet) {
    mapSize++;
  }
  if (m_searchTextHasBeenSet) {
    mapSize++;
  }
  if (m_industryHasBeenSet) {
    mapSize++;
  }
  if (m_useCaseHasBeenSet) {
    mapSize++;
  }
  if (m_languageHasBeenSet) {
    mapSize++;
  }
  if (m_awsServicesHasBeenSet) {
    mapSize++;
  }
  if (m_customerSegmentsHasBeenSet) {
    mapSize++;
  }
  if (m_themesHasBeenSet) {
    mapSize++;
  }
  if (m_collectionHasBeenSet) {
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
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(CatalogMapper::GetNameForCatalog(m_catalog).c_str()));
  }

  if (m_searchTextHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SearchText"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_searchText.c_str()));
  }

  if (m_industryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Industry"));
    encoder.WriteArrayStart(m_industry.size());
    for (const auto& item_0 : m_industry) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(IndustryMapper::GetNameForIndustry(item_0).c_str()));
    }
  }

  if (m_useCaseHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UseCase"));
    encoder.WriteArrayStart(m_useCase.size());
    for (const auto& item_0 : m_useCase) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_languageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Language"));
    encoder.WriteArrayStart(m_language.size());
    for (const auto& item_0 : m_language) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(AssetLanguageMapper::GetNameForAssetLanguage(item_0).c_str()));
    }
  }

  if (m_awsServicesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AwsServices"));
    encoder.WriteArrayStart(m_awsServices.size());
    for (const auto& item_0 : m_awsServices) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_customerSegmentsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CustomerSegments"));
    encoder.WriteArrayStart(m_customerSegments.size());
    for (const auto& item_0 : m_customerSegments) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(CustomerSegmentMapper::GetNameForCustomerSegment(item_0).c_str()));
    }
  }

  if (m_themesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Themes"));
    encoder.WriteArrayStart(m_themes.size());
    for (const auto& item_0 : m_themes) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(ThemeMapper::GetNameForTheme(item_0).c_str()));
    }
  }

  if (m_collectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Collection"));
    encoder.WriteArrayStart(m_collection.size());
    for (const auto& item_0 : m_collection) {
      encoder.WriteText(
          Aws::Crt::ByteCursorFromCString(CampaignTemplateCollectionMapper::GetNameForCampaignTemplateCollection(item_0).c_str()));
    }
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

Aws::Http::HeaderValueCollection SearchCampaignTemplatesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
