/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/ReviewSourceSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

ReviewSourceSummary::ReviewSourceSummary(JsonView jsonValue) { *this = jsonValue; }

ReviewSourceSummary& ReviewSourceSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceName")) {
    m_sourceName = jsonValue.GetString("sourceName");
    m_sourceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceId")) {
    m_sourceId = ReviewSourceIdMapper::GetReviewSourceIdForName(jsonValue.GetString("sourceId"));
    m_sourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceUrl")) {
    m_sourceUrl = jsonValue.GetString("sourceUrl");
    m_sourceUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("averageRating")) {
    m_averageRating = jsonValue.GetString("averageRating");
    m_averageRatingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalReviews")) {
    m_totalReviews = jsonValue.GetInt64("totalReviews");
    m_totalReviewsHasBeenSet = true;
  }
  return *this;
}

JsonValue ReviewSourceSummary::Jsonize() const {
  JsonValue payload;

  if (m_sourceNameHasBeenSet) {
    payload.WithString("sourceName", m_sourceName);
  }

  if (m_sourceIdHasBeenSet) {
    payload.WithString("sourceId", ReviewSourceIdMapper::GetNameForReviewSourceId(m_sourceId));
  }

  if (m_sourceUrlHasBeenSet) {
    payload.WithString("sourceUrl", m_sourceUrl);
  }

  if (m_averageRatingHasBeenSet) {
    payload.WithString("averageRating", m_averageRating);
  }

  if (m_totalReviewsHasBeenSet) {
    payload.WithInt64("totalReviews", m_totalReviews);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
