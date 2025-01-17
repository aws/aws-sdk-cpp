/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/model/SchemaVersion.h>
#include <aws/notifications/model/ManagedSourceEventMetadataSummary.h>
#include <aws/notifications/model/MessageComponentsSummary.h>
#include <aws/notifications/model/EventStatus.h>
#include <aws/notifications/model/NotificationType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Notifications
{
namespace Model
{

  /**
   * <p>A short summary of a <code>ManagedNotificationEvent</code>. This is only used
   * when listing managed notification events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/ManagedNotificationEventSummary">AWS
   * API Reference</a></p>
   */
  class ManagedNotificationEventSummary
  {
  public:
    AWS_NOTIFICATIONS_API ManagedNotificationEventSummary();
    AWS_NOTIFICATIONS_API ManagedNotificationEventSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API ManagedNotificationEventSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The schema version of the <code>ManagedNotificationEvent</code>.</p>
     */
    inline const SchemaVersion& GetSchemaVersion() const{ return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(const SchemaVersion& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline void SetSchemaVersion(SchemaVersion&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }
    inline ManagedNotificationEventSummary& WithSchemaVersion(const SchemaVersion& value) { SetSchemaVersion(value); return *this;}
    inline ManagedNotificationEventSummary& WithSchemaVersion(SchemaVersion&& value) { SetSchemaVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains metadata about the event that caused the
     * <code>ManagedNotificationEvent</code>.</p>
     */
    inline const ManagedSourceEventMetadataSummary& GetSourceEventMetadata() const{ return m_sourceEventMetadata; }
    inline bool SourceEventMetadataHasBeenSet() const { return m_sourceEventMetadataHasBeenSet; }
    inline void SetSourceEventMetadata(const ManagedSourceEventMetadataSummary& value) { m_sourceEventMetadataHasBeenSet = true; m_sourceEventMetadata = value; }
    inline void SetSourceEventMetadata(ManagedSourceEventMetadataSummary&& value) { m_sourceEventMetadataHasBeenSet = true; m_sourceEventMetadata = std::move(value); }
    inline ManagedNotificationEventSummary& WithSourceEventMetadata(const ManagedSourceEventMetadataSummary& value) { SetSourceEventMetadata(value); return *this;}
    inline ManagedNotificationEventSummary& WithSourceEventMetadata(ManagedSourceEventMetadataSummary&& value) { SetSourceEventMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const MessageComponentsSummary& GetMessageComponents() const{ return m_messageComponents; }
    inline bool MessageComponentsHasBeenSet() const { return m_messageComponentsHasBeenSet; }
    inline void SetMessageComponents(const MessageComponentsSummary& value) { m_messageComponentsHasBeenSet = true; m_messageComponents = value; }
    inline void SetMessageComponents(MessageComponentsSummary&& value) { m_messageComponentsHasBeenSet = true; m_messageComponents = std::move(value); }
    inline ManagedNotificationEventSummary& WithMessageComponents(const MessageComponentsSummary& value) { SetMessageComponents(value); return *this;}
    inline ManagedNotificationEventSummary& WithMessageComponents(MessageComponentsSummary&& value) { SetMessageComponents(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed notification event status.</p> <ul> <li> <p>Values:</p> <ul> <li>
     * <p> <code>HEALTHY</code> </p> <ul> <li> <p>All <code>EventRules</code> are
     * <code>ACTIVE</code>.</p> </li> </ul> </li> <li> <p> <code>UNHEALTHY</code> </p>
     * <ul> <li> <p>Some <code>EventRules</code> are <code>ACTIVE</code> and some are
     * <code>INACTIVE</code>.</p> </li> </ul> </li> </ul> </li> </ul>
     */
    inline const EventStatus& GetEventStatus() const{ return m_eventStatus; }
    inline bool EventStatusHasBeenSet() const { return m_eventStatusHasBeenSet; }
    inline void SetEventStatus(const EventStatus& value) { m_eventStatusHasBeenSet = true; m_eventStatus = value; }
    inline void SetEventStatus(EventStatus&& value) { m_eventStatusHasBeenSet = true; m_eventStatus = std::move(value); }
    inline ManagedNotificationEventSummary& WithEventStatus(const EventStatus& value) { SetEventStatus(value); return *this;}
    inline ManagedNotificationEventSummary& WithEventStatus(EventStatus&& value) { SetEventStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Type of event causing the notification.</p> <ul> <li> <p>Values:</p> <ul>
     * <li> <p> <code>ALERT</code> </p> <ul> <li> <p>A notification about an event
     * where something was triggered, initiated, reopened, deployed, or a threshold was
     * breached.</p> </li> </ul> </li> <li> <p> <code>WARNING</code> </p> <ul> <li>
     * <p>A notification about an event where an issue is about to arise. For example,
     * something is approaching a threshold.</p> </li> </ul> </li> <li> <p>
     * <code>ANNOUNCEMENT</code> </p> <ul> <li> <p>A notification about an important
     * event. For example, a step in a workflow or escalation path or that a workflow
     * was updated.</p> </li> </ul> </li> <li> <p> <code>INFORMATIONAL</code> </p> <ul>
     * <li> <p>A notification about informational messages. For example,
     * recommendations, service announcements, or reminders.</p> </li> </ul> </li>
     * </ul> </li> </ul>
     */
    inline const NotificationType& GetNotificationType() const{ return m_notificationType; }
    inline bool NotificationTypeHasBeenSet() const { return m_notificationTypeHasBeenSet; }
    inline void SetNotificationType(const NotificationType& value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }
    inline void SetNotificationType(NotificationType&& value) { m_notificationTypeHasBeenSet = true; m_notificationType = std::move(value); }
    inline ManagedNotificationEventSummary& WithNotificationType(const NotificationType& value) { SetNotificationType(value); return *this;}
    inline ManagedNotificationEventSummary& WithNotificationType(NotificationType&& value) { SetNotificationType(std::move(value)); return *this;}
    ///@}
  private:

    SchemaVersion m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    ManagedSourceEventMetadataSummary m_sourceEventMetadata;
    bool m_sourceEventMetadataHasBeenSet = false;

    MessageComponentsSummary m_messageComponents;
    bool m_messageComponentsHasBeenSet = false;

    EventStatus m_eventStatus;
    bool m_eventStatusHasBeenSet = false;

    NotificationType m_notificationType;
    bool m_notificationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
