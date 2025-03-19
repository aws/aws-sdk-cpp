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
   * <p>The numbers of training jobs launched by a hyperparameter tuning job,
   * categorized by status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingJobStatusCounters">AWS
   * API Reference</a></p>
   */
  class TrainingJobStatusCounters
  {
  public:
    AWS_SAGEMAKER_API TrainingJobStatusCounters() = default;
    AWS_SAGEMAKER_API TrainingJobStatusCounters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrainingJobStatusCounters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of completed training jobs launched by the hyperparameter tuning
     * job.</p>
     */
    inline int GetCompleted() const { return m_completed; }
    inline bool CompletedHasBeenSet() const { return m_completedHasBeenSet; }
    inline void SetCompleted(int value) { m_completedHasBeenSet = true; m_completed = value; }
    inline TrainingJobStatusCounters& WithCompleted(int value) { SetCompleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of in-progress training jobs launched by a hyperparameter tuning
     * job.</p>
     */
    inline int GetInProgress() const { return m_inProgress; }
    inline bool InProgressHasBeenSet() const { return m_inProgressHasBeenSet; }
    inline void SetInProgress(int value) { m_inProgressHasBeenSet = true; m_inProgress = value; }
    inline TrainingJobStatusCounters& WithInProgress(int value) { SetInProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of training jobs that failed, but can be retried. A failed
     * training job can be retried only if it failed because an internal service error
     * occurred.</p>
     */
    inline int GetRetryableError() const { return m_retryableError; }
    inline bool RetryableErrorHasBeenSet() const { return m_retryableErrorHasBeenSet; }
    inline void SetRetryableError(int value) { m_retryableErrorHasBeenSet = true; m_retryableError = value; }
    inline TrainingJobStatusCounters& WithRetryableError(int value) { SetRetryableError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of training jobs that failed and can't be retried. A failed
     * training job can't be retried if it failed because a client error occurred.</p>
     */
    inline int GetNonRetryableError() const { return m_nonRetryableError; }
    inline bool NonRetryableErrorHasBeenSet() const { return m_nonRetryableErrorHasBeenSet; }
    inline void SetNonRetryableError(int value) { m_nonRetryableErrorHasBeenSet = true; m_nonRetryableError = value; }
    inline TrainingJobStatusCounters& WithNonRetryableError(int value) { SetNonRetryableError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of training jobs launched by a hyperparameter tuning job that were
     * manually stopped.</p>
     */
    inline int GetStopped() const { return m_stopped; }
    inline bool StoppedHasBeenSet() const { return m_stoppedHasBeenSet; }
    inline void SetStopped(int value) { m_stoppedHasBeenSet = true; m_stopped = value; }
    inline TrainingJobStatusCounters& WithStopped(int value) { SetStopped(value); return *this;}
    ///@}
  private:

    int m_completed{0};
    bool m_completedHasBeenSet = false;

    int m_inProgress{0};
    bool m_inProgressHasBeenSet = false;

    int m_retryableError{0};
    bool m_retryableErrorHasBeenSet = false;

    int m_nonRetryableError{0};
    bool m_nonRetryableErrorHasBeenSet = false;

    int m_stopped{0};
    bool m_stoppedHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
