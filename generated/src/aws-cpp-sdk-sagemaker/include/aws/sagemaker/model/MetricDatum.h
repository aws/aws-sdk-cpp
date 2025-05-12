/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutoMLMetricEnum.h>
#include <aws/sagemaker/model/AutoMLMetricExtendedEnum.h>
#include <aws/sagemaker/model/MetricSetSource.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Information about the metric for a candidate produced by an AutoML
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MetricDatum">AWS
   * API Reference</a></p>
   */
  class MetricDatum
  {
  public:
    AWS_SAGEMAKER_API MetricDatum() = default;
    AWS_SAGEMAKER_API MetricDatum(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MetricDatum& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the metric.</p>
     */
    inline AutoMLMetricEnum GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(AutoMLMetricEnum value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline MetricDatum& WithMetricName(AutoMLMetricEnum value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the standard metric. </p>  <p>For definitions of the
     * standard metrics, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-model-support-validation.html#autopilot-metrics">
     * <code>Autopilot candidate metrics</code> </a>.</p> 
     */
    inline AutoMLMetricExtendedEnum GetStandardMetricName() const { return m_standardMetricName; }
    inline bool StandardMetricNameHasBeenSet() const { return m_standardMetricNameHasBeenSet; }
    inline void SetStandardMetricName(AutoMLMetricExtendedEnum value) { m_standardMetricNameHasBeenSet = true; m_standardMetricName = value; }
    inline MetricDatum& WithStandardMetricName(AutoMLMetricExtendedEnum value) { SetStandardMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the metric.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline MetricDatum& WithValue(double value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset split from which the AutoML job produced the metric.</p>
     */
    inline MetricSetSource GetSet() const { return m_set; }
    inline bool SetHasBeenSet() const { return m_setHasBeenSet; }
    inline void SetSet(MetricSetSource value) { m_setHasBeenSet = true; m_set = value; }
    inline MetricDatum& WithSet(MetricSetSource value) { SetSet(value); return *this;}
    ///@}
  private:

    AutoMLMetricEnum m_metricName{AutoMLMetricEnum::NOT_SET};
    bool m_metricNameHasBeenSet = false;

    AutoMLMetricExtendedEnum m_standardMetricName{AutoMLMetricExtendedEnum::NOT_SET};
    bool m_standardMetricNameHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;

    MetricSetSource m_set{MetricSetSource::NOT_SET};
    bool m_setHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
