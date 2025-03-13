/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/UpdatePipeSourceActiveMQBrokerParameters.h>
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

UpdatePipeSourceActiveMQBrokerParameters::UpdatePipeSourceActiveMQBrokerParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdatePipeSourceActiveMQBrokerParameters& UpdatePipeSourceActiveMQBrokerParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Credentials"))
  {
    m_credentials = jsonValue.GetObject("Credentials");
    m_credentialsHasBeenSet = true;
  }
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

JsonValue UpdatePipeSourceActiveMQBrokerParameters::Jsonize() const
{
  JsonValue payload;

  if(m_credentialsHasBeenSet)
  {
   payload.WithObject("Credentials", m_credentials.Jsonize());

  }

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
