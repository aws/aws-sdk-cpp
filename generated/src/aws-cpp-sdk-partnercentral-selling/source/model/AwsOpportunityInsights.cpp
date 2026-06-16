/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/AwsOpportunityInsights.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

AwsOpportunityInsights::AwsOpportunityInsights(JsonView jsonValue) { *this = jsonValue; }

AwsOpportunityInsights& AwsOpportunityInsights::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("NextBestActions")) {
    m_nextBestActions = jsonValue.GetString("NextBestActions");
    m_nextBestActionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EngagementScore")) {
    m_engagementScore = EngagementScoreMapper::GetEngagementScoreForName(jsonValue.GetString("EngagementScore"));
    m_engagementScoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AwsProductsSpendInsightsBySource")) {
    m_awsProductsSpendInsightsBySource = jsonValue.GetObject("AwsProductsSpendInsightsBySource");
    m_awsProductsSpendInsightsBySourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OpportunityQuality")) {
    m_opportunityQuality = jsonValue.GetObject("OpportunityQuality");
    m_opportunityQualityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Recommendations")) {
    Aws::Utils::Array<JsonView> recommendationsJsonList = jsonValue.GetArray("Recommendations");
    for (unsigned recommendationsIndex = 0; recommendationsIndex < recommendationsJsonList.GetLength(); ++recommendationsIndex) {
      m_recommendations.push_back(recommendationsJsonList[recommendationsIndex].AsObject());
    }
    m_recommendationsHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsOpportunityInsights::Jsonize() const {
  JsonValue payload;

  if (m_nextBestActionsHasBeenSet) {
    payload.WithString("NextBestActions", m_nextBestActions);
  }

  if (m_engagementScoreHasBeenSet) {
    payload.WithString("EngagementScore", EngagementScoreMapper::GetNameForEngagementScore(m_engagementScore));
  }

  if (m_awsProductsSpendInsightsBySourceHasBeenSet) {
    payload.WithObject("AwsProductsSpendInsightsBySource", m_awsProductsSpendInsightsBySource.Jsonize());
  }

  if (m_opportunityQualityHasBeenSet) {
    payload.WithObject("OpportunityQuality", m_opportunityQuality.Jsonize());
  }

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
}  // namespace PartnerCentralSelling
}  // namespace Aws
