/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/OpportunitySearchOpportunityQuality.h>
#include <aws/partnercentral-selling/model/SearchEngagementScore.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Contains the insight scores (engagement score and opportunity quality score)
 * returned for an opportunity in search results.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/OpportunitySearchInsights">AWS
 * API Reference</a></p>
 */
class OpportunitySearchInsights {
 public:
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchInsights() = default;
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchInsights(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchInsights& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The level of engagement with the opportunity. The value is <code>High</code>,
   * <code>Medium</code>, or <code>Low</code>.</p>
   */
  inline SearchEngagementScore GetEngagementScore() const { return m_engagementScore; }
  inline bool EngagementScoreHasBeenSet() const { return m_engagementScoreHasBeenSet; }
  inline void SetEngagementScore(SearchEngagementScore value) {
    m_engagementScoreHasBeenSet = true;
    m_engagementScore = value;
  }
  inline OpportunitySearchInsights& WithEngagementScore(SearchEngagementScore value) {
    SetEngagementScore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The opportunity quality score. Null when the opportunity has not yet been
   * scored.</p>
   */
  inline const OpportunitySearchOpportunityQuality& GetOpportunityQuality() const { return m_opportunityQuality; }
  inline bool OpportunityQualityHasBeenSet() const { return m_opportunityQualityHasBeenSet; }
  template <typename OpportunityQualityT = OpportunitySearchOpportunityQuality>
  void SetOpportunityQuality(OpportunityQualityT&& value) {
    m_opportunityQualityHasBeenSet = true;
    m_opportunityQuality = std::forward<OpportunityQualityT>(value);
  }
  template <typename OpportunityQualityT = OpportunitySearchOpportunityQuality>
  OpportunitySearchInsights& WithOpportunityQuality(OpportunityQualityT&& value) {
    SetOpportunityQuality(std::forward<OpportunityQualityT>(value));
    return *this;
  }
  ///@}
 private:
  SearchEngagementScore m_engagementScore{SearchEngagementScore::NOT_SET};

  OpportunitySearchOpportunityQuality m_opportunityQuality;
  bool m_engagementScoreHasBeenSet = false;
  bool m_opportunityQualityHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
