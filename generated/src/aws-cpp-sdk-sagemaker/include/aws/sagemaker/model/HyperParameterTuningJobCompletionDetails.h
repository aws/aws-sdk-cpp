/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A structure that contains runtime information about both current and
   * completed hyperparameter tuning jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterTuningJobCompletionDetails">AWS
   * API Reference</a></p>
   */
  class HyperParameterTuningJobCompletionDetails
  {
  public:
    AWS_SAGEMAKER_API HyperParameterTuningJobCompletionDetails() = default;
    AWS_SAGEMAKER_API HyperParameterTuningJobCompletionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HyperParameterTuningJobCompletionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of training jobs launched by a tuning job that are not improving
     * (1% or less) as measured by model performance evaluated against an objective
     * function.</p>
     */
    inline int GetNumberOfTrainingJobsObjectiveNotImproving() const { return m_numberOfTrainingJobsObjectiveNotImproving; }
    inline bool NumberOfTrainingJobsObjectiveNotImprovingHasBeenSet() const { return m_numberOfTrainingJobsObjectiveNotImprovingHasBeenSet; }
    inline void SetNumberOfTrainingJobsObjectiveNotImproving(int value) { m_numberOfTrainingJobsObjectiveNotImprovingHasBeenSet = true; m_numberOfTrainingJobsObjectiveNotImproving = value; }
    inline HyperParameterTuningJobCompletionDetails& WithNumberOfTrainingJobsObjectiveNotImproving(int value) { SetNumberOfTrainingJobsObjectiveNotImproving(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time in timestamp format that AMT detected model convergence, as defined
     * by a lack of significant improvement over time based on criteria developed over
     * a wide range of diverse benchmarking tests.</p>
     */
    inline const Aws::Utils::DateTime& GetConvergenceDetectedTime() const { return m_convergenceDetectedTime; }
    inline bool ConvergenceDetectedTimeHasBeenSet() const { return m_convergenceDetectedTimeHasBeenSet; }
    template<typename ConvergenceDetectedTimeT = Aws::Utils::DateTime>
    void SetConvergenceDetectedTime(ConvergenceDetectedTimeT&& value) { m_convergenceDetectedTimeHasBeenSet = true; m_convergenceDetectedTime = std::forward<ConvergenceDetectedTimeT>(value); }
    template<typename ConvergenceDetectedTimeT = Aws::Utils::DateTime>
    HyperParameterTuningJobCompletionDetails& WithConvergenceDetectedTime(ConvergenceDetectedTimeT&& value) { SetConvergenceDetectedTime(std::forward<ConvergenceDetectedTimeT>(value)); return *this;}
    ///@}
  private:

    int m_numberOfTrainingJobsObjectiveNotImproving{0};
    bool m_numberOfTrainingJobsObjectiveNotImprovingHasBeenSet = false;

    Aws::Utils::DateTime m_convergenceDetectedTime{};
    bool m_convergenceDetectedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
