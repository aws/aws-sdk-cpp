﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    ///@{
    /**
     * <p>An array of error objects, if the operation caused any errors.</p>
     */
    inline const Aws::Vector<BatchCreateRumMetricDefinitionsError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchCreateRumMetricDefinitionsError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchCreateRumMetricDefinitionsError>&& value) { m_errors = std::move(value); }
    inline BatchCreateRumMetricDefinitionsResult& WithErrors(const Aws::Vector<BatchCreateRumMetricDefinitionsError>& value) { SetErrors(value); return *this;}
    inline BatchCreateRumMetricDefinitionsResult& WithErrors(Aws::Vector<BatchCreateRumMetricDefinitionsError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchCreateRumMetricDefinitionsResult& AddErrors(const BatchCreateRumMetricDefinitionsError& value) { m_errors.push_back(value); return *this; }
    inline BatchCreateRumMetricDefinitionsResult& AddErrors(BatchCreateRumMetricDefinitionsError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of structures that define the extended metrics.</p>
     */
    inline const Aws::Vector<MetricDefinition>& GetMetricDefinitions() const{ return m_metricDefinitions; }
    inline void SetMetricDefinitions(const Aws::Vector<MetricDefinition>& value) { m_metricDefinitions = value; }
    inline void SetMetricDefinitions(Aws::Vector<MetricDefinition>&& value) { m_metricDefinitions = std::move(value); }
    inline BatchCreateRumMetricDefinitionsResult& WithMetricDefinitions(const Aws::Vector<MetricDefinition>& value) { SetMetricDefinitions(value); return *this;}
    inline BatchCreateRumMetricDefinitionsResult& WithMetricDefinitions(Aws::Vector<MetricDefinition>&& value) { SetMetricDefinitions(std::move(value)); return *this;}
    inline BatchCreateRumMetricDefinitionsResult& AddMetricDefinitions(const MetricDefinition& value) { m_metricDefinitions.push_back(value); return *this; }
    inline BatchCreateRumMetricDefinitionsResult& AddMetricDefinitions(MetricDefinition&& value) { m_metricDefinitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchCreateRumMetricDefinitionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchCreateRumMetricDefinitionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchCreateRumMetricDefinitionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchCreateRumMetricDefinitionsError> m_errors;

    Aws::Vector<MetricDefinition> m_metricDefinitions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
