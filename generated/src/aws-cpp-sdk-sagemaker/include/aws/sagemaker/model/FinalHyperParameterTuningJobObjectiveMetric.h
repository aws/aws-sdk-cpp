/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/HyperParameterTuningJobObjectiveType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Shows the latest objective metric emitted by a training job that was launched
   * by a hyperparameter tuning job. You define the objective metric in the
   * <code>HyperParameterTuningJobObjective</code> parameter of <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTuningJobConfig.html">HyperParameterTuningJobConfig</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FinalHyperParameterTuningJobObjectiveMetric">AWS
   * API Reference</a></p>
   */
  class FinalHyperParameterTuningJobObjectiveMetric
  {
  public:
    AWS_SAGEMAKER_API FinalHyperParameterTuningJobObjectiveMetric() = default;
    AWS_SAGEMAKER_API FinalHyperParameterTuningJobObjectiveMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FinalHyperParameterTuningJobObjectiveMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Select if you want to minimize or maximize the objective metric during
     * hyperparameter tuning. </p>
     */
    inline HyperParameterTuningJobObjectiveType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(HyperParameterTuningJobObjectiveType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FinalHyperParameterTuningJobObjectiveMetric& WithType(HyperParameterTuningJobObjectiveType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the objective metric. For SageMaker built-in algorithms, metrics
     * are defined per algorithm. See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/xgboost-tuning.html">metrics
     * for XGBoost</a> as an example. You can also use a custom algorithm for training
     * and define your own metrics. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-define-metrics-variables.html">Define
     * metrics and environment variables</a>.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    FinalHyperParameterTuningJobObjectiveMetric& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the objective metric.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline FinalHyperParameterTuningJobObjectiveMetric& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    HyperParameterTuningJobObjectiveType m_type{HyperParameterTuningJobObjectiveType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
