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
    AWS_NOTIFICATIONS_API NotificationEvent() = default;
    AWS_NOTIFICATIONS_API NotificationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API NotificationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The schema version of the Notification Event.</p>
     */
    inline SchemaVersion GetSchemaVersion() const { return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(SchemaVersion value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline NotificationEvent& WithSchemaVersion(SchemaVersion value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for a <code>NotificationEvent</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    NotificationEvent& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source event metadata.</p>
     */
    inline const SourceEventMetadata& GetSourceEventMetadata() const { return m_sourceEventMetadata; }
    inline bool SourceEventMetadataHasBeenSet() const { return m_sourceEventMetadataHasBeenSet; }
    template<typename SourceEventMetadataT = SourceEventMetadata>
    void SetSourceEventMetadata(SourceEventMetadataT&& value) { m_sourceEventMetadataHasBeenSet = true; m_sourceEventMetadata = std::forward<SourceEventMetadataT>(value); }
    template<typename SourceEventMetadataT = SourceEventMetadata>
    NotificationEvent& WithSourceEventMetadata(SourceEventMetadataT&& value) { SetSourceEventMetadata(std::forward<SourceEventMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MessageComponents& GetMessageComponents() const { return m_messageComponents; }
    inline bool MessageComponentsHasBeenSet() const { return m_messageComponentsHasBeenSet; }
    template<typename MessageComponentsT = MessageComponents>
    void SetMessageComponents(MessageComponentsT&& value) { m_messageComponentsHasBeenSet = true; m_messageComponents = std::forward<MessageComponentsT>(value); }
    template<typename MessageComponentsT = MessageComponents>
    NotificationEvent& WithMessageComponents(MessageComponentsT&& value) { SetMessageComponents(std::forward<MessageComponentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source event URL.</p>
     */
    inline const Aws::String& GetSourceEventDetailUrl() const { return m_sourceEventDetailUrl; }
    inline bool SourceEventDetailUrlHasBeenSet() const { return m_sourceEventDetailUrlHasBeenSet; }
    template<typename SourceEventDetailUrlT = Aws::String>
    void SetSourceEventDetailUrl(SourceEventDetailUrlT&& value) { m_sourceEventDetailUrlHasBeenSet = true; m_sourceEventDetailUrl = std::forward<SourceEventDetailUrlT>(value); }
    template<typename SourceEventDetailUrlT = Aws::String>
    NotificationEvent& WithSourceEventDetailUrl(SourceEventDetailUrlT&& value) { SetSourceEventDetailUrl(std::forward<SourceEventDetailUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed URL for the source event.</p>
     */
    inline const Aws::String& GetSourceEventDetailUrlDisplayText() const { return m_sourceEventDetailUrlDisplayText; }
    inline bool SourceEventDetailUrlDisplayTextHasBeenSet() const { return m_sourceEventDetailUrlDisplayTextHasBeenSet; }
    template<typename SourceEventDetailUrlDisplayTextT = Aws::String>
    void SetSourceEventDetailUrlDisplayText(SourceEventDetailUrlDisplayTextT&& value) { m_sourceEventDetailUrlDisplayTextHasBeenSet = true; m_sourceEventDetailUrlDisplayText = std::forward<SourceEventDetailUrlDisplayTextT>(value); }
    template<typename SourceEventDetailUrlDisplayTextT = Aws::String>
    NotificationEvent& WithSourceEventDetailUrlDisplayText(SourceEventDetailUrlDisplayTextT&& value) { SetSourceEventDetailUrlDisplayText(std::forward<SourceEventDetailUrlDisplayTextT>(value)); return *this;}
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
    inline NotificationEvent& WithNotificationType(NotificationType value) { SetNotificationType(value); return *this;}
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
    inline EventStatus GetEventStatus() const { return m_eventStatus; }
    inline bool EventStatusHasBeenSet() const { return m_eventStatusHasBeenSet; }
    inline void SetEventStatus(EventStatus value) { m_eventStatusHasBeenSet = true; m_eventStatus = value; }
    inline NotificationEvent& WithEventStatus(EventStatus value) { SetEventStatus(value); return *this;}
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
    inline AggregationEventType GetAggregationEventType() const { return m_aggregationEventType; }
    inline bool AggregationEventTypeHasBeenSet() const { return m_aggregationEventTypeHasBeenSet; }
    inline void SetAggregationEventType(AggregationEventType value) { m_aggregationEventTypeHasBeenSet = true; m_aggregationEventType = value; }
    inline NotificationEvent& WithAggregationEventType(AggregationEventType value) { SetAggregationEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the value of <code>aggregationEventType</code> is not <code>NONE</code>,
     * this is the Amazon Resource Event (ARN) of the parent aggregate
     * notification.</p> <p>This is omitted if notification isn't aggregated.</p>
     */
    inline const Aws::String& GetAggregateNotificationEventArn() const { return m_aggregateNotificationEventArn; }
    inline bool AggregateNotificationEventArnHasBeenSet() const { return m_aggregateNotificationEventArnHasBeenSet; }
    template<typename AggregateNotificationEventArnT = Aws::String>
    void SetAggregateNotificationEventArn(AggregateNotificationEventArnT&& value) { m_aggregateNotificationEventArnHasBeenSet = true; m_aggregateNotificationEventArn = std::forward<AggregateNotificationEventArnT>(value); }
    template<typename AggregateNotificationEventArnT = Aws::String>
    NotificationEvent& WithAggregateNotificationEventArn(AggregateNotificationEventArnT&& value) { SetAggregateNotificationEventArn(std::forward<AggregateNotificationEventArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides additional information about how multiple notifications are
     * grouped.</p>
     */
    inline const AggregationSummary& GetAggregationSummary() const { return m_aggregationSummary; }
    inline bool AggregationSummaryHasBeenSet() const { return m_aggregationSummaryHasBeenSet; }
    template<typename AggregationSummaryT = AggregationSummary>
    void SetAggregationSummary(AggregationSummaryT&& value) { m_aggregationSummaryHasBeenSet = true; m_aggregationSummary = std::forward<AggregationSummaryT>(value); }
    template<typename AggregationSummaryT = AggregationSummary>
    NotificationEvent& WithAggregationSummary(AggregationSummaryT&& value) { SetAggregationSummary(std::forward<AggregationSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notification event start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    NotificationEvent& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the event.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    NotificationEvent& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of text values.</p>
     */
    inline const Aws::Map<Aws::String, TextPartValue>& GetTextParts() const { return m_textParts; }
    inline bool TextPartsHasBeenSet() const { return m_textPartsHasBeenSet; }
    template<typename TextPartsT = Aws::Map<Aws::String, TextPartValue>>
    void SetTextParts(TextPartsT&& value) { m_textPartsHasBeenSet = true; m_textParts = std::forward<TextPartsT>(value); }
    template<typename TextPartsT = Aws::Map<Aws::String, TextPartValue>>
    NotificationEvent& WithTextParts(TextPartsT&& value) { SetTextParts(std::forward<TextPartsT>(value)); return *this;}
    template<typename TextPartsKeyT = Aws::String, typename TextPartsValueT = TextPartValue>
    NotificationEvent& AddTextParts(TextPartsKeyT&& key, TextPartsValueT&& value) {
      m_textPartsHasBeenSet = true; m_textParts.emplace(std::forward<TextPartsKeyT>(key), std::forward<TextPartsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of media elements.</p>
     */
    inline const Aws::Vector<MediaElement>& GetMedia() const { return m_media; }
    inline bool MediaHasBeenSet() const { return m_mediaHasBeenSet; }
    template<typename MediaT = Aws::Vector<MediaElement>>
    void SetMedia(MediaT&& value) { m_mediaHasBeenSet = true; m_media = std::forward<MediaT>(value); }
    template<typename MediaT = Aws::Vector<MediaElement>>
    NotificationEvent& WithMedia(MediaT&& value) { SetMedia(std::forward<MediaT>(value)); return *this;}
    template<typename MediaT = MediaElement>
    NotificationEvent& AddMedia(MediaT&& value) { m_mediaHasBeenSet = true; m_media.emplace_back(std::forward<MediaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the organizational unit associated with the
     * notification event.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const { return m_organizationalUnitId; }
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }
    template<typename OrganizationalUnitIdT = Aws::String>
    void SetOrganizationalUnitId(OrganizationalUnitIdT&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::forward<OrganizationalUnitIdT>(value); }
    template<typename OrganizationalUnitIdT = Aws::String>
    NotificationEvent& WithOrganizationalUnitId(OrganizationalUnitIdT&& value) { SetOrganizationalUnitId(std::forward<OrganizationalUnitIdT>(value)); return *this;}
    ///@}
  private:

    SchemaVersion m_schemaVersion{SchemaVersion::NOT_SET};
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

    NotificationType m_notificationType{NotificationType::NOT_SET};
    bool m_notificationTypeHasBeenSet = false;

    EventStatus m_eventStatus{EventStatus::NOT_SET};
    bool m_eventStatusHasBeenSet = false;

    AggregationEventType m_aggregationEventType{AggregationEventType::NOT_SET};
    bool m_aggregationEventTypeHasBeenSet = false;

    Aws::String m_aggregateNotificationEventArn;
    bool m_aggregateNotificationEventArnHasBeenSet = false;

    AggregationSummary m_aggregationSummary;
    bool m_aggregationSummaryHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Map<Aws::String, TextPartValue> m_textParts;
    bool m_textPartsHasBeenSet = false;

    Aws::Vector<MediaElement> m_media;
    bool m_mediaHasBeenSet = false;

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
