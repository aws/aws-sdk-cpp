/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/OpportunitySearchInsights.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

OpportunitySearchInsights::OpportunitySearchInsights(JsonView jsonValue) { *this = jsonValue; }

OpportunitySearchInsights& OpportunitySearchInsights::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EngagementScore")) {
    m_engagementScore = SearchEngagementScoreMapper::GetSearchEngagementScoreForName(jsonValue.GetString("EngagementScore"));
    m_engagementScoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OpportunityQuality")) {
    m_opportunityQuality = jsonValue.GetObject("OpportunityQuality");
    m_opportunityQualityHasBeenSet = true;
  }
  return *this;
}

JsonValue OpportunitySearchInsights::Jsonize() const {
  JsonValue payload;

  if (m_engagementScoreHasBeenSet) {
    payload.WithString("EngagementScore", SearchEngagementScoreMapper::GetNameForSearchEngagementScore(m_engagementScore));
  }

  if (m_opportunityQualityHasBeenSet) {
    payload.WithObject("OpportunityQuality", m_opportunityQuality.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
