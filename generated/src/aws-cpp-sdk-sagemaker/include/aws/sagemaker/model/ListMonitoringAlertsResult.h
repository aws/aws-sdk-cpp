/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringAlertSummary.h>
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
  class ListMonitoringAlertsResult
  {
  public:
    AWS_SAGEMAKER_API ListMonitoringAlertsResult() = default;
    AWS_SAGEMAKER_API ListMonitoringAlertsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListMonitoringAlertsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A JSON array where each element is a summary for a monitoring alert.</p>
     */
    inline const Aws::Vector<MonitoringAlertSummary>& GetMonitoringAlertSummaries() const { return m_monitoringAlertSummaries; }
    template<typename MonitoringAlertSummariesT = Aws::Vector<MonitoringAlertSummary>>
    void SetMonitoringAlertSummaries(MonitoringAlertSummariesT&& value) { m_monitoringAlertSummariesHasBeenSet = true; m_monitoringAlertSummaries = std::forward<MonitoringAlertSummariesT>(value); }
    template<typename MonitoringAlertSummariesT = Aws::Vector<MonitoringAlertSummary>>
    ListMonitoringAlertsResult& WithMonitoringAlertSummaries(MonitoringAlertSummariesT&& value) { SetMonitoringAlertSummaries(std::forward<MonitoringAlertSummariesT>(value)); return *this;}
    template<typename MonitoringAlertSummariesT = MonitoringAlertSummary>
    ListMonitoringAlertsResult& AddMonitoringAlertSummaries(MonitoringAlertSummariesT&& value) { m_monitoringAlertSummariesHasBeenSet = true; m_monitoringAlertSummaries.emplace_back(std::forward<MonitoringAlertSummariesT>(value)); return *this; }
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
    ListMonitoringAlertsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMonitoringAlertsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MonitoringAlertSummary> m_monitoringAlertSummaries;
    bool m_monitoringAlertSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
