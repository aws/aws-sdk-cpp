/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutotuneMode.h>
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
   * <p>A flag to indicate if you want to use Autotune to automatically find optimal
   * values for the following fields:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTuningJobConfig.html#sagemaker-Type-HyperParameterTuningJobConfig-ParameterRanges">ParameterRanges</a>:
   * The names and ranges of parameters that a hyperparameter tuning job can
   * optimize.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ResourceLimits.html">ResourceLimits</a>:
   * The maximum resources that can be used for a training job. These resources
   * include the maximum number of training jobs, the maximum runtime of a tuning
   * job, and the maximum number of training jobs to run at the same time.</p> </li>
   * <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTuningJobConfig.html#sagemaker-Type-HyperParameterTuningJobConfig-TrainingJobEarlyStoppingType">TrainingJobEarlyStoppingType</a>:
   * A flag that specifies whether or not to use early stopping for training jobs
   * launched by a hyperparameter tuning job.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTrainingJobDefinition.html#sagemaker-Type-HyperParameterTrainingJobDefinition-RetryStrategy">RetryStrategy</a>:
   * The number of times to retry a training job.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTuningJobConfig.html">Strategy</a>:
   * Specifies how hyperparameter tuning chooses the combinations of hyperparameter
   * values to use for the training jobs that it launches.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ConvergenceDetected.html">ConvergenceDetected</a>:
   * A flag to indicate that Automatic model tuning (AMT) has detected model
   * convergence.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Autotune">AWS
   * API Reference</a></p>
   */
  class Autotune
  {
  public:
    AWS_SAGEMAKER_API Autotune();
    AWS_SAGEMAKER_API Autotune(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Autotune& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Set <code>Mode</code> to <code>Enabled</code> if you want to use
     * Autotune.</p>
     */
    inline const AutotuneMode& GetMode() const{ return m_mode; }

    /**
     * <p>Set <code>Mode</code> to <code>Enabled</code> if you want to use
     * Autotune.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>Set <code>Mode</code> to <code>Enabled</code> if you want to use
     * Autotune.</p>
     */
    inline void SetMode(const AutotuneMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>Set <code>Mode</code> to <code>Enabled</code> if you want to use
     * Autotune.</p>
     */
    inline void SetMode(AutotuneMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>Set <code>Mode</code> to <code>Enabled</code> if you want to use
     * Autotune.</p>
     */
    inline Autotune& WithMode(const AutotuneMode& value) { SetMode(value); return *this;}

    /**
     * <p>Set <code>Mode</code> to <code>Enabled</code> if you want to use
     * Autotune.</p>
     */
    inline Autotune& WithMode(AutotuneMode&& value) { SetMode(std::move(value)); return *this;}

  private:

    AutotuneMode m_mode;
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
