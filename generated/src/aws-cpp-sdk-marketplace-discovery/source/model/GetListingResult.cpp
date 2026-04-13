/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/marketplace-discovery/model/GetListingResult.h>

#include <utility>

using namespace Aws::MarketplaceDiscovery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetListingResult::GetListingResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetListingResult& GetListingResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("associatedEntities")) {
    Aws::Utils::Array<JsonView> associatedEntitiesJsonList = jsonValue.GetArray("associatedEntities");
    for (unsigned associatedEntitiesIndex = 0; associatedEntitiesIndex < associatedEntitiesJsonList.GetLength();
         ++associatedEntitiesIndex) {
      m_associatedEntities.push_back(associatedEntitiesJsonList[associatedEntitiesIndex].AsObject());
    }
    m_associatedEntitiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("badges")) {
    Aws::Utils::Array<JsonView> badgesJsonList = jsonValue.GetArray("badges");
    for (unsigned badgesIndex = 0; badgesIndex < badgesJsonList.GetLength(); ++badgesIndex) {
      m_badges.push_back(badgesJsonList[badgesIndex].AsObject());
    }
    m_badgesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("catalog")) {
    m_catalog = jsonValue.GetString("catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("categories")) {
    Aws::Utils::Array<JsonView> categoriesJsonList = jsonValue.GetArray("categories");
    for (unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex) {
      m_categories.push_back(categoriesJsonList[categoriesIndex].AsObject());
    }
    m_categoriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fulfillmentOptionSummaries")) {
    Aws::Utils::Array<JsonView> fulfillmentOptionSummariesJsonList = jsonValue.GetArray("fulfillmentOptionSummaries");
    for (unsigned fulfillmentOptionSummariesIndex = 0; fulfillmentOptionSummariesIndex < fulfillmentOptionSummariesJsonList.GetLength();
         ++fulfillmentOptionSummariesIndex) {
      m_fulfillmentOptionSummaries.push_back(fulfillmentOptionSummariesJsonList[fulfillmentOptionSummariesIndex].AsObject());
    }
    m_fulfillmentOptionSummariesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("highlights")) {
    Aws::Utils::Array<JsonView> highlightsJsonList = jsonValue.GetArray("highlights");
    for (unsigned highlightsIndex = 0; highlightsIndex < highlightsJsonList.GetLength(); ++highlightsIndex) {
      m_highlights.push_back(highlightsJsonList[highlightsIndex].AsString());
    }
    m_highlightsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("integrationGuide")) {
    m_integrationGuide = jsonValue.GetString("integrationGuide");
    m_integrationGuideHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listingId")) {
    m_listingId = jsonValue.GetString("listingId");
    m_listingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listingName")) {
    m_listingName = jsonValue.GetString("listingName");
    m_listingNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logoThumbnailUrl")) {
    m_logoThumbnailUrl = jsonValue.GetString("logoThumbnailUrl");
    m_logoThumbnailUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("longDescription")) {
    m_longDescription = jsonValue.GetString("longDescription");
    m_longDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pricingModels")) {
    Aws::Utils::Array<JsonView> pricingModelsJsonList = jsonValue.GetArray("pricingModels");
    for (unsigned pricingModelsIndex = 0; pricingModelsIndex < pricingModelsJsonList.GetLength(); ++pricingModelsIndex) {
      m_pricingModels.push_back(pricingModelsJsonList[pricingModelsIndex].AsObject());
    }
    m_pricingModelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pricingUnits")) {
    Aws::Utils::Array<JsonView> pricingUnitsJsonList = jsonValue.GetArray("pricingUnits");
    for (unsigned pricingUnitsIndex = 0; pricingUnitsIndex < pricingUnitsJsonList.GetLength(); ++pricingUnitsIndex) {
      m_pricingUnits.push_back(pricingUnitsJsonList[pricingUnitsIndex].AsObject());
    }
    m_pricingUnitsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("promotionalMedia")) {
    Aws::Utils::Array<JsonView> promotionalMediaJsonList = jsonValue.GetArray("promotionalMedia");
    for (unsigned promotionalMediaIndex = 0; promotionalMediaIndex < promotionalMediaJsonList.GetLength(); ++promotionalMediaIndex) {
      m_promotionalMedia.push_back(promotionalMediaJsonList[promotionalMediaIndex].AsObject());
    }
    m_promotionalMediaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("publisher")) {
    m_publisher = jsonValue.GetObject("publisher");
    m_publisherHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resources")) {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("resources");
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reviewSummary")) {
    m_reviewSummary = jsonValue.GetObject("reviewSummary");
    m_reviewSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sellerEngagements")) {
    Aws::Utils::Array<JsonView> sellerEngagementsJsonList = jsonValue.GetArray("sellerEngagements");
    for (unsigned sellerEngagementsIndex = 0; sellerEngagementsIndex < sellerEngagementsJsonList.GetLength(); ++sellerEngagementsIndex) {
      m_sellerEngagements.push_back(sellerEngagementsJsonList[sellerEngagementsIndex].AsObject());
    }
    m_sellerEngagementsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("shortDescription")) {
    m_shortDescription = jsonValue.GetString("shortDescription");
    m_shortDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("useCases")) {
    Aws::Utils::Array<JsonView> useCasesJsonList = jsonValue.GetArray("useCases");
    for (unsigned useCasesIndex = 0; useCasesIndex < useCasesJsonList.GetLength(); ++useCasesIndex) {
      m_useCases.push_back(useCasesJsonList[useCasesIndex].AsObject());
    }
    m_useCasesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
