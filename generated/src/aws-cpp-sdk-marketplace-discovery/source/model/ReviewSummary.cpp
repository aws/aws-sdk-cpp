/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/ReviewSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

ReviewSummary::ReviewSummary(JsonView jsonValue) { *this = jsonValue; }

ReviewSummary& ReviewSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("reviewSourceSummaries")) {
    Aws::Utils::Array<JsonView> reviewSourceSummariesJsonList = jsonValue.GetArray("reviewSourceSummaries");
    for (unsigned reviewSourceSummariesIndex = 0; reviewSourceSummariesIndex < reviewSourceSummariesJsonList.GetLength();
         ++reviewSourceSummariesIndex) {
      m_reviewSourceSummaries.push_back(reviewSourceSummariesJsonList[reviewSourceSummariesIndex].AsObject());
    }
    m_reviewSourceSummariesHasBeenSet = true;
  }
  return *this;
}

JsonValue ReviewSummary::Jsonize() const {
  JsonValue payload;

  if (m_reviewSourceSummariesHasBeenSet) {
    Aws::Utils::Array<JsonValue> reviewSourceSummariesJsonList(m_reviewSourceSummaries.size());
    for (unsigned reviewSourceSummariesIndex = 0; reviewSourceSummariesIndex < reviewSourceSummariesJsonList.GetLength();
         ++reviewSourceSummariesIndex) {
      reviewSourceSummariesJsonList[reviewSourceSummariesIndex].AsObject(m_reviewSourceSummaries[reviewSourceSummariesIndex].Jsonize());
    }
    payload.WithArray("reviewSourceSummaries", std::move(reviewSourceSummariesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
