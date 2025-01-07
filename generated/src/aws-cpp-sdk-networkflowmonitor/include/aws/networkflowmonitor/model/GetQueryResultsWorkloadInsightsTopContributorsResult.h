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
    AWS_NETWORKFLOWMONITOR_API GetQueryResultsWorkloadInsightsTopContributorsResult();
    AWS_NETWORKFLOWMONITOR_API GetQueryResultsWorkloadInsightsTopContributorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFLOWMONITOR_API GetQueryResultsWorkloadInsightsTopContributorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The top contributor network flows overall for a specific metric type, for
     * example, the number of retransmissions.</p>
     */
    inline const Aws::Vector<WorkloadInsightsTopContributorsRow>& GetTopContributors() const{ return m_topContributors; }
    inline void SetTopContributors(const Aws::Vector<WorkloadInsightsTopContributorsRow>& value) { m_topContributors = value; }
    inline void SetTopContributors(Aws::Vector<WorkloadInsightsTopContributorsRow>&& value) { m_topContributors = std::move(value); }
    inline GetQueryResultsWorkloadInsightsTopContributorsResult& WithTopContributors(const Aws::Vector<WorkloadInsightsTopContributorsRow>& value) { SetTopContributors(value); return *this;}
    inline GetQueryResultsWorkloadInsightsTopContributorsResult& WithTopContributors(Aws::Vector<WorkloadInsightsTopContributorsRow>&& value) { SetTopContributors(std::move(value)); return *this;}
    inline GetQueryResultsWorkloadInsightsTopContributorsResult& AddTopContributors(const WorkloadInsightsTopContributorsRow& value) { m_topContributors.push_back(value); return *this; }
    inline GetQueryResultsWorkloadInsightsTopContributorsResult& AddTopContributors(WorkloadInsightsTopContributorsRow&& value) { m_topContributors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetQueryResultsWorkloadInsightsTopContributorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetQueryResultsWorkloadInsightsTopContributorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetQueryResultsWorkloadInsightsTopContributorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetQueryResultsWorkloadInsightsTopContributorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetQueryResultsWorkloadInsightsTopContributorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetQueryResultsWorkloadInsightsTopContributorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<WorkloadInsightsTopContributorsRow> m_topContributors;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
