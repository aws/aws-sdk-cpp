/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/notifications/model/NotificationEventSummary.h>
#include <aws/notifications/model/AggregationEventType.h>
#include <aws/notifications/model/AggregationSummary.h>
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
   * <p>Describes a short summary of a <code>NotificationEvent</code>. This is only
   * used when listing notification events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/NotificationEventOverview">AWS
   * API Reference</a></p>
   */
  class NotificationEventOverview
  {
  public:
    AWS_NOTIFICATIONS_API NotificationEventOverview() = default;
    AWS_NOTIFICATIONS_API NotificationEventOverview(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API NotificationEventOverview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    NotificationEventOverview& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>NotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetNotificationConfigurationArn() const { return m_notificationConfigurationArn; }
    inline bool NotificationConfigurationArnHasBeenSet() const { return m_notificationConfigurationArnHasBeenSet; }
    template<typename NotificationConfigurationArnT = Aws::String>
    void SetNotificationConfigurationArn(NotificationConfigurationArnT&& value) { m_notificationConfigurationArnHasBeenSet = true; m_notificationConfigurationArn = std::forward<NotificationConfigurationArnT>(value); }
    template<typename NotificationConfigurationArnT = Aws::String>
    NotificationEventOverview& WithNotificationConfigurationArn(NotificationConfigurationArnT&& value) { SetNotificationConfigurationArn(std::forward<NotificationConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account name containing the <code>NotificationHub</code>.</p>
     */
    inline const Aws::String& GetRelatedAccount() const { return m_relatedAccount; }
    inline bool RelatedAccountHasBeenSet() const { return m_relatedAccountHasBeenSet; }
    template<typename RelatedAccountT = Aws::String>
    void SetRelatedAccount(RelatedAccountT&& value) { m_relatedAccountHasBeenSet = true; m_relatedAccount = std::forward<RelatedAccountT>(value); }
    template<typename RelatedAccountT = Aws::String>
    NotificationEventOverview& WithRelatedAccount(RelatedAccountT&& value) { SetRelatedAccount(std::forward<RelatedAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the <code>NotificationEvent</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    NotificationEventOverview& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Refers to a <code>NotificationEventSummary</code> object.</p> <p>Similar in
     * structure to <code>content</code> in the <code>GetNotificationEvent</code>
     * response.</p>
     */
    inline const NotificationEventSummary& GetNotificationEvent() const { return m_notificationEvent; }
    inline bool NotificationEventHasBeenSet() const { return m_notificationEventHasBeenSet; }
    template<typename NotificationEventT = NotificationEventSummary>
    void SetNotificationEvent(NotificationEventT&& value) { m_notificationEventHasBeenSet = true; m_notificationEvent = std::forward<NotificationEventT>(value); }
    template<typename NotificationEventT = NotificationEventSummary>
    NotificationEventOverview& WithNotificationEvent(NotificationEventT&& value) { SetNotificationEvent(std::forward<NotificationEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>NotificationConfiguration</code>'s aggregation type.</p> <ul> <li>
     * <p>Values:</p> <ul> <li> <p> <code>AGGREGATE</code> </p> <ul> <li> <p>The
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
    inline NotificationEventOverview& WithAggregationEventType(AggregationEventType value) { SetAggregationEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>aggregatedNotificationEventArn</code> to match.</p>
     */
    inline const Aws::String& GetAggregateNotificationEventArn() const { return m_aggregateNotificationEventArn; }
    inline bool AggregateNotificationEventArnHasBeenSet() const { return m_aggregateNotificationEventArnHasBeenSet; }
    template<typename AggregateNotificationEventArnT = Aws::String>
    void SetAggregateNotificationEventArn(AggregateNotificationEventArnT&& value) { m_aggregateNotificationEventArnHasBeenSet = true; m_aggregateNotificationEventArn = std::forward<AggregateNotificationEventArnT>(value); }
    template<typename AggregateNotificationEventArnT = Aws::String>
    NotificationEventOverview& WithAggregateNotificationEventArn(AggregateNotificationEventArnT&& value) { SetAggregateNotificationEventArn(std::forward<AggregateNotificationEventArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides an aggregated summary data for notification events.</p>
     */
    inline const AggregationSummary& GetAggregationSummary() const { return m_aggregationSummary; }
    inline bool AggregationSummaryHasBeenSet() const { return m_aggregationSummaryHasBeenSet; }
    template<typename AggregationSummaryT = AggregationSummary>
    void SetAggregationSummary(AggregationSummaryT&& value) { m_aggregationSummaryHasBeenSet = true; m_aggregationSummary = std::forward<AggregationSummaryT>(value); }
    template<typename AggregationSummaryT = AggregationSummary>
    NotificationEventOverview& WithAggregationSummary(AggregationSummaryT&& value) { SetAggregationSummary(std::forward<AggregationSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the organizational unit in the notification event
     * overview.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const { return m_organizationalUnitId; }
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }
    template<typename OrganizationalUnitIdT = Aws::String>
    void SetOrganizationalUnitId(OrganizationalUnitIdT&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::forward<OrganizationalUnitIdT>(value); }
    template<typename OrganizationalUnitIdT = Aws::String>
    NotificationEventOverview& WithOrganizationalUnitId(OrganizationalUnitIdT&& value) { SetOrganizationalUnitId(std::forward<OrganizationalUnitIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_notificationConfigurationArn;
    bool m_notificationConfigurationArnHasBeenSet = false;

    Aws::String m_relatedAccount;
    bool m_relatedAccountHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    NotificationEventSummary m_notificationEvent;
    bool m_notificationEventHasBeenSet = false;

    AggregationEventType m_aggregationEventType{AggregationEventType::NOT_SET};
    bool m_aggregationEventTypeHasBeenSet = false;

    Aws::String m_aggregateNotificationEventArn;
    bool m_aggregateNotificationEventArnHasBeenSet = false;

    AggregationSummary m_aggregationSummary;
    bool m_aggregationSummaryHasBeenSet = false;

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
