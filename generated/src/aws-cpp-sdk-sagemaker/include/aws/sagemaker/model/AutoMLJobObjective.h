/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
   * <p>Specifies a metric to minimize or maximize as the objective of a job. V2 API
   * jobs (for example jobs created by calling <code>CreateAutoMLJobV2</code>),
   * support <code>Accuracy</code> only.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLJobObjective">AWS
   * API Reference</a></p>
   */
  class AutoMLJobObjective
  {
  public:
    AWS_SAGEMAKER_API AutoMLJobObjective();
    AWS_SAGEMAKER_API AutoMLJobObjective(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLJobObjective& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the objective metric used to measure the predictive quality of a
     * machine learning system. During training, the model's parameters are updated
     * iteratively to optimize its performance based on the feedback provided by the
     * objective metric when evaluating the model on the validation dataset.</p> <p>For
     * the list of all available metrics supported by Autopilot, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-metrics-validation.html#autopilot-metrics">Autopilot
     * metrics</a>.</p> <p>If you do not specify a metric explicitly, the default
     * behavior is to automatically use:</p> <ul> <li> <p> <code>MSE</code>: for
     * regression.</p> </li> <li> <p> <code>F1</code>: for binary classification</p>
     * </li> <li> <p> <code>Accuracy</code>: for multiclass classification.</p> </li>
     * </ul>
     */
    inline const AutoMLMetricEnum& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the objective metric used to measure the predictive quality of a
     * machine learning system. During training, the model's parameters are updated
     * iteratively to optimize its performance based on the feedback provided by the
     * objective metric when evaluating the model on the validation dataset.</p> <p>For
     * the list of all available metrics supported by Autopilot, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-metrics-validation.html#autopilot-metrics">Autopilot
     * metrics</a>.</p> <p>If you do not specify a metric explicitly, the default
     * behavior is to automatically use:</p> <ul> <li> <p> <code>MSE</code>: for
     * regression.</p> </li> <li> <p> <code>F1</code>: for binary classification</p>
     * </li> <li> <p> <code>Accuracy</code>: for multiclass classification.</p> </li>
     * </ul>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the objective metric used to measure the predictive quality of a
     * machine learning system. During training, the model's parameters are updated
     * iteratively to optimize its performance based on the feedback provided by the
     * objective metric when evaluating the model on the validation dataset.</p> <p>For
     * the list of all available metrics supported by Autopilot, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-metrics-validation.html#autopilot-metrics">Autopilot
     * metrics</a>.</p> <p>If you do not specify a metric explicitly, the default
     * behavior is to automatically use:</p> <ul> <li> <p> <code>MSE</code>: for
     * regression.</p> </li> <li> <p> <code>F1</code>: for binary classification</p>
     * </li> <li> <p> <code>Accuracy</code>: for multiclass classification.</p> </li>
     * </ul>
     */
    inline void SetMetricName(const AutoMLMetricEnum& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the objective metric used to measure the predictive quality of a
     * machine learning system. During training, the model's parameters are updated
     * iteratively to optimize its performance based on the feedback provided by the
     * objective metric when evaluating the model on the validation dataset.</p> <p>For
     * the list of all available metrics supported by Autopilot, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-metrics-validation.html#autopilot-metrics">Autopilot
     * metrics</a>.</p> <p>If you do not specify a metric explicitly, the default
     * behavior is to automatically use:</p> <ul> <li> <p> <code>MSE</code>: for
     * regression.</p> </li> <li> <p> <code>F1</code>: for binary classification</p>
     * </li> <li> <p> <code>Accuracy</code>: for multiclass classification.</p> </li>
     * </ul>
     */
    inline void SetMetricName(AutoMLMetricEnum&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the objective metric used to measure the predictive quality of a
     * machine learning system. During training, the model's parameters are updated
     * iteratively to optimize its performance based on the feedback provided by the
     * objective metric when evaluating the model on the validation dataset.</p> <p>For
     * the list of all available metrics supported by Autopilot, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-metrics-validation.html#autopilot-metrics">Autopilot
     * metrics</a>.</p> <p>If you do not specify a metric explicitly, the default
     * behavior is to automatically use:</p> <ul> <li> <p> <code>MSE</code>: for
     * regression.</p> </li> <li> <p> <code>F1</code>: for binary classification</p>
     * </li> <li> <p> <code>Accuracy</code>: for multiclass classification.</p> </li>
     * </ul>
     */
    inline AutoMLJobObjective& WithMetricName(const AutoMLMetricEnum& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the objective metric used to measure the predictive quality of a
     * machine learning system. During training, the model's parameters are updated
     * iteratively to optimize its performance based on the feedback provided by the
     * objective metric when evaluating the model on the validation dataset.</p> <p>For
     * the list of all available metrics supported by Autopilot, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-metrics-validation.html#autopilot-metrics">Autopilot
     * metrics</a>.</p> <p>If you do not specify a metric explicitly, the default
     * behavior is to automatically use:</p> <ul> <li> <p> <code>MSE</code>: for
     * regression.</p> </li> <li> <p> <code>F1</code>: for binary classification</p>
     * </li> <li> <p> <code>Accuracy</code>: for multiclass classification.</p> </li>
     * </ul>
     */
    inline AutoMLJobObjective& WithMetricName(AutoMLMetricEnum&& value) { SetMetricName(std::move(value)); return *this;}

  private:

    AutoMLMetricEnum m_metricName;
    bool m_metricNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
