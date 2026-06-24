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
#include <aws/wafv2/model/IntervalType.h>
#include <aws/wafv2/model/MonetizationFilter.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/wafv2/model/TimeSeriesStatisticType.h>
#include <aws/wafv2/model/TimeWindow.h>

#include <utility>

namespace Aws {
namespace WAFV2 {
namespace Model {

/**
 */
class GetRevenueStatisticsTimeSeriesRequest : public WAFV2Request {
 public:
  AWS_WAFV2_API GetRevenueStatisticsTimeSeriesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetRevenueStatisticsTimeSeries"; }

  AWS_WAFV2_API Aws::String SerializePayload() const override;

  AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The type of time series data to retrieve: <code>DATE_HISTOGRAM</code> for
   * revenue over time, or <code>PAYMENT_TRAFFIC</code> for payment traffic
   * patterns.</p>
   */
  inline TimeSeriesStatisticType GetStatisticType() const { return m_statisticType; }
  inline bool StatisticTypeHasBeenSet() const { return m_statisticTypeHasBeenSet; }
  inline void SetStatisticType(TimeSeriesStatisticType value) {
    m_statisticTypeHasBeenSet = true;
    m_statisticType = value;
  }
  inline GetRevenueStatisticsTimeSeriesRequest& WithStatisticType(TimeSeriesStatisticType value) {
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
  GetRevenueStatisticsTimeSeriesRequest& WithTimeWindow(TimeWindowT&& value) {
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
  inline GetRevenueStatisticsTimeSeriesRequest& WithScope(Scope value) {
    SetScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time interval for aggregating data points: <code>MINUTELY</code>,
   * <code>FIVE_MINUTELY</code>, <code>HOURLY</code>, or <code>DAILY</code>.</p>
   */
  inline IntervalType GetInterval() const { return m_interval; }
  inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
  inline void SetInterval(IntervalType value) {
    m_intervalHasBeenSet = true;
    m_interval = value;
  }
  inline GetRevenueStatisticsTimeSeriesRequest& WithInterval(IntervalType value) {
    SetInterval(value);
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
  inline GetRevenueStatisticsTimeSeriesRequest& WithCurrency(Currency value) {
    SetCurrency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The dimension to group results by.</p>
   */
  inline GroupByType GetGroupBy() const { return m_groupBy; }
  inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
  inline void SetGroupBy(GroupByType value) {
    m_groupByHasBeenSet = true;
    m_groupBy = value;
  }
  inline GetRevenueStatisticsTimeSeriesRequest& WithGroupBy(GroupByType value) {
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
  GetRevenueStatisticsTimeSeriesRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = MonetizationFilter>
  GetRevenueStatisticsTimeSeriesRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of data points to return. Minimum: 1. Maximum: 10000.</p>
   */
  inline int GetLimit() const { return m_limit; }
  inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
  inline void SetLimit(int value) {
    m_limitHasBeenSet = true;
    m_limit = value;
  }
  inline GetRevenueStatisticsTimeSeriesRequest& WithLimit(int value) {
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
  GetRevenueStatisticsTimeSeriesRequest& WithNextMarker(NextMarkerT&& value) {
    SetNextMarker(std::forward<NextMarkerT>(value));
    return *this;
  }
  ///@}
 private:
  TimeSeriesStatisticType m_statisticType{TimeSeriesStatisticType::NOT_SET};

  TimeWindow m_timeWindow;

  Scope m_scope{Scope::NOT_SET};

  IntervalType m_interval{IntervalType::NOT_SET};

  Currency m_currency{Currency::NOT_SET};

  GroupByType m_groupBy{GroupByType::NOT_SET};

  Aws::Vector<MonetizationFilter> m_filters;

  int m_limit{0};

  Aws::String m_nextMarker;
  bool m_statisticTypeHasBeenSet = false;
  bool m_timeWindowHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
  bool m_intervalHasBeenSet = false;
  bool m_currencyHasBeenSet = false;
  bool m_groupByHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_limitHasBeenSet = false;
  bool m_nextMarkerHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
