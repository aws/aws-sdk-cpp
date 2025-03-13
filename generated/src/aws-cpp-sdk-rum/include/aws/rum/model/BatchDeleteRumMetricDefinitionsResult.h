/**
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
    AWS_CLOUDWATCHRUM_API BatchDeleteRumMetricDefinitionsResult() = default;
    AWS_CLOUDWATCHRUM_API BatchDeleteRumMetricDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHRUM_API BatchDeleteRumMetricDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of error objects, if the operation caused any errors.</p>
     */
    inline const Aws::Vector<BatchDeleteRumMetricDefinitionsError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchDeleteRumMetricDefinitionsError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchDeleteRumMetricDefinitionsError>>
    BatchDeleteRumMetricDefinitionsResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchDeleteRumMetricDefinitionsError>
    BatchDeleteRumMetricDefinitionsResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the metric definitions that were deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricDefinitionIds() const { return m_metricDefinitionIds; }
    template<typename MetricDefinitionIdsT = Aws::Vector<Aws::String>>
    void SetMetricDefinitionIds(MetricDefinitionIdsT&& value) { m_metricDefinitionIdsHasBeenSet = true; m_metricDefinitionIds = std::forward<MetricDefinitionIdsT>(value); }
    template<typename MetricDefinitionIdsT = Aws::Vector<Aws::String>>
    BatchDeleteRumMetricDefinitionsResult& WithMetricDefinitionIds(MetricDefinitionIdsT&& value) { SetMetricDefinitionIds(std::forward<MetricDefinitionIdsT>(value)); return *this;}
    template<typename MetricDefinitionIdsT = Aws::String>
    BatchDeleteRumMetricDefinitionsResult& AddMetricDefinitionIds(MetricDefinitionIdsT&& value) { m_metricDefinitionIdsHasBeenSet = true; m_metricDefinitionIds.emplace_back(std::forward<MetricDefinitionIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDeleteRumMetricDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchDeleteRumMetricDefinitionsError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::Vector<Aws::String> m_metricDefinitionIds;
    bool m_metricDefinitionIdsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
