/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringAlertHistorySummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class ListMonitoringAlertHistoryResult
  {
  public:
    AWS_SAGEMAKER_API ListMonitoringAlertHistoryResult() = default;
    AWS_SAGEMAKER_API ListMonitoringAlertHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListMonitoringAlertHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An alert history for a model monitoring schedule.</p>
     */
    inline const Aws::Vector<MonitoringAlertHistorySummary>& GetMonitoringAlertHistory() const { return m_monitoringAlertHistory; }
    template<typename MonitoringAlertHistoryT = Aws::Vector<MonitoringAlertHistorySummary>>
    void SetMonitoringAlertHistory(MonitoringAlertHistoryT&& value) { m_monitoringAlertHistoryHasBeenSet = true; m_monitoringAlertHistory = std::forward<MonitoringAlertHistoryT>(value); }
    template<typename MonitoringAlertHistoryT = Aws::Vector<MonitoringAlertHistorySummary>>
    ListMonitoringAlertHistoryResult& WithMonitoringAlertHistory(MonitoringAlertHistoryT&& value) { SetMonitoringAlertHistory(std::forward<MonitoringAlertHistoryT>(value)); return *this;}
    template<typename MonitoringAlertHistoryT = MonitoringAlertHistorySummary>
    ListMonitoringAlertHistoryResult& AddMonitoringAlertHistory(MonitoringAlertHistoryT&& value) { m_monitoringAlertHistoryHasBeenSet = true; m_monitoringAlertHistory.emplace_back(std::forward<MonitoringAlertHistoryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of alerts, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMonitoringAlertHistoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMonitoringAlertHistoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MonitoringAlertHistorySummary> m_monitoringAlertHistory;
    bool m_monitoringAlertHistoryHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
