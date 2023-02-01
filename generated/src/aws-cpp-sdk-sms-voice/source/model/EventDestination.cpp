/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms-voice/model/EventDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointSMSVoice
{
namespace Model
{

EventDestination::EventDestination() : 
    m_cloudWatchLogsDestinationHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_kinesisFirehoseDestinationHasBeenSet(false),
    m_matchingEventTypesHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_snsDestinationHasBeenSet(false)
{
}

EventDestination::EventDestination(JsonView jsonValue) : 
    m_cloudWatchLogsDestinationHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_kinesisFirehoseDestinationHasBeenSet(false),
    m_matchingEventTypesHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_snsDestinationHasBeenSet(false)
{
  *this = jsonValue;
}

EventDestination& EventDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchLogsDestination"))
  {
    m_cloudWatchLogsDestination = jsonValue.GetObject("CloudWatchLogsDestination");

    m_cloudWatchLogsDestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisFirehoseDestination"))
  {
    m_kinesisFirehoseDestination = jsonValue.GetObject("KinesisFirehoseDestination");

    m_kinesisFirehoseDestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MatchingEventTypes"))
  {
    Aws::Utils::Array<JsonView> matchingEventTypesJsonList = jsonValue.GetArray("MatchingEventTypes");
    for(unsigned matchingEventTypesIndex = 0; matchingEventTypesIndex < matchingEventTypesJsonList.GetLength(); ++matchingEventTypesIndex)
    {
      m_matchingEventTypes.push_back(EventTypeMapper::GetEventTypeForName(matchingEventTypesJsonList[matchingEventTypesIndex].AsString()));
    }
    m_matchingEventTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsDestination"))
  {
    m_snsDestination = jsonValue.GetObject("SnsDestination");

    m_snsDestinationHasBeenSet = true;
  }

  return *this;
}

JsonValue EventDestination::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogsDestinationHasBeenSet)
  {
   payload.WithObject("CloudWatchLogsDestination", m_cloudWatchLogsDestination.Jsonize());

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_kinesisFirehoseDestinationHasBeenSet)
  {
   payload.WithObject("KinesisFirehoseDestination", m_kinesisFirehoseDestination.Jsonize());

  }

  if(m_matchingEventTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> matchingEventTypesJsonList(m_matchingEventTypes.size());
   for(unsigned matchingEventTypesIndex = 0; matchingEventTypesIndex < matchingEventTypesJsonList.GetLength(); ++matchingEventTypesIndex)
   {
     matchingEventTypesJsonList[matchingEventTypesIndex].AsString(EventTypeMapper::GetNameForEventType(m_matchingEventTypes[matchingEventTypesIndex]));
   }
   payload.WithArray("MatchingEventTypes", std::move(matchingEventTypesJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_snsDestinationHasBeenSet)
  {
   payload.WithObject("SnsDestination", m_snsDestination.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
