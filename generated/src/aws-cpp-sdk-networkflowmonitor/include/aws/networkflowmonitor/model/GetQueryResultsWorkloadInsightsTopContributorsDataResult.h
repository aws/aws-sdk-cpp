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
    AWS_NETWORKFLOWMONITOR_API GetQueryResultsWorkloadInsightsTopContributorsDataResult();
    AWS_NETWORKFLOWMONITOR_API GetQueryResultsWorkloadInsightsTopContributorsDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFLOWMONITOR_API GetQueryResultsWorkloadInsightsTopContributorsDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The units for a metric returned by the query.</p>
     */
    inline const MetricUnit& GetUnit() const{ return m_unit; }
    inline void SetUnit(const MetricUnit& value) { m_unit = value; }
    inline void SetUnit(MetricUnit&& value) { m_unit = std::move(value); }
    inline GetQueryResultsWorkloadInsightsTopContributorsDataResult& WithUnit(const MetricUnit& value) { SetUnit(value); return *this;}
    inline GetQueryResultsWorkloadInsightsTopContributorsDataResult& WithUnit(MetricUnit&& value) { SetUnit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The datapoints returned by the query.</p>
     */
    inline const Aws::Vector<WorkloadInsightsTopContributorsDataPoint>& GetDatapoints() const{ return m_datapoints; }
    inline void SetDatapoints(const Aws::Vector<WorkloadInsightsTopContributorsDataPoint>& value) { m_datapoints = value; }
    inline void SetDatapoints(Aws::Vector<WorkloadInsightsTopContributorsDataPoint>&& value) { m_datapoints = std::move(value); }
    inline GetQueryResultsWorkloadInsightsTopContributorsDataResult& WithDatapoints(const Aws::Vector<WorkloadInsightsTopContributorsDataPoint>& value) { SetDatapoints(value); return *this;}
    inline GetQueryResultsWorkloadInsightsTopContributorsDataResult& WithDatapoints(Aws::Vector<WorkloadInsightsTopContributorsDataPoint>&& value) { SetDatapoints(std::move(value)); return *this;}
    inline GetQueryResultsWorkloadInsightsTopContributorsDataResult& AddDatapoints(const WorkloadInsightsTopContributorsDataPoint& value) { m_datapoints.push_back(value); return *this; }
    inline GetQueryResultsWorkloadInsightsTopContributorsDataResult& AddDatapoints(WorkloadInsightsTopContributorsDataPoint&& value) { m_datapoints.push_back(std::move(value)); return *this; }
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
    inline GetQueryResultsWorkloadInsightsTopContributorsDataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetQueryResultsWorkloadInsightsTopContributorsDataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetQueryResultsWorkloadInsightsTopContributorsDataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetQueryResultsWorkloadInsightsTopContributorsDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetQueryResultsWorkloadInsightsTopContributorsDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetQueryResultsWorkloadInsightsTopContributorsDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    MetricUnit m_unit;

    Aws::Vector<WorkloadInsightsTopContributorsDataPoint> m_datapoints;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
