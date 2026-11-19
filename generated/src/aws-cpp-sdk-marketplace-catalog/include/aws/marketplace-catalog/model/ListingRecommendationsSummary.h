/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/ListingQualityTier.h>

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
 * <p>The details of the resource assessed under the Listing Recommendations
 * framework.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ListingRecommendationsSummary">AWS
 * API Reference</a></p>
 */
class ListingRecommendationsSummary {
 public:
  AWS_MARKETPLACECATALOG_API ListingRecommendationsSummary() = default;
  AWS_MARKETPLACECATALOG_API ListingRecommendationsSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API ListingRecommendationsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The quality tier of the listing. Valid values are
   * <code>NEEDS_IMPROVEMENT</code>, <code>BASIC</code>, <code>STRONG</code>, and
   * <code>EXCELLENT</code>.</p>
   */
  inline ListingQualityTier GetTier() const { return m_tier; }
  inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
  inline void SetTier(ListingQualityTier value) {
    m_tierHasBeenSet = true;
    m_tier = value;
  }
  inline ListingRecommendationsSummary& WithTier(ListingQualityTier value) {
    SetTier(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision of the entity that the recommendations were generated against.
   * To check whether the recommendations are out of date, compare this value with
   * the current revision of the entity.</p>
   */
  inline const Aws::String& GetEntityRevision() const { return m_entityRevision; }
  inline bool EntityRevisionHasBeenSet() const { return m_entityRevisionHasBeenSet; }
  template <typename EntityRevisionT = Aws::String>
  void SetEntityRevision(EntityRevisionT&& value) {
    m_entityRevisionHasBeenSet = true;
    m_entityRevision = std::forward<EntityRevisionT>(value);
  }
  template <typename EntityRevisionT = Aws::String>
  ListingRecommendationsSummary& WithEntityRevision(EntityRevisionT&& value) {
    SetEntityRevision(std::forward<EntityRevisionT>(value));
    return *this;
  }
  ///@}
 private:
  ListingQualityTier m_tier{ListingQualityTier::NOT_SET};

  Aws::String m_entityRevision;
  bool m_tierHasBeenSet = false;
  bool m_entityRevisionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
