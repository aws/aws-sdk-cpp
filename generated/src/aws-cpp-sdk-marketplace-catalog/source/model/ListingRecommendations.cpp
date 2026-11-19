/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/ListingRecommendations.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

ListingRecommendations::ListingRecommendations(JsonView jsonValue) { *this = jsonValue; }

ListingRecommendations& ListingRecommendations::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProductContentRecommendations")) {
    m_productContentRecommendations = jsonValue.GetObject("ProductContentRecommendations");
    m_productContentRecommendationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SolutionContentRecommendations")) {
    m_solutionContentRecommendations = jsonValue.GetObject("SolutionContentRecommendations");
    m_solutionContentRecommendationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FeatureRecommendations")) {
    m_featureRecommendations = jsonValue.GetObject("FeatureRecommendations");
    m_featureRecommendationsHasBeenSet = true;
  }
  return *this;
}

JsonValue ListingRecommendations::Jsonize() const {
  JsonValue payload;

  if (m_productContentRecommendationsHasBeenSet) {
    payload.WithObject("ProductContentRecommendations", m_productContentRecommendations.Jsonize());
  }

  if (m_solutionContentRecommendationsHasBeenSet) {
    payload.WithObject("SolutionContentRecommendations", m_solutionContentRecommendations.Jsonize());
  }

  if (m_featureRecommendationsHasBeenSet) {
    payload.WithObject("FeatureRecommendations", m_featureRecommendations.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
