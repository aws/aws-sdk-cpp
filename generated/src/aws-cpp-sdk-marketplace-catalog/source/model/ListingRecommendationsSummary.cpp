/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/ListingRecommendationsSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

ListingRecommendationsSummary::ListingRecommendationsSummary(JsonView jsonValue) { *this = jsonValue; }

ListingRecommendationsSummary& ListingRecommendationsSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Tier")) {
    m_tier = ListingQualityTierMapper::GetListingQualityTierForName(jsonValue.GetString("Tier"));
    m_tierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EntityRevision")) {
    m_entityRevision = jsonValue.GetString("EntityRevision");
    m_entityRevisionHasBeenSet = true;
  }
  return *this;
}

JsonValue ListingRecommendationsSummary::Jsonize() const {
  JsonValue payload;

  if (m_tierHasBeenSet) {
    payload.WithString("Tier", ListingQualityTierMapper::GetNameForListingQualityTier(m_tier));
  }

  if (m_entityRevisionHasBeenSet) {
    payload.WithString("EntityRevision", m_entityRevision);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
