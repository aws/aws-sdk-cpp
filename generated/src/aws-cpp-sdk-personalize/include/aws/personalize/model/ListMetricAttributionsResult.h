/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/MetricAttributionSummary.h>
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
  class ListMetricAttributionsResult
  {
  public:
    AWS_PERSONALIZE_API ListMetricAttributionsResult();
    AWS_PERSONALIZE_API ListMetricAttributionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListMetricAttributionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of metric attributions.</p>
     */
    inline const Aws::Vector<MetricAttributionSummary>& GetMetricAttributions() const{ return m_metricAttributions; }

    /**
     * <p>The list of metric attributions.</p>
     */
    inline void SetMetricAttributions(const Aws::Vector<MetricAttributionSummary>& value) { m_metricAttributions = value; }

    /**
     * <p>The list of metric attributions.</p>
     */
    inline void SetMetricAttributions(Aws::Vector<MetricAttributionSummary>&& value) { m_metricAttributions = std::move(value); }

    /**
     * <p>The list of metric attributions.</p>
     */
    inline ListMetricAttributionsResult& WithMetricAttributions(const Aws::Vector<MetricAttributionSummary>& value) { SetMetricAttributions(value); return *this;}

    /**
     * <p>The list of metric attributions.</p>
     */
    inline ListMetricAttributionsResult& WithMetricAttributions(Aws::Vector<MetricAttributionSummary>&& value) { SetMetricAttributions(std::move(value)); return *this;}

    /**
     * <p>The list of metric attributions.</p>
     */
    inline ListMetricAttributionsResult& AddMetricAttributions(const MetricAttributionSummary& value) { m_metricAttributions.push_back(value); return *this; }

    /**
     * <p>The list of metric attributions.</p>
     */
    inline ListMetricAttributionsResult& AddMetricAttributions(MetricAttributionSummary&& value) { m_metricAttributions.push_back(std::move(value)); return *this; }


    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListMetricAttributionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListMetricAttributionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListMetricAttributionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MetricAttributionSummary> m_metricAttributions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
