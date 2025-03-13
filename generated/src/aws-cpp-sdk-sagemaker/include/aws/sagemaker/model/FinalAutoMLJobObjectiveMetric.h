/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutoMLJobObjectiveType.h>
#include <aws/sagemaker/model/AutoMLMetricEnum.h>
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
   * <p>The best candidate result from an AutoML training job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FinalAutoMLJobObjectiveMetric">AWS
   * API Reference</a></p>
   */
  class FinalAutoMLJobObjectiveMetric
  {
  public:
    AWS_SAGEMAKER_API FinalAutoMLJobObjectiveMetric() = default;
    AWS_SAGEMAKER_API FinalAutoMLJobObjectiveMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FinalAutoMLJobObjectiveMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of metric with the best result.</p>
     */
    inline AutoMLJobObjectiveType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AutoMLJobObjectiveType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FinalAutoMLJobObjectiveMetric& WithType(AutoMLJobObjectiveType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric with the best result. For a description of the
     * possible objective metrics, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLJobObjective.html">AutoMLJobObjective$MetricName</a>.</p>
     */
    inline AutoMLMetricEnum GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(AutoMLMetricEnum value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline FinalAutoMLJobObjectiveMetric& WithMetricName(AutoMLMetricEnum value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the metric with the best result.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline FinalAutoMLJobObjectiveMetric& WithValue(double value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the standard metric. For a description of the standard metrics,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-metrics-validation.html#autopilot-metrics">Autopilot
     * candidate metrics</a>.</p>
     */
    inline AutoMLMetricEnum GetStandardMetricName() const { return m_standardMetricName; }
    inline bool StandardMetricNameHasBeenSet() const { return m_standardMetricNameHasBeenSet; }
    inline void SetStandardMetricName(AutoMLMetricEnum value) { m_standardMetricNameHasBeenSet = true; m_standardMetricName = value; }
    inline FinalAutoMLJobObjectiveMetric& WithStandardMetricName(AutoMLMetricEnum value) { SetStandardMetricName(value); return *this;}
    ///@}
  private:

    AutoMLJobObjectiveType m_type{AutoMLJobObjectiveType::NOT_SET};
    bool m_typeHasBeenSet = false;

    AutoMLMetricEnum m_metricName{AutoMLMetricEnum::NOT_SET};
    bool m_metricNameHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;

    AutoMLMetricEnum m_standardMetricName{AutoMLMetricEnum::NOT_SET};
    bool m_standardMetricNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
