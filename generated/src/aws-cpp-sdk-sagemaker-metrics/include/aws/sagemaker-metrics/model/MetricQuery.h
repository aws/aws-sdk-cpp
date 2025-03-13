/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-metrics/SageMakerMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-metrics/model/MetricStatistic.h>
#include <aws/sagemaker-metrics/model/Period.h>
#include <aws/sagemaker-metrics/model/XAxisType.h>
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
   * <p>Specifies a query to retrieve training metrics from SageMaker.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-metrics-2022-09-30/MetricQuery">AWS
   * API Reference</a></p>
   */
  class MetricQuery
  {
  public:
    AWS_SAGEMAKERMETRICS_API MetricQuery() = default;
    AWS_SAGEMAKERMETRICS_API MetricQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERMETRICS_API MetricQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the metric to retrieve.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    MetricQuery& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the SageMaker resource to retrieve metrics for.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    MetricQuery& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metrics stat type of metrics to retrieve.</p>
     */
    inline MetricStatistic GetMetricStat() const { return m_metricStat; }
    inline bool MetricStatHasBeenSet() const { return m_metricStatHasBeenSet; }
    inline void SetMetricStat(MetricStatistic value) { m_metricStatHasBeenSet = true; m_metricStat = value; }
    inline MetricQuery& WithMetricStat(MetricStatistic value) { SetMetricStat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time period of metrics to retrieve.</p>
     */
    inline Period GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(Period value) { m_periodHasBeenSet = true; m_period = value; }
    inline MetricQuery& WithPeriod(Period value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The x-axis type of metrics to retrieve.</p>
     */
    inline XAxisType GetXAxisType() const { return m_xAxisType; }
    inline bool XAxisTypeHasBeenSet() const { return m_xAxisTypeHasBeenSet; }
    inline void SetXAxisType(XAxisType value) { m_xAxisTypeHasBeenSet = true; m_xAxisType = value; }
    inline MetricQuery& WithXAxisType(XAxisType value) { SetXAxisType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of metrics to retrieve.</p>
     */
    inline long long GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    inline void SetStart(long long value) { m_startHasBeenSet = true; m_start = value; }
    inline MetricQuery& WithStart(long long value) { SetStart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of metrics to retrieve.</p>
     */
    inline long long GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    inline void SetEnd(long long value) { m_endHasBeenSet = true; m_end = value; }
    inline MetricQuery& WithEnd(long long value) { SetEnd(value); return *this;}
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    MetricStatistic m_metricStat{MetricStatistic::NOT_SET};
    bool m_metricStatHasBeenSet = false;

    Period m_period{Period::NOT_SET};
    bool m_periodHasBeenSet = false;

    XAxisType m_xAxisType{XAxisType::NOT_SET};
    bool m_xAxisTypeHasBeenSet = false;

    long long m_start{0};
    bool m_startHasBeenSet = false;

    long long m_end{0};
    bool m_endHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerMetrics
} // namespace Aws
