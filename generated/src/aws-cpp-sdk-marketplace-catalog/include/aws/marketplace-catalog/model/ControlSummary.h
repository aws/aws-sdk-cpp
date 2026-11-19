/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/ListingRecommendations.h>

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
 * <p>A summary of what a control produced. Exactly one member is set,
 * corresponding to the kind of control.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ControlSummary">AWS
 * API Reference</a></p>
 */
class ControlSummary {
 public:
  AWS_MARKETPLACECATALOG_API ControlSummary() = default;
  AWS_MARKETPLACECATALOG_API ControlSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API ControlSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The recommendations that a listing recommendations control produced for the
   * listing.</p>
   */
  inline const ListingRecommendations& GetListingRecommendations() const { return m_listingRecommendations; }
  inline bool ListingRecommendationsHasBeenSet() const { return m_listingRecommendationsHasBeenSet; }
  template <typename ListingRecommendationsT = ListingRecommendations>
  void SetListingRecommendations(ListingRecommendationsT&& value) {
    m_listingRecommendationsHasBeenSet = true;
    m_listingRecommendations = std::forward<ListingRecommendationsT>(value);
  }
  template <typename ListingRecommendationsT = ListingRecommendations>
  ControlSummary& WithListingRecommendations(ListingRecommendationsT&& value) {
    SetListingRecommendations(std::forward<ListingRecommendationsT>(value));
    return *this;
  }
  ///@}
 private:
  ListingRecommendations m_listingRecommendations;
  bool m_listingRecommendationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
