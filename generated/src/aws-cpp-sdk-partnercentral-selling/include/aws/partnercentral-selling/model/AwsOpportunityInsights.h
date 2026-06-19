/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AwsProductsSpendInsightsBySource.h>
#include <aws/partnercentral-selling/model/EngagementScore.h>
#include <aws/partnercentral-selling/model/OpportunityQuality.h>
#include <aws/partnercentral-selling/model/Recommendation.h>

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
 * <p>Contains insights provided by AWS for the opportunity, offering
 * recommendations and analysis that can help the partner optimize their engagement
 * and strategy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AwsOpportunityInsights">AWS
 * API Reference</a></p>
 */
class AwsOpportunityInsights {
 public:
  AWS_PARTNERCENTRALSELLING_API AwsOpportunityInsights() = default;
  AWS_PARTNERCENTRALSELLING_API AwsOpportunityInsights(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API AwsOpportunityInsights& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Provides recommendations from AWS on the next best actions to take in order
   * to move the opportunity forward and increase the likelihood of success.</p>
   */
  inline const Aws::String& GetNextBestActions() const { return m_nextBestActions; }
  inline bool NextBestActionsHasBeenSet() const { return m_nextBestActionsHasBeenSet; }
  template <typename NextBestActionsT = Aws::String>
  void SetNextBestActions(NextBestActionsT&& value) {
    m_nextBestActionsHasBeenSet = true;
    m_nextBestActions = std::forward<NextBestActionsT>(value);
  }
  template <typename NextBestActionsT = Aws::String>
  AwsOpportunityInsights& WithNextBestActions(NextBestActionsT&& value) {
    SetNextBestActions(std::forward<NextBestActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Represents a score assigned by AWS to indicate the level of engagement and
   * potential success for the opportunity. This score helps partners prioritize
   * their efforts.</p>
   */
  inline EngagementScore GetEngagementScore() const { return m_engagementScore; }
  inline bool EngagementScoreHasBeenSet() const { return m_engagementScoreHasBeenSet; }
  inline void SetEngagementScore(EngagementScore value) {
    m_engagementScoreHasBeenSet = true;
    m_engagementScore = value;
  }
  inline AwsOpportunityInsights& WithEngagementScore(EngagementScore value) {
    SetEngagementScore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Source-separated spend insights that provide independent analysis for AWS
   * recommendations and partner estimates.</p>
   */
  inline const AwsProductsSpendInsightsBySource& GetAwsProductsSpendInsightsBySource() const { return m_awsProductsSpendInsightsBySource; }
  inline bool AwsProductsSpendInsightsBySourceHasBeenSet() const { return m_awsProductsSpendInsightsBySourceHasBeenSet; }
  template <typename AwsProductsSpendInsightsBySourceT = AwsProductsSpendInsightsBySource>
  void SetAwsProductsSpendInsightsBySource(AwsProductsSpendInsightsBySourceT&& value) {
    m_awsProductsSpendInsightsBySourceHasBeenSet = true;
    m_awsProductsSpendInsightsBySource = std::forward<AwsProductsSpendInsightsBySourceT>(value);
  }
  template <typename AwsProductsSpendInsightsBySourceT = AwsProductsSpendInsightsBySource>
  AwsOpportunityInsights& WithAwsProductsSpendInsightsBySource(AwsProductsSpendInsightsBySourceT&& value) {
    SetAwsProductsSpendInsightsBySource(std::forward<AwsProductsSpendInsightsBySourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Opportunity quality assessment. Null if not yet scored.</p>
   */
  inline const OpportunityQuality& GetOpportunityQuality() const { return m_opportunityQuality; }
  inline bool OpportunityQualityHasBeenSet() const { return m_opportunityQualityHasBeenSet; }
  template <typename OpportunityQualityT = OpportunityQuality>
  void SetOpportunityQuality(OpportunityQualityT&& value) {
    m_opportunityQualityHasBeenSet = true;
    m_opportunityQuality = std::forward<OpportunityQualityT>(value);
  }
  template <typename OpportunityQualityT = OpportunityQuality>
  AwsOpportunityInsights& WithOpportunityQuality(OpportunityQualityT&& value) {
    SetOpportunityQuality(std::forward<OpportunityQualityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of recommendations from various agent-driven sources.</p>
   */
  inline const Aws::Vector<Recommendation>& GetRecommendations() const { return m_recommendations; }
  inline bool RecommendationsHasBeenSet() const { return m_recommendationsHasBeenSet; }
  template <typename RecommendationsT = Aws::Vector<Recommendation>>
  void SetRecommendations(RecommendationsT&& value) {
    m_recommendationsHasBeenSet = true;
    m_recommendations = std::forward<RecommendationsT>(value);
  }
  template <typename RecommendationsT = Aws::Vector<Recommendation>>
  AwsOpportunityInsights& WithRecommendations(RecommendationsT&& value) {
    SetRecommendations(std::forward<RecommendationsT>(value));
    return *this;
  }
  template <typename RecommendationsT = Recommendation>
  AwsOpportunityInsights& AddRecommendations(RecommendationsT&& value) {
    m_recommendationsHasBeenSet = true;
    m_recommendations.emplace_back(std::forward<RecommendationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextBestActions;

  EngagementScore m_engagementScore{EngagementScore::NOT_SET};

  AwsProductsSpendInsightsBySource m_awsProductsSpendInsightsBySource;

  OpportunityQuality m_opportunityQuality;

  Aws::Vector<Recommendation> m_recommendations;
  bool m_nextBestActionsHasBeenSet = false;
  bool m_engagementScoreHasBeenSet = false;
  bool m_awsProductsSpendInsightsBySourceHasBeenSet = false;
  bool m_opportunityQualityHasBeenSet = false;
  bool m_recommendationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
