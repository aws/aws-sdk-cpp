/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/FeatureRecommendations.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

FeatureRecommendations::FeatureRecommendations(JsonView jsonValue) { *this = jsonValue; }

FeatureRecommendations& FeatureRecommendations::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Recommendations")) {
    Aws::Utils::Array<JsonView> recommendationsJsonList = jsonValue.GetArray("Recommendations");
    for (unsigned recommendationsIndex = 0; recommendationsIndex < recommendationsJsonList.GetLength(); ++recommendationsIndex) {
      m_recommendations.push_back(recommendationsJsonList[recommendationsIndex].AsObject());
    }
    m_recommendationsHasBeenSet = true;
  }
  return *this;
}

JsonValue FeatureRecommendations::Jsonize() const {
  JsonValue payload;

  if (m_recommendationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> recommendationsJsonList(m_recommendations.size());
    for (unsigned recommendationsIndex = 0; recommendationsIndex < recommendationsJsonList.GetLength(); ++recommendationsIndex) {
      recommendationsJsonList[recommendationsIndex].AsObject(m_recommendations[recommendationsIndex].Jsonize());
    }
    payload.WithArray("Recommendations", std::move(recommendationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
