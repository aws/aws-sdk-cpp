/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-metrics/SageMakerMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-metrics/model/MetricQueryResult.h>
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
namespace SageMakerMetrics
{
namespace Model
{
  class BatchGetMetricsResult
  {
  public:
    AWS_SAGEMAKERMETRICS_API BatchGetMetricsResult() = default;
    AWS_SAGEMAKERMETRICS_API BatchGetMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERMETRICS_API BatchGetMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The results of a query to retrieve training metrics from SageMaker.</p>
     */
    inline const Aws::Vector<MetricQueryResult>& GetMetricQueryResults() const { return m_metricQueryResults; }
    template<typename MetricQueryResultsT = Aws::Vector<MetricQueryResult>>
    void SetMetricQueryResults(MetricQueryResultsT&& value) { m_metricQueryResultsHasBeenSet = true; m_metricQueryResults = std::forward<MetricQueryResultsT>(value); }
    template<typename MetricQueryResultsT = Aws::Vector<MetricQueryResult>>
    BatchGetMetricsResult& WithMetricQueryResults(MetricQueryResultsT&& value) { SetMetricQueryResults(std::forward<MetricQueryResultsT>(value)); return *this;}
    template<typename MetricQueryResultsT = MetricQueryResult>
    BatchGetMetricsResult& AddMetricQueryResults(MetricQueryResultsT&& value) { m_metricQueryResultsHasBeenSet = true; m_metricQueryResults.emplace_back(std::forward<MetricQueryResultsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetMetricsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MetricQueryResult> m_metricQueryResults;
    bool m_metricQueryResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerMetrics
} // namespace Aws
