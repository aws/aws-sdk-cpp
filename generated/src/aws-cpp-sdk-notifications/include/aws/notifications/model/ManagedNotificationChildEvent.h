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
    AWS_NOTIFICATIONS_API ManagedNotificationChildEvent();
    AWS_NOTIFICATIONS_API ManagedNotificationChildEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API ManagedNotificationChildEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The schema version of the Managed Notification Child Event.</p>
     */
    inline const SchemaVersion& GetSchemaVersion() const{ return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(const SchemaVersion& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline void SetSchemaVersion(SchemaVersion&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }
    inline ManagedNotificationChildEvent& WithSchemaVersion(const SchemaVersion& value) { SetSchemaVersion(value); return *this;}
    inline ManagedNotificationChildEvent& WithSchemaVersion(SchemaVersion&& value) { SetSchemaVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for a Managed Notification Child Event.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ManagedNotificationChildEvent& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ManagedNotificationChildEvent& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ManagedNotificationChildEvent& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const MessageComponents& GetMessageComponents() const{ return m_messageComponents; }
    inline bool MessageComponentsHasBeenSet() const { return m_messageComponentsHasBeenSet; }
    inline void SetMessageComponents(const MessageComponents& value) { m_messageComponentsHasBeenSet = true; m_messageComponents = value; }
    inline void SetMessageComponents(MessageComponents&& value) { m_messageComponentsHasBeenSet = true; m_messageComponents = std::move(value); }
    inline ManagedNotificationChildEvent& WithMessageComponents(const MessageComponents& value) { SetMessageComponents(value); return *this;}
    inline ManagedNotificationChildEvent& WithMessageComponents(MessageComponents&& value) { SetMessageComponents(std::move(value)); return *this;}
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
    inline ManagedNotificationChildEvent& WithSourceEventDetailUrl(const Aws::String& value) { SetSourceEventDetailUrl(value); return *this;}
    inline ManagedNotificationChildEvent& WithSourceEventDetailUrl(Aws::String&& value) { SetSourceEventDetailUrl(std::move(value)); return *this;}
    inline ManagedNotificationChildEvent& WithSourceEventDetailUrl(const char* value) { SetSourceEventDetailUrl(value); return *this;}
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
    inline ManagedNotificationChildEvent& WithSourceEventDetailUrlDisplayText(const Aws::String& value) { SetSourceEventDetailUrlDisplayText(value); return *this;}
    inline ManagedNotificationChildEvent& WithSourceEventDetailUrlDisplayText(Aws::String&& value) { SetSourceEventDetailUrlDisplayText(std::move(value)); return *this;}
    inline ManagedNotificationChildEvent& WithSourceEventDetailUrlDisplayText(const char* value) { SetSourceEventDetailUrlDisplayText(value); return *this;}
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
    inline ManagedNotificationChildEvent& WithNotificationType(const NotificationType& value) { SetNotificationType(value); return *this;}
    inline ManagedNotificationChildEvent& WithNotificationType(NotificationType&& value) { SetNotificationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The assesed nature of the event.</p> <ul> <li> <p>Values:</p> <ul> <li> <p>
     * <code>HEALTHY</code> </p> <ul> <li> <p>All <code>EventRules</code> are
     * <code>ACTIVE</code>.</p> </li> </ul> </li> <li> <p> <code>UNHEALTHY</code> </p>
     * <ul> <li> <p>Some <code>EventRules</code> are <code>ACTIVE</code> and some are
     * <code>INACTIVE</code>.</p> </li> </ul> </li> </ul> </li> </ul>
     */
    inline const EventStatus& GetEventStatus() const{ return m_eventStatus; }
    inline bool EventStatusHasBeenSet() const { return m_eventStatusHasBeenSet; }
    inline void SetEventStatus(const EventStatus& value) { m_eventStatusHasBeenSet = true; m_eventStatus = value; }
    inline void SetEventStatus(EventStatus&& value) { m_eventStatusHasBeenSet = true; m_eventStatus = std::move(value); }
    inline ManagedNotificationChildEvent& WithEventStatus(const EventStatus& value) { SetEventStatus(value); return *this;}
    inline ManagedNotificationChildEvent& WithEventStatus(EventStatus&& value) { SetEventStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ManagedNotificationEvent that is
     * associated with this Managed Notification Child Event.</p>
     */
    inline const Aws::String& GetAggregateManagedNotificationEventArn() const{ return m_aggregateManagedNotificationEventArn; }
    inline bool AggregateManagedNotificationEventArnHasBeenSet() const { return m_aggregateManagedNotificationEventArnHasBeenSet; }
    inline void SetAggregateManagedNotificationEventArn(const Aws::String& value) { m_aggregateManagedNotificationEventArnHasBeenSet = true; m_aggregateManagedNotificationEventArn = value; }
    inline void SetAggregateManagedNotificationEventArn(Aws::String&& value) { m_aggregateManagedNotificationEventArnHasBeenSet = true; m_aggregateManagedNotificationEventArn = std::move(value); }
    inline void SetAggregateManagedNotificationEventArn(const char* value) { m_aggregateManagedNotificationEventArnHasBeenSet = true; m_aggregateManagedNotificationEventArn.assign(value); }
    inline ManagedNotificationChildEvent& WithAggregateManagedNotificationEventArn(const Aws::String& value) { SetAggregateManagedNotificationEventArn(value); return *this;}
    inline ManagedNotificationChildEvent& WithAggregateManagedNotificationEventArn(Aws::String&& value) { SetAggregateManagedNotificationEventArn(std::move(value)); return *this;}
    inline ManagedNotificationChildEvent& WithAggregateManagedNotificationEventArn(const char* value) { SetAggregateManagedNotificationEventArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notification event start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ManagedNotificationChildEvent& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ManagedNotificationChildEvent& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the event.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ManagedNotificationChildEvent& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ManagedNotificationChildEvent& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of text values.</p>
     */
    inline const Aws::Map<Aws::String, TextPartValue>& GetTextParts() const{ return m_textParts; }
    inline bool TextPartsHasBeenSet() const { return m_textPartsHasBeenSet; }
    inline void SetTextParts(const Aws::Map<Aws::String, TextPartValue>& value) { m_textPartsHasBeenSet = true; m_textParts = value; }
    inline void SetTextParts(Aws::Map<Aws::String, TextPartValue>&& value) { m_textPartsHasBeenSet = true; m_textParts = std::move(value); }
    inline ManagedNotificationChildEvent& WithTextParts(const Aws::Map<Aws::String, TextPartValue>& value) { SetTextParts(value); return *this;}
    inline ManagedNotificationChildEvent& WithTextParts(Aws::Map<Aws::String, TextPartValue>&& value) { SetTextParts(std::move(value)); return *this;}
    inline ManagedNotificationChildEvent& AddTextParts(const Aws::String& key, const TextPartValue& value) { m_textPartsHasBeenSet = true; m_textParts.emplace(key, value); return *this; }
    inline ManagedNotificationChildEvent& AddTextParts(Aws::String&& key, const TextPartValue& value) { m_textPartsHasBeenSet = true; m_textParts.emplace(std::move(key), value); return *this; }
    inline ManagedNotificationChildEvent& AddTextParts(const Aws::String& key, TextPartValue&& value) { m_textPartsHasBeenSet = true; m_textParts.emplace(key, std::move(value)); return *this; }
    inline ManagedNotificationChildEvent& AddTextParts(Aws::String&& key, TextPartValue&& value) { m_textPartsHasBeenSet = true; m_textParts.emplace(std::move(key), std::move(value)); return *this; }
    inline ManagedNotificationChildEvent& AddTextParts(const char* key, TextPartValue&& value) { m_textPartsHasBeenSet = true; m_textParts.emplace(key, std::move(value)); return *this; }
    inline ManagedNotificationChildEvent& AddTextParts(const char* key, const TextPartValue& value) { m_textPartsHasBeenSet = true; m_textParts.emplace(key, value); return *this; }
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
    inline ManagedNotificationChildEvent& WithOrganizationalUnitId(const Aws::String& value) { SetOrganizationalUnitId(value); return *this;}
    inline ManagedNotificationChildEvent& WithOrganizationalUnitId(Aws::String&& value) { SetOrganizationalUnitId(std::move(value)); return *this;}
    inline ManagedNotificationChildEvent& WithOrganizationalUnitId(const char* value) { SetOrganizationalUnitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed information about the dimensions used for event
     * summarization and aggregation.</p>
     */
    inline const AggregationDetail& GetAggregationDetail() const{ return m_aggregationDetail; }
    inline bool AggregationDetailHasBeenSet() const { return m_aggregationDetailHasBeenSet; }
    inline void SetAggregationDetail(const AggregationDetail& value) { m_aggregationDetailHasBeenSet = true; m_aggregationDetail = value; }
    inline void SetAggregationDetail(AggregationDetail&& value) { m_aggregationDetailHasBeenSet = true; m_aggregationDetail = std::move(value); }
    inline ManagedNotificationChildEvent& WithAggregationDetail(const AggregationDetail& value) { SetAggregationDetail(value); return *this;}
    inline ManagedNotificationChildEvent& WithAggregationDetail(AggregationDetail&& value) { SetAggregationDetail(std::move(value)); return *this;}
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

    Aws::String m_aggregateManagedNotificationEventArn;
    bool m_aggregateManagedNotificationEventArnHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
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
