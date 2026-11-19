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
 * <p>Values that we compute about the matched customer, such as the marketplace
 * engagement score and the solution propensity. These differ from the recorded
 * facts in <code>Customer</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AwsEnrichmentInsights">AWS
 * API Reference</a></p>
 */
class AwsEnrichmentInsights {
 public:
  AWS_PARTNERCENTRALSELLING_API AwsEnrichmentInsights() = default;
  AWS_PARTNERCENTRALSELLING_API AwsEnrichmentInsights(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API AwsEnrichmentInsights& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The level of engagement of the customer with AWS Marketplace. Valid values
   * are <code>High</code>, <code>Medium</code>, and <code>Low</code>.</p>
   */
  inline const Aws::String& GetMarketplaceEngagementScore() const { return m_marketplaceEngagementScore; }
  inline bool MarketplaceEngagementScoreHasBeenSet() const { return m_marketplaceEngagementScoreHasBeenSet; }
  template <typename MarketplaceEngagementScoreT = Aws::String>
  void SetMarketplaceEngagementScore(MarketplaceEngagementScoreT&& value) {
    m_marketplaceEngagementScoreHasBeenSet = true;
    m_marketplaceEngagementScore = std::forward<MarketplaceEngagementScoreT>(value);
  }
  template <typename MarketplaceEngagementScoreT = Aws::String>
  AwsEnrichmentInsights& WithMarketplaceEngagementScore(MarketplaceEngagementScoreT&& value) {
    SetMarketplaceEngagementScore(std::forward<MarketplaceEngagementScoreT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category of the solution that AWS recommends for the customer.</p>
   */
  inline const Aws::String& GetSolutionCategory() const { return m_solutionCategory; }
  inline bool SolutionCategoryHasBeenSet() const { return m_solutionCategoryHasBeenSet; }
  template <typename SolutionCategoryT = Aws::String>
  void SetSolutionCategory(SolutionCategoryT&& value) {
    m_solutionCategoryHasBeenSet = true;
    m_solutionCategory = std::forward<SolutionCategoryT>(value);
  }
  template <typename SolutionCategoryT = Aws::String>
  AwsEnrichmentInsights& WithSolutionCategory(SolutionCategoryT&& value) {
    SetSolutionCategory(std::forward<SolutionCategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The likelihood that the customer adopts the recommended solution. Valid
   * values are <code>High</code>, <code>Medium</code>, and <code>Low</code>.</p>
   */
  inline const Aws::String& GetSolutionScore() const { return m_solutionScore; }
  inline bool SolutionScoreHasBeenSet() const { return m_solutionScoreHasBeenSet; }
  template <typename SolutionScoreT = Aws::String>
  void SetSolutionScore(SolutionScoreT&& value) {
    m_solutionScoreHasBeenSet = true;
    m_solutionScore = std::forward<SolutionScoreT>(value);
  }
  template <typename SolutionScoreT = Aws::String>
  AwsEnrichmentInsights& WithSolutionScore(SolutionScoreT&& value) {
    SetSolutionScore(std::forward<SolutionScoreT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sub-category of the solution that AWS recommends for the customer.</p>
   */
  inline const Aws::String& GetSolutionSubCategory() const { return m_solutionSubCategory; }
  inline bool SolutionSubCategoryHasBeenSet() const { return m_solutionSubCategoryHasBeenSet; }
  template <typename SolutionSubCategoryT = Aws::String>
  void SetSolutionSubCategory(SolutionSubCategoryT&& value) {
    m_solutionSubCategoryHasBeenSet = true;
    m_solutionSubCategory = std::forward<SolutionSubCategoryT>(value);
  }
  template <typename SolutionSubCategoryT = Aws::String>
  AwsEnrichmentInsights& WithSolutionSubCategory(SolutionSubCategoryT&& value) {
    SetSolutionSubCategory(std::forward<SolutionSubCategoryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_marketplaceEngagementScore;

  Aws::String m_solutionCategory;

  Aws::String m_solutionScore;

  Aws::String m_solutionSubCategory;
  bool m_marketplaceEngagementScoreHasBeenSet = false;
  bool m_solutionCategoryHasBeenSet = false;
  bool m_solutionScoreHasBeenSet = false;
  bool m_solutionSubCategoryHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
