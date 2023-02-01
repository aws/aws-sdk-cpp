/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rum/model/MetricDefinition.h>
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
namespace CloudWatchRUM
{
namespace Model
{
  class BatchGetRumMetricDefinitionsResult
  {
  public:
    AWS_CLOUDWATCHRUM_API BatchGetRumMetricDefinitionsResult();
    AWS_CLOUDWATCHRUM_API BatchGetRumMetricDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHRUM_API BatchGetRumMetricDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of structures that display information about the metrics that are
     * sent by the specified app monitor to the specified destination.</p>
     */
    inline const Aws::Vector<MetricDefinition>& GetMetricDefinitions() const{ return m_metricDefinitions; }

    /**
     * <p>An array of structures that display information about the metrics that are
     * sent by the specified app monitor to the specified destination.</p>
     */
    inline void SetMetricDefinitions(const Aws::Vector<MetricDefinition>& value) { m_metricDefinitions = value; }

    /**
     * <p>An array of structures that display information about the metrics that are
     * sent by the specified app monitor to the specified destination.</p>
     */
    inline void SetMetricDefinitions(Aws::Vector<MetricDefinition>&& value) { m_metricDefinitions = std::move(value); }

    /**
     * <p>An array of structures that display information about the metrics that are
     * sent by the specified app monitor to the specified destination.</p>
     */
    inline BatchGetRumMetricDefinitionsResult& WithMetricDefinitions(const Aws::Vector<MetricDefinition>& value) { SetMetricDefinitions(value); return *this;}

    /**
     * <p>An array of structures that display information about the metrics that are
     * sent by the specified app monitor to the specified destination.</p>
     */
    inline BatchGetRumMetricDefinitionsResult& WithMetricDefinitions(Aws::Vector<MetricDefinition>&& value) { SetMetricDefinitions(std::move(value)); return *this;}

    /**
     * <p>An array of structures that display information about the metrics that are
     * sent by the specified app monitor to the specified destination.</p>
     */
    inline BatchGetRumMetricDefinitionsResult& AddMetricDefinitions(const MetricDefinition& value) { m_metricDefinitions.push_back(value); return *this; }

    /**
     * <p>An array of structures that display information about the metrics that are
     * sent by the specified app monitor to the specified destination.</p>
     */
    inline BatchGetRumMetricDefinitionsResult& AddMetricDefinitions(MetricDefinition&& value) { m_metricDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline BatchGetRumMetricDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline BatchGetRumMetricDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline BatchGetRumMetricDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MetricDefinition> m_metricDefinitions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
