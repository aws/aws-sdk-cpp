/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/EventDimensions.h>
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

EventDimensions::EventDimensions() : 
    m_attributesHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_metricsHasBeenSet(false)
{
}

EventDimensions::EventDimensions(JsonView jsonValue) : 
    m_attributesHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_metricsHasBeenSet(false)
{
  *this = jsonValue;
}

EventDimensions& EventDimensions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsObject();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventType"))
  {
    m_eventType = jsonValue.GetObject("EventType");

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metrics"))
  {
    Aws::Map<Aws::String, JsonView> metricsJsonMap = jsonValue.GetObject("Metrics").GetAllObjects();
    for(auto& metricsItem : metricsJsonMap)
    {
      m_metrics[metricsItem.first] = metricsItem.second.AsObject();
    }
    m_metricsHasBeenSet = true;
  }

  return *this;
}

JsonValue EventDimensions::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithObject(attributesItem.first, attributesItem.second.Jsonize());
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithObject("EventType", m_eventType.Jsonize());

  }

  if(m_metricsHasBeenSet)
  {
   JsonValue metricsJsonMap;
   for(auto& metricsItem : m_metrics)
   {
     metricsJsonMap.WithObject(metricsItem.first, metricsItem.second.Jsonize());
   }
   payload.WithObject("Metrics", std::move(metricsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
