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
    AWS_NOTIFICATIONS_API ManagedNotificationEvent() = default;
    AWS_NOTIFICATIONS_API ManagedNotificationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API ManagedNotificationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Version of the <code>ManagedNotificationEvent</code> schema.</p>
     */
    inline SchemaVersion GetSchemaVersion() const { return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(SchemaVersion value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline ManagedNotificationEvent& WithSchemaVersion(SchemaVersion value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for a <code>ManagedNotificationEvent</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ManagedNotificationEvent& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MessageComponents& GetMessageComponents() const { return m_messageComponents; }
    inline bool MessageComponentsHasBeenSet() const { return m_messageComponentsHasBeenSet; }
    template<typename MessageComponentsT = MessageComponents>
    void SetMessageComponents(MessageComponentsT&& value) { m_messageComponentsHasBeenSet = true; m_messageComponents = std::forward<MessageComponentsT>(value); }
    template<typename MessageComponentsT = MessageComponents>
    ManagedNotificationEvent& WithMessageComponents(MessageComponentsT&& value) { SetMessageComponents(std::forward<MessageComponentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>URL defined by Source Service to be used by notification consumers to get
     * additional information about event.</p>
     */
    inline const Aws::String& GetSourceEventDetailUrl() const { return m_sourceEventDetailUrl; }
    inline bool SourceEventDetailUrlHasBeenSet() const { return m_sourceEventDetailUrlHasBeenSet; }
    template<typename SourceEventDetailUrlT = Aws::String>
    void SetSourceEventDetailUrl(SourceEventDetailUrlT&& value) { m_sourceEventDetailUrlHasBeenSet = true; m_sourceEventDetailUrl = std::forward<SourceEventDetailUrlT>(value); }
    template<typename SourceEventDetailUrlT = Aws::String>
    ManagedNotificationEvent& WithSourceEventDetailUrl(SourceEventDetailUrlT&& value) { SetSourceEventDetailUrl(std::forward<SourceEventDetailUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Text that needs to be hyperlinked with the sourceEventDetailUrl. For example,
     * the description of the sourceEventDetailUrl.</p>
     */
    inline const Aws::String& GetSourceEventDetailUrlDisplayText() const { return m_sourceEventDetailUrlDisplayText; }
    inline bool SourceEventDetailUrlDisplayTextHasBeenSet() const { return m_sourceEventDetailUrlDisplayTextHasBeenSet; }
    template<typename SourceEventDetailUrlDisplayTextT = Aws::String>
    void SetSourceEventDetailUrlDisplayText(SourceEventDetailUrlDisplayTextT&& value) { m_sourceEventDetailUrlDisplayTextHasBeenSet = true; m_sourceEventDetailUrlDisplayText = std::forward<SourceEventDetailUrlDisplayTextT>(value); }
    template<typename SourceEventDetailUrlDisplayTextT = Aws::String>
    ManagedNotificationEvent& WithSourceEventDetailUrlDisplayText(SourceEventDetailUrlDisplayTextT&& value) { SetSourceEventDetailUrlDisplayText(std::forward<SourceEventDetailUrlDisplayTextT>(value)); return *this;}
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
    inline NotificationType GetNotificationType() const { return m_notificationType; }
    inline bool NotificationTypeHasBeenSet() const { return m_notificationTypeHasBeenSet; }
    inline void SetNotificationType(NotificationType value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }
    inline ManagedNotificationEvent& WithNotificationType(NotificationType value) { SetNotificationType(value); return *this;}
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
    inline EventStatus GetEventStatus() const { return m_eventStatus; }
    inline bool EventStatusHasBeenSet() const { return m_eventStatusHasBeenSet; }
    inline void SetEventStatus(EventStatus value) { m_eventStatusHasBeenSet = true; m_eventStatus = value; }
    inline ManagedNotificationEvent& WithEventStatus(EventStatus value) { SetEventStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notifications aggregation type.</p>
     */
    inline AggregationEventType GetAggregationEventType() const { return m_aggregationEventType; }
    inline bool AggregationEventTypeHasBeenSet() const { return m_aggregationEventTypeHasBeenSet; }
    inline void SetAggregationEventType(AggregationEventType value) { m_aggregationEventTypeHasBeenSet = true; m_aggregationEventType = value; }
    inline ManagedNotificationEvent& WithAggregationEventType(AggregationEventType value) { SetAggregationEventType(value); return *this;}
    ///@}

    ///@{
    
    inline const AggregationSummary& GetAggregationSummary() const { return m_aggregationSummary; }
    inline bool AggregationSummaryHasBeenSet() const { return m_aggregationSummaryHasBeenSet; }
    template<typename AggregationSummaryT = AggregationSummary>
    void SetAggregationSummary(AggregationSummaryT&& value) { m_aggregationSummaryHasBeenSet = true; m_aggregationSummary = std::forward<AggregationSummaryT>(value); }
    template<typename AggregationSummaryT = AggregationSummary>
    ManagedNotificationEvent& WithAggregationSummary(AggregationSummaryT&& value) { SetAggregationSummary(std::forward<AggregationSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The earliest time of events to return from this call.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ManagedNotificationEvent& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the notification event.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ManagedNotificationEvent& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
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
    ManagedNotificationEvent& WithTextParts(TextPartsT&& value) { SetTextParts(std::forward<TextPartsT>(value)); return *this;}
    template<typename TextPartsKeyT = Aws::String, typename TextPartsValueT = TextPartValue>
    ManagedNotificationEvent& AddTextParts(TextPartsKeyT&& key, TextPartsValueT&& value) {
      m_textPartsHasBeenSet = true; m_textParts.emplace(std::forward<TextPartsKeyT>(key), std::forward<TextPartsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Organizational Unit Id that an Amazon Web Services account belongs
     * to.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const { return m_organizationalUnitId; }
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }
    template<typename OrganizationalUnitIdT = Aws::String>
    void SetOrganizationalUnitId(OrganizationalUnitIdT&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::forward<OrganizationalUnitIdT>(value); }
    template<typename OrganizationalUnitIdT = Aws::String>
    ManagedNotificationEvent& WithOrganizationalUnitId(OrganizationalUnitIdT&& value) { SetOrganizationalUnitId(std::forward<OrganizationalUnitIdT>(value)); return *this;}
    ///@}
  private:

    SchemaVersion m_schemaVersion{SchemaVersion::NOT_SET};
    bool m_schemaVersionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

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

    AggregationSummary m_aggregationSummary;
    bool m_aggregationSummaryHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Map<Aws::String, TextPartValue> m_textParts;
    bool m_textPartsHasBeenSet = false;

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
