/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/ControlSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

ControlSummary::ControlSummary(JsonView jsonValue) { *this = jsonValue; }

ControlSummary& ControlSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ListingRecommendations")) {
    m_listingRecommendations = jsonValue.GetObject("ListingRecommendations");
    m_listingRecommendationsHasBeenSet = true;
  }
  return *this;
}

JsonValue ControlSummary::Jsonize() const {
  JsonValue payload;

  if (m_listingRecommendationsHasBeenSet) {
    payload.WithObject("ListingRecommendations", m_listingRecommendations.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
