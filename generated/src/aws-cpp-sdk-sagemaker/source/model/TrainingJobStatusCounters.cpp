/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrainingJobStatusCounters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

TrainingJobStatusCounters::TrainingJobStatusCounters() : 
    m_completed(0),
    m_completedHasBeenSet(false),
    m_inProgress(0),
    m_inProgressHasBeenSet(false),
    m_retryableError(0),
    m_retryableErrorHasBeenSet(false),
    m_nonRetryableError(0),
    m_nonRetryableErrorHasBeenSet(false),
    m_stopped(0),
    m_stoppedHasBeenSet(false)
{
}

TrainingJobStatusCounters::TrainingJobStatusCounters(JsonView jsonValue) : 
    m_completed(0),
    m_completedHasBeenSet(false),
    m_inProgress(0),
    m_inProgressHasBeenSet(false),
    m_retryableError(0),
    m_retryableErrorHasBeenSet(false),
    m_nonRetryableError(0),
    m_nonRetryableErrorHasBeenSet(false),
    m_stopped(0),
    m_stoppedHasBeenSet(false)
{
  *this = jsonValue;
}

TrainingJobStatusCounters& TrainingJobStatusCounters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Completed"))
  {
    m_completed = jsonValue.GetInteger("Completed");

    m_completedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InProgress"))
  {
    m_inProgress = jsonValue.GetInteger("InProgress");

    m_inProgressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetryableError"))
  {
    m_retryableError = jsonValue.GetInteger("RetryableError");

    m_retryableErrorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NonRetryableError"))
  {
    m_nonRetryableError = jsonValue.GetInteger("NonRetryableError");

    m_nonRetryableErrorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Stopped"))
  {
    m_stopped = jsonValue.GetInteger("Stopped");

    m_stoppedHasBeenSet = true;
  }

  return *this;
}

JsonValue TrainingJobStatusCounters::Jsonize() const
{
  JsonValue payload;

  if(m_completedHasBeenSet)
  {
   payload.WithInteger("Completed", m_completed);

  }

  if(m_inProgressHasBeenSet)
  {
   payload.WithInteger("InProgress", m_inProgress);

  }

  if(m_retryableErrorHasBeenSet)
  {
   payload.WithInteger("RetryableError", m_retryableError);

  }

  if(m_nonRetryableErrorHasBeenSet)
  {
   payload.WithInteger("NonRetryableError", m_nonRetryableError);

  }

  if(m_stoppedHasBeenSet)
  {
   payload.WithInteger("Stopped", m_stopped);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
