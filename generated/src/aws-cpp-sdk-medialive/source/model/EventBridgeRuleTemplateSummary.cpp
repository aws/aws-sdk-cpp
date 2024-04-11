/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/EventBridgeRuleTemplateSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

EventBridgeRuleTemplateSummary::EventBridgeRuleTemplateSummary() : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eventTargetCount(0),
    m_eventTargetCountHasBeenSet(false),
    m_eventType(EventBridgeRuleTemplateEventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

EventBridgeRuleTemplateSummary::EventBridgeRuleTemplateSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eventTargetCount(0),
    m_eventTargetCountHasBeenSet(false),
    m_eventType(EventBridgeRuleTemplateEventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

EventBridgeRuleTemplateSummary& EventBridgeRuleTemplateSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventTargetCount"))
  {
    m_eventTargetCount = jsonValue.GetInteger("eventTargetCount");

    m_eventTargetCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = EventBridgeRuleTemplateEventTypeMapper::GetEventBridgeRuleTemplateEventTypeForName(jsonValue.GetString("eventType"));

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groupId"))
  {
    m_groupId = jsonValue.GetString("groupId");

    m_groupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");

    m_modifiedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue EventBridgeRuleTemplateSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_eventTargetCountHasBeenSet)
  {
   payload.WithInteger("eventTargetCount", m_eventTargetCount);

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", EventBridgeRuleTemplateEventTypeMapper::GetNameForEventBridgeRuleTemplateEventType(m_eventType));
  }

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("groupId", m_groupId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithString("modifiedAt", m_modifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
