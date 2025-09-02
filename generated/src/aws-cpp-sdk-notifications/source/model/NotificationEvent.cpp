/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/NotificationEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Notifications
{
namespace Model
{

NotificationEvent::NotificationEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

NotificationEvent& NotificationEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("schemaVersion"))
  {
    m_schemaVersion = SchemaVersionMapper::GetSchemaVersionForName(jsonValue.GetString("schemaVersion"));
    m_schemaVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceEventMetadata"))
  {
    m_sourceEventMetadata = jsonValue.GetObject("sourceEventMetadata");
    m_sourceEventMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("messageComponents"))
  {
    m_messageComponents = jsonValue.GetObject("messageComponents");
    m_messageComponentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceEventDetailUrl"))
  {
    m_sourceEventDetailUrl = jsonValue.GetString("sourceEventDetailUrl");
    m_sourceEventDetailUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceEventDetailUrlDisplayText"))
  {
    m_sourceEventDetailUrlDisplayText = jsonValue.GetString("sourceEventDetailUrlDisplayText");
    m_sourceEventDetailUrlDisplayTextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notificationType"))
  {
    m_notificationType = NotificationTypeMapper::GetNotificationTypeForName(jsonValue.GetString("notificationType"));
    m_notificationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventStatus"))
  {
    m_eventStatus = EventStatusMapper::GetEventStatusForName(jsonValue.GetString("eventStatus"));
    m_eventStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregationEventType"))
  {
    m_aggregationEventType = AggregationEventTypeMapper::GetAggregationEventTypeForName(jsonValue.GetString("aggregationEventType"));
    m_aggregationEventTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregateNotificationEventArn"))
  {
    m_aggregateNotificationEventArn = jsonValue.GetString("aggregateNotificationEventArn");
    m_aggregateNotificationEventArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregationSummary"))
  {
    m_aggregationSummary = jsonValue.GetObject("aggregationSummary");
    m_aggregationSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("textParts"))
  {
    Aws::Map<Aws::String, JsonView> textPartsJsonMap = jsonValue.GetObject("textParts").GetAllObjects();
    for(auto& textPartsItem : textPartsJsonMap)
    {
      m_textParts[textPartsItem.first] = textPartsItem.second.AsObject();
    }
    m_textPartsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("media"))
  {
    Aws::Utils::Array<JsonView> mediaJsonList = jsonValue.GetArray("media");
    for(unsigned mediaIndex = 0; mediaIndex < mediaJsonList.GetLength(); ++mediaIndex)
    {
      m_media.push_back(mediaJsonList[mediaIndex].AsObject());
    }
    m_mediaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("organizationalUnitId"))
  {
    m_organizationalUnitId = jsonValue.GetString("organizationalUnitId");
    m_organizationalUnitIdHasBeenSet = true;
  }
  return *this;
}

JsonValue NotificationEvent::Jsonize() const
{
  JsonValue payload;

  if(m_schemaVersionHasBeenSet)
  {
   payload.WithString("schemaVersion", SchemaVersionMapper::GetNameForSchemaVersion(m_schemaVersion));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_sourceEventMetadataHasBeenSet)
  {
   payload.WithObject("sourceEventMetadata", m_sourceEventMetadata.Jsonize());

  }

  if(m_messageComponentsHasBeenSet)
  {
   payload.WithObject("messageComponents", m_messageComponents.Jsonize());

  }

  if(m_sourceEventDetailUrlHasBeenSet)
  {
   payload.WithString("sourceEventDetailUrl", m_sourceEventDetailUrl);

  }

  if(m_sourceEventDetailUrlDisplayTextHasBeenSet)
  {
   payload.WithString("sourceEventDetailUrlDisplayText", m_sourceEventDetailUrlDisplayText);

  }

  if(m_notificationTypeHasBeenSet)
  {
   payload.WithString("notificationType", NotificationTypeMapper::GetNameForNotificationType(m_notificationType));
  }

  if(m_eventStatusHasBeenSet)
  {
   payload.WithString("eventStatus", EventStatusMapper::GetNameForEventStatus(m_eventStatus));
  }

  if(m_aggregationEventTypeHasBeenSet)
  {
   payload.WithString("aggregationEventType", AggregationEventTypeMapper::GetNameForAggregationEventType(m_aggregationEventType));
  }

  if(m_aggregateNotificationEventArnHasBeenSet)
  {
   payload.WithString("aggregateNotificationEventArn", m_aggregateNotificationEventArn);

  }

  if(m_aggregationSummaryHasBeenSet)
  {
   payload.WithObject("aggregationSummary", m_aggregationSummary.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_textPartsHasBeenSet)
  {
   JsonValue textPartsJsonMap;
   for(auto& textPartsItem : m_textParts)
   {
     textPartsJsonMap.WithObject(textPartsItem.first, textPartsItem.second.Jsonize());
   }
   payload.WithObject("textParts", std::move(textPartsJsonMap));

  }

  if(m_mediaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mediaJsonList(m_media.size());
   for(unsigned mediaIndex = 0; mediaIndex < mediaJsonList.GetLength(); ++mediaIndex)
   {
     mediaJsonList[mediaIndex].AsObject(m_media[mediaIndex].Jsonize());
   }
   payload.WithArray("media", std::move(mediaJsonList));

  }

  if(m_organizationalUnitIdHasBeenSet)
  {
   payload.WithString("organizationalUnitId", m_organizationalUnitId);

  }

  return payload;
}

} // namespace Model
} // namespace Notifications
} // namespace Aws
