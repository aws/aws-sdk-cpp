/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PipeSourceRabbitMQBrokerParameters.h>
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

PipeSourceRabbitMQBrokerParameters::PipeSourceRabbitMQBrokerParameters() : 
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_credentialsHasBeenSet(false),
    m_maximumBatchingWindowInSeconds(0),
    m_maximumBatchingWindowInSecondsHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_virtualHostHasBeenSet(false)
{
}

PipeSourceRabbitMQBrokerParameters::PipeSourceRabbitMQBrokerParameters(JsonView jsonValue) : 
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_credentialsHasBeenSet(false),
    m_maximumBatchingWindowInSeconds(0),
    m_maximumBatchingWindowInSecondsHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_virtualHostHasBeenSet(false)
{
  *this = jsonValue;
}

PipeSourceRabbitMQBrokerParameters& PipeSourceRabbitMQBrokerParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BatchSize"))
  {
    m_batchSize = jsonValue.GetInteger("BatchSize");

    m_batchSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Credentials"))
  {
    m_credentials = jsonValue.GetObject("Credentials");

    m_credentialsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumBatchingWindowInSeconds"))
  {
    m_maximumBatchingWindowInSeconds = jsonValue.GetInteger("MaximumBatchingWindowInSeconds");

    m_maximumBatchingWindowInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueueName"))
  {
    m_queueName = jsonValue.GetString("QueueName");

    m_queueNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VirtualHost"))
  {
    m_virtualHost = jsonValue.GetString("VirtualHost");

    m_virtualHostHasBeenSet = true;
  }

  return *this;
}

JsonValue PipeSourceRabbitMQBrokerParameters::Jsonize() const
{
  JsonValue payload;

  if(m_batchSizeHasBeenSet)
  {
   payload.WithInteger("BatchSize", m_batchSize);

  }

  if(m_credentialsHasBeenSet)
  {
   payload.WithObject("Credentials", m_credentials.Jsonize());

  }

  if(m_maximumBatchingWindowInSecondsHasBeenSet)
  {
   payload.WithInteger("MaximumBatchingWindowInSeconds", m_maximumBatchingWindowInSeconds);

  }

  if(m_queueNameHasBeenSet)
  {
   payload.WithString("QueueName", m_queueName);

  }

  if(m_virtualHostHasBeenSet)
  {
   payload.WithString("VirtualHost", m_virtualHost);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
