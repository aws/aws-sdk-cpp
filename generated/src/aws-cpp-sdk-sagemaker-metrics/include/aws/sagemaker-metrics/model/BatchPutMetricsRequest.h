/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-metrics/SageMakerMetrics_EXPORTS.h>
#include <aws/sagemaker-metrics/SageMakerMetricsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-metrics/model/RawMetricData.h>
#include <utility>

namespace Aws
{
namespace SageMakerMetrics
{
namespace Model
{

  /**
   */
  class BatchPutMetricsRequest : public SageMakerMetricsRequest
  {
  public:
    AWS_SAGEMAKERMETRICS_API BatchPutMetricsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutMetrics"; }

    AWS_SAGEMAKERMETRICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the Trial Component to associate with the metrics. The Trial
     * Component name must be entirely lowercase.</p>
     */
    inline const Aws::String& GetTrialComponentName() const { return m_trialComponentName; }
    inline bool TrialComponentNameHasBeenSet() const { return m_trialComponentNameHasBeenSet; }
    template<typename TrialComponentNameT = Aws::String>
    void SetTrialComponentName(TrialComponentNameT&& value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName = std::forward<TrialComponentNameT>(value); }
    template<typename TrialComponentNameT = Aws::String>
    BatchPutMetricsRequest& WithTrialComponentName(TrialComponentNameT&& value) { SetTrialComponentName(std::forward<TrialComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of raw metric values to put.</p>
     */
    inline const Aws::Vector<RawMetricData>& GetMetricData() const { return m_metricData; }
    inline bool MetricDataHasBeenSet() const { return m_metricDataHasBeenSet; }
    template<typename MetricDataT = Aws::Vector<RawMetricData>>
    void SetMetricData(MetricDataT&& value) { m_metricDataHasBeenSet = true; m_metricData = std::forward<MetricDataT>(value); }
    template<typename MetricDataT = Aws::Vector<RawMetricData>>
    BatchPutMetricsRequest& WithMetricData(MetricDataT&& value) { SetMetricData(std::forward<MetricDataT>(value)); return *this;}
    template<typename MetricDataT = RawMetricData>
    BatchPutMetricsRequest& AddMetricData(MetricDataT&& value) { m_metricDataHasBeenSet = true; m_metricData.emplace_back(std::forward<MetricDataT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_trialComponentName;
    bool m_trialComponentNameHasBeenSet = false;

    Aws::Vector<RawMetricData> m_metricData;
    bool m_metricDataHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerMetrics
} // namespace Aws
