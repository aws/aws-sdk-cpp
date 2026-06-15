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
#include <aws/wafv2/model/GroupByType.h>
#include <aws/wafv2/model/MonetizationFilter.h>
#include <aws/wafv2/model/RankingSortBy.h>
#include <aws/wafv2/model/RankingStatisticType.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/wafv2/model/SortOrder.h>
#include <aws/wafv2/model/TimeWindow.h>

#include <utility>

namespace Aws {
namespace WAFV2 {
namespace Model {

/**
 */
class GetRevenueStatisticsRequest : public WAFV2Request {
 public:
  AWS_WAFV2_API GetRevenueStatisticsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetRevenueStatistics"; }

  AWS_WAFV2_API Aws::String SerializePayload() const override;

  AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p> <code>TOP_SOURCES_BY_REVENUE</code> ranks revenue from AI bot traffic,
   * grouped by the dimension you specify in the <code>GroupBy</code> parameter
   * (<code>NAME</code>, <code>CATEGORY</code>, <code>INTENT</code>,
   * <code>ORGANIZATION</code>, or <code>WEBACL</code>); <code>GroupBy</code> is
   * required for this statistic type. <code>TOP_PATHS_BY_REVENUE</code> ranks
   * revenue by path.</p>
   */
  inline RankingStatisticType GetStatisticType() const { return m_statisticType; }
  inline bool StatisticTypeHasBeenSet() const { return m_statisticTypeHasBeenSet; }
  inline void SetStatisticType(RankingStatisticType value) {
    m_statisticTypeHasBeenSet = true;
    m_statisticType = value;
  }
  inline GetRevenueStatisticsRequest& WithStatisticType(RankingStatisticType value) {
    SetStatisticType(value);
    return *this;
  }
  ///@}

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
  GetRevenueStatisticsRequest& WithTimeWindow(TimeWindowT&& value) {
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
  inline GetRevenueStatisticsRequest& WithScope(Scope value) {
    SetScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The currency for the revenue amounts in the response.</p>
   */
  inline Currency GetCurrency() const { return m_currency; }
  inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
  inline void SetCurrency(Currency value) {
    m_currencyHasBeenSet = true;
    m_currency = value;
  }
  inline GetRevenueStatisticsRequest& WithCurrency(Currency value) {
    SetCurrency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The dimension to group results by: <code>NAME</code>, <code>CATEGORY</code>,
   * <code>INTENT</code>, <code>ORGANIZATION</code>, or <code>WEBACL</code>. Required
   * when <code>StatisticType</code> is <code>TOP_SOURCES_BY_REVENUE</code>. Not
   * required for <code>TOP_PATHS_BY_REVENUE</code>, where results are grouped by
   * content path. If <code>StatisticType</code> is
   * <code>TOP_SOURCES_BY_REVENUE</code> and <code>GroupBy</code> is omitted, the
   * request is rejected with a <code>WAFInvalidParameterException</code>.</p>
   */
  inline GroupByType GetGroupBy() const { return m_groupBy; }
  inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
  inline void SetGroupBy(GroupByType value) {
    m_groupByHasBeenSet = true;
    m_groupBy = value;
  }
  inline GetRevenueStatisticsRequest& WithGroupBy(GroupByType value) {
    SetGroupBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filters to narrow the results.</p>
   */
  inline const Aws::Vector<MonetizationFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<MonetizationFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<MonetizationFilter>>
  GetRevenueStatisticsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = MonetizationFilter>
  GetRevenueStatisticsRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When you get a paginated response, this marker indicates that additional
   * results are available. Use it in a subsequent request to retrieve the next page
   * of results.</p>
   */
  inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
  inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }
  template <typename NextMarkerT = Aws::String>
  void SetNextMarker(NextMarkerT&& value) {
    m_nextMarkerHasBeenSet = true;
    m_nextMarker = std::forward<NextMarkerT>(value);
  }
  template <typename NextMarkerT = Aws::String>
  GetRevenueStatisticsRequest& WithNextMarker(NextMarkerT&& value) {
    SetNextMarker(std::forward<NextMarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return.</p>
   */
  inline int GetLimit() const { return m_limit; }
  inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
  inline void SetLimit(int value) {
    m_limitHasBeenSet = true;
    m_limit = value;
  }
  inline GetRevenueStatisticsRequest& WithLimit(int value) {
    SetLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field to sort results by: <code>REVENUE</code>, <code>PERCENTAGE</code>,
   * or <code>NAME</code>.</p>
   */
  inline RankingSortBy GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(RankingSortBy value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline GetRevenueStatisticsRequest& WithSortBy(RankingSortBy value) {
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
  inline GetRevenueStatisticsRequest& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}
 private:
  RankingStatisticType m_statisticType{RankingStatisticType::NOT_SET};

  TimeWindow m_timeWindow;

  Scope m_scope{Scope::NOT_SET};

  Currency m_currency{Currency::NOT_SET};

  GroupByType m_groupBy{GroupByType::NOT_SET};

  Aws::Vector<MonetizationFilter> m_filters;

  Aws::String m_nextMarker;

  int m_limit{0};

  RankingSortBy m_sortBy{RankingSortBy::NOT_SET};

  SortOrder m_sortOrder{SortOrder::NOT_SET};
  bool m_statisticTypeHasBeenSet = false;
  bool m_timeWindowHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
  bool m_currencyHasBeenSet = false;
  bool m_groupByHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_nextMarkerHasBeenSet = false;
  bool m_limitHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
