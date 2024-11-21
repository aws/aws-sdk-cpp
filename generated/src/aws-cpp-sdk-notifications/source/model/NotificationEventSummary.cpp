/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/NotificationEventSummary.h>
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

NotificationEventSummary::NotificationEventSummary() : 
    m_schemaVersion(SchemaVersion::NOT_SET),
    m_schemaVersionHasBeenSet(false),
    m_sourceEventMetadataHasBeenSet(false),
    m_messageComponentsHasBeenSet(false),
    m_eventStatus(EventStatus::NOT_SET),
    m_eventStatusHasBeenSet(false),
    m_notificationType(NotificationType::NOT_SET),
    m_notificationTypeHasBeenSet(false)
{
}

NotificationEventSummary::NotificationEventSummary(JsonView jsonValue)
  : NotificationEventSummary()
{
  *this = jsonValue;
}

NotificationEventSummary& NotificationEventSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("schemaVersion"))
  {
    m_schemaVersion = SchemaVersionMapper::GetSchemaVersionForName(jsonValue.GetString("schemaVersion"));

    m_schemaVersionHasBeenSet = true;
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

  if(jsonValue.ValueExists("eventStatus"))
  {
    m_eventStatus = EventStatusMapper::GetEventStatusForName(jsonValue.GetString("eventStatus"));

    m_eventStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notificationType"))
  {
    m_notificationType = NotificationTypeMapper::GetNotificationTypeForName(jsonValue.GetString("notificationType"));

    m_notificationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationEventSummary::Jsonize() const
{
  JsonValue payload;

  if(m_schemaVersionHasBeenSet)
  {
   payload.WithString("schemaVersion", SchemaVersionMapper::GetNameForSchemaVersion(m_schemaVersion));
  }

  if(m_sourceEventMetadataHasBeenSet)
  {
   payload.WithObject("sourceEventMetadata", m_sourceEventMetadata.Jsonize());

  }

  if(m_messageComponentsHasBeenSet)
  {
   payload.WithObject("messageComponents", m_messageComponents.Jsonize());

  }

  if(m_eventStatusHasBeenSet)
  {
   payload.WithString("eventStatus", EventStatusMapper::GetNameForEventStatus(m_eventStatus));
  }

  if(m_notificationTypeHasBeenSet)
  {
   payload.WithString("notificationType", NotificationTypeMapper::GetNameForNotificationType(m_notificationType));
  }

  return payload;
}

} // namespace Model
} // namespace Notifications
} // namespace Aws
