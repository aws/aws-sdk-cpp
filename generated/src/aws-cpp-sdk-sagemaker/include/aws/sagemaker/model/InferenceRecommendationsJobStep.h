/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/RecommendationStepType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/RecommendationJobStatus.h>
#include <aws/sagemaker/model/RecommendationJobInferenceBenchmark.h>
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
   * <p>A returned array object for the <code>Steps</code> response field in the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ListInferenceRecommendationsJobSteps.html">ListInferenceRecommendationsJobSteps</a>
   * API command.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceRecommendationsJobStep">AWS
   * API Reference</a></p>
   */
  class InferenceRecommendationsJobStep
  {
  public:
    AWS_SAGEMAKER_API InferenceRecommendationsJobStep() = default;
    AWS_SAGEMAKER_API InferenceRecommendationsJobStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceRecommendationsJobStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the subtask.</p> <p> <code>BENCHMARK</code>: Evaluate the
     * performance of your model on different instance types.</p>
     */
    inline RecommendationStepType GetStepType() const { return m_stepType; }
    inline bool StepTypeHasBeenSet() const { return m_stepTypeHasBeenSet; }
    inline void SetStepType(RecommendationStepType value) { m_stepTypeHasBeenSet = true; m_stepType = value; }
    inline InferenceRecommendationsJobStep& WithStepType(RecommendationStepType value) { SetStepType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Inference Recommender job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    InferenceRecommendationsJobStep& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the benchmark.</p>
     */
    inline RecommendationJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RecommendationJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline InferenceRecommendationsJobStep& WithStatus(RecommendationJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for a specific benchmark.</p>
     */
    inline const RecommendationJobInferenceBenchmark& GetInferenceBenchmark() const { return m_inferenceBenchmark; }
    inline bool InferenceBenchmarkHasBeenSet() const { return m_inferenceBenchmarkHasBeenSet; }
    template<typename InferenceBenchmarkT = RecommendationJobInferenceBenchmark>
    void SetInferenceBenchmark(InferenceBenchmarkT&& value) { m_inferenceBenchmarkHasBeenSet = true; m_inferenceBenchmark = std::forward<InferenceBenchmarkT>(value); }
    template<typename InferenceBenchmarkT = RecommendationJobInferenceBenchmark>
    InferenceRecommendationsJobStep& WithInferenceBenchmark(InferenceBenchmarkT&& value) { SetInferenceBenchmark(std::forward<InferenceBenchmarkT>(value)); return *this;}
    ///@}
  private:

    RecommendationStepType m_stepType{RecommendationStepType::NOT_SET};
    bool m_stepTypeHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    RecommendationJobStatus m_status{RecommendationJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    RecommendationJobInferenceBenchmark m_inferenceBenchmark;
    bool m_inferenceBenchmarkHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
