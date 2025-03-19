/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/BestObjectiveNotImproving.h>
#include <aws/sagemaker/model/ConvergenceDetected.h>
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
   * <p>The job completion criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TuningJobCompletionCriteria">AWS
   * API Reference</a></p>
   */
  class TuningJobCompletionCriteria
  {
  public:
    AWS_SAGEMAKER_API TuningJobCompletionCriteria() = default;
    AWS_SAGEMAKER_API TuningJobCompletionCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TuningJobCompletionCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the objective metric.</p>
     */
    inline double GetTargetObjectiveMetricValue() const { return m_targetObjectiveMetricValue; }
    inline bool TargetObjectiveMetricValueHasBeenSet() const { return m_targetObjectiveMetricValueHasBeenSet; }
    inline void SetTargetObjectiveMetricValue(double value) { m_targetObjectiveMetricValueHasBeenSet = true; m_targetObjectiveMetricValue = value; }
    inline TuningJobCompletionCriteria& WithTargetObjectiveMetricValue(double value) { SetTargetObjectiveMetricValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag to stop your hyperparameter tuning job if model performance fails to
     * improve as evaluated against an objective function.</p>
     */
    inline const BestObjectiveNotImproving& GetBestObjectiveNotImproving() const { return m_bestObjectiveNotImproving; }
    inline bool BestObjectiveNotImprovingHasBeenSet() const { return m_bestObjectiveNotImprovingHasBeenSet; }
    template<typename BestObjectiveNotImprovingT = BestObjectiveNotImproving>
    void SetBestObjectiveNotImproving(BestObjectiveNotImprovingT&& value) { m_bestObjectiveNotImprovingHasBeenSet = true; m_bestObjectiveNotImproving = std::forward<BestObjectiveNotImprovingT>(value); }
    template<typename BestObjectiveNotImprovingT = BestObjectiveNotImproving>
    TuningJobCompletionCriteria& WithBestObjectiveNotImproving(BestObjectiveNotImprovingT&& value) { SetBestObjectiveNotImproving(std::forward<BestObjectiveNotImprovingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag to top your hyperparameter tuning job if automatic model tuning (AMT)
     * has detected that your model has converged as evaluated against your objective
     * function.</p>
     */
    inline const ConvergenceDetected& GetConvergenceDetected() const { return m_convergenceDetected; }
    inline bool ConvergenceDetectedHasBeenSet() const { return m_convergenceDetectedHasBeenSet; }
    template<typename ConvergenceDetectedT = ConvergenceDetected>
    void SetConvergenceDetected(ConvergenceDetectedT&& value) { m_convergenceDetectedHasBeenSet = true; m_convergenceDetected = std::forward<ConvergenceDetectedT>(value); }
    template<typename ConvergenceDetectedT = ConvergenceDetected>
    TuningJobCompletionCriteria& WithConvergenceDetected(ConvergenceDetectedT&& value) { SetConvergenceDetected(std::forward<ConvergenceDetectedT>(value)); return *this;}
    ///@}
  private:

    double m_targetObjectiveMetricValue{0.0};
    bool m_targetObjectiveMetricValueHasBeenSet = false;

    BestObjectiveNotImproving m_bestObjectiveNotImproving;
    bool m_bestObjectiveNotImprovingHasBeenSet = false;

    ConvergenceDetected m_convergenceDetected;
    bool m_convergenceDetectedHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
