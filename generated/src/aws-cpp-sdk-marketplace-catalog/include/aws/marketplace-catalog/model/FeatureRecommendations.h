/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/FeatureRecommendation.h>

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
 * <p>The feature recommendations for a listing, for a product or a
 * solution.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/FeatureRecommendations">AWS
 * API Reference</a></p>
 */
class FeatureRecommendations {
 public:
  AWS_MARKETPLACECATALOG_API FeatureRecommendations() = default;
  AWS_MARKETPLACECATALOG_API FeatureRecommendations(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API FeatureRecommendations& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The recommended features, in ranked order. The list has at most one entry for
   * each feature and up to 5 entries.</p>
   */
  inline const Aws::Vector<FeatureRecommendation>& GetRecommendations() const { return m_recommendations; }
  inline bool RecommendationsHasBeenSet() const { return m_recommendationsHasBeenSet; }
  template <typename RecommendationsT = Aws::Vector<FeatureRecommendation>>
  void SetRecommendations(RecommendationsT&& value) {
    m_recommendationsHasBeenSet = true;
    m_recommendations = std::forward<RecommendationsT>(value);
  }
  template <typename RecommendationsT = Aws::Vector<FeatureRecommendation>>
  FeatureRecommendations& WithRecommendations(RecommendationsT&& value) {
    SetRecommendations(std::forward<RecommendationsT>(value));
    return *this;
  }
  template <typename RecommendationsT = FeatureRecommendation>
  FeatureRecommendations& AddRecommendations(RecommendationsT&& value) {
    m_recommendationsHasBeenSet = true;
    m_recommendations.emplace_back(std::forward<RecommendationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<FeatureRecommendation> m_recommendations;
  bool m_recommendationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
