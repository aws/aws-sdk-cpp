/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/model/SchemaVersion.h>
#include <aws/notifications/model/SourceEventMetadataSummary.h>
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
   * <p>Describes a short summary and metadata for a
   * <code>NotificationEvent</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/NotificationEventSummary">AWS
   * API Reference</a></p>
   */
  class NotificationEventSummary
  {
  public:
    AWS_NOTIFICATIONS_API NotificationEventSummary() = default;
    AWS_NOTIFICATIONS_API NotificationEventSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API NotificationEventSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The schema version of the Notification Event.</p>
     */
    inline SchemaVersion GetSchemaVersion() const { return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(SchemaVersion value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline NotificationEventSummary& WithSchemaVersion(SchemaVersion value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source event metadata.</p>
     */
    inline const SourceEventMetadataSummary& GetSourceEventMetadata() const { return m_sourceEventMetadata; }
    inline bool SourceEventMetadataHasBeenSet() const { return m_sourceEventMetadataHasBeenSet; }
    template<typename SourceEventMetadataT = SourceEventMetadataSummary>
    void SetSourceEventMetadata(SourceEventMetadataT&& value) { m_sourceEventMetadataHasBeenSet = true; m_sourceEventMetadata = std::forward<SourceEventMetadataT>(value); }
    template<typename SourceEventMetadataT = SourceEventMetadataSummary>
    NotificationEventSummary& WithSourceEventMetadata(SourceEventMetadataT&& value) { SetSourceEventMetadata(std::forward<SourceEventMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message components of a notification event.</p>
     */
    inline const MessageComponentsSummary& GetMessageComponents() const { return m_messageComponents; }
    inline bool MessageComponentsHasBeenSet() const { return m_messageComponentsHasBeenSet; }
    template<typename MessageComponentsT = MessageComponentsSummary>
    void SetMessageComponents(MessageComponentsT&& value) { m_messageComponentsHasBeenSet = true; m_messageComponents = std::forward<MessageComponentsT>(value); }
    template<typename MessageComponentsT = MessageComponentsSummary>
    NotificationEventSummary& WithMessageComponents(MessageComponentsT&& value) { SetMessageComponents(std::forward<MessageComponentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides additional information about the current status of the
     * <code>NotificationEvent</code>.</p> <ul> <li> <p>Values:</p> <ul> <li> <p>
     * <code>HEALTHY</code> </p> <ul> <li> <p>All <code>EventRules</code> are
     * <code>ACTIVE</code>.</p> </li> </ul> </li> <li> <p> <code>UNHEALTHY</code> </p>
     * <ul> <li> <p>Some <code>EventRules</code> are <code>ACTIVE</code> and some are
     * <code>INACTIVE</code>.</p> </li> </ul> </li> </ul> </li> </ul>
     */
    inline EventStatus GetEventStatus() const { return m_eventStatus; }
    inline bool EventStatusHasBeenSet() const { return m_eventStatusHasBeenSet; }
    inline void SetEventStatus(EventStatus value) { m_eventStatusHasBeenSet = true; m_eventStatus = value; }
    inline NotificationEventSummary& WithEventStatus(EventStatus value) { SetEventStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of event causing the notification.</p> <ul> <li> <p>Values:</p> <ul>
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
    inline NotificationType GetNotificationType() const { return m_notificationType; }
    inline bool NotificationTypeHasBeenSet() const { return m_notificationTypeHasBeenSet; }
    inline void SetNotificationType(NotificationType value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }
    inline NotificationEventSummary& WithNotificationType(NotificationType value) { SetNotificationType(value); return *this;}
    ///@}
  private:

    SchemaVersion m_schemaVersion{SchemaVersion::NOT_SET};
    bool m_schemaVersionHasBeenSet = false;

    SourceEventMetadataSummary m_sourceEventMetadata;
    bool m_sourceEventMetadataHasBeenSet = false;

    MessageComponentsSummary m_messageComponents;
    bool m_messageComponentsHasBeenSet = false;

    EventStatus m_eventStatus{EventStatus::NOT_SET};
    bool m_eventStatusHasBeenSet = false;

    NotificationType m_notificationType{NotificationType::NOT_SET};
    bool m_notificationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
