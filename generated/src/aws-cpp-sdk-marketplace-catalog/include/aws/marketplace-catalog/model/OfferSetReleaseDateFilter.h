/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/OfferSetReleaseDateFilterDateRange.h>

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
 * <p>Allows filtering on the <code>ReleaseDate</code> of an offer
 * set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/OfferSetReleaseDateFilter">AWS
 * API Reference</a></p>
 */
class OfferSetReleaseDateFilter {
 public:
  AWS_MARKETPLACECATALOG_API OfferSetReleaseDateFilter() = default;
  AWS_MARKETPLACECATALOG_API OfferSetReleaseDateFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API OfferSetReleaseDateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Allows filtering on the <code>ReleaseDate</code> of an offer set with date
   * range as input.</p>
   */
  inline const OfferSetReleaseDateFilterDateRange& GetDateRange() const { return m_dateRange; }
  inline bool DateRangeHasBeenSet() const { return m_dateRangeHasBeenSet; }
  template <typename DateRangeT = OfferSetReleaseDateFilterDateRange>
  void SetDateRange(DateRangeT&& value) {
    m_dateRangeHasBeenSet = true;
    m_dateRange = std::forward<DateRangeT>(value);
  }
  template <typename DateRangeT = OfferSetReleaseDateFilterDateRange>
  OfferSetReleaseDateFilter& WithDateRange(DateRangeT&& value) {
    SetDateRange(std::forward<DateRangeT>(value));
    return *this;
  }
  ///@}
 private:
  OfferSetReleaseDateFilterDateRange m_dateRange;
  bool m_dateRangeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
