/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/model/SchemaVersion.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/model/MessageComponents.h>
#include <aws/notifications/model/NotificationType.h>
#include <aws/notifications/model/EventStatus.h>
#include <aws/notifications/model/AggregationEventType.h>
#include <aws/notifications/model/AggregationSummary.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/notifications/model/TextPartValue.h>
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
   * <p>A notification-focused representation of an event. They contain semantic
   * information used by AccountContacts or Additional Channels to create end-user
   * notifications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/ManagedNotificationEvent">AWS
   * API Reference</a></p>
   */
  class ManagedNotificationEvent
  {
  public:
    AWS_NOTIFICATIONS_API ManagedNotificationEvent();
    AWS_NOTIFICATIONS_API ManagedNotificationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API ManagedNotificationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Version of the <code>ManagedNotificationEvent</code> schema.</p>
     */
    inline const SchemaVersion& GetSchemaVersion() const{ return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(const SchemaVersion& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline void SetSchemaVersion(SchemaVersion&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }
    inline ManagedNotificationEvent& WithSchemaVersion(const SchemaVersion& value) { SetSchemaVersion(value); return *this;}
    inline ManagedNotificationEvent& WithSchemaVersion(SchemaVersion&& value) { SetSchemaVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for a <code>ManagedNotificationEvent</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ManagedNotificationEvent& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ManagedNotificationEvent& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ManagedNotificationEvent& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const MessageComponents& GetMessageComponents() const{ return m_messageComponents; }
    inline bool MessageComponentsHasBeenSet() const { return m_messageComponentsHasBeenSet; }
    inline void SetMessageComponents(const MessageComponents& value) { m_messageComponentsHasBeenSet = true; m_messageComponents = value; }
    inline void SetMessageComponents(MessageComponents&& value) { m_messageComponentsHasBeenSet = true; m_messageComponents = std::move(value); }
    inline ManagedNotificationEvent& WithMessageComponents(const MessageComponents& value) { SetMessageComponents(value); return *this;}
    inline ManagedNotificationEvent& WithMessageComponents(MessageComponents&& value) { SetMessageComponents(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>URL defined by Source Service to be used by notification consumers to get
     * additional information about event.</p>
     */
    inline const Aws::String& GetSourceEventDetailUrl() const{ return m_sourceEventDetailUrl; }
    inline bool SourceEventDetailUrlHasBeenSet() const { return m_sourceEventDetailUrlHasBeenSet; }
    inline void SetSourceEventDetailUrl(const Aws::String& value) { m_sourceEventDetailUrlHasBeenSet = true; m_sourceEventDetailUrl = value; }
    inline void SetSourceEventDetailUrl(Aws::String&& value) { m_sourceEventDetailUrlHasBeenSet = true; m_sourceEventDetailUrl = std::move(value); }
    inline void SetSourceEventDetailUrl(const char* value) { m_sourceEventDetailUrlHasBeenSet = true; m_sourceEventDetailUrl.assign(value); }
    inline ManagedNotificationEvent& WithSourceEventDetailUrl(const Aws::String& value) { SetSourceEventDetailUrl(value); return *this;}
    inline ManagedNotificationEvent& WithSourceEventDetailUrl(Aws::String&& value) { SetSourceEventDetailUrl(std::move(value)); return *this;}
    inline ManagedNotificationEvent& WithSourceEventDetailUrl(const char* value) { SetSourceEventDetailUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Text that needs to be hyperlinked with the sourceEventDetailUrl. For example,
     * the description of the sourceEventDetailUrl.</p>
     */
    inline const Aws::String& GetSourceEventDetailUrlDisplayText() const{ return m_sourceEventDetailUrlDisplayText; }
    inline bool SourceEventDetailUrlDisplayTextHasBeenSet() const { return m_sourceEventDetailUrlDisplayTextHasBeenSet; }
    inline void SetSourceEventDetailUrlDisplayText(const Aws::String& value) { m_sourceEventDetailUrlDisplayTextHasBeenSet = true; m_sourceEventDetailUrlDisplayText = value; }
    inline void SetSourceEventDetailUrlDisplayText(Aws::String&& value) { m_sourceEventDetailUrlDisplayTextHasBeenSet = true; m_sourceEventDetailUrlDisplayText = std::move(value); }
    inline void SetSourceEventDetailUrlDisplayText(const char* value) { m_sourceEventDetailUrlDisplayTextHasBeenSet = true; m_sourceEventDetailUrlDisplayText.assign(value); }
    inline ManagedNotificationEvent& WithSourceEventDetailUrlDisplayText(const Aws::String& value) { SetSourceEventDetailUrlDisplayText(value); return *this;}
    inline ManagedNotificationEvent& WithSourceEventDetailUrlDisplayText(Aws::String&& value) { SetSourceEventDetailUrlDisplayText(std::move(value)); return *this;}
    inline ManagedNotificationEvent& WithSourceEventDetailUrlDisplayText(const char* value) { SetSourceEventDetailUrlDisplayText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nature of the event causing this notification.</p> <ul> <li>
     * <p>Values:</p> <ul> <li> <p> <code>ALERT</code> </p> <ul> <li> <p>A notification
     * about an event where something was triggered, initiated, reopened, deployed, or
     * a threshold was breached.</p> </li> </ul> </li> <li> <p> <code>WARNING</code>
     * </p> <ul> <li> <p>A notification about an event where an issue is about to
     * arise. For example, something is approaching a threshold.</p> </li> </ul> </li>
     * <li> <p> <code>ANNOUNCEMENT</code> </p> <ul> <li> <p>A notification about an
     * important event. For example, a step in a workflow or escalation path or that a
     * workflow was updated.</p> </li> </ul> </li> <li> <p> <code>INFORMATIONAL</code>
     * </p> <ul> <li> <p>A notification about informational messages. For example,
     * recommendations, service announcements, or reminders.</p> </li> </ul> </li>
     * </ul> </li> </ul>
     */
    inline const NotificationType& GetNotificationType() const{ return m_notificationType; }
    inline bool NotificationTypeHasBeenSet() const { return m_notificationTypeHasBeenSet; }
    inline void SetNotificationType(const NotificationType& value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }
    inline void SetNotificationType(NotificationType&& value) { m_notificationTypeHasBeenSet = true; m_notificationType = std::move(value); }
    inline ManagedNotificationEvent& WithNotificationType(const NotificationType& value) { SetNotificationType(value); return *this;}
    inline ManagedNotificationEvent& WithNotificationType(NotificationType&& value) { SetNotificationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of an event.</p> <ul> <li> <p>Values:</p> <ul> <li> <p>
     * <code>HEALTHY</code> </p> <ul> <li> <p>All EventRules are <code>ACTIVE</code>
     * and any call can be run.</p> </li> </ul> </li> <li> <p> <code>UNHEALTHY</code>
     * </p> <ul> <li> <p>Some EventRules are <code>ACTIVE</code> and some are
     * <code>INACTIVE</code>. Any call can be run.</p> </li> </ul> </li> </ul> </li>
     * </ul>
     */
    inline const EventStatus& GetEventStatus() const{ return m_eventStatus; }
    inline bool EventStatusHasBeenSet() const { return m_eventStatusHasBeenSet; }
    inline void SetEventStatus(const EventStatus& value) { m_eventStatusHasBeenSet = true; m_eventStatus = value; }
    inline void SetEventStatus(EventStatus&& value) { m_eventStatusHasBeenSet = true; m_eventStatus = std::move(value); }
    inline ManagedNotificationEvent& WithEventStatus(const EventStatus& value) { SetEventStatus(value); return *this;}
    inline ManagedNotificationEvent& WithEventStatus(EventStatus&& value) { SetEventStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notifications aggregation type.</p>
     */
    inline const AggregationEventType& GetAggregationEventType() const{ return m_aggregationEventType; }
    inline bool AggregationEventTypeHasBeenSet() const { return m_aggregationEventTypeHasBeenSet; }
    inline void SetAggregationEventType(const AggregationEventType& value) { m_aggregationEventTypeHasBeenSet = true; m_aggregationEventType = value; }
    inline void SetAggregationEventType(AggregationEventType&& value) { m_aggregationEventTypeHasBeenSet = true; m_aggregationEventType = std::move(value); }
    inline ManagedNotificationEvent& WithAggregationEventType(const AggregationEventType& value) { SetAggregationEventType(value); return *this;}
    inline ManagedNotificationEvent& WithAggregationEventType(AggregationEventType&& value) { SetAggregationEventType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const AggregationSummary& GetAggregationSummary() const{ return m_aggregationSummary; }
    inline bool AggregationSummaryHasBeenSet() const { return m_aggregationSummaryHasBeenSet; }
    inline void SetAggregationSummary(const AggregationSummary& value) { m_aggregationSummaryHasBeenSet = true; m_aggregationSummary = value; }
    inline void SetAggregationSummary(AggregationSummary&& value) { m_aggregationSummaryHasBeenSet = true; m_aggregationSummary = std::move(value); }
    inline ManagedNotificationEvent& WithAggregationSummary(const AggregationSummary& value) { SetAggregationSummary(value); return *this;}
    inline ManagedNotificationEvent& WithAggregationSummary(AggregationSummary&& value) { SetAggregationSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The earliest time of events to return from this call.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ManagedNotificationEvent& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ManagedNotificationEvent& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the notification event.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ManagedNotificationEvent& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ManagedNotificationEvent& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of text values.</p>
     */
    inline const Aws::Map<Aws::String, TextPartValue>& GetTextParts() const{ return m_textParts; }
    inline bool TextPartsHasBeenSet() const { return m_textPartsHasBeenSet; }
    inline void SetTextParts(const Aws::Map<Aws::String, TextPartValue>& value) { m_textPartsHasBeenSet = true; m_textParts = value; }
    inline void SetTextParts(Aws::Map<Aws::String, TextPartValue>&& value) { m_textPartsHasBeenSet = true; m_textParts = std::move(value); }
    inline ManagedNotificationEvent& WithTextParts(const Aws::Map<Aws::String, TextPartValue>& value) { SetTextParts(value); return *this;}
    inline ManagedNotificationEvent& WithTextParts(Aws::Map<Aws::String, TextPartValue>&& value) { SetTextParts(std::move(value)); return *this;}
    inline ManagedNotificationEvent& AddTextParts(const Aws::String& key, const TextPartValue& value) { m_textPartsHasBeenSet = true; m_textParts.emplace(key, value); return *this; }
    inline ManagedNotificationEvent& AddTextParts(Aws::String&& key, const TextPartValue& value) { m_textPartsHasBeenSet = true; m_textParts.emplace(std::move(key), value); return *this; }
    inline ManagedNotificationEvent& AddTextParts(const Aws::String& key, TextPartValue&& value) { m_textPartsHasBeenSet = true; m_textParts.emplace(key, std::move(value)); return *this; }
    inline ManagedNotificationEvent& AddTextParts(Aws::String&& key, TextPartValue&& value) { m_textPartsHasBeenSet = true; m_textParts.emplace(std::move(key), std::move(value)); return *this; }
    inline ManagedNotificationEvent& AddTextParts(const char* key, TextPartValue&& value) { m_textPartsHasBeenSet = true; m_textParts.emplace(key, std::move(value)); return *this; }
    inline ManagedNotificationEvent& AddTextParts(const char* key, const TextPartValue& value) { m_textPartsHasBeenSet = true; m_textParts.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Organizational Unit Id that an Amazon Web Services account belongs
     * to.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const{ return m_organizationalUnitId; }
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }
    inline void SetOrganizationalUnitId(const Aws::String& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = value; }
    inline void SetOrganizationalUnitId(Aws::String&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::move(value); }
    inline void SetOrganizationalUnitId(const char* value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId.assign(value); }
    inline ManagedNotificationEvent& WithOrganizationalUnitId(const Aws::String& value) { SetOrganizationalUnitId(value); return *this;}
    inline ManagedNotificationEvent& WithOrganizationalUnitId(Aws::String&& value) { SetOrganizationalUnitId(std::move(value)); return *this;}
    inline ManagedNotificationEvent& WithOrganizationalUnitId(const char* value) { SetOrganizationalUnitId(value); return *this;}
    ///@}
  private:

    SchemaVersion m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    MessageComponents m_messageComponents;
    bool m_messageComponentsHasBeenSet = false;

    Aws::String m_sourceEventDetailUrl;
    bool m_sourceEventDetailUrlHasBeenSet = false;

    Aws::String m_sourceEventDetailUrlDisplayText;
    bool m_sourceEventDetailUrlDisplayTextHasBeenSet = false;

    NotificationType m_notificationType;
    bool m_notificationTypeHasBeenSet = false;

    EventStatus m_eventStatus;
    bool m_eventStatusHasBeenSet = false;

    AggregationEventType m_aggregationEventType;
    bool m_aggregationEventTypeHasBeenSet = false;

    AggregationSummary m_aggregationSummary;
    bool m_aggregationSummaryHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Map<Aws::String, TextPartValue> m_textParts;
    bool m_textPartsHasBeenSet = false;

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
