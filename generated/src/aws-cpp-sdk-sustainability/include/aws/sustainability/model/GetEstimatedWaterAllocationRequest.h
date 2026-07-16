/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sustainability/SustainabilityRequest.h>
#include <aws/sustainability/Sustainability_EXPORTS.h>
#include <aws/sustainability/model/Dimension.h>
#include <aws/sustainability/model/FilterExpression.h>
#include <aws/sustainability/model/TimeGranularity.h>
#include <aws/sustainability/model/TimePeriod.h>
#include <aws/sustainability/model/WaterAllocationType.h>

#include <utility>

namespace Aws {
namespace Sustainability {
namespace Model {

/**
 */
class GetEstimatedWaterAllocationRequest : public SustainabilityRequest {
 public:
  AWS_SUSTAINABILITY_API GetEstimatedWaterAllocationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetEstimatedWaterAllocation"; }

  AWS_SUSTAINABILITY_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p> The date range for fetching estimated water allocation. The range must
   * include the start date of a year for that year's data to be included in the
   * response. </p>
   */
  inline const TimePeriod& GetTimePeriod() const { return m_timePeriod; }
  inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
  template <typename TimePeriodT = TimePeriod>
  void SetTimePeriod(TimePeriodT&& value) {
    m_timePeriodHasBeenSet = true;
    m_timePeriod = std::forward<TimePeriodT>(value);
  }
  template <typename TimePeriodT = TimePeriod>
  GetEstimatedWaterAllocationRequest& WithTimePeriod(TimePeriodT&& value) {
    SetTimePeriod(std::forward<TimePeriodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The dimensions available for grouping estimated water allocation.</p>
   */
  inline const Aws::Vector<Dimension>& GetGroupBy() const { return m_groupBy; }
  inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
  template <typename GroupByT = Aws::Vector<Dimension>>
  void SetGroupBy(GroupByT&& value) {
    m_groupByHasBeenSet = true;
    m_groupBy = std::forward<GroupByT>(value);
  }
  template <typename GroupByT = Aws::Vector<Dimension>>
  GetEstimatedWaterAllocationRequest& WithGroupBy(GroupByT&& value) {
    SetGroupBy(std::forward<GroupByT>(value));
    return *this;
  }
  inline GetEstimatedWaterAllocationRequest& AddGroupBy(Dimension value) {
    m_groupByHasBeenSet = true;
    m_groupBy.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The criteria for filtering estimated water allocation. To determine which
   * dimensions are available to be filtered by, you can first call
   * <a>GetEstimatedWaterAllocationDimensionValues</a> </p>
   */
  inline const FilterExpression& GetFilterBy() const { return m_filterBy; }
  inline bool FilterByHasBeenSet() const { return m_filterByHasBeenSet; }
  template <typename FilterByT = FilterExpression>
  void SetFilterBy(FilterByT&& value) {
    m_filterByHasBeenSet = true;
    m_filterBy = std::forward<FilterByT>(value);
  }
  template <typename FilterByT = FilterExpression>
  GetEstimatedWaterAllocationRequest& WithFilterBy(FilterByT&& value) {
    SetFilterBy(std::forward<FilterByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The allocation types to include in the results. If absent, returns
   * <code>TOTAL_WATER_WITHDRAWALS</code> allocation types. </p>
   */
  inline const Aws::Vector<WaterAllocationType>& GetAllocationTypes() const { return m_allocationTypes; }
  inline bool AllocationTypesHasBeenSet() const { return m_allocationTypesHasBeenSet; }
  template <typename AllocationTypesT = Aws::Vector<WaterAllocationType>>
  void SetAllocationTypes(AllocationTypesT&& value) {
    m_allocationTypesHasBeenSet = true;
    m_allocationTypes = std::forward<AllocationTypesT>(value);
  }
  template <typename AllocationTypesT = Aws::Vector<WaterAllocationType>>
  GetEstimatedWaterAllocationRequest& WithAllocationTypes(AllocationTypesT&& value) {
    SetAllocationTypes(std::forward<AllocationTypesT>(value));
    return *this;
  }
  inline GetEstimatedWaterAllocationRequest& AddAllocationTypes(WaterAllocationType value) {
    m_allocationTypesHasBeenSet = true;
    m_allocationTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time granularity for the results. Only <code>YEARLY_CALENDAR</code> time
   * granularity is currently supported for water allocation. Defaults to
   * <code>YEARLY_CALENDAR</code> if absent.</p> <p> If requesting partial time
   * periods, data will be returned based on the smallest supported granularity. For
   * example, requesting <code>2025-04-01T00:00:00Z</code> to
   * <code>2026-04-01T00:00:00Z</code> with <code>YEARLY_CALENDAR</code> will return
   * all the data for 2026 only. </p>
   */
  inline TimeGranularity GetGranularity() const { return m_granularity; }
  inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }
  inline void SetGranularity(TimeGranularity value) {
    m_granularityHasBeenSet = true;
    m_granularity = value;
  }
  inline GetEstimatedWaterAllocationRequest& WithGranularity(TimeGranularity value) {
    SetGranularity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single call. Default is
   * 1000.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetEstimatedWaterAllocationRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token specifying which page of results to return in the
   * response. If no token is provided, the default page is the first page. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetEstimatedWaterAllocationRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  TimePeriod m_timePeriod;

  Aws::Vector<Dimension> m_groupBy;

  FilterExpression m_filterBy;

  Aws::Vector<WaterAllocationType> m_allocationTypes;

  TimeGranularity m_granularity{TimeGranularity::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_timePeriodHasBeenSet = false;
  bool m_groupByHasBeenSet = false;
  bool m_filterByHasBeenSet = false;
  bool m_allocationTypesHasBeenSet = false;
  bool m_granularityHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
