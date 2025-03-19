/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/ManagedNotificationChildEvent.h>
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

ManagedNotificationChildEvent::ManagedNotificationChildEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

ManagedNotificationChildEvent& ManagedNotificationChildEvent::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("aggregateManagedNotificationEventArn"))
  {
    m_aggregateManagedNotificationEventArn = jsonValue.GetString("aggregateManagedNotificationEventArn");
    m_aggregateManagedNotificationEventArnHasBeenSet = true;
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
  if(jsonValue.ValueExists("organizationalUnitId"))
  {
    m_organizationalUnitId = jsonValue.GetString("organizationalUnitId");
    m_organizationalUnitIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregationDetail"))
  {
    m_aggregationDetail = jsonValue.GetObject("aggregationDetail");
    m_aggregationDetailHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedNotificationChildEvent::Jsonize() const
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

  if(m_aggregateManagedNotificationEventArnHasBeenSet)
  {
   payload.WithString("aggregateManagedNotificationEventArn", m_aggregateManagedNotificationEventArn);

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

  if(m_organizationalUnitIdHasBeenSet)
  {
   payload.WithString("organizationalUnitId", m_organizationalUnitId);

  }

  if(m_aggregationDetailHasBeenSet)
  {
   payload.WithObject("aggregationDetail", m_aggregationDetail.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Notifications
} // namespace Aws
