/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/PurchaseOptionFilterType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>A filter used to narrow purchase option results by product, seller, type,
 * visibility, or availability.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/PurchaseOptionFilter">AWS
 * API Reference</a></p>
 */
class PurchaseOptionFilter {
 public:
  AWS_MARKETPLACEDISCOVERY_API PurchaseOptionFilter() = default;
  AWS_MARKETPLACEDISCOVERY_API PurchaseOptionFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API PurchaseOptionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of filter to apply, such as <code>PRODUCT_ID</code>,
   * <code>VISIBILITY_SCOPE</code>, or <code>PURCHASE_OPTION_TYPE</code>.</p>
   */
  inline PurchaseOptionFilterType GetFilterType() const { return m_filterType; }
  inline bool FilterTypeHasBeenSet() const { return m_filterTypeHasBeenSet; }
  inline void SetFilterType(PurchaseOptionFilterType value) {
    m_filterTypeHasBeenSet = true;
    m_filterType = value;
  }
  inline PurchaseOptionFilter& WithFilterType(PurchaseOptionFilterType value) {
    SetFilterType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The values to filter by. Supported values depend on
   * <code>filterType</code>:</p> <ul> <li> <p> <code>PRODUCT_ID</code> – One or more
   * product identifiers to filter by.</p> </li> <li> <p>
   * <code>SELLER_OF_RECORD_PROFILE_ID</code> – One or more seller profile
   * identifiers to filter by.</p> </li> <li> <p> <code>PURCHASE_OPTION_TYPE</code> –
   * One or more purchase option types to filter by: <code>OFFER</code> or
   * <code>OFFERSET</code>.</p> </li> <li> <p> <code>VISIBILITY_SCOPE</code> – The
   * visibility scope to filter by: <code>PRIVATE</code>.</p> </li> <li> <p>
   * <code>AVAILABILITY_STATUS</code> – One or more availability statuses to filter
   * by: <code>AVAILABLE</code> or <code>EXPIRED</code>.</p> </li> </ul> <p>To
   * retrieve private offers and offer sets visible to you, use
   * <code>VISIBILITY_SCOPE</code> with <code>PRIVATE</code>. OR logic combines
   * multiple values within the same filter.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFilterValues() const { return m_filterValues; }
  inline bool FilterValuesHasBeenSet() const { return m_filterValuesHasBeenSet; }
  template <typename FilterValuesT = Aws::Vector<Aws::String>>
  void SetFilterValues(FilterValuesT&& value) {
    m_filterValuesHasBeenSet = true;
    m_filterValues = std::forward<FilterValuesT>(value);
  }
  template <typename FilterValuesT = Aws::Vector<Aws::String>>
  PurchaseOptionFilter& WithFilterValues(FilterValuesT&& value) {
    SetFilterValues(std::forward<FilterValuesT>(value));
    return *this;
  }
  template <typename FilterValuesT = Aws::String>
  PurchaseOptionFilter& AddFilterValues(FilterValuesT&& value) {
    m_filterValuesHasBeenSet = true;
    m_filterValues.emplace_back(std::forward<FilterValuesT>(value));
    return *this;
  }
  ///@}
 private:
  PurchaseOptionFilterType m_filterType{PurchaseOptionFilterType::NOT_SET};

  Aws::Vector<Aws::String> m_filterValues;
  bool m_filterTypeHasBeenSet = false;
  bool m_filterValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
