/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorRequest.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace NetworkFlowMonitor {
namespace Model {

/**
 */
class GetMonitorScopeSuggestionsRequest : public NetworkFlowMonitorRequest {
 public:
  AWS_NETWORKFLOWMONITOR_API GetMonitorScopeSuggestionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetMonitorScopeSuggestions"; }

  AWS_NETWORKFLOWMONITOR_API Aws::String SerializePayload() const override;

  AWS_NETWORKFLOWMONITOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the monitor that you want to return scope
   * suggestions for.</p>
   */
  inline const Aws::String& GetMonitorArn() const { return m_monitorArn; }
  inline bool MonitorArnHasBeenSet() const { return m_monitorArnHasBeenSet; }
  template <typename MonitorArnT = Aws::String>
  void SetMonitorArn(MonitorArnT&& value) {
    m_monitorArnHasBeenSet = true;
    m_monitorArn = std::forward<MonitorArnT>(value);
  }
  template <typename MonitorArnT = Aws::String>
  GetMonitorScopeSuggestionsRequest& WithMonitorArn(MonitorArnT&& value) {
    SetMonitorArn(std::forward<MonitorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of query results that you want to return with this call.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetMonitorScopeSuggestionsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

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
  GetMonitorScopeSuggestionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_monitorArn;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_monitorArnHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
