/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/ListingSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

ListingSummary::ListingSummary(JsonView jsonValue) { *this = jsonValue; }

ListingSummary& ListingSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("listingId")) {
    m_listingId = jsonValue.GetString("listingId");
    m_listingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listingName")) {
    m_listingName = jsonValue.GetString("listingName");
    m_listingNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("publisher")) {
    m_publisher = jsonValue.GetObject("publisher");
    m_publisherHasBeenSet = true;
  }
  if (jsonValue.ValueExists("catalog")) {
    m_catalog = jsonValue.GetString("catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("shortDescription")) {
    m_shortDescription = jsonValue.GetString("shortDescription");
    m_shortDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logoThumbnailUrl")) {
    m_logoThumbnailUrl = jsonValue.GetString("logoThumbnailUrl");
    m_logoThumbnailUrlHasBeenSet = true;
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
  if (jsonValue.ValueExists("badges")) {
    Aws::Utils::Array<JsonView> badgesJsonList = jsonValue.GetArray("badges");
    for (unsigned badgesIndex = 0; badgesIndex < badgesJsonList.GetLength(); ++badgesIndex) {
      m_badges.push_back(badgesJsonList[badgesIndex].AsObject());
    }
    m_badgesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reviewSummary")) {
    m_reviewSummary = jsonValue.GetObject("reviewSummary");
    m_reviewSummaryHasBeenSet = true;
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
  if (jsonValue.ValueExists("associatedEntities")) {
    Aws::Utils::Array<JsonView> associatedEntitiesJsonList = jsonValue.GetArray("associatedEntities");
    for (unsigned associatedEntitiesIndex = 0; associatedEntitiesIndex < associatedEntitiesJsonList.GetLength();
         ++associatedEntitiesIndex) {
      m_associatedEntities.push_back(associatedEntitiesJsonList[associatedEntitiesIndex].AsObject());
    }
    m_associatedEntitiesHasBeenSet = true;
  }
  return *this;
}

JsonValue ListingSummary::Jsonize() const {
  JsonValue payload;

  if (m_listingIdHasBeenSet) {
    payload.WithString("listingId", m_listingId);
  }

  if (m_listingNameHasBeenSet) {
    payload.WithString("listingName", m_listingName);
  }

  if (m_publisherHasBeenSet) {
    payload.WithObject("publisher", m_publisher.Jsonize());
  }

  if (m_catalogHasBeenSet) {
    payload.WithString("catalog", m_catalog);
  }

  if (m_shortDescriptionHasBeenSet) {
    payload.WithString("shortDescription", m_shortDescription);
  }

  if (m_logoThumbnailUrlHasBeenSet) {
    payload.WithString("logoThumbnailUrl", m_logoThumbnailUrl);
  }

  if (m_categoriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> categoriesJsonList(m_categories.size());
    for (unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex) {
      categoriesJsonList[categoriesIndex].AsObject(m_categories[categoriesIndex].Jsonize());
    }
    payload.WithArray("categories", std::move(categoriesJsonList));
  }

  if (m_fulfillmentOptionSummariesHasBeenSet) {
    Aws::Utils::Array<JsonValue> fulfillmentOptionSummariesJsonList(m_fulfillmentOptionSummaries.size());
    for (unsigned fulfillmentOptionSummariesIndex = 0; fulfillmentOptionSummariesIndex < fulfillmentOptionSummariesJsonList.GetLength();
         ++fulfillmentOptionSummariesIndex) {
      fulfillmentOptionSummariesJsonList[fulfillmentOptionSummariesIndex].AsObject(
          m_fulfillmentOptionSummaries[fulfillmentOptionSummariesIndex].Jsonize());
    }
    payload.WithArray("fulfillmentOptionSummaries", std::move(fulfillmentOptionSummariesJsonList));
  }

  if (m_badgesHasBeenSet) {
    Aws::Utils::Array<JsonValue> badgesJsonList(m_badges.size());
    for (unsigned badgesIndex = 0; badgesIndex < badgesJsonList.GetLength(); ++badgesIndex) {
      badgesJsonList[badgesIndex].AsObject(m_badges[badgesIndex].Jsonize());
    }
    payload.WithArray("badges", std::move(badgesJsonList));
  }

  if (m_reviewSummaryHasBeenSet) {
    payload.WithObject("reviewSummary", m_reviewSummary.Jsonize());
  }

  if (m_pricingModelsHasBeenSet) {
    Aws::Utils::Array<JsonValue> pricingModelsJsonList(m_pricingModels.size());
    for (unsigned pricingModelsIndex = 0; pricingModelsIndex < pricingModelsJsonList.GetLength(); ++pricingModelsIndex) {
      pricingModelsJsonList[pricingModelsIndex].AsObject(m_pricingModels[pricingModelsIndex].Jsonize());
    }
    payload.WithArray("pricingModels", std::move(pricingModelsJsonList));
  }

  if (m_pricingUnitsHasBeenSet) {
    Aws::Utils::Array<JsonValue> pricingUnitsJsonList(m_pricingUnits.size());
    for (unsigned pricingUnitsIndex = 0; pricingUnitsIndex < pricingUnitsJsonList.GetLength(); ++pricingUnitsIndex) {
      pricingUnitsJsonList[pricingUnitsIndex].AsObject(m_pricingUnits[pricingUnitsIndex].Jsonize());
    }
    payload.WithArray("pricingUnits", std::move(pricingUnitsJsonList));
  }

  if (m_associatedEntitiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> associatedEntitiesJsonList(m_associatedEntities.size());
    for (unsigned associatedEntitiesIndex = 0; associatedEntitiesIndex < associatedEntitiesJsonList.GetLength();
         ++associatedEntitiesIndex) {
      associatedEntitiesJsonList[associatedEntitiesIndex].AsObject(m_associatedEntities[associatedEntitiesIndex].Jsonize());
    }
    payload.WithArray("associatedEntities", std::move(associatedEntitiesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
