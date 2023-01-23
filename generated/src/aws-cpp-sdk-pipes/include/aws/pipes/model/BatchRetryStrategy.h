/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>

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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The retry strategy that's associated with a job. For more information, see <a
   * href="https://docs.aws.amazon.com/batch/latest/userguide/job_retries.html">
   * Automated job retries</a> in the <i>Batch User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/BatchRetryStrategy">AWS
   * API Reference</a></p>
   */
  class BatchRetryStrategy
  {
  public:
    AWS_PIPES_API BatchRetryStrategy();
    AWS_PIPES_API BatchRetryStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API BatchRetryStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of times to move a job to the <code>RUNNABLE</code> status. If the
     * value of <code>attempts</code> is greater than one, the job is retried on
     * failure the same number of attempts as the value.</p>
     */
    inline int GetAttempts() const{ return m_attempts; }

    /**
     * <p>The number of times to move a job to the <code>RUNNABLE</code> status. If the
     * value of <code>attempts</code> is greater than one, the job is retried on
     * failure the same number of attempts as the value.</p>
     */
    inline bool AttemptsHasBeenSet() const { return m_attemptsHasBeenSet; }

    /**
     * <p>The number of times to move a job to the <code>RUNNABLE</code> status. If the
     * value of <code>attempts</code> is greater than one, the job is retried on
     * failure the same number of attempts as the value.</p>
     */
    inline void SetAttempts(int value) { m_attemptsHasBeenSet = true; m_attempts = value; }

    /**
     * <p>The number of times to move a job to the <code>RUNNABLE</code> status. If the
     * value of <code>attempts</code> is greater than one, the job is retried on
     * failure the same number of attempts as the value.</p>
     */
    inline BatchRetryStrategy& WithAttempts(int value) { SetAttempts(value); return *this;}

  private:

    int m_attempts;
    bool m_attemptsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
