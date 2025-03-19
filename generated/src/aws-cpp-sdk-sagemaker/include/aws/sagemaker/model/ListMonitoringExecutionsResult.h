/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringExecutionSummary.h>
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
  class ListMonitoringExecutionsResult
  {
  public:
    AWS_SAGEMAKER_API ListMonitoringExecutionsResult() = default;
    AWS_SAGEMAKER_API ListMonitoringExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListMonitoringExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A JSON array in which each element is a summary for a monitoring
     * execution.</p>
     */
    inline const Aws::Vector<MonitoringExecutionSummary>& GetMonitoringExecutionSummaries() const { return m_monitoringExecutionSummaries; }
    template<typename MonitoringExecutionSummariesT = Aws::Vector<MonitoringExecutionSummary>>
    void SetMonitoringExecutionSummaries(MonitoringExecutionSummariesT&& value) { m_monitoringExecutionSummariesHasBeenSet = true; m_monitoringExecutionSummaries = std::forward<MonitoringExecutionSummariesT>(value); }
    template<typename MonitoringExecutionSummariesT = Aws::Vector<MonitoringExecutionSummary>>
    ListMonitoringExecutionsResult& WithMonitoringExecutionSummaries(MonitoringExecutionSummariesT&& value) { SetMonitoringExecutionSummaries(std::forward<MonitoringExecutionSummariesT>(value)); return *this;}
    template<typename MonitoringExecutionSummariesT = MonitoringExecutionSummary>
    ListMonitoringExecutionsResult& AddMonitoringExecutionSummaries(MonitoringExecutionSummariesT&& value) { m_monitoringExecutionSummariesHasBeenSet = true; m_monitoringExecutionSummaries.emplace_back(std::forward<MonitoringExecutionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMonitoringExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMonitoringExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MonitoringExecutionSummary> m_monitoringExecutionSummaries;
    bool m_monitoringExecutionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
