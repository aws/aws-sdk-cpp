﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
   * <p>How long a job is allowed to run, or how many candidates a job is allowed to
   * generate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLJobCompletionCriteria">AWS
   * API Reference</a></p>
   */
  class AutoMLJobCompletionCriteria
  {
  public:
    AWS_SAGEMAKER_API AutoMLJobCompletionCriteria() = default;
    AWS_SAGEMAKER_API AutoMLJobCompletionCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLJobCompletionCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of times a training job is allowed to run.</p> <p>For text
     * and image classification, time-series forecasting, as well as text generation
     * (LLMs fine-tuning) problem types, the supported value is 1. For tabular problem
     * types, the maximum value is 750.</p>
     */
    inline int GetMaxCandidates() const { return m_maxCandidates; }
    inline bool MaxCandidatesHasBeenSet() const { return m_maxCandidatesHasBeenSet; }
    inline void SetMaxCandidates(int value) { m_maxCandidatesHasBeenSet = true; m_maxCandidates = value; }
    inline AutoMLJobCompletionCriteria& WithMaxCandidates(int value) { SetMaxCandidates(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum time, in seconds, that each training job executed inside
     * hyperparameter tuning is allowed to run as part of a hyperparameter tuning job.
     * For more information, see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_StoppingCondition.html">StoppingCondition</a>
     * used by the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateHyperParameterTuningJob.html">CreateHyperParameterTuningJob</a>
     * action.</p> <p>For job V2s (jobs created by calling
     * <code>CreateAutoMLJobV2</code>), this field controls the runtime of the job
     * candidate.</p> <p>For <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_TextClassificationJobConfig.html">TextGenerationJobConfig</a>
     * problem types, the maximum time defaults to 72 hours (259200 seconds).</p>
     */
    inline int GetMaxRuntimePerTrainingJobInSeconds() const { return m_maxRuntimePerTrainingJobInSeconds; }
    inline bool MaxRuntimePerTrainingJobInSecondsHasBeenSet() const { return m_maxRuntimePerTrainingJobInSecondsHasBeenSet; }
    inline void SetMaxRuntimePerTrainingJobInSeconds(int value) { m_maxRuntimePerTrainingJobInSecondsHasBeenSet = true; m_maxRuntimePerTrainingJobInSeconds = value; }
    inline AutoMLJobCompletionCriteria& WithMaxRuntimePerTrainingJobInSeconds(int value) { SetMaxRuntimePerTrainingJobInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum runtime, in seconds, an AutoML job has to complete.</p> <p>If an
     * AutoML job exceeds the maximum runtime, the job is stopped automatically and its
     * processing is ended gracefully. The AutoML job identifies the best model whose
     * training was completed and marks it as the best-performing model. Any unfinished
     * steps of the job, such as automatic one-click Autopilot model deployment, are
     * not completed.</p>
     */
    inline int GetMaxAutoMLJobRuntimeInSeconds() const { return m_maxAutoMLJobRuntimeInSeconds; }
    inline bool MaxAutoMLJobRuntimeInSecondsHasBeenSet() const { return m_maxAutoMLJobRuntimeInSecondsHasBeenSet; }
    inline void SetMaxAutoMLJobRuntimeInSeconds(int value) { m_maxAutoMLJobRuntimeInSecondsHasBeenSet = true; m_maxAutoMLJobRuntimeInSeconds = value; }
    inline AutoMLJobCompletionCriteria& WithMaxAutoMLJobRuntimeInSeconds(int value) { SetMaxAutoMLJobRuntimeInSeconds(value); return *this;}
    ///@}
  private:

    int m_maxCandidates{0};
    bool m_maxCandidatesHasBeenSet = false;

    int m_maxRuntimePerTrainingJobInSeconds{0};
    bool m_maxRuntimePerTrainingJobInSecondsHasBeenSet = false;

    int m_maxAutoMLJobRuntimeInSeconds{0};
    bool m_maxAutoMLJobRuntimeInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
