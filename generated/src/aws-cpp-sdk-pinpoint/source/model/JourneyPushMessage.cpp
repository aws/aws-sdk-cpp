/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/JourneyPushMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

JourneyPushMessage::JourneyPushMessage() : 
    m_timeToLiveHasBeenSet(false)
{
}

JourneyPushMessage::JourneyPushMessage(JsonView jsonValue) : 
    m_timeToLiveHasBeenSet(false)
{
  *this = jsonValue;
}

JourneyPushMessage& JourneyPushMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeToLive"))
  {
    m_timeToLive = jsonValue.GetString("TimeToLive");

    m_timeToLiveHasBeenSet = true;
  }

  return *this;
}

JsonValue JourneyPushMessage::Jsonize() const
{
  JsonValue payload;

  if(m_timeToLiveHasBeenSet)
  {
   payload.WithString("TimeToLive", m_timeToLive);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
