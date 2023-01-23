/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-metrics/SageMakerMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-metrics/model/BatchPutMetricsError.h>
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
  class BatchPutMetricsResult
  {
  public:
    AWS_SAGEMAKERMETRICS_API BatchPutMetricsResult();
    AWS_SAGEMAKERMETRICS_API BatchPutMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERMETRICS_API BatchPutMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists any errors that occur when inserting metric data.</p>
     */
    inline const Aws::Vector<BatchPutMetricsError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Lists any errors that occur when inserting metric data.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchPutMetricsError>& value) { m_errors = value; }

    /**
     * <p>Lists any errors that occur when inserting metric data.</p>
     */
    inline void SetErrors(Aws::Vector<BatchPutMetricsError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Lists any errors that occur when inserting metric data.</p>
     */
    inline BatchPutMetricsResult& WithErrors(const Aws::Vector<BatchPutMetricsError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Lists any errors that occur when inserting metric data.</p>
     */
    inline BatchPutMetricsResult& WithErrors(Aws::Vector<BatchPutMetricsError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Lists any errors that occur when inserting metric data.</p>
     */
    inline BatchPutMetricsResult& AddErrors(const BatchPutMetricsError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Lists any errors that occur when inserting metric data.</p>
     */
    inline BatchPutMetricsResult& AddErrors(BatchPutMetricsError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchPutMetricsError> m_errors;
  };

} // namespace Model
} // namespace SageMakerMetrics
} // namespace Aws
