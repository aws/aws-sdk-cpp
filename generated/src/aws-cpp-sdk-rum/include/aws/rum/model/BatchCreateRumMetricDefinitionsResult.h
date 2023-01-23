/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rum/model/BatchCreateRumMetricDefinitionsError.h>
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
  class BatchCreateRumMetricDefinitionsResult
  {
  public:
    AWS_CLOUDWATCHRUM_API BatchCreateRumMetricDefinitionsResult();
    AWS_CLOUDWATCHRUM_API BatchCreateRumMetricDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHRUM_API BatchCreateRumMetricDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of error objects, if the operation caused any errors.</p>
     */
    inline const Aws::Vector<BatchCreateRumMetricDefinitionsError>& GetErrors() const{ return m_errors; }

    /**
     * <p>An array of error objects, if the operation caused any errors.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchCreateRumMetricDefinitionsError>& value) { m_errors = value; }

    /**
     * <p>An array of error objects, if the operation caused any errors.</p>
     */
    inline void SetErrors(Aws::Vector<BatchCreateRumMetricDefinitionsError>&& value) { m_errors = std::move(value); }

    /**
     * <p>An array of error objects, if the operation caused any errors.</p>
     */
    inline BatchCreateRumMetricDefinitionsResult& WithErrors(const Aws::Vector<BatchCreateRumMetricDefinitionsError>& value) { SetErrors(value); return *this;}

    /**
     * <p>An array of error objects, if the operation caused any errors.</p>
     */
    inline BatchCreateRumMetricDefinitionsResult& WithErrors(Aws::Vector<BatchCreateRumMetricDefinitionsError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>An array of error objects, if the operation caused any errors.</p>
     */
    inline BatchCreateRumMetricDefinitionsResult& AddErrors(const BatchCreateRumMetricDefinitionsError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>An array of error objects, if the operation caused any errors.</p>
     */
    inline BatchCreateRumMetricDefinitionsResult& AddErrors(BatchCreateRumMetricDefinitionsError&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of structures that define the extended metrics.</p>
     */
    inline const Aws::Vector<MetricDefinition>& GetMetricDefinitions() const{ return m_metricDefinitions; }

    /**
     * <p>An array of structures that define the extended metrics.</p>
     */
    inline void SetMetricDefinitions(const Aws::Vector<MetricDefinition>& value) { m_metricDefinitions = value; }

    /**
     * <p>An array of structures that define the extended metrics.</p>
     */
    inline void SetMetricDefinitions(Aws::Vector<MetricDefinition>&& value) { m_metricDefinitions = std::move(value); }

    /**
     * <p>An array of structures that define the extended metrics.</p>
     */
    inline BatchCreateRumMetricDefinitionsResult& WithMetricDefinitions(const Aws::Vector<MetricDefinition>& value) { SetMetricDefinitions(value); return *this;}

    /**
     * <p>An array of structures that define the extended metrics.</p>
     */
    inline BatchCreateRumMetricDefinitionsResult& WithMetricDefinitions(Aws::Vector<MetricDefinition>&& value) { SetMetricDefinitions(std::move(value)); return *this;}

    /**
     * <p>An array of structures that define the extended metrics.</p>
     */
    inline BatchCreateRumMetricDefinitionsResult& AddMetricDefinitions(const MetricDefinition& value) { m_metricDefinitions.push_back(value); return *this; }

    /**
     * <p>An array of structures that define the extended metrics.</p>
     */
    inline BatchCreateRumMetricDefinitionsResult& AddMetricDefinitions(MetricDefinition&& value) { m_metricDefinitions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchCreateRumMetricDefinitionsError> m_errors;

    Aws::Vector<MetricDefinition> m_metricDefinitions;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
