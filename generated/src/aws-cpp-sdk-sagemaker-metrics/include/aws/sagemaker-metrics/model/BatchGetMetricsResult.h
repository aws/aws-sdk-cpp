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
    AWS_SAGEMAKERMETRICS_API BatchGetMetricsResult();
    AWS_SAGEMAKERMETRICS_API BatchGetMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERMETRICS_API BatchGetMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The results of a query to retrieve training metrics from SageMaker.</p>
     */
    inline const Aws::Vector<MetricQueryResult>& GetMetricQueryResults() const{ return m_metricQueryResults; }
    inline void SetMetricQueryResults(const Aws::Vector<MetricQueryResult>& value) { m_metricQueryResults = value; }
    inline void SetMetricQueryResults(Aws::Vector<MetricQueryResult>&& value) { m_metricQueryResults = std::move(value); }
    inline BatchGetMetricsResult& WithMetricQueryResults(const Aws::Vector<MetricQueryResult>& value) { SetMetricQueryResults(value); return *this;}
    inline BatchGetMetricsResult& WithMetricQueryResults(Aws::Vector<MetricQueryResult>&& value) { SetMetricQueryResults(std::move(value)); return *this;}
    inline BatchGetMetricsResult& AddMetricQueryResults(const MetricQueryResult& value) { m_metricQueryResults.push_back(value); return *this; }
    inline BatchGetMetricsResult& AddMetricQueryResults(MetricQueryResult&& value) { m_metricQueryResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetMetricsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetMetricsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetMetricsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MetricQueryResult> m_metricQueryResults;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMakerMetrics
} // namespace Aws
