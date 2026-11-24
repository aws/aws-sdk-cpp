/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/SearchFilterType.h>

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
 * <p>A filter used to narrow search results by attribute, such as category,
 * pricing model, or fulfillment type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/SearchFilter">AWS
 * API Reference</a></p>
 */
class SearchFilter {
 public:
  AWS_MARKETPLACEDISCOVERY_API SearchFilter() = default;
  AWS_MARKETPLACEDISCOVERY_API SearchFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API SearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of filter to apply. See <code>filterValues</code> for the supported
   * types and their values.</p>
   */
  inline SearchFilterType GetFilterType() const { return m_filterType; }
  inline bool FilterTypeHasBeenSet() const { return m_filterTypeHasBeenSet; }
  inline void SetFilterType(SearchFilterType value) {
    m_filterTypeHasBeenSet = true;
    m_filterType = value;
  }
  inline SearchFilter& WithFilterType(SearchFilterType value) {
    SetFilterType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The values to filter by. Term filters accept multiple values, and a result
   * matches if it has any of them. Range filters accept a single value. The
   * supported values for each <code>filterType</code> are as follows:</p> <dl>
   * <dt>CATEGORY</dt> <dd> <p>One or more category identifiers. Matches listings in
   * those categories.</p> </dd> <dt>CERTIFICATES</dt> <dd> <p>One or more
   * certification identifiers, such as <code>ISO_27001</code> or
   * <code>SOC2_TYPE_2</code>. Matches listings that hold those certifications.</p>
   * </dd> <dt>DEPLOYED_ON_AWS</dt> <dd> <p>The single value
   * <code>DEPLOYED_ON_AWS</code>. Matches listings whose products are deployed on
   * AWS infrastructure.</p> </dd> <dt>FULFILLMENT_OPTION_TYPE</dt> <dd> <p>One or
   * more fulfillment option types, such as <code>SAAS</code>,
   * <code>AMAZON_MACHINE_IMAGE</code>, or <code>CONTAINER</code>. Matches listings
   * that you can deploy or access in those ways.</p> </dd>
   * <dt>MAX_AVERAGE_CUSTOMER_RATING</dt> <dd> <p>A single rating between
   * <code>0.0</code> and <code>5.0</code>. Matches listings whose average customer
   * rating is at or below that value.</p> </dd> <dt>MIN_AVERAGE_CUSTOMER_RATING</dt>
   * <dd> <p>A single rating between <code>0.0</code> and <code>5.0</code>. Matches
   * listings whose average customer rating is at or above that value.</p> </dd>
   * <dt>NUMBER_OF_PRODUCTS</dt> <dd> <p> <code>SINGLE_PRODUCT</code> or
   * <code>MULTI_PRODUCT</code>. Matches single-product listings or multi-product
   * solutions.</p> </dd> <dt>PRICING_MODEL</dt> <dd> <p>One or more of
   * <code>BYOL</code>, <code>CONTRACT</code>, <code>FREE</code>, and
   * <code>USAGE</code>. Matches listings with offers that use those pricing
   * models.</p> </dd> <dt>PRICING_UNIT</dt> <dd> <p>One or more pricing units, such
   * as <code>USERS</code>, <code>HOSTS</code>, or <code>REQUESTS</code>. Matches
   * listings that bill by those units.</p> </dd> <dt>PRODUCT_ID</dt> <dd> <p>One or
   * more product identifiers. Matches listings that contain those products.</p>
   * </dd> <dt>PUBLISHER</dt> <dd> <p>One or more publisher identifiers. Matches
   * listings from those sellers.</p> </dd> <dt>SELLER_ENGAGEMENT</dt> <dd> <p>One or
   * more <code>SellerEngagementType</code> values, such as <code>BUY_NOW</code> or
   * <code>REQUEST_FOR_DEMO</code>. Matches listings that offer those ways to engage
   * with the seller.</p> </dd> <dt>SPECIALIZATION</dt> <dd> <p>One or more
   * specialization identifiers. Matches listings that earned those
   * specializations.</p> </dd> <dt>SPECIALIZATION_CATEGORY</dt> <dd> <p>One or more
   * specialization category identifiers. Matches listings that earned a category
   * under a specialization.</p> </dd> <dt>TRUST_CENTER</dt> <dd> <p>The single value
   * <code>HAS_TRUST_CENTER</code>. Matches listings that have a trust center.</p>
   * </dd> </dl> <p>Use <code>SearchFacets</code> to retrieve the values available
   * for <code>CATEGORY</code>, <code>PUBLISHER</code>, <code>CERTIFICATES</code>,
   * <code>SPECIALIZATION</code>, and <code>SPECIALIZATION_CATEGORY</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFilterValues() const { return m_filterValues; }
  inline bool FilterValuesHasBeenSet() const { return m_filterValuesHasBeenSet; }
  template <typename FilterValuesT = Aws::Vector<Aws::String>>
  void SetFilterValues(FilterValuesT&& value) {
    m_filterValuesHasBeenSet = true;
    m_filterValues = std::forward<FilterValuesT>(value);
  }
  template <typename FilterValuesT = Aws::Vector<Aws::String>>
  SearchFilter& WithFilterValues(FilterValuesT&& value) {
    SetFilterValues(std::forward<FilterValuesT>(value));
    return *this;
  }
  template <typename FilterValuesT = Aws::String>
  SearchFilter& AddFilterValues(FilterValuesT&& value) {
    m_filterValuesHasBeenSet = true;
    m_filterValues.emplace_back(std::forward<FilterValuesT>(value));
    return *this;
  }
  ///@}
 private:
  SearchFilterType m_filterType{SearchFilterType::NOT_SET};

  Aws::Vector<Aws::String> m_filterValues;
  bool m_filterTypeHasBeenSet = false;
  bool m_filterValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
