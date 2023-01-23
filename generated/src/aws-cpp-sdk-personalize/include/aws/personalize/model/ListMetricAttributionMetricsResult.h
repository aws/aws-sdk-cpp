/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/MetricAttribute.h>
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
namespace Personalize
{
namespace Model
{
  class ListMetricAttributionMetricsResult
  {
  public:
    AWS_PERSONALIZE_API ListMetricAttributionMetricsResult();
    AWS_PERSONALIZE_API ListMetricAttributionMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListMetricAttributionMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The metrics for the specified metric attribution.</p>
     */
    inline const Aws::Vector<MetricAttribute>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>The metrics for the specified metric attribution.</p>
     */
    inline void SetMetrics(const Aws::Vector<MetricAttribute>& value) { m_metrics = value; }

    /**
     * <p>The metrics for the specified metric attribution.</p>
     */
    inline void SetMetrics(Aws::Vector<MetricAttribute>&& value) { m_metrics = std::move(value); }

    /**
     * <p>The metrics for the specified metric attribution.</p>
     */
    inline ListMetricAttributionMetricsResult& WithMetrics(const Aws::Vector<MetricAttribute>& value) { SetMetrics(value); return *this;}

    /**
     * <p>The metrics for the specified metric attribution.</p>
     */
    inline ListMetricAttributionMetricsResult& WithMetrics(Aws::Vector<MetricAttribute>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>The metrics for the specified metric attribution.</p>
     */
    inline ListMetricAttributionMetricsResult& AddMetrics(const MetricAttribute& value) { m_metrics.push_back(value); return *this; }

    /**
     * <p>The metrics for the specified metric attribution.</p>
     */
    inline ListMetricAttributionMetricsResult& AddMetrics(MetricAttribute&& value) { m_metrics.push_back(std::move(value)); return *this; }


    /**
     * <p>Specify the pagination token from a previous
     * <code>ListMetricAttributionMetricsResponse</code> request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specify the pagination token from a previous
     * <code>ListMetricAttributionMetricsResponse</code> request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Specify the pagination token from a previous
     * <code>ListMetricAttributionMetricsResponse</code> request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Specify the pagination token from a previous
     * <code>ListMetricAttributionMetricsResponse</code> request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Specify the pagination token from a previous
     * <code>ListMetricAttributionMetricsResponse</code> request to retrieve the next
     * page of results.</p>
     */
    inline ListMetricAttributionMetricsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specify the pagination token from a previous
     * <code>ListMetricAttributionMetricsResponse</code> request to retrieve the next
     * page of results.</p>
     */
    inline ListMetricAttributionMetricsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specify the pagination token from a previous
     * <code>ListMetricAttributionMetricsResponse</code> request to retrieve the next
     * page of results.</p>
     */
    inline ListMetricAttributionMetricsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MetricAttribute> m_metrics;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
