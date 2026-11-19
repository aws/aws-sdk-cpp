/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/AwsEnrichmentInsights.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

AwsEnrichmentInsights::AwsEnrichmentInsights(JsonView jsonValue) { *this = jsonValue; }

AwsEnrichmentInsights& AwsEnrichmentInsights::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MarketplaceEngagementScore")) {
    m_marketplaceEngagementScore = jsonValue.GetString("MarketplaceEngagementScore");
    m_marketplaceEngagementScoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SolutionCategory")) {
    m_solutionCategory = jsonValue.GetString("SolutionCategory");
    m_solutionCategoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SolutionScore")) {
    m_solutionScore = jsonValue.GetString("SolutionScore");
    m_solutionScoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SolutionSubCategory")) {
    m_solutionSubCategory = jsonValue.GetString("SolutionSubCategory");
    m_solutionSubCategoryHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsEnrichmentInsights::Jsonize() const {
  JsonValue payload;

  if (m_marketplaceEngagementScoreHasBeenSet) {
    payload.WithString("MarketplaceEngagementScore", m_marketplaceEngagementScore);
  }

  if (m_solutionCategoryHasBeenSet) {
    payload.WithString("SolutionCategory", m_solutionCategory);
  }

  if (m_solutionScoreHasBeenSet) {
    payload.WithString("SolutionScore", m_solutionScore);
  }

  if (m_solutionSubCategoryHasBeenSet) {
    payload.WithString("SolutionSubCategory", m_solutionSubCategory);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
