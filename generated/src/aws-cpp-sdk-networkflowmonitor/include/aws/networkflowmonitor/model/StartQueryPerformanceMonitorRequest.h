/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorRequest.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/FilterParameter.h>
#include <aws/networkflowmonitor/model/PerformanceMonitorQueryType.h>

#include <utility>

namespace Aws {
namespace NetworkFlowMonitor {
namespace Model {

/**
 */
class StartQueryPerformanceMonitorRequest : public NetworkFlowMonitorRequest {
 public:
  AWS_NETWORKFLOWMONITOR_API StartQueryPerformanceMonitorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartQueryPerformanceMonitor"; }

  AWS_NETWORKFLOWMONITOR_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the performance monitor.</p>
   */
  inline const Aws::String& GetMonitorName() const { return m_monitorName; }
  inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
  template <typename MonitorNameT = Aws::String>
  void SetMonitorName(MonitorNameT&& value) {
    m_monitorNameHasBeenSet = true;
    m_monitorName = std::forward<MonitorNameT>(value);
  }
  template <typename MonitorNameT = Aws::String>
  StartQueryPerformanceMonitorRequest& WithMonitorName(MonitorNameT&& value) {
    SetMonitorName(std::forward<MonitorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp that is the date and time that is the beginning of the period
   * that you want to retrieve results for with your query.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  StartQueryPerformanceMonitorRequest& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp that is the date and time end of the period that you want to
   * retrieve results for with your query.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  StartQueryPerformanceMonitorRequest& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of query that you want to create. Specify <code>TOP_PATHS</code> to
   * return the top paths for the performance monitor.</p>
   */
  inline PerformanceMonitorQueryType GetQueryType() const { return m_queryType; }
  inline bool QueryTypeHasBeenSet() const { return m_queryTypeHasBeenSet; }
  inline void SetQueryType(PerformanceMonitorQueryType value) {
    m_queryTypeHasBeenSet = true;
    m_queryType = value;
  }
  inline StartQueryPerformanceMonitorRequest& WithQueryType(PerformanceMonitorQueryType value) {
    SetQueryType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filters for the query, to return a subset of the top paths. For a
   * <code>TOP_PATHS</code> query, you can filter on the following fields:</p> <ul>
   * <li> <p> <code>local_az_id</code>: The Availability Zone ID of the local end of
   * a path</p> </li> <li> <p> <code>remote_az_id</code>: The Availability Zone ID of
   * the remote end of a path</p> </li> <li> <p> <code>impact_level</code>: The
   * impact level of a path</p> </li> </ul> <p>When you filter on
   * <code>impact_level</code>, Network Flow Monitor compares the filter with the
   * most severe impact level for the path over the time period of the query, and the
   * traffic and round-trip time that Network Flow Monitor returns for each path
   * still cover the full time period. Paths that have no impact data don't match an
   * <code>impact_level</code> filter, including a <code>NOT_EQUALS</code> filter.
   * Network Flow Monitor doesn't filter the subnet pairs within a path by impact
   * level.</p>
   */
  inline const Aws::Vector<FilterParameter>& GetFilterParameters() const { return m_filterParameters; }
  inline bool FilterParametersHasBeenSet() const { return m_filterParametersHasBeenSet; }
  template <typename FilterParametersT = Aws::Vector<FilterParameter>>
  void SetFilterParameters(FilterParametersT&& value) {
    m_filterParametersHasBeenSet = true;
    m_filterParameters = std::forward<FilterParametersT>(value);
  }
  template <typename FilterParametersT = Aws::Vector<FilterParameter>>
  StartQueryPerformanceMonitorRequest& WithFilterParameters(FilterParametersT&& value) {
    SetFilterParameters(std::forward<FilterParametersT>(value));
    return *this;
  }
  template <typename FilterParametersT = FilterParameter>
  StartQueryPerformanceMonitorRequest& AddFilterParameters(FilterParametersT&& value) {
    m_filterParametersHasBeenSet = true;
    m_filterParameters.emplace_back(std::forward<FilterParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of top paths that you want the query to return.</p>
   */
  inline int GetLimit() const { return m_limit; }
  inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
  inline void SetLimit(int value) {
    m_limitHasBeenSet = true;
    m_limit = value;
  }
  inline StartQueryPerformanceMonitorRequest& WithLimit(int value) {
    SetLimit(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_monitorName;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  PerformanceMonitorQueryType m_queryType{PerformanceMonitorQueryType::NOT_SET};

  Aws::Vector<FilterParameter> m_filterParameters;

  int m_limit{0};
  bool m_monitorNameHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_queryTypeHasBeenSet = false;
  bool m_filterParametersHasBeenSet = false;
  bool m_limitHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
