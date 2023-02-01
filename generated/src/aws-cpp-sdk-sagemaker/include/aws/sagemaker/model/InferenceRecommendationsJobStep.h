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
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_InferenceRecommendationsJobStep.html">ListInferenceRecommendationsJobSteps</a>
   * API command.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceRecommendationsJobStep">AWS
   * API Reference</a></p>
   */
  class InferenceRecommendationsJobStep
  {
  public:
    AWS_SAGEMAKER_API InferenceRecommendationsJobStep();
    AWS_SAGEMAKER_API InferenceRecommendationsJobStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceRecommendationsJobStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the subtask.</p> <p> <code>BENCHMARK</code>: Evaluate the
     * performance of your model on different instance types.</p>
     */
    inline const RecommendationStepType& GetStepType() const{ return m_stepType; }

    /**
     * <p>The type of the subtask.</p> <p> <code>BENCHMARK</code>: Evaluate the
     * performance of your model on different instance types.</p>
     */
    inline bool StepTypeHasBeenSet() const { return m_stepTypeHasBeenSet; }

    /**
     * <p>The type of the subtask.</p> <p> <code>BENCHMARK</code>: Evaluate the
     * performance of your model on different instance types.</p>
     */
    inline void SetStepType(const RecommendationStepType& value) { m_stepTypeHasBeenSet = true; m_stepType = value; }

    /**
     * <p>The type of the subtask.</p> <p> <code>BENCHMARK</code>: Evaluate the
     * performance of your model on different instance types.</p>
     */
    inline void SetStepType(RecommendationStepType&& value) { m_stepTypeHasBeenSet = true; m_stepType = std::move(value); }

    /**
     * <p>The type of the subtask.</p> <p> <code>BENCHMARK</code>: Evaluate the
     * performance of your model on different instance types.</p>
     */
    inline InferenceRecommendationsJobStep& WithStepType(const RecommendationStepType& value) { SetStepType(value); return *this;}

    /**
     * <p>The type of the subtask.</p> <p> <code>BENCHMARK</code>: Evaluate the
     * performance of your model on different instance types.</p>
     */
    inline InferenceRecommendationsJobStep& WithStepType(RecommendationStepType&& value) { SetStepType(std::move(value)); return *this;}


    /**
     * <p>The name of the Inference Recommender job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the Inference Recommender job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the Inference Recommender job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the Inference Recommender job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the Inference Recommender job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the Inference Recommender job.</p>
     */
    inline InferenceRecommendationsJobStep& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the Inference Recommender job.</p>
     */
    inline InferenceRecommendationsJobStep& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the Inference Recommender job.</p>
     */
    inline InferenceRecommendationsJobStep& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The current status of the benchmark.</p>
     */
    inline const RecommendationJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the benchmark.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the benchmark.</p>
     */
    inline void SetStatus(const RecommendationJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the benchmark.</p>
     */
    inline void SetStatus(RecommendationJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the benchmark.</p>
     */
    inline InferenceRecommendationsJobStep& WithStatus(const RecommendationJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the benchmark.</p>
     */
    inline InferenceRecommendationsJobStep& WithStatus(RecommendationJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The details for a specific benchmark.</p>
     */
    inline const RecommendationJobInferenceBenchmark& GetInferenceBenchmark() const{ return m_inferenceBenchmark; }

    /**
     * <p>The details for a specific benchmark.</p>
     */
    inline bool InferenceBenchmarkHasBeenSet() const { return m_inferenceBenchmarkHasBeenSet; }

    /**
     * <p>The details for a specific benchmark.</p>
     */
    inline void SetInferenceBenchmark(const RecommendationJobInferenceBenchmark& value) { m_inferenceBenchmarkHasBeenSet = true; m_inferenceBenchmark = value; }

    /**
     * <p>The details for a specific benchmark.</p>
     */
    inline void SetInferenceBenchmark(RecommendationJobInferenceBenchmark&& value) { m_inferenceBenchmarkHasBeenSet = true; m_inferenceBenchmark = std::move(value); }

    /**
     * <p>The details for a specific benchmark.</p>
     */
    inline InferenceRecommendationsJobStep& WithInferenceBenchmark(const RecommendationJobInferenceBenchmark& value) { SetInferenceBenchmark(value); return *this;}

    /**
     * <p>The details for a specific benchmark.</p>
     */
    inline InferenceRecommendationsJobStep& WithInferenceBenchmark(RecommendationJobInferenceBenchmark&& value) { SetInferenceBenchmark(std::move(value)); return *this;}

  private:

    RecommendationStepType m_stepType;
    bool m_stepTypeHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    RecommendationJobStatus m_status;
    bool m_statusHasBeenSet = false;

    RecommendationJobInferenceBenchmark m_inferenceBenchmark;
    bool m_inferenceBenchmarkHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
