/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/model/SchemaVersion.h>
#include <aws/notifications/model/ManagedSourceEventMetadataSummary.h>
#include <aws/notifications/model/MessageComponentsSummary.h>
#include <aws/notifications/model/AggregationDetail.h>
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
   * <code>ManagedNotificationChildEvent</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/ManagedNotificationChildEventSummary">AWS
   * API Reference</a></p>
   */
  class ManagedNotificationChildEventSummary
  {
  public:
    AWS_NOTIFICATIONS_API ManagedNotificationChildEventSummary() = default;
    AWS_NOTIFICATIONS_API ManagedNotificationChildEventSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API ManagedNotificationChildEventSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The schema version of the <code>ManagedNotificationChildEvent</code>.</p>
     */
    inline SchemaVersion GetSchemaVersion() const { return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(SchemaVersion value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline ManagedNotificationChildEventSummary& WithSchemaVersion(SchemaVersion value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains all event metadata present identically across all
     * <code>NotificationEvents</code>. All fields are present in Source Events via
     * Eventbridge.</p>
     */
    inline const ManagedSourceEventMetadataSummary& GetSourceEventMetadata() const { return m_sourceEventMetadata; }
    inline bool SourceEventMetadataHasBeenSet() const { return m_sourceEventMetadataHasBeenSet; }
    template<typename SourceEventMetadataT = ManagedSourceEventMetadataSummary>
    void SetSourceEventMetadata(SourceEventMetadataT&& value) { m_sourceEventMetadataHasBeenSet = true; m_sourceEventMetadata = std::forward<SourceEventMetadataT>(value); }
    template<typename SourceEventMetadataT = ManagedSourceEventMetadataSummary>
    ManagedNotificationChildEventSummary& WithSourceEventMetadata(SourceEventMetadataT&& value) { SetSourceEventMetadata(std::forward<SourceEventMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MessageComponentsSummary& GetMessageComponents() const { return m_messageComponents; }
    inline bool MessageComponentsHasBeenSet() const { return m_messageComponentsHasBeenSet; }
    template<typename MessageComponentsT = MessageComponentsSummary>
    void SetMessageComponents(MessageComponentsT&& value) { m_messageComponentsHasBeenSet = true; m_messageComponents = std::forward<MessageComponentsT>(value); }
    template<typename MessageComponentsT = MessageComponentsSummary>
    ManagedNotificationChildEventSummary& WithMessageComponents(MessageComponentsT&& value) { SetMessageComponents(std::forward<MessageComponentsT>(value)); return *this;}
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
    ManagedNotificationChildEventSummary& WithAggregationDetail(AggregationDetailT&& value) { SetAggregationDetail(std::forward<AggregationDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The perceived nature of the event.</p> <ul> <li> <p>Values:</p> <ul> <li> <p>
     * <code>HEALTHY</code> </p> <ul> <li> <p>All EventRules are <code>ACTIVE</code>
     * and any call can be run.</p> </li> </ul> </li> <li> <p> <code>UNHEALTHY</code>
     * </p> <ul> <li> <p>Some EventRules are <code>ACTIVE</code> and some are
     * <code>INACTIVE</code>. Any call can be run.</p> </li> </ul> </li> </ul> </li>
     * </ul>
     */
    inline EventStatus GetEventStatus() const { return m_eventStatus; }
    inline bool EventStatusHasBeenSet() const { return m_eventStatusHasBeenSet; }
    inline void SetEventStatus(EventStatus value) { m_eventStatusHasBeenSet = true; m_eventStatus = value; }
    inline ManagedNotificationChildEventSummary& WithEventStatus(EventStatus value) { SetEventStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Type of the event causing this notification.</p> <ul> <li> <p>Values:</p>
     * <ul> <li> <p> <code>ALERT</code> </p> <ul> <li> <p>A notification about an event
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
    inline ManagedNotificationChildEventSummary& WithNotificationType(NotificationType value) { SetNotificationType(value); return *this;}
    ///@}
  private:

    SchemaVersion m_schemaVersion{SchemaVersion::NOT_SET};
    bool m_schemaVersionHasBeenSet = false;

    ManagedSourceEventMetadataSummary m_sourceEventMetadata;
    bool m_sourceEventMetadataHasBeenSet = false;

    MessageComponentsSummary m_messageComponents;
    bool m_messageComponentsHasBeenSet = false;

    AggregationDetail m_aggregationDetail;
    bool m_aggregationDetailHasBeenSet = false;

    EventStatus m_eventStatus{EventStatus::NOT_SET};
    bool m_eventStatusHasBeenSet = false;

    NotificationType m_notificationType{NotificationType::NOT_SET};
    bool m_notificationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
