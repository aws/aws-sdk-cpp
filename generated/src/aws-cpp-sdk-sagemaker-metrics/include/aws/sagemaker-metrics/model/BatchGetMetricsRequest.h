/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-metrics/SageMakerMetrics_EXPORTS.h>
#include <aws/sagemaker-metrics/SageMakerMetricsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-metrics/model/MetricQuery.h>
#include <utility>

namespace Aws
{
namespace SageMakerMetrics
{
namespace Model
{

  /**
   */
  class BatchGetMetricsRequest : public SageMakerMetricsRequest
  {
  public:
    AWS_SAGEMAKERMETRICS_API BatchGetMetricsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetMetrics"; }

    AWS_SAGEMAKERMETRICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Queries made to retrieve training metrics from SageMaker.</p>
     */
    inline const Aws::Vector<MetricQuery>& GetMetricQueries() const { return m_metricQueries; }
    inline bool MetricQueriesHasBeenSet() const { return m_metricQueriesHasBeenSet; }
    template<typename MetricQueriesT = Aws::Vector<MetricQuery>>
    void SetMetricQueries(MetricQueriesT&& value) { m_metricQueriesHasBeenSet = true; m_metricQueries = std::forward<MetricQueriesT>(value); }
    template<typename MetricQueriesT = Aws::Vector<MetricQuery>>
    BatchGetMetricsRequest& WithMetricQueries(MetricQueriesT&& value) { SetMetricQueries(std::forward<MetricQueriesT>(value)); return *this;}
    template<typename MetricQueriesT = MetricQuery>
    BatchGetMetricsRequest& AddMetricQueries(MetricQueriesT&& value) { m_metricQueriesHasBeenSet = true; m_metricQueries.emplace_back(std::forward<MetricQueriesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<MetricQuery> m_metricQueries;
    bool m_metricQueriesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerMetrics
} // namespace Aws
