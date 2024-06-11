﻿/**
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
   * <p>Defines the objective metric for a hyperparameter tuning job. Hyperparameter
   * tuning uses the value of this metric to evaluate the training jobs it launches,
   * and returns the training job that results in either the highest or lowest value
   * for this metric, depending on the value you specify for the <code>Type</code>
   * parameter. If you want to define a custom objective metric, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-define-metrics-variables.html">Define
   * metrics and environment variables</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterTuningJobObjective">AWS
   * API Reference</a></p>
   */
  class HyperParameterTuningJobObjective
  {
  public:
    AWS_SAGEMAKER_API HyperParameterTuningJobObjective();
    AWS_SAGEMAKER_API HyperParameterTuningJobObjective(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HyperParameterTuningJobObjective& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether to minimize or maximize the objective metric.</p>
     */
    inline const HyperParameterTuningJobObjectiveType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const HyperParameterTuningJobObjectiveType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(HyperParameterTuningJobObjectiveType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline HyperParameterTuningJobObjective& WithType(const HyperParameterTuningJobObjectiveType& value) { SetType(value); return *this;}
    inline HyperParameterTuningJobObjective& WithType(HyperParameterTuningJobObjectiveType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric to use for the objective metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }
    inline HyperParameterTuningJobObjective& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline HyperParameterTuningJobObjective& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline HyperParameterTuningJobObjective& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}
  private:

    HyperParameterTuningJobObjectiveType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
