/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/PerformanceMonitorSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NetworkFlowMonitor {
namespace Model {
class ListPerformanceMonitorsResult {
 public:
  AWS_NETWORKFLOWMONITOR_API ListPerformanceMonitorsResult() = default;
  AWS_NETWORKFLOWMONITOR_API ListPerformanceMonitorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKFLOWMONITOR_API ListPerformanceMonitorsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The performance monitors in the account.</p>
   */
  inline const Aws::Vector<PerformanceMonitorSummary>& GetMonitors() const { return m_monitors; }
  template <typename MonitorsT = Aws::Vector<PerformanceMonitorSummary>>
  void SetMonitors(MonitorsT&& value) {
    m_monitorsHasBeenSet = true;
    m_monitors = std::forward<MonitorsT>(value);
  }
  template <typename MonitorsT = Aws::Vector<PerformanceMonitorSummary>>
  ListPerformanceMonitorsResult& WithMonitors(MonitorsT&& value) {
    SetMonitors(std::forward<MonitorsT>(value));
    return *this;
  }
  template <typename MonitorsT = PerformanceMonitorSummary>
  ListPerformanceMonitorsResult& AddMonitors(MonitorsT&& value) {
    m_monitorsHasBeenSet = true;
    m_monitors.emplace_back(std::forward<MonitorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results. You receive this token from a previous
   * call.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPerformanceMonitorsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListPerformanceMonitorsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<PerformanceMonitorSummary> m_monitors;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_monitorsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
