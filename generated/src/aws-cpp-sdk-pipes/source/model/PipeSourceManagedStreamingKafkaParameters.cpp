/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PipeSourceManagedStreamingKafkaParameters.h>
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

PipeSourceManagedStreamingKafkaParameters::PipeSourceManagedStreamingKafkaParameters() : 
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_consumerGroupIDHasBeenSet(false),
    m_credentialsHasBeenSet(false),
    m_maximumBatchingWindowInSeconds(0),
    m_maximumBatchingWindowInSecondsHasBeenSet(false),
    m_startingPosition(MSKStartPosition::NOT_SET),
    m_startingPositionHasBeenSet(false),
    m_topicNameHasBeenSet(false)
{
}

PipeSourceManagedStreamingKafkaParameters::PipeSourceManagedStreamingKafkaParameters(JsonView jsonValue) : 
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_consumerGroupIDHasBeenSet(false),
    m_credentialsHasBeenSet(false),
    m_maximumBatchingWindowInSeconds(0),
    m_maximumBatchingWindowInSecondsHasBeenSet(false),
    m_startingPosition(MSKStartPosition::NOT_SET),
    m_startingPositionHasBeenSet(false),
    m_topicNameHasBeenSet(false)
{
  *this = jsonValue;
}

PipeSourceManagedStreamingKafkaParameters& PipeSourceManagedStreamingKafkaParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BatchSize"))
  {
    m_batchSize = jsonValue.GetInteger("BatchSize");

    m_batchSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConsumerGroupID"))
  {
    m_consumerGroupID = jsonValue.GetString("ConsumerGroupID");

    m_consumerGroupIDHasBeenSet = true;
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

  if(jsonValue.ValueExists("StartingPosition"))
  {
    m_startingPosition = MSKStartPositionMapper::GetMSKStartPositionForName(jsonValue.GetString("StartingPosition"));

    m_startingPositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopicName"))
  {
    m_topicName = jsonValue.GetString("TopicName");

    m_topicNameHasBeenSet = true;
  }

  return *this;
}

JsonValue PipeSourceManagedStreamingKafkaParameters::Jsonize() const
{
  JsonValue payload;

  if(m_batchSizeHasBeenSet)
  {
   payload.WithInteger("BatchSize", m_batchSize);

  }

  if(m_consumerGroupIDHasBeenSet)
  {
   payload.WithString("ConsumerGroupID", m_consumerGroupID);

  }

  if(m_credentialsHasBeenSet)
  {
   payload.WithObject("Credentials", m_credentials.Jsonize());

  }

  if(m_maximumBatchingWindowInSecondsHasBeenSet)
  {
   payload.WithInteger("MaximumBatchingWindowInSeconds", m_maximumBatchingWindowInSeconds);

  }

  if(m_startingPositionHasBeenSet)
  {
   payload.WithString("StartingPosition", MSKStartPositionMapper::GetNameForMSKStartPosition(m_startingPosition));
  }

  if(m_topicNameHasBeenSet)
  {
   payload.WithString("TopicName", m_topicName);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
