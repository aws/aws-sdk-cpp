/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/ListingQualitySummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

ListingQualitySummary::ListingQualitySummary(JsonView jsonValue) { *this = jsonValue; }

ListingQualitySummary& ListingQualitySummary::operator=(JsonView jsonValue) {
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

JsonValue ListingQualitySummary::Jsonize() const {
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
