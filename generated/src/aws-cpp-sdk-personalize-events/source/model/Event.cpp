/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-events/model/Event.h>
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

Event::Event() : 
    m_eventIdHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventValue(0.0),
    m_eventValueHasBeenSet(false),
    m_itemIdHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_sentAtHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_impressionHasBeenSet(false),
    m_metricAttributionHasBeenSet(false)
{
}

Event::Event(JsonView jsonValue) : 
    m_eventIdHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventValue(0.0),
    m_eventValueHasBeenSet(false),
    m_itemIdHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_sentAtHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_impressionHasBeenSet(false),
    m_metricAttributionHasBeenSet(false)
{
  *this = jsonValue;
}

Event& Event::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");

    m_eventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = jsonValue.GetString("eventType");

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventValue"))
  {
    m_eventValue = jsonValue.GetDouble("eventValue");

    m_eventValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("itemId"))
  {
    m_itemId = jsonValue.GetString("itemId");

    m_itemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("properties"))
  {
    m_properties = jsonValue.GetString("properties");

    m_propertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sentAt"))
  {
    m_sentAt = jsonValue.GetDouble("sentAt");

    m_sentAtHasBeenSet = true;
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

  if(jsonValue.ValueExists("metricAttribution"))
  {
    m_metricAttribution = jsonValue.GetObject("metricAttribution");

    m_metricAttributionHasBeenSet = true;
  }

  return *this;
}

JsonValue Event::Jsonize() const
{
  JsonValue payload;

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", m_eventType);

  }

  if(m_eventValueHasBeenSet)
  {
   payload.WithDouble("eventValue", m_eventValue);

  }

  if(m_itemIdHasBeenSet)
  {
   payload.WithString("itemId", m_itemId);

  }

  if(m_propertiesHasBeenSet)
  {
   payload.WithString("properties", m_properties);

  }

  if(m_sentAtHasBeenSet)
  {
   payload.WithDouble("sentAt", m_sentAt.SecondsWithMSPrecision());
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

  if(m_metricAttributionHasBeenSet)
  {
   payload.WithObject("metricAttribution", m_metricAttribution.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PersonalizeEvents
} // namespace Aws
