/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/MetricUnit.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/model/WorkloadInsightsTopContributorsDataPoint.h>
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
  class GetQueryResultsWorkloadInsightsTopContributorsDataResult
  {
  public:
    AWS_NETWORKFLOWMONITOR_API GetQueryResultsWorkloadInsightsTopContributorsDataResult() = default;
    AWS_NETWORKFLOWMONITOR_API GetQueryResultsWorkloadInsightsTopContributorsDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFLOWMONITOR_API GetQueryResultsWorkloadInsightsTopContributorsDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The units for a metric returned by the query.</p>
     */
    inline MetricUnit GetUnit() const { return m_unit; }
    inline void SetUnit(MetricUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline GetQueryResultsWorkloadInsightsTopContributorsDataResult& WithUnit(MetricUnit value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The datapoints returned by the query.</p>
     */
    inline const Aws::Vector<WorkloadInsightsTopContributorsDataPoint>& GetDatapoints() const { return m_datapoints; }
    template<typename DatapointsT = Aws::Vector<WorkloadInsightsTopContributorsDataPoint>>
    void SetDatapoints(DatapointsT&& value) { m_datapointsHasBeenSet = true; m_datapoints = std::forward<DatapointsT>(value); }
    template<typename DatapointsT = Aws::Vector<WorkloadInsightsTopContributorsDataPoint>>
    GetQueryResultsWorkloadInsightsTopContributorsDataResult& WithDatapoints(DatapointsT&& value) { SetDatapoints(std::forward<DatapointsT>(value)); return *this;}
    template<typename DatapointsT = WorkloadInsightsTopContributorsDataPoint>
    GetQueryResultsWorkloadInsightsTopContributorsDataResult& AddDatapoints(DatapointsT&& value) { m_datapointsHasBeenSet = true; m_datapoints.emplace_back(std::forward<DatapointsT>(value)); return *this; }
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
    GetQueryResultsWorkloadInsightsTopContributorsDataResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetQueryResultsWorkloadInsightsTopContributorsDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MetricUnit m_unit{MetricUnit::NOT_SET};
    bool m_unitHasBeenSet = false;

    Aws::Vector<WorkloadInsightsTopContributorsDataPoint> m_datapoints;
    bool m_datapointsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
