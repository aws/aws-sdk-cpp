/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CompleteOnConvergence.h>
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
   * <p>A flag to indicating that automatic model tuning (AMT) has detected model
   * convergence, defined as a lack of significant improvement (1% or less) against
   * an objective metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ConvergenceDetected">AWS
   * API Reference</a></p>
   */
  class ConvergenceDetected
  {
  public:
    AWS_SAGEMAKER_API ConvergenceDetected();
    AWS_SAGEMAKER_API ConvergenceDetected(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ConvergenceDetected& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A flag to stop a tuning job once AMT has detected that the job has
     * converged.</p>
     */
    inline const CompleteOnConvergence& GetCompleteOnConvergence() const{ return m_completeOnConvergence; }

    /**
     * <p>A flag to stop a tuning job once AMT has detected that the job has
     * converged.</p>
     */
    inline bool CompleteOnConvergenceHasBeenSet() const { return m_completeOnConvergenceHasBeenSet; }

    /**
     * <p>A flag to stop a tuning job once AMT has detected that the job has
     * converged.</p>
     */
    inline void SetCompleteOnConvergence(const CompleteOnConvergence& value) { m_completeOnConvergenceHasBeenSet = true; m_completeOnConvergence = value; }

    /**
     * <p>A flag to stop a tuning job once AMT has detected that the job has
     * converged.</p>
     */
    inline void SetCompleteOnConvergence(CompleteOnConvergence&& value) { m_completeOnConvergenceHasBeenSet = true; m_completeOnConvergence = std::move(value); }

    /**
     * <p>A flag to stop a tuning job once AMT has detected that the job has
     * converged.</p>
     */
    inline ConvergenceDetected& WithCompleteOnConvergence(const CompleteOnConvergence& value) { SetCompleteOnConvergence(value); return *this;}

    /**
     * <p>A flag to stop a tuning job once AMT has detected that the job has
     * converged.</p>
     */
    inline ConvergenceDetected& WithCompleteOnConvergence(CompleteOnConvergence&& value) { SetCompleteOnConvergence(std::move(value)); return *this;}

  private:

    CompleteOnConvergence m_completeOnConvergence;
    bool m_completeOnConvergenceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
