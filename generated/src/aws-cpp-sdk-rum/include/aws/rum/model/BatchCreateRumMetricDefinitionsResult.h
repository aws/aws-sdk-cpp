/**
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
    AWS_CLOUDWATCHRUM_API BatchCreateRumMetricDefinitionsResult() = default;
    AWS_CLOUDWATCHRUM_API BatchCreateRumMetricDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHRUM_API BatchCreateRumMetricDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of error objects, if the operation caused any errors.</p>
     */
    inline const Aws::Vector<BatchCreateRumMetricDefinitionsError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchCreateRumMetricDefinitionsError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchCreateRumMetricDefinitionsError>>
    BatchCreateRumMetricDefinitionsResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchCreateRumMetricDefinitionsError>
    BatchCreateRumMetricDefinitionsResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of structures that define the extended metrics.</p>
     */
    inline const Aws::Vector<MetricDefinition>& GetMetricDefinitions() const { return m_metricDefinitions; }
    template<typename MetricDefinitionsT = Aws::Vector<MetricDefinition>>
    void SetMetricDefinitions(MetricDefinitionsT&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions = std::forward<MetricDefinitionsT>(value); }
    template<typename MetricDefinitionsT = Aws::Vector<MetricDefinition>>
    BatchCreateRumMetricDefinitionsResult& WithMetricDefinitions(MetricDefinitionsT&& value) { SetMetricDefinitions(std::forward<MetricDefinitionsT>(value)); return *this;}
    template<typename MetricDefinitionsT = MetricDefinition>
    BatchCreateRumMetricDefinitionsResult& AddMetricDefinitions(MetricDefinitionsT&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions.emplace_back(std::forward<MetricDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchCreateRumMetricDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchCreateRumMetricDefinitionsError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::Vector<MetricDefinition> m_metricDefinitions;
    bool m_metricDefinitionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
