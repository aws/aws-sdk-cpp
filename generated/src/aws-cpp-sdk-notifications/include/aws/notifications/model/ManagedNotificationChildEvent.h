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
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/notifications/model/AggregationDetail.h>
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
   * <p>A ManagedNotificationChildEvent is a notification-focused representation of
   * an event. They contain semantic information used to create aggregated or
   * non-aggregated end-user notifications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/ManagedNotificationChildEvent">AWS
   * API Reference</a></p>
   */
  class ManagedNotificationChildEvent
  {
  public:
    AWS_NOTIFICATIONS_API ManagedNotificationChildEvent() = default;
    AWS_NOTIFICATIONS_API ManagedNotificationChildEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API ManagedNotificationChildEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The schema version of the Managed Notification Child Event.</p>
     */
    inline SchemaVersion GetSchemaVersion() const { return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(SchemaVersion value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline ManagedNotificationChildEvent& WithSchemaVersion(SchemaVersion value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for a Managed Notification Child Event.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ManagedNotificationChildEvent& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MessageComponents& GetMessageComponents() const { return m_messageComponents; }
    inline bool MessageComponentsHasBeenSet() const { return m_messageComponentsHasBeenSet; }
    template<typename MessageComponentsT = MessageComponents>
    void SetMessageComponents(MessageComponentsT&& value) { m_messageComponentsHasBeenSet = true; m_messageComponents = std::forward<MessageComponentsT>(value); }
    template<typename MessageComponentsT = MessageComponents>
    ManagedNotificationChildEvent& WithMessageComponents(MessageComponentsT&& value) { SetMessageComponents(std::forward<MessageComponentsT>(value)); return *this;}
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
    ManagedNotificationChildEvent& WithSourceEventDetailUrl(SourceEventDetailUrlT&& value) { SetSourceEventDetailUrl(std::forward<SourceEventDetailUrlT>(value)); return *this;}
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
    ManagedNotificationChildEvent& WithSourceEventDetailUrlDisplayText(SourceEventDetailUrlDisplayTextT&& value) { SetSourceEventDetailUrlDisplayText(std::forward<SourceEventDetailUrlDisplayTextT>(value)); return *this;}
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
    inline ManagedNotificationChildEvent& WithNotificationType(NotificationType value) { SetNotificationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The assesed nature of the event.</p> <ul> <li> <p>Values:</p> <ul> <li> <p>
     * <code>HEALTHY</code> </p> <ul> <li> <p>All <code>EventRules</code> are
     * <code>ACTIVE</code>.</p> </li> </ul> </li> <li> <p> <code>UNHEALTHY</code> </p>
     * <ul> <li> <p>Some <code>EventRules</code> are <code>ACTIVE</code> and some are
     * <code>INACTIVE</code>.</p> </li> </ul> </li> </ul> </li> </ul>
     */
    inline EventStatus GetEventStatus() const { return m_eventStatus; }
    inline bool EventStatusHasBeenSet() const { return m_eventStatusHasBeenSet; }
    inline void SetEventStatus(EventStatus value) { m_eventStatusHasBeenSet = true; m_eventStatus = value; }
    inline ManagedNotificationChildEvent& WithEventStatus(EventStatus value) { SetEventStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ManagedNotificationEvent that is
     * associated with this Managed Notification Child Event.</p>
     */
    inline const Aws::String& GetAggregateManagedNotificationEventArn() const { return m_aggregateManagedNotificationEventArn; }
    inline bool AggregateManagedNotificationEventArnHasBeenSet() const { return m_aggregateManagedNotificationEventArnHasBeenSet; }
    template<typename AggregateManagedNotificationEventArnT = Aws::String>
    void SetAggregateManagedNotificationEventArn(AggregateManagedNotificationEventArnT&& value) { m_aggregateManagedNotificationEventArnHasBeenSet = true; m_aggregateManagedNotificationEventArn = std::forward<AggregateManagedNotificationEventArnT>(value); }
    template<typename AggregateManagedNotificationEventArnT = Aws::String>
    ManagedNotificationChildEvent& WithAggregateManagedNotificationEventArn(AggregateManagedNotificationEventArnT&& value) { SetAggregateManagedNotificationEventArn(std::forward<AggregateManagedNotificationEventArnT>(value)); return *this;}
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
    ManagedNotificationChildEvent& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
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
    ManagedNotificationChildEvent& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
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
    ManagedNotificationChildEvent& WithTextParts(TextPartsT&& value) { SetTextParts(std::forward<TextPartsT>(value)); return *this;}
    template<typename TextPartsKeyT = Aws::String, typename TextPartsValueT = TextPartValue>
    ManagedNotificationChildEvent& AddTextParts(TextPartsKeyT&& key, TextPartsValueT&& value) {
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
    ManagedNotificationChildEvent& WithOrganizationalUnitId(OrganizationalUnitIdT&& value) { SetOrganizationalUnitId(std::forward<OrganizationalUnitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed information about the dimensions used for event
     * summarization and aggregation.</p>
     */
    inline const AggregationDetail& GetAggregationDetail() const { return m_aggregationDetail; }
    inline bool AggregationDetailHasBeenSet() const { return m_aggregationDetailHasBeenSet; }
    template<typename AggregationDetailT = AggregationDetail>
    void SetAggregationDetail(AggregationDetailT&& value) { m_aggregationDetailHasBeenSet = true; m_aggregationDetail = std::forward<AggregationDetailT>(value); }
    template<typename AggregationDetailT = AggregationDetail>
    ManagedNotificationChildEvent& WithAggregationDetail(AggregationDetailT&& value) { SetAggregationDetail(std::forward<AggregationDetailT>(value)); return *this;}
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

    Aws::String m_aggregateManagedNotificationEventArn;
    bool m_aggregateManagedNotificationEventArnHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Map<Aws::String, TextPartValue> m_textParts;
    bool m_textPartsHasBeenSet = false;

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet = false;

    AggregationDetail m_aggregationDetail;
    bool m_aggregationDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
