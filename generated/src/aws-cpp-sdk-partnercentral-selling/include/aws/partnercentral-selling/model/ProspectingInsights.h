/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

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
 * <p>Contains insights that AI generates from the prospecting analysis. These
 * insights include marketplace engagement scoring, solution fit assessments, and
 * solution categorization for the prospected customer.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ProspectingInsights">AWS
 * API Reference</a></p>
 */
class ProspectingInsights {
 public:
  AWS_PARTNERCENTRALSELLING_API ProspectingInsights() = default;
  AWS_PARTNERCENTRALSELLING_API ProspectingInsights(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API ProspectingInsights& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A score that indicates the prospected customer's level of engagement with AWS
   * Marketplace. Valid values are <code>High</code>, <code>Medium</code>, and
   * <code>Low</code>.</p>
   */
  inline const Aws::String& GetMarketplaceEngagementScore() const { return m_marketplaceEngagementScore; }
  inline bool MarketplaceEngagementScoreHasBeenSet() const { return m_marketplaceEngagementScoreHasBeenSet; }
  template <typename MarketplaceEngagementScoreT = Aws::String>
  void SetMarketplaceEngagementScore(MarketplaceEngagementScoreT&& value) {
    m_marketplaceEngagementScoreHasBeenSet = true;
    m_marketplaceEngagementScore = std::forward<MarketplaceEngagementScoreT>(value);
  }
  template <typename MarketplaceEngagementScoreT = Aws::String>
  ProspectingInsights& WithMarketplaceEngagementScore(MarketplaceEngagementScoreT&& value) {
    SetMarketplaceEngagementScore(std::forward<MarketplaceEngagementScoreT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A score that indicates how well the partner's solution fits the prospected
   * customer's needs.</p>
   */
  inline const Aws::String& GetSolutionScore() const { return m_solutionScore; }
  inline bool SolutionScoreHasBeenSet() const { return m_solutionScoreHasBeenSet; }
  template <typename SolutionScoreT = Aws::String>
  void SetSolutionScore(SolutionScoreT&& value) {
    m_solutionScoreHasBeenSet = true;
    m_solutionScore = std::forward<SolutionScoreT>(value);
  }
  template <typename SolutionScoreT = Aws::String>
  ProspectingInsights& WithSolutionScore(SolutionScoreT&& value) {
    SetSolutionScore(std::forward<SolutionScoreT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The primary solution category classification for the prospected customer.
   * This indicates the type of solution that best addresses their needs.</p>
   */
  inline const Aws::String& GetSolutionCategory() const { return m_solutionCategory; }
  inline bool SolutionCategoryHasBeenSet() const { return m_solutionCategoryHasBeenSet; }
  template <typename SolutionCategoryT = Aws::String>
  void SetSolutionCategory(SolutionCategoryT&& value) {
    m_solutionCategoryHasBeenSet = true;
    m_solutionCategory = std::forward<SolutionCategoryT>(value);
  }
  template <typename SolutionCategoryT = Aws::String>
  ProspectingInsights& WithSolutionCategory(SolutionCategoryT&& value) {
    SetSolutionCategory(std::forward<SolutionCategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The solution sub-category classification for the prospected customer. This
   * provides more granular categorization of the recommended solution type.</p>
   */
  inline const Aws::String& GetSolutionSubCategory() const { return m_solutionSubCategory; }
  inline bool SolutionSubCategoryHasBeenSet() const { return m_solutionSubCategoryHasBeenSet; }
  template <typename SolutionSubCategoryT = Aws::String>
  void SetSolutionSubCategory(SolutionSubCategoryT&& value) {
    m_solutionSubCategoryHasBeenSet = true;
    m_solutionSubCategory = std::forward<SolutionSubCategoryT>(value);
  }
  template <typename SolutionSubCategoryT = Aws::String>
  ProspectingInsights& WithSolutionSubCategory(SolutionSubCategoryT&& value) {
    SetSolutionSubCategory(std::forward<SolutionSubCategoryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_marketplaceEngagementScore;

  Aws::String m_solutionScore;

  Aws::String m_solutionCategory;

  Aws::String m_solutionSubCategory;
  bool m_marketplaceEngagementScoreHasBeenSet = false;
  bool m_solutionScoreHasBeenSet = false;
  bool m_solutionCategoryHasBeenSet = false;
  bool m_solutionSubCategoryHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
