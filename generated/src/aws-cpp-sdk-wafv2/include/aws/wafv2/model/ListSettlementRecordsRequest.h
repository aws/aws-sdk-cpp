/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/Currency.h>
#include <aws/wafv2/model/MonetizationFilter.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/wafv2/model/SettlementSortBy.h>
#include <aws/wafv2/model/SortOrder.h>
#include <aws/wafv2/model/TimeWindow.h>

#include <utility>

namespace Aws {
namespace WAFV2 {
namespace Model {

/**
 */
class ListSettlementRecordsRequest : public WAFV2Request {
 public:
  AWS_WAFV2_API ListSettlementRecordsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListSettlementRecords"; }

  AWS_WAFV2_API Aws::String SerializePayload() const override;

  AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The time range for the query. Specify start and end timestamps.</p>
   */
  inline const TimeWindow& GetTimeWindow() const { return m_timeWindow; }
  inline bool TimeWindowHasBeenSet() const { return m_timeWindowHasBeenSet; }
  template <typename TimeWindowT = TimeWindow>
  void SetTimeWindow(TimeWindowT&& value) {
    m_timeWindowHasBeenSet = true;
    m_timeWindow = std::forward<TimeWindowT>(value);
  }
  template <typename TimeWindowT = TimeWindow>
  ListSettlementRecordsRequest& WithTimeWindow(TimeWindowT&& value) {
    SetTimeWindow(std::forward<TimeWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether this is for a Amazon CloudFront distribution
   * (<code>CLOUDFRONT</code>) or for a regional application
   * (<code>REGIONAL</code>).</p>
   */
  inline Scope GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  inline void SetScope(Scope value) {
    m_scopeHasBeenSet = true;
    m_scope = value;
  }
  inline ListSettlementRecordsRequest& WithScope(Scope value) {
    SetScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The currency for the amounts in the response.</p>
   */
  inline Currency GetCurrency() const { return m_currency; }
  inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
  inline void SetCurrency(Currency value) {
    m_currencyHasBeenSet = true;
    m_currency = value;
  }
  inline ListSettlementRecordsRequest& WithCurrency(Currency value) {
    SetCurrency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filters to narrow the results. You can filter by payer address,
   * status, source name, network, or other settlement fields.</p>
   */
  inline const Aws::Vector<MonetizationFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<MonetizationFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<MonetizationFilter>>
  ListSettlementRecordsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = MonetizationFilter>
  ListSettlementRecordsRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field to sort settlement records by: <code>TIMESTAMP</code>,
   * <code>AMOUNT</code>, <code>NAME</code>, or <code>STATUS</code>.</p>
   */
  inline SettlementSortBy GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(SettlementSortBy value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ListSettlementRecordsRequest& WithSortBy(SettlementSortBy value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort order: <code>ASC</code> for ascending or <code>DESC</code> for
   * descending.</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ListSettlementRecordsRequest& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of settlement records to return. Minimum: 1. Maximum:
   * 100.</p>
   */
  inline int GetLimit() const { return m_limit; }
  inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
  inline void SetLimit(int value) {
    m_limitHasBeenSet = true;
    m_limit = value;
  }
  inline ListSettlementRecordsRequest& WithLimit(int value) {
    SetLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When you get a paginated response, this marker indicates that additional
   * results are available.</p>
   */
  inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
  inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }
  template <typename NextMarkerT = Aws::String>
  void SetNextMarker(NextMarkerT&& value) {
    m_nextMarkerHasBeenSet = true;
    m_nextMarker = std::forward<NextMarkerT>(value);
  }
  template <typename NextMarkerT = Aws::String>
  ListSettlementRecordsRequest& WithNextMarker(NextMarkerT&& value) {
    SetNextMarker(std::forward<NextMarkerT>(value));
    return *this;
  }
  ///@}
 private:
  TimeWindow m_timeWindow;

  Scope m_scope{Scope::NOT_SET};

  Currency m_currency{Currency::NOT_SET};

  Aws::Vector<MonetizationFilter> m_filters;

  SettlementSortBy m_sortBy{SettlementSortBy::NOT_SET};

  SortOrder m_sortOrder{SortOrder::NOT_SET};

  int m_limit{0};

  Aws::String m_nextMarker;
  bool m_timeWindowHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
  bool m_currencyHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_limitHasBeenSet = false;
  bool m_nextMarkerHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
