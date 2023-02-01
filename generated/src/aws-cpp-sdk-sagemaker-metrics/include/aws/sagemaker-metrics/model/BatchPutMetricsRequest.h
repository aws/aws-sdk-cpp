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
    AWS_SAGEMAKERMETRICS_API BatchPutMetricsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutMetrics"; }

    AWS_SAGEMAKERMETRICS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Trial Component to associate with the metrics.</p>
     */
    inline const Aws::String& GetTrialComponentName() const{ return m_trialComponentName; }

    /**
     * <p>The name of the Trial Component to associate with the metrics.</p>
     */
    inline bool TrialComponentNameHasBeenSet() const { return m_trialComponentNameHasBeenSet; }

    /**
     * <p>The name of the Trial Component to associate with the metrics.</p>
     */
    inline void SetTrialComponentName(const Aws::String& value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName = value; }

    /**
     * <p>The name of the Trial Component to associate with the metrics.</p>
     */
    inline void SetTrialComponentName(Aws::String&& value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName = std::move(value); }

    /**
     * <p>The name of the Trial Component to associate with the metrics.</p>
     */
    inline void SetTrialComponentName(const char* value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName.assign(value); }

    /**
     * <p>The name of the Trial Component to associate with the metrics.</p>
     */
    inline BatchPutMetricsRequest& WithTrialComponentName(const Aws::String& value) { SetTrialComponentName(value); return *this;}

    /**
     * <p>The name of the Trial Component to associate with the metrics.</p>
     */
    inline BatchPutMetricsRequest& WithTrialComponentName(Aws::String&& value) { SetTrialComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the Trial Component to associate with the metrics.</p>
     */
    inline BatchPutMetricsRequest& WithTrialComponentName(const char* value) { SetTrialComponentName(value); return *this;}


    /**
     * <p>A list of raw metric values to put.</p>
     */
    inline const Aws::Vector<RawMetricData>& GetMetricData() const{ return m_metricData; }

    /**
     * <p>A list of raw metric values to put.</p>
     */
    inline bool MetricDataHasBeenSet() const { return m_metricDataHasBeenSet; }

    /**
     * <p>A list of raw metric values to put.</p>
     */
    inline void SetMetricData(const Aws::Vector<RawMetricData>& value) { m_metricDataHasBeenSet = true; m_metricData = value; }

    /**
     * <p>A list of raw metric values to put.</p>
     */
    inline void SetMetricData(Aws::Vector<RawMetricData>&& value) { m_metricDataHasBeenSet = true; m_metricData = std::move(value); }

    /**
     * <p>A list of raw metric values to put.</p>
     */
    inline BatchPutMetricsRequest& WithMetricData(const Aws::Vector<RawMetricData>& value) { SetMetricData(value); return *this;}

    /**
     * <p>A list of raw metric values to put.</p>
     */
    inline BatchPutMetricsRequest& WithMetricData(Aws::Vector<RawMetricData>&& value) { SetMetricData(std::move(value)); return *this;}

    /**
     * <p>A list of raw metric values to put.</p>
     */
    inline BatchPutMetricsRequest& AddMetricData(const RawMetricData& value) { m_metricDataHasBeenSet = true; m_metricData.push_back(value); return *this; }

    /**
     * <p>A list of raw metric values to put.</p>
     */
    inline BatchPutMetricsRequest& AddMetricData(RawMetricData&& value) { m_metricDataHasBeenSet = true; m_metricData.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_trialComponentName;
    bool m_trialComponentNameHasBeenSet = false;

    Aws::Vector<RawMetricData> m_metricData;
    bool m_metricDataHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerMetrics
} // namespace Aws
