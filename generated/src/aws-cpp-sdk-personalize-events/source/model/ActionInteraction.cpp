/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-events/model/ActionInteraction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PersonalizeEvents
{
namespace Model
{

ActionInteraction::ActionInteraction() : 
    m_actionIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_impressionHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

ActionInteraction::ActionInteraction(JsonView jsonValue) : 
    m_actionIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_impressionHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
  *this = jsonValue;
}

ActionInteraction& ActionInteraction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionId"))
  {
    m_actionId = jsonValue.GetString("actionId");

    m_actionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetString("userId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");

    m_sessionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = jsonValue.GetString("eventType");

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");

    m_eventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationId"))
  {
    m_recommendationId = jsonValue.GetString("recommendationId");

    m_recommendationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("impression"))
  {
    Aws::Utils::Array<JsonView> impressionJsonList = jsonValue.GetArray("impression");
    for(unsigned impressionIndex = 0; impressionIndex < impressionJsonList.GetLength(); ++impressionIndex)
    {
      m_impression.push_back(impressionJsonList[impressionIndex].AsString());
    }
    m_impressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("properties"))
  {
    m_properties = jsonValue.GetString("properties");

    m_propertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionInteraction::Jsonize() const
{
  JsonValue payload;

  if(m_actionIdHasBeenSet)
  {
   payload.WithString("actionId", m_actionId);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", m_eventType);

  }

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  if(m_recommendationIdHasBeenSet)
  {
   payload.WithString("recommendationId", m_recommendationId);

  }

  if(m_impressionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> impressionJsonList(m_impression.size());
   for(unsigned impressionIndex = 0; impressionIndex < impressionJsonList.GetLength(); ++impressionIndex)
   {
     impressionJsonList[impressionIndex].AsString(m_impression[impressionIndex]);
   }
   payload.WithArray("impression", std::move(impressionJsonList));

  }

  if(m_propertiesHasBeenSet)
  {
   payload.WithString("properties", m_properties);

  }

  return payload;
}

} // namespace Model
} // namespace PersonalizeEvents
} // namespace Aws
