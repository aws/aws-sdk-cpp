/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorRequest.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/MonitorStatus.h>
#include <aws/networkflowmonitor/model/PerformanceMonitorType.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace NetworkFlowMonitor {
namespace Model {

/**
 */
class ListPerformanceMonitorsRequest : public NetworkFlowMonitorRequest {
 public:
  AWS_NETWORKFLOWMONITOR_API ListPerformanceMonitorsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListPerformanceMonitors"; }

  AWS_NETWORKFLOWMONITOR_API Aws::String SerializePayload() const override;

  AWS_NETWORKFLOWMONITOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The token for the next set of results. You receive this token from a previous
   * call.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPerformanceMonitorsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of performance monitors that you want to return with this call. If
   * you don't specify a value, the default is 25.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListPerformanceMonitorsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the performance monitors that you want to return. If you don't
   * specify a status, Network Flow Monitor returns performance monitors with any
   * status.</p>
   */
  inline MonitorStatus GetMonitorStatus() const { return m_monitorStatus; }
  inline bool MonitorStatusHasBeenSet() const { return m_monitorStatusHasBeenSet; }
  inline void SetMonitorStatus(MonitorStatus value) {
    m_monitorStatusHasBeenSet = true;
    m_monitorStatus = value;
  }
  inline ListPerformanceMonitorsRequest& WithMonitorStatus(MonitorStatus value) {
    SetMonitorStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the performance monitors that you want to return. If you don't
   * specify a type, Network Flow Monitor returns performance monitors of any
   * type.</p>
   */
  inline PerformanceMonitorType GetMonitorType() const { return m_monitorType; }
  inline bool MonitorTypeHasBeenSet() const { return m_monitorTypeHasBeenSet; }
  inline void SetMonitorType(PerformanceMonitorType value) {
    m_monitorTypeHasBeenSet = true;
    m_monitorType = value;
  }
  inline ListPerformanceMonitorsRequest& WithMonitorType(PerformanceMonitorType value) {
    SetMonitorType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  int m_maxResults{0};

  MonitorStatus m_monitorStatus{MonitorStatus::NOT_SET};

  PerformanceMonitorType m_monitorType{PerformanceMonitorType::NOT_SET};
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_monitorStatusHasBeenSet = false;
  bool m_monitorTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
