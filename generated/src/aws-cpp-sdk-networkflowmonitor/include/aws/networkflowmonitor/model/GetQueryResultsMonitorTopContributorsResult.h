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
    AWS_NETWORKFLOWMONITOR_API GetQueryResultsMonitorTopContributorsResult() = default;
    AWS_NETWORKFLOWMONITOR_API GetQueryResultsMonitorTopContributorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFLOWMONITOR_API GetQueryResultsMonitorTopContributorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The units for a metric returned by the query.</p>
     */
    inline MetricUnit GetUnit() const { return m_unit; }
    inline void SetUnit(MetricUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline GetQueryResultsMonitorTopContributorsResult& WithUnit(MetricUnit value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The top contributor network flows overall for a specific metric type, for
     * example, the number of retransmissions.</p>
     */
    inline const Aws::Vector<MonitorTopContributorsRow>& GetTopContributors() const { return m_topContributors; }
    template<typename TopContributorsT = Aws::Vector<MonitorTopContributorsRow>>
    void SetTopContributors(TopContributorsT&& value) { m_topContributorsHasBeenSet = true; m_topContributors = std::forward<TopContributorsT>(value); }
    template<typename TopContributorsT = Aws::Vector<MonitorTopContributorsRow>>
    GetQueryResultsMonitorTopContributorsResult& WithTopContributors(TopContributorsT&& value) { SetTopContributors(std::forward<TopContributorsT>(value)); return *this;}
    template<typename TopContributorsT = MonitorTopContributorsRow>
    GetQueryResultsMonitorTopContributorsResult& AddTopContributors(TopContributorsT&& value) { m_topContributorsHasBeenSet = true; m_topContributors.emplace_back(std::forward<TopContributorsT>(value)); return *this; }
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
    GetQueryResultsMonitorTopContributorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetQueryResultsMonitorTopContributorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MetricUnit m_unit{MetricUnit::NOT_SET};
    bool m_unitHasBeenSet = false;

    Aws::Vector<MonitorTopContributorsRow> m_topContributors;
    bool m_topContributorsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
