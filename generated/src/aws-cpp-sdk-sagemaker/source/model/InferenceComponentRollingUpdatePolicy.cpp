/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceComponentRollingUpdatePolicy.h>
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

InferenceComponentRollingUpdatePolicy::InferenceComponentRollingUpdatePolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

InferenceComponentRollingUpdatePolicy& InferenceComponentRollingUpdatePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaximumBatchSize"))
  {
    m_maximumBatchSize = jsonValue.GetObject("MaximumBatchSize");
    m_maximumBatchSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WaitIntervalInSeconds"))
  {
    m_waitIntervalInSeconds = jsonValue.GetInteger("WaitIntervalInSeconds");
    m_waitIntervalInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaximumExecutionTimeoutInSeconds"))
  {
    m_maximumExecutionTimeoutInSeconds = jsonValue.GetInteger("MaximumExecutionTimeoutInSeconds");
    m_maximumExecutionTimeoutInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RollbackMaximumBatchSize"))
  {
    m_rollbackMaximumBatchSize = jsonValue.GetObject("RollbackMaximumBatchSize");
    m_rollbackMaximumBatchSizeHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceComponentRollingUpdatePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_maximumBatchSizeHasBeenSet)
  {
   payload.WithObject("MaximumBatchSize", m_maximumBatchSize.Jsonize());

  }

  if(m_waitIntervalInSecondsHasBeenSet)
  {
   payload.WithInteger("WaitIntervalInSeconds", m_waitIntervalInSeconds);

  }

  if(m_maximumExecutionTimeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("MaximumExecutionTimeoutInSeconds", m_maximumExecutionTimeoutInSeconds);

  }

  if(m_rollbackMaximumBatchSizeHasBeenSet)
  {
   payload.WithObject("RollbackMaximumBatchSize", m_rollbackMaximumBatchSize.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
