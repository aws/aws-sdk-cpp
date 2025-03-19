/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/UpdatePipeSourceSqsQueueParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

UpdatePipeSourceSqsQueueParameters::UpdatePipeSourceSqsQueueParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdatePipeSourceSqsQueueParameters& UpdatePipeSourceSqsQueueParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BatchSize"))
  {
    m_batchSize = jsonValue.GetInteger("BatchSize");
    m_batchSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaximumBatchingWindowInSeconds"))
  {
    m_maximumBatchingWindowInSeconds = jsonValue.GetInteger("MaximumBatchingWindowInSeconds");
    m_maximumBatchingWindowInSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdatePipeSourceSqsQueueParameters::Jsonize() const
{
  JsonValue payload;

  if(m_batchSizeHasBeenSet)
  {
   payload.WithInteger("BatchSize", m_batchSize);

  }

  if(m_maximumBatchingWindowInSecondsHasBeenSet)
  {
   payload.WithInteger("MaximumBatchingWindowInSeconds", m_maximumBatchingWindowInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
