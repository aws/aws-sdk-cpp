/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/Currency.h>
#include <aws/wafv2/model/MonetizationFilter.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/wafv2/model/TimeWindow.h>

#include <utility>

namespace Aws {
namespace WAFV2 {
namespace Model {

/**
 */
class GetRevenueStatisticsSummaryRequest : public WAFV2Request {
 public:
  AWS_WAFV2_API GetRevenueStatisticsSummaryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetRevenueStatisticsSummary"; }

  AWS_WAFV2_API Aws::String SerializePayload() const override;

  AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The time range for the revenue summary query. Specify start and end
   * timestamps.</p>
   */
  inline const TimeWindow& GetTimeWindow() const { return m_timeWindow; }
  inline bool TimeWindowHasBeenSet() const { return m_timeWindowHasBeenSet; }
  template <typename TimeWindowT = TimeWindow>
  void SetTimeWindow(TimeWindowT&& value) {
    m_timeWindowHasBeenSet = true;
    m_timeWindow = std::forward<TimeWindowT>(value);
  }
  template <typename TimeWindowT = TimeWindow>
  GetRevenueStatisticsSummaryRequest& WithTimeWindow(TimeWindowT&& value) {
    SetTimeWindow(std::forward<TimeWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether this is for a Amazon CloudFront distribution
   * (<code>CLOUDFRONT</code>) or for a regional application (<code>REGIONAL</code>).
   * AI bot monetization is only available for <code>CLOUDFRONT</code> scope.</p>
   */
  inline Scope GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  inline void SetScope(Scope value) {
    m_scopeHasBeenSet = true;
    m_scope = value;
  }
  inline GetRevenueStatisticsSummaryRequest& WithScope(Scope value) {
    SetScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The currency for the revenue amounts in the response. Currently only
   * <code>USDC</code> is supported.</p>
   */
  inline Currency GetCurrency() const { return m_currency; }
  inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
  inline void SetCurrency(Currency value) {
    m_currencyHasBeenSet = true;
    m_currency = value;
  }
  inline GetRevenueStatisticsSummaryRequest& WithCurrency(Currency value) {
    SetCurrency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filters to narrow the results. You can filter by source name,
   * category, organization, intent, verified status, content path, web ACL ARN, or
   * currency mode.</p>
   */
  inline const Aws::Vector<MonetizationFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<MonetizationFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<MonetizationFilter>>
  GetRevenueStatisticsSummaryRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = MonetizationFilter>
  GetRevenueStatisticsSummaryRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}
 private:
  TimeWindow m_timeWindow;

  Scope m_scope{Scope::NOT_SET};

  Currency m_currency{Currency::NOT_SET};

  Aws::Vector<MonetizationFilter> m_filters;
  bool m_timeWindowHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
  bool m_currencyHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
