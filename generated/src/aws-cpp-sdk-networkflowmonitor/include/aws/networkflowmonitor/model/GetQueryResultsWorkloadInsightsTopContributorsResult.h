/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/model/WorkloadInsightsTopContributorsRow.h>
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
namespace NetworkFlowMonitor
{
namespace Model
{
  class GetQueryResultsWorkloadInsightsTopContributorsResult
  {
  public:
    AWS_NETWORKFLOWMONITOR_API GetQueryResultsWorkloadInsightsTopContributorsResult() = default;
    AWS_NETWORKFLOWMONITOR_API GetQueryResultsWorkloadInsightsTopContributorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFLOWMONITOR_API GetQueryResultsWorkloadInsightsTopContributorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The top contributor network flows overall for a specific metric type, for
     * example, the number of retransmissions.</p>
     */
    inline const Aws::Vector<WorkloadInsightsTopContributorsRow>& GetTopContributors() const { return m_topContributors; }
    template<typename TopContributorsT = Aws::Vector<WorkloadInsightsTopContributorsRow>>
    void SetTopContributors(TopContributorsT&& value) { m_topContributorsHasBeenSet = true; m_topContributors = std::forward<TopContributorsT>(value); }
    template<typename TopContributorsT = Aws::Vector<WorkloadInsightsTopContributorsRow>>
    GetQueryResultsWorkloadInsightsTopContributorsResult& WithTopContributors(TopContributorsT&& value) { SetTopContributors(std::forward<TopContributorsT>(value)); return *this;}
    template<typename TopContributorsT = WorkloadInsightsTopContributorsRow>
    GetQueryResultsWorkloadInsightsTopContributorsResult& AddTopContributors(TopContributorsT&& value) { m_topContributorsHasBeenSet = true; m_topContributors.emplace_back(std::forward<TopContributorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetQueryResultsWorkloadInsightsTopContributorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetQueryResultsWorkloadInsightsTopContributorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WorkloadInsightsTopContributorsRow> m_topContributors;
    bool m_topContributorsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
