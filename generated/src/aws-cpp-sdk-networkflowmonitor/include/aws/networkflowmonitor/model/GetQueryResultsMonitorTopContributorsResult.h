/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/MetricUnit.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/model/MonitorTopContributorsRow.h>
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
  class GetQueryResultsMonitorTopContributorsResult
  {
  public:
    AWS_NETWORKFLOWMONITOR_API GetQueryResultsMonitorTopContributorsResult();
    AWS_NETWORKFLOWMONITOR_API GetQueryResultsMonitorTopContributorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFLOWMONITOR_API GetQueryResultsMonitorTopContributorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The units for a metric returned by the query.</p>
     */
    inline const MetricUnit& GetUnit() const{ return m_unit; }
    inline void SetUnit(const MetricUnit& value) { m_unit = value; }
    inline void SetUnit(MetricUnit&& value) { m_unit = std::move(value); }
    inline GetQueryResultsMonitorTopContributorsResult& WithUnit(const MetricUnit& value) { SetUnit(value); return *this;}
    inline GetQueryResultsMonitorTopContributorsResult& WithUnit(MetricUnit&& value) { SetUnit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The top contributor network flows overall for a specific metric type, for
     * example, the number of retransmissions.</p>
     */
    inline const Aws::Vector<MonitorTopContributorsRow>& GetTopContributors() const{ return m_topContributors; }
    inline void SetTopContributors(const Aws::Vector<MonitorTopContributorsRow>& value) { m_topContributors = value; }
    inline void SetTopContributors(Aws::Vector<MonitorTopContributorsRow>&& value) { m_topContributors = std::move(value); }
    inline GetQueryResultsMonitorTopContributorsResult& WithTopContributors(const Aws::Vector<MonitorTopContributorsRow>& value) { SetTopContributors(value); return *this;}
    inline GetQueryResultsMonitorTopContributorsResult& WithTopContributors(Aws::Vector<MonitorTopContributorsRow>&& value) { SetTopContributors(std::move(value)); return *this;}
    inline GetQueryResultsMonitorTopContributorsResult& AddTopContributors(const MonitorTopContributorsRow& value) { m_topContributors.push_back(value); return *this; }
    inline GetQueryResultsMonitorTopContributorsResult& AddTopContributors(MonitorTopContributorsRow&& value) { m_topContributors.push_back(std::move(value)); return *this; }
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
    inline GetQueryResultsMonitorTopContributorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetQueryResultsMonitorTopContributorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetQueryResultsMonitorTopContributorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetQueryResultsMonitorTopContributorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetQueryResultsMonitorTopContributorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetQueryResultsMonitorTopContributorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    MetricUnit m_unit;

    Aws::Vector<MonitorTopContributorsRow> m_topContributors;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
