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
#include <aws/sustainability/model/EmissionsType.h>
#include <aws/sustainability/model/FilterExpression.h>
#include <aws/sustainability/model/GranularityConfiguration.h>
#include <aws/sustainability/model/TimeGranularity.h>
#include <aws/sustainability/model/TimePeriod.h>

#include <utility>

namespace Aws {
namespace Sustainability {
namespace Model {

/**
 */
class GetEstimatedCarbonEmissionsRequest : public SustainabilityRequest {
 public:
  AWS_SUSTAINABILITY_API GetEstimatedCarbonEmissionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetEstimatedCarbonEmissions"; }

  AWS_SUSTAINABILITY_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The date range for fetching estimated carbon emissions.</p>
   */
  inline const TimePeriod& GetTimePeriod() const { return m_timePeriod; }
  inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
  template <typename TimePeriodT = TimePeriod>
  void SetTimePeriod(TimePeriodT&& value) {
    m_timePeriodHasBeenSet = true;
    m_timePeriod = std::forward<TimePeriodT>(value);
  }
  template <typename TimePeriodT = TimePeriod>
  GetEstimatedCarbonEmissionsRequest& WithTimePeriod(TimePeriodT&& value) {
    SetTimePeriod(std::forward<TimePeriodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The dimensions available for grouping estimated carbon emissions.</p>
   */
  inline const Aws::Vector<Dimension>& GetGroupBy() const { return m_groupBy; }
  inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
  template <typename GroupByT = Aws::Vector<Dimension>>
  void SetGroupBy(GroupByT&& value) {
    m_groupByHasBeenSet = true;
    m_groupBy = std::forward<GroupByT>(value);
  }
  template <typename GroupByT = Aws::Vector<Dimension>>
  GetEstimatedCarbonEmissionsRequest& WithGroupBy(GroupByT&& value) {
    SetGroupBy(std::forward<GroupByT>(value));
    return *this;
  }
  inline GetEstimatedCarbonEmissionsRequest& AddGroupBy(Dimension value) {
    m_groupByHasBeenSet = true;
    m_groupBy.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The criteria for filtering estimated carbon emissions.</p>
   */
  inline const FilterExpression& GetFilterBy() const { return m_filterBy; }
  inline bool FilterByHasBeenSet() const { return m_filterByHasBeenSet; }
  template <typename FilterByT = FilterExpression>
  void SetFilterBy(FilterByT&& value) {
    m_filterByHasBeenSet = true;
    m_filterBy = std::forward<FilterByT>(value);
  }
  template <typename FilterByT = FilterExpression>
  GetEstimatedCarbonEmissionsRequest& WithFilterBy(FilterByT&& value) {
    SetFilterBy(std::forward<FilterByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The emission types to include in the results. If absent, returns
   * <code>TOTAL_LBM_CARBON_EMISSIONS</code> and
   * <code>TOTAL_MBM_CARBON_EMISSIONS</code> emissions types. </p>
   */
  inline const Aws::Vector<EmissionsType>& GetEmissionsTypes() const { return m_emissionsTypes; }
  inline bool EmissionsTypesHasBeenSet() const { return m_emissionsTypesHasBeenSet; }
  template <typename EmissionsTypesT = Aws::Vector<EmissionsType>>
  void SetEmissionsTypes(EmissionsTypesT&& value) {
    m_emissionsTypesHasBeenSet = true;
    m_emissionsTypes = std::forward<EmissionsTypesT>(value);
  }
  template <typename EmissionsTypesT = Aws::Vector<EmissionsType>>
  GetEstimatedCarbonEmissionsRequest& WithEmissionsTypes(EmissionsTypesT&& value) {
    SetEmissionsTypes(std::forward<EmissionsTypesT>(value));
    return *this;
  }
  inline GetEstimatedCarbonEmissionsRequest& AddEmissionsTypes(EmissionsType value) {
    m_emissionsTypesHasBeenSet = true;
    m_emissionsTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time granularity for the results. If absent, uses <code>MONTHLY</code>
   * time granularity.</p>
   */
  inline TimeGranularity GetGranularity() const { return m_granularity; }
  inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }
  inline void SetGranularity(TimeGranularity value) {
    m_granularityHasBeenSet = true;
    m_granularity = value;
  }
  inline GetEstimatedCarbonEmissionsRequest& WithGranularity(TimeGranularity value) {
    SetGranularity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for fiscal year calculations when using
   * <code>YEARLY_FISCAL</code> or <code>QUARTERLY_FISCAL</code> granularity. </p>
   */
  inline const GranularityConfiguration& GetGranularityConfiguration() const { return m_granularityConfiguration; }
  inline bool GranularityConfigurationHasBeenSet() const { return m_granularityConfigurationHasBeenSet; }
  template <typename GranularityConfigurationT = GranularityConfiguration>
  void SetGranularityConfiguration(GranularityConfigurationT&& value) {
    m_granularityConfigurationHasBeenSet = true;
    m_granularityConfiguration = std::forward<GranularityConfigurationT>(value);
  }
  template <typename GranularityConfigurationT = GranularityConfiguration>
  GetEstimatedCarbonEmissionsRequest& WithGranularityConfiguration(GranularityConfigurationT&& value) {
    SetGranularityConfiguration(std::forward<GranularityConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single call. Default is 40.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetEstimatedCarbonEmissionsRequest& WithMaxResults(int value) {
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
  GetEstimatedCarbonEmissionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  TimePeriod m_timePeriod;

  Aws::Vector<Dimension> m_groupBy;

  FilterExpression m_filterBy;

  Aws::Vector<EmissionsType> m_emissionsTypes;

  TimeGranularity m_granularity{TimeGranularity::NOT_SET};

  GranularityConfiguration m_granularityConfiguration;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_timePeriodHasBeenSet = false;
  bool m_groupByHasBeenSet = false;
  bool m_filterByHasBeenSet = false;
  bool m_emissionsTypesHasBeenSet = false;
  bool m_granularityHasBeenSet = false;
  bool m_granularityConfigurationHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
