/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/QueueTransition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

QueueTransition::QueueTransition() : 
    m_destinationQueueHasBeenSet(false),
    m_sourceQueueHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

QueueTransition::QueueTransition(JsonView jsonValue) : 
    m_destinationQueueHasBeenSet(false),
    m_sourceQueueHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
  *this = jsonValue;
}

QueueTransition& QueueTransition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destinationQueue"))
  {
    m_destinationQueue = jsonValue.GetString("destinationQueue");

    m_destinationQueueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceQueue"))
  {
    m_sourceQueue = jsonValue.GetString("sourceQueue");

    m_sourceQueueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("timestamp");

    m_timestampHasBeenSet = true;
  }

  return *this;
}

JsonValue QueueTransition::Jsonize() const
{
  JsonValue payload;

  if(m_destinationQueueHasBeenSet)
  {
   payload.WithString("destinationQueue", m_destinationQueue);

  }

  if(m_sourceQueueHasBeenSet)
  {
   payload.WithString("sourceQueue", m_sourceQueue);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
