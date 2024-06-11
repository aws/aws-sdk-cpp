﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rum/model/BatchDeleteRumMetricDefinitionsError.h>
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
  class BatchDeleteRumMetricDefinitionsResult
  {
  public:
    AWS_CLOUDWATCHRUM_API BatchDeleteRumMetricDefinitionsResult();
    AWS_CLOUDWATCHRUM_API BatchDeleteRumMetricDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHRUM_API BatchDeleteRumMetricDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of error objects, if the operation caused any errors.</p>
     */
    inline const Aws::Vector<BatchDeleteRumMetricDefinitionsError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchDeleteRumMetricDefinitionsError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchDeleteRumMetricDefinitionsError>&& value) { m_errors = std::move(value); }
    inline BatchDeleteRumMetricDefinitionsResult& WithErrors(const Aws::Vector<BatchDeleteRumMetricDefinitionsError>& value) { SetErrors(value); return *this;}
    inline BatchDeleteRumMetricDefinitionsResult& WithErrors(Aws::Vector<BatchDeleteRumMetricDefinitionsError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchDeleteRumMetricDefinitionsResult& AddErrors(const BatchDeleteRumMetricDefinitionsError& value) { m_errors.push_back(value); return *this; }
    inline BatchDeleteRumMetricDefinitionsResult& AddErrors(BatchDeleteRumMetricDefinitionsError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the metric definitions that were deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricDefinitionIds() const{ return m_metricDefinitionIds; }
    inline void SetMetricDefinitionIds(const Aws::Vector<Aws::String>& value) { m_metricDefinitionIds = value; }
    inline void SetMetricDefinitionIds(Aws::Vector<Aws::String>&& value) { m_metricDefinitionIds = std::move(value); }
    inline BatchDeleteRumMetricDefinitionsResult& WithMetricDefinitionIds(const Aws::Vector<Aws::String>& value) { SetMetricDefinitionIds(value); return *this;}
    inline BatchDeleteRumMetricDefinitionsResult& WithMetricDefinitionIds(Aws::Vector<Aws::String>&& value) { SetMetricDefinitionIds(std::move(value)); return *this;}
    inline BatchDeleteRumMetricDefinitionsResult& AddMetricDefinitionIds(const Aws::String& value) { m_metricDefinitionIds.push_back(value); return *this; }
    inline BatchDeleteRumMetricDefinitionsResult& AddMetricDefinitionIds(Aws::String&& value) { m_metricDefinitionIds.push_back(std::move(value)); return *this; }
    inline BatchDeleteRumMetricDefinitionsResult& AddMetricDefinitionIds(const char* value) { m_metricDefinitionIds.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteRumMetricDefinitionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteRumMetricDefinitionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteRumMetricDefinitionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchDeleteRumMetricDefinitionsError> m_errors;

    Aws::Vector<Aws::String> m_metricDefinitionIds;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
