﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/UpdatePipeSourceParameters.h>
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

UpdatePipeSourceParameters::UpdatePipeSourceParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdatePipeSourceParameters& UpdatePipeSourceParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilterCriteria"))
  {
    m_filterCriteria = jsonValue.GetObject("FilterCriteria");
    m_filterCriteriaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KinesisStreamParameters"))
  {
    m_kinesisStreamParameters = jsonValue.GetObject("KinesisStreamParameters");
    m_kinesisStreamParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DynamoDBStreamParameters"))
  {
    m_dynamoDBStreamParameters = jsonValue.GetObject("DynamoDBStreamParameters");
    m_dynamoDBStreamParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SqsQueueParameters"))
  {
    m_sqsQueueParameters = jsonValue.GetObject("SqsQueueParameters");
    m_sqsQueueParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActiveMQBrokerParameters"))
  {
    m_activeMQBrokerParameters = jsonValue.GetObject("ActiveMQBrokerParameters");
    m_activeMQBrokerParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RabbitMQBrokerParameters"))
  {
    m_rabbitMQBrokerParameters = jsonValue.GetObject("RabbitMQBrokerParameters");
    m_rabbitMQBrokerParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManagedStreamingKafkaParameters"))
  {
    m_managedStreamingKafkaParameters = jsonValue.GetObject("ManagedStreamingKafkaParameters");
    m_managedStreamingKafkaParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SelfManagedKafkaParameters"))
  {
    m_selfManagedKafkaParameters = jsonValue.GetObject("SelfManagedKafkaParameters");
    m_selfManagedKafkaParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdatePipeSourceParameters::Jsonize() const
{
  JsonValue payload;

  if(m_filterCriteriaHasBeenSet)
  {
   payload.WithObject("FilterCriteria", m_filterCriteria.Jsonize());

  }

  if(m_kinesisStreamParametersHasBeenSet)
  {
   payload.WithObject("KinesisStreamParameters", m_kinesisStreamParameters.Jsonize());

  }

  if(m_dynamoDBStreamParametersHasBeenSet)
  {
   payload.WithObject("DynamoDBStreamParameters", m_dynamoDBStreamParameters.Jsonize());

  }

  if(m_sqsQueueParametersHasBeenSet)
  {
   payload.WithObject("SqsQueueParameters", m_sqsQueueParameters.Jsonize());

  }

  if(m_activeMQBrokerParametersHasBeenSet)
  {
   payload.WithObject("ActiveMQBrokerParameters", m_activeMQBrokerParameters.Jsonize());

  }

  if(m_rabbitMQBrokerParametersHasBeenSet)
  {
   payload.WithObject("RabbitMQBrokerParameters", m_rabbitMQBrokerParameters.Jsonize());

  }

  if(m_managedStreamingKafkaParametersHasBeenSet)
  {
   payload.WithObject("ManagedStreamingKafkaParameters", m_managedStreamingKafkaParameters.Jsonize());

  }

  if(m_selfManagedKafkaParametersHasBeenSet)
  {
   payload.WithObject("SelfManagedKafkaParameters", m_selfManagedKafkaParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
