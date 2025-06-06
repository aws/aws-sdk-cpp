﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-metrics/SageMakerMetrics_EXPORTS.h>
#include <aws/sagemaker-metrics/model/PutMetricsErrorCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMakerMetrics
{
namespace Model
{

  /**
   * <p>An error that occured when putting the metric data.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-metrics-2022-09-30/BatchPutMetricsError">AWS
   * API Reference</a></p>
   */
  class BatchPutMetricsError
  {
  public:
    AWS_SAGEMAKERMETRICS_API BatchPutMetricsError() = default;
    AWS_SAGEMAKERMETRICS_API BatchPutMetricsError(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERMETRICS_API BatchPutMetricsError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code of an error that occured when attempting to put metrics.</p>
     * <ul> <li> <p> <code>METRIC_LIMIT_EXCEEDED</code>: The maximum amount of metrics
     * per resource is exceeded.</p> </li> <li> <p> <code>INTERNAL_ERROR</code>: An
     * internal error occured.</p> </li> <li> <p> <code>VALIDATION_ERROR</code>: The
     * metric data failed validation.</p> </li> <li> <p> <code>CONFLICT_ERROR</code>:
     * Multiple requests attempted to modify the same data simultaneously.</p> </li>
     * </ul>
     */
    inline PutMetricsErrorCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(PutMetricsErrorCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline BatchPutMetricsError& WithCode(PutMetricsErrorCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An index that corresponds to the metric in the request.</p>
     */
    inline int GetMetricIndex() const { return m_metricIndex; }
    inline bool MetricIndexHasBeenSet() const { return m_metricIndexHasBeenSet; }
    inline void SetMetricIndex(int value) { m_metricIndexHasBeenSet = true; m_metricIndex = value; }
    inline BatchPutMetricsError& WithMetricIndex(int value) { SetMetricIndex(value); return *this;}
    ///@}
  private:

    PutMetricsErrorCode m_code{PutMetricsErrorCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    int m_metricIndex{0};
    bool m_metricIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerMetrics
} // namespace Aws
