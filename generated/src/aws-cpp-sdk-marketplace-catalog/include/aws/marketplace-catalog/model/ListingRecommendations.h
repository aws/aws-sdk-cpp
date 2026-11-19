/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/FeatureRecommendations.h>
#include <aws/marketplace-catalog/model/ProductContentRecommendations.h>
#include <aws/marketplace-catalog/model/SolutionContentRecommendations.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {

/**
 * <p>The recommendations that a listing recommendations control produced. Exactly
 * one member is set, corresponding to the control: content recommendations for a
 * product, content recommendations for a solution, or feature
 * recommendations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ListingRecommendations">AWS
 * API Reference</a></p>
 */
class ListingRecommendations {
 public:
  AWS_MARKETPLACECATALOG_API ListingRecommendations() = default;
  AWS_MARKETPLACECATALOG_API ListingRecommendations(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API ListingRecommendations& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The content recommendations for a product listing.</p>
   */
  inline const ProductContentRecommendations& GetProductContentRecommendations() const { return m_productContentRecommendations; }
  inline bool ProductContentRecommendationsHasBeenSet() const { return m_productContentRecommendationsHasBeenSet; }
  template <typename ProductContentRecommendationsT = ProductContentRecommendations>
  void SetProductContentRecommendations(ProductContentRecommendationsT&& value) {
    m_productContentRecommendationsHasBeenSet = true;
    m_productContentRecommendations = std::forward<ProductContentRecommendationsT>(value);
  }
  template <typename ProductContentRecommendationsT = ProductContentRecommendations>
  ListingRecommendations& WithProductContentRecommendations(ProductContentRecommendationsT&& value) {
    SetProductContentRecommendations(std::forward<ProductContentRecommendationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content recommendations for a solution listing.</p>
   */
  inline const SolutionContentRecommendations& GetSolutionContentRecommendations() const { return m_solutionContentRecommendations; }
  inline bool SolutionContentRecommendationsHasBeenSet() const { return m_solutionContentRecommendationsHasBeenSet; }
  template <typename SolutionContentRecommendationsT = SolutionContentRecommendations>
  void SetSolutionContentRecommendations(SolutionContentRecommendationsT&& value) {
    m_solutionContentRecommendationsHasBeenSet = true;
    m_solutionContentRecommendations = std::forward<SolutionContentRecommendationsT>(value);
  }
  template <typename SolutionContentRecommendationsT = SolutionContentRecommendations>
  ListingRecommendations& WithSolutionContentRecommendations(SolutionContentRecommendationsT&& value) {
    SetSolutionContentRecommendations(std::forward<SolutionContentRecommendationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommendations for AWS Marketplace features to use with the listing, for
   * a product or a solution.</p>
   */
  inline const FeatureRecommendations& GetFeatureRecommendations() const { return m_featureRecommendations; }
  inline bool FeatureRecommendationsHasBeenSet() const { return m_featureRecommendationsHasBeenSet; }
  template <typename FeatureRecommendationsT = FeatureRecommendations>
  void SetFeatureRecommendations(FeatureRecommendationsT&& value) {
    m_featureRecommendationsHasBeenSet = true;
    m_featureRecommendations = std::forward<FeatureRecommendationsT>(value);
  }
  template <typename FeatureRecommendationsT = FeatureRecommendations>
  ListingRecommendations& WithFeatureRecommendations(FeatureRecommendationsT&& value) {
    SetFeatureRecommendations(std::forward<FeatureRecommendationsT>(value));
    return *this;
  }
  ///@}
 private:
  ProductContentRecommendations m_productContentRecommendations;

  SolutionContentRecommendations m_solutionContentRecommendations;

  FeatureRecommendations m_featureRecommendations;
  bool m_productContentRecommendationsHasBeenSet = false;
  bool m_solutionContentRecommendationsHasBeenSet = false;
  bool m_featureRecommendationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
