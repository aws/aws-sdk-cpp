/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/model/SchemaVersion.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/model/SourceEventMetadata.h>
#include <aws/notifications/model/MessageComponents.h>
#include <aws/notifications/model/NotificationType.h>
#include <aws/notifications/model/EventStatus.h>
#include <aws/notifications/model/AggregationEventType.h>
#include <aws/notifications/model/AggregationSummary.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/notifications/model/TextPartValue.h>
#include <aws/notifications/model/MediaElement.h>
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
   * <p>A <code>NotificationEvent</code> is a notification-focused representation of
   * an event. They contain semantic information used by Channels to create end-user
   * notifications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/NotificationEvent">AWS
   * API Reference</a></p>
   */
  class NotificationEvent
  {
  public:
    AWS_NOTIFICATIONS_API NotificationEvent();
    AWS_NOTIFICATIONS_API NotificationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API NotificationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The schema version of the Notification Event.</p>
     */
    inline const SchemaVersion& GetSchemaVersion() const{ return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(const SchemaVersion& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline void SetSchemaVersion(SchemaVersion&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }
    inline NotificationEvent& WithSchemaVersion(const SchemaVersion& value) { SetSchemaVersion(value); return *this;}
    inline NotificationEvent& WithSchemaVersion(SchemaVersion&& value) { SetSchemaVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for a <code>NotificationEvent</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline NotificationEvent& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline NotificationEvent& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline NotificationEvent& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source event metadata.</p>
     */
    inline const SourceEventMetadata& GetSourceEventMetadata() const{ return m_sourceEventMetadata; }
    inline bool SourceEventMetadataHasBeenSet() const { return m_sourceEventMetadataHasBeenSet; }
    inline void SetSourceEventMetadata(const SourceEventMetadata& value) { m_sourceEventMetadataHasBeenSet = true; m_sourceEventMetadata = value; }
    inline void SetSourceEventMetadata(SourceEventMetadata&& value) { m_sourceEventMetadataHasBeenSet = true; m_sourceEventMetadata = std::move(value); }
    inline NotificationEvent& WithSourceEventMetadata(const SourceEventMetadata& value) { SetSourceEventMetadata(value); return *this;}
    inline NotificationEvent& WithSourceEventMetadata(SourceEventMetadata&& value) { SetSourceEventMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const MessageComponents& GetMessageComponents() const{ return m_messageComponents; }
    inline bool MessageComponentsHasBeenSet() const { return m_messageComponentsHasBeenSet; }
    inline void SetMessageComponents(const MessageComponents& value) { m_messageComponentsHasBeenSet = true; m_messageComponents = value; }
    inline void SetMessageComponents(MessageComponents&& value) { m_messageComponentsHasBeenSet = true; m_messageComponents = std::move(value); }
    inline NotificationEvent& WithMessageComponents(const MessageComponents& value) { SetMessageComponents(value); return *this;}
    inline NotificationEvent& WithMessageComponents(MessageComponents&& value) { SetMessageComponents(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source event URL.</p>
     */
    inline const Aws::String& GetSourceEventDetailUrl() const{ return m_sourceEventDetailUrl; }
    inline bool SourceEventDetailUrlHasBeenSet() const { return m_sourceEventDetailUrlHasBeenSet; }
    inline void SetSourceEventDetailUrl(const Aws::String& value) { m_sourceEventDetailUrlHasBeenSet = true; m_sourceEventDetailUrl = value; }
    inline void SetSourceEventDetailUrl(Aws::String&& value) { m_sourceEventDetailUrlHasBeenSet = true; m_sourceEventDetailUrl = std::move(value); }
    inline void SetSourceEventDetailUrl(const char* value) { m_sourceEventDetailUrlHasBeenSet = true; m_sourceEventDetailUrl.assign(value); }
    inline NotificationEvent& WithSourceEventDetailUrl(const Aws::String& value) { SetSourceEventDetailUrl(value); return *this;}
    inline NotificationEvent& WithSourceEventDetailUrl(Aws::String&& value) { SetSourceEventDetailUrl(std::move(value)); return *this;}
    inline NotificationEvent& WithSourceEventDetailUrl(const char* value) { SetSourceEventDetailUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed URL for the source event.</p>
     */
    inline const Aws::String& GetSourceEventDetailUrlDisplayText() const{ return m_sourceEventDetailUrlDisplayText; }
    inline bool SourceEventDetailUrlDisplayTextHasBeenSet() const { return m_sourceEventDetailUrlDisplayTextHasBeenSet; }
    inline void SetSourceEventDetailUrlDisplayText(const Aws::String& value) { m_sourceEventDetailUrlDisplayTextHasBeenSet = true; m_sourceEventDetailUrlDisplayText = value; }
    inline void SetSourceEventDetailUrlDisplayText(Aws::String&& value) { m_sourceEventDetailUrlDisplayTextHasBeenSet = true; m_sourceEventDetailUrlDisplayText = std::move(value); }
    inline void SetSourceEventDetailUrlDisplayText(const char* value) { m_sourceEventDetailUrlDisplayTextHasBeenSet = true; m_sourceEventDetailUrlDisplayText.assign(value); }
    inline NotificationEvent& WithSourceEventDetailUrlDisplayText(const Aws::String& value) { SetSourceEventDetailUrlDisplayText(value); return *this;}
    inline NotificationEvent& WithSourceEventDetailUrlDisplayText(Aws::String&& value) { SetSourceEventDetailUrlDisplayText(std::move(value)); return *this;}
    inline NotificationEvent& WithSourceEventDetailUrlDisplayText(const char* value) { SetSourceEventDetailUrlDisplayText(value); return *this;}
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
    inline const NotificationType& GetNotificationType() const{ return m_notificationType; }
    inline bool NotificationTypeHasBeenSet() const { return m_notificationTypeHasBeenSet; }
    inline void SetNotificationType(const NotificationType& value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }
    inline void SetNotificationType(NotificationType&& value) { m_notificationTypeHasBeenSet = true; m_notificationType = std::move(value); }
    inline NotificationEvent& WithNotificationType(const NotificationType& value) { SetNotificationType(value); return *this;}
    inline NotificationEvent& WithNotificationType(NotificationType&& value) { SetNotificationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The assessed nature of the event.</p> <ul> <li> <p>Values:</p> <ul> <li> <p>
     * <code>HEALTHY</code> </p> <ul> <li> <p>All <code>EventRules</code> are
     * <code>ACTIVE</code> and any call can be run.</p> </li> </ul> </li> <li> <p>
     * <code>UNHEALTHY</code> </p> <ul> <li> <p>Some <code>EventRules</code> are
     * <code>ACTIVE</code> and some are <code>INACTIVE</code>. Any call can be run.</p>
     * </li> </ul> </li> </ul> </li> </ul>
     */
    inline const EventStatus& GetEventStatus() const{ return m_eventStatus; }
    inline bool EventStatusHasBeenSet() const { return m_eventStatusHasBeenSet; }
    inline void SetEventStatus(const EventStatus& value) { m_eventStatusHasBeenSet = true; m_eventStatus = value; }
    inline void SetEventStatus(EventStatus&& value) { m_eventStatusHasBeenSet = true; m_eventStatus = std::move(value); }
    inline NotificationEvent& WithEventStatus(const EventStatus& value) { SetEventStatus(value); return *this;}
    inline NotificationEvent& WithEventStatus(EventStatus&& value) { SetEventStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation type of the <code>NotificationConfiguration</code>.</p> <ul>
     * <li> <p>Values:</p> <ul> <li> <p> <code>AGGREGATE</code> </p> <ul> <li> <p>The
     * notification event is an aggregate notification. Aggregate notifications
     * summarize grouped events over a specified time period.</p> </li> </ul> </li>
     * <li> <p> <code>CHILD</code> </p> <ul> <li> <p>Some <code>EventRules</code> are
     * <code>ACTIVE</code> and some are <code>INACTIVE</code>. Any call can be run.</p>
     * </li> </ul> </li> <li> <p> <code>NONE</code> </p> <ul> <li> <p>The notification
     * isn't aggregated.</p> </li> </ul> </li> </ul> </li> </ul>
     */
    inline const AggregationEventType& GetAggregationEventType() const{ return m_aggregationEventType; }
    inline bool AggregationEventTypeHasBeenSet() const { return m_aggregationEventTypeHasBeenSet; }
    inline void SetAggregationEventType(const AggregationEventType& value) { m_aggregationEventTypeHasBeenSet = true; m_aggregationEventType = value; }
    inline void SetAggregationEventType(AggregationEventType&& value) { m_aggregationEventTypeHasBeenSet = true; m_aggregationEventType = std::move(value); }
    inline NotificationEvent& WithAggregationEventType(const AggregationEventType& value) { SetAggregationEventType(value); return *this;}
    inline NotificationEvent& WithAggregationEventType(AggregationEventType&& value) { SetAggregationEventType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the value of <code>aggregationEventType</code> is not <code>NONE</code>,
     * this is the Amazon Resource Event (ARN) of the parent aggregate
     * notification.</p> <p>This is omitted if notification isn't aggregated.</p>
     */
    inline const Aws::String& GetAggregateNotificationEventArn() const{ return m_aggregateNotificationEventArn; }
    inline bool AggregateNotificationEventArnHasBeenSet() const { return m_aggregateNotificationEventArnHasBeenSet; }
    inline void SetAggregateNotificationEventArn(const Aws::String& value) { m_aggregateNotificationEventArnHasBeenSet = true; m_aggregateNotificationEventArn = value; }
    inline void SetAggregateNotificationEventArn(Aws::String&& value) { m_aggregateNotificationEventArnHasBeenSet = true; m_aggregateNotificationEventArn = std::move(value); }
    inline void SetAggregateNotificationEventArn(const char* value) { m_aggregateNotificationEventArnHasBeenSet = true; m_aggregateNotificationEventArn.assign(value); }
    inline NotificationEvent& WithAggregateNotificationEventArn(const Aws::String& value) { SetAggregateNotificationEventArn(value); return *this;}
    inline NotificationEvent& WithAggregateNotificationEventArn(Aws::String&& value) { SetAggregateNotificationEventArn(std::move(value)); return *this;}
    inline NotificationEvent& WithAggregateNotificationEventArn(const char* value) { SetAggregateNotificationEventArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides additional information about how multiple notifications are
     * grouped.</p>
     */
    inline const AggregationSummary& GetAggregationSummary() const{ return m_aggregationSummary; }
    inline bool AggregationSummaryHasBeenSet() const { return m_aggregationSummaryHasBeenSet; }
    inline void SetAggregationSummary(const AggregationSummary& value) { m_aggregationSummaryHasBeenSet = true; m_aggregationSummary = value; }
    inline void SetAggregationSummary(AggregationSummary&& value) { m_aggregationSummaryHasBeenSet = true; m_aggregationSummary = std::move(value); }
    inline NotificationEvent& WithAggregationSummary(const AggregationSummary& value) { SetAggregationSummary(value); return *this;}
    inline NotificationEvent& WithAggregationSummary(AggregationSummary&& value) { SetAggregationSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notification event start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline NotificationEvent& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline NotificationEvent& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the event.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline NotificationEvent& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline NotificationEvent& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of text values.</p>
     */
    inline const Aws::Map<Aws::String, TextPartValue>& GetTextParts() const{ return m_textParts; }
    inline bool TextPartsHasBeenSet() const { return m_textPartsHasBeenSet; }
    inline void SetTextParts(const Aws::Map<Aws::String, TextPartValue>& value) { m_textPartsHasBeenSet = true; m_textParts = value; }
    inline void SetTextParts(Aws::Map<Aws::String, TextPartValue>&& value) { m_textPartsHasBeenSet = true; m_textParts = std::move(value); }
    inline NotificationEvent& WithTextParts(const Aws::Map<Aws::String, TextPartValue>& value) { SetTextParts(value); return *this;}
    inline NotificationEvent& WithTextParts(Aws::Map<Aws::String, TextPartValue>&& value) { SetTextParts(std::move(value)); return *this;}
    inline NotificationEvent& AddTextParts(const Aws::String& key, const TextPartValue& value) { m_textPartsHasBeenSet = true; m_textParts.emplace(key, value); return *this; }
    inline NotificationEvent& AddTextParts(Aws::String&& key, const TextPartValue& value) { m_textPartsHasBeenSet = true; m_textParts.emplace(std::move(key), value); return *this; }
    inline NotificationEvent& AddTextParts(const Aws::String& key, TextPartValue&& value) { m_textPartsHasBeenSet = true; m_textParts.emplace(key, std::move(value)); return *this; }
    inline NotificationEvent& AddTextParts(Aws::String&& key, TextPartValue&& value) { m_textPartsHasBeenSet = true; m_textParts.emplace(std::move(key), std::move(value)); return *this; }
    inline NotificationEvent& AddTextParts(const char* key, TextPartValue&& value) { m_textPartsHasBeenSet = true; m_textParts.emplace(key, std::move(value)); return *this; }
    inline NotificationEvent& AddTextParts(const char* key, const TextPartValue& value) { m_textPartsHasBeenSet = true; m_textParts.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of media elements.</p>
     */
    inline const Aws::Vector<MediaElement>& GetMedia() const{ return m_media; }
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }
    inline void SetMedia(const Aws::Vector<MediaElement>& value) { m_mediaHasBeenSet = true; m_media = value; }
    inline void SetMedia(Aws::Vector<MediaElement>&& value) { m_mediaHasBeenSet = true; m_media = std::move(value); }
    inline NotificationEvent& WithMedia(const Aws::Vector<MediaElement>& value) { SetMedia(value); return *this;}
    inline NotificationEvent& WithMedia(Aws::Vector<MediaElement>&& value) { SetMedia(std::move(value)); return *this;}
    inline NotificationEvent& AddMedia(const MediaElement& value) { m_mediaHasBeenSet = true; m_media.push_back(value); return *this; }
    inline NotificationEvent& AddMedia(MediaElement&& value) { m_mediaHasBeenSet = true; m_media.push_back(std::move(value)); return *this; }
    ///@}
  private:

    SchemaVersion m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    SourceEventMetadata m_sourceEventMetadata;
    bool m_sourceEventMetadataHasBeenSet = false;

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

    Aws::String m_aggregateNotificationEventArn;
    bool m_aggregateNotificationEventArnHasBeenSet = false;

    AggregationSummary m_aggregationSummary;
    bool m_aggregationSummaryHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Map<Aws::String, TextPartValue> m_textParts;
    bool m_textPartsHasBeenSet = false;

    Aws::Vector<MediaElement> m_media;
    bool m_mediaHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
