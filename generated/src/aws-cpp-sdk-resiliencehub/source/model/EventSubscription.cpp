/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/EventSubscription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

EventSubscription::EventSubscription() : 
    m_eventType(EventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false)
{
}

EventSubscription::EventSubscription(JsonView jsonValue) : 
    m_eventType(EventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false)
{
  *this = jsonValue;
}

EventSubscription& EventSubscription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = EventTypeMapper::GetEventTypeForName(jsonValue.GetString("eventType"));

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snsTopicArn"))
  {
    m_snsTopicArn = jsonValue.GetString("snsTopicArn");

    m_snsTopicArnHasBeenSet = true;
  }

  return *this;
}

JsonValue EventSubscription::Jsonize() const
{
  JsonValue payload;

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", EventTypeMapper::GetNameForEventType(m_eventType));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("snsTopicArn", m_snsTopicArn);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
