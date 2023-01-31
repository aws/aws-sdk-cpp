/**
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
   * <p>A structure that keeps track of which training jobs launched by your
   * hyperparameter tuning job are not improving model performance as evaluated
   * against an objective function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/BestObjectiveNotImproving">AWS
   * API Reference</a></p>
   */
  class BestObjectiveNotImproving
  {
  public:
    AWS_SAGEMAKER_API BestObjectiveNotImproving();
    AWS_SAGEMAKER_API BestObjectiveNotImproving(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API BestObjectiveNotImproving& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of training jobs that have failed to improve model performance by
     * 1% or greater over prior training jobs as evaluated against an objective
     * function.</p>
     */
    inline int GetMaxNumberOfTrainingJobsNotImproving() const{ return m_maxNumberOfTrainingJobsNotImproving; }

    /**
     * <p>The number of training jobs that have failed to improve model performance by
     * 1% or greater over prior training jobs as evaluated against an objective
     * function.</p>
     */
    inline bool MaxNumberOfTrainingJobsNotImprovingHasBeenSet() const { return m_maxNumberOfTrainingJobsNotImprovingHasBeenSet; }

    /**
     * <p>The number of training jobs that have failed to improve model performance by
     * 1% or greater over prior training jobs as evaluated against an objective
     * function.</p>
     */
    inline void SetMaxNumberOfTrainingJobsNotImproving(int value) { m_maxNumberOfTrainingJobsNotImprovingHasBeenSet = true; m_maxNumberOfTrainingJobsNotImproving = value; }

    /**
     * <p>The number of training jobs that have failed to improve model performance by
     * 1% or greater over prior training jobs as evaluated against an objective
     * function.</p>
     */
    inline BestObjectiveNotImproving& WithMaxNumberOfTrainingJobsNotImproving(int value) { SetMaxNumberOfTrainingJobsNotImproving(value); return *this;}

  private:

    int m_maxNumberOfTrainingJobsNotImproving;
    bool m_maxNumberOfTrainingJobsNotImprovingHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
