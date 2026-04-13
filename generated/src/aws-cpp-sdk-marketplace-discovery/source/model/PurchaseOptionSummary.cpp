/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/PurchaseOptionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

PurchaseOptionSummary::PurchaseOptionSummary(JsonView jsonValue) { *this = jsonValue; }

PurchaseOptionSummary& PurchaseOptionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("purchaseOptionId")) {
    m_purchaseOptionId = jsonValue.GetString("purchaseOptionId");
    m_purchaseOptionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("catalog")) {
    m_catalog = jsonValue.GetString("catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("purchaseOptionType")) {
    m_purchaseOptionType = PurchaseOptionTypeMapper::GetPurchaseOptionTypeForName(jsonValue.GetString("purchaseOptionType"));
    m_purchaseOptionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("purchaseOptionName")) {
    m_purchaseOptionName = jsonValue.GetString("purchaseOptionName");
    m_purchaseOptionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availableFromTime")) {
    m_availableFromTime = jsonValue.GetDouble("availableFromTime");
    m_availableFromTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expirationTime")) {
    m_expirationTime = jsonValue.GetDouble("expirationTime");
    m_expirationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sellerOfRecord")) {
    m_sellerOfRecord = jsonValue.GetObject("sellerOfRecord");
    m_sellerOfRecordHasBeenSet = true;
  }
  if (jsonValue.ValueExists("badges")) {
    Aws::Utils::Array<JsonView> badgesJsonList = jsonValue.GetArray("badges");
    for (unsigned badgesIndex = 0; badgesIndex < badgesJsonList.GetLength(); ++badgesIndex) {
      m_badges.push_back(badgesJsonList[badgesIndex].AsObject());
    }
    m_badgesHasBeenSet = true;
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

JsonValue PurchaseOptionSummary::Jsonize() const {
  JsonValue payload;

  if (m_purchaseOptionIdHasBeenSet) {
    payload.WithString("purchaseOptionId", m_purchaseOptionId);
  }

  if (m_catalogHasBeenSet) {
    payload.WithString("catalog", m_catalog);
  }

  if (m_purchaseOptionTypeHasBeenSet) {
    payload.WithString("purchaseOptionType", PurchaseOptionTypeMapper::GetNameForPurchaseOptionType(m_purchaseOptionType));
  }

  if (m_purchaseOptionNameHasBeenSet) {
    payload.WithString("purchaseOptionName", m_purchaseOptionName);
  }

  if (m_availableFromTimeHasBeenSet) {
    payload.WithDouble("availableFromTime", m_availableFromTime.SecondsWithMSPrecision());
  }

  if (m_expirationTimeHasBeenSet) {
    payload.WithDouble("expirationTime", m_expirationTime.SecondsWithMSPrecision());
  }

  if (m_sellerOfRecordHasBeenSet) {
    payload.WithObject("sellerOfRecord", m_sellerOfRecord.Jsonize());
  }

  if (m_badgesHasBeenSet) {
    Aws::Utils::Array<JsonValue> badgesJsonList(m_badges.size());
    for (unsigned badgesIndex = 0; badgesIndex < badgesJsonList.GetLength(); ++badgesIndex) {
      badgesJsonList[badgesIndex].AsObject(m_badges[badgesIndex].Jsonize());
    }
    payload.WithArray("badges", std::move(badgesJsonList));
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
