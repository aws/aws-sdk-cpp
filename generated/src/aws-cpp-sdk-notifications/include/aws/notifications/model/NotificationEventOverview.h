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
    AWS_NOTIFICATIONS_API NotificationEventOverview();
    AWS_NOTIFICATIONS_API NotificationEventOverview(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API NotificationEventOverview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline NotificationEventOverview& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline NotificationEventOverview& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline NotificationEventOverview& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>NotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetNotificationConfigurationArn() const{ return m_notificationConfigurationArn; }
    inline bool NotificationConfigurationArnHasBeenSet() const { return m_notificationConfigurationArnHasBeenSet; }
    inline void SetNotificationConfigurationArn(const Aws::String& value) { m_notificationConfigurationArnHasBeenSet = true; m_notificationConfigurationArn = value; }
    inline void SetNotificationConfigurationArn(Aws::String&& value) { m_notificationConfigurationArnHasBeenSet = true; m_notificationConfigurationArn = std::move(value); }
    inline void SetNotificationConfigurationArn(const char* value) { m_notificationConfigurationArnHasBeenSet = true; m_notificationConfigurationArn.assign(value); }
    inline NotificationEventOverview& WithNotificationConfigurationArn(const Aws::String& value) { SetNotificationConfigurationArn(value); return *this;}
    inline NotificationEventOverview& WithNotificationConfigurationArn(Aws::String&& value) { SetNotificationConfigurationArn(std::move(value)); return *this;}
    inline NotificationEventOverview& WithNotificationConfigurationArn(const char* value) { SetNotificationConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account name containing the <code>NotificationHub</code>.</p>
     */
    inline const Aws::String& GetRelatedAccount() const{ return m_relatedAccount; }
    inline bool RelatedAccountHasBeenSet() const { return m_relatedAccountHasBeenSet; }
    inline void SetRelatedAccount(const Aws::String& value) { m_relatedAccountHasBeenSet = true; m_relatedAccount = value; }
    inline void SetRelatedAccount(Aws::String&& value) { m_relatedAccountHasBeenSet = true; m_relatedAccount = std::move(value); }
    inline void SetRelatedAccount(const char* value) { m_relatedAccountHasBeenSet = true; m_relatedAccount.assign(value); }
    inline NotificationEventOverview& WithRelatedAccount(const Aws::String& value) { SetRelatedAccount(value); return *this;}
    inline NotificationEventOverview& WithRelatedAccount(Aws::String&& value) { SetRelatedAccount(std::move(value)); return *this;}
    inline NotificationEventOverview& WithRelatedAccount(const char* value) { SetRelatedAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the <code>NotificationEvent</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline NotificationEventOverview& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline NotificationEventOverview& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Refers to a <code>NotificationEventSummary</code> object.</p> <p>Similar in
     * structure to <code>content</code> in the <code>GetNotificationEvent</code>
     * response.</p>
     */
    inline const NotificationEventSummary& GetNotificationEvent() const{ return m_notificationEvent; }
    inline bool NotificationEventHasBeenSet() const { return m_notificationEventHasBeenSet; }
    inline void SetNotificationEvent(const NotificationEventSummary& value) { m_notificationEventHasBeenSet = true; m_notificationEvent = value; }
    inline void SetNotificationEvent(NotificationEventSummary&& value) { m_notificationEventHasBeenSet = true; m_notificationEvent = std::move(value); }
    inline NotificationEventOverview& WithNotificationEvent(const NotificationEventSummary& value) { SetNotificationEvent(value); return *this;}
    inline NotificationEventOverview& WithNotificationEvent(NotificationEventSummary&& value) { SetNotificationEvent(std::move(value)); return *this;}
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
    inline const AggregationEventType& GetAggregationEventType() const{ return m_aggregationEventType; }
    inline bool AggregationEventTypeHasBeenSet() const { return m_aggregationEventTypeHasBeenSet; }
    inline void SetAggregationEventType(const AggregationEventType& value) { m_aggregationEventTypeHasBeenSet = true; m_aggregationEventType = value; }
    inline void SetAggregationEventType(AggregationEventType&& value) { m_aggregationEventTypeHasBeenSet = true; m_aggregationEventType = std::move(value); }
    inline NotificationEventOverview& WithAggregationEventType(const AggregationEventType& value) { SetAggregationEventType(value); return *this;}
    inline NotificationEventOverview& WithAggregationEventType(AggregationEventType&& value) { SetAggregationEventType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>aggregatedNotificationEventArn</code> to match.</p>
     */
    inline const Aws::String& GetAggregateNotificationEventArn() const{ return m_aggregateNotificationEventArn; }
    inline bool AggregateNotificationEventArnHasBeenSet() const { return m_aggregateNotificationEventArnHasBeenSet; }
    inline void SetAggregateNotificationEventArn(const Aws::String& value) { m_aggregateNotificationEventArnHasBeenSet = true; m_aggregateNotificationEventArn = value; }
    inline void SetAggregateNotificationEventArn(Aws::String&& value) { m_aggregateNotificationEventArnHasBeenSet = true; m_aggregateNotificationEventArn = std::move(value); }
    inline void SetAggregateNotificationEventArn(const char* value) { m_aggregateNotificationEventArnHasBeenSet = true; m_aggregateNotificationEventArn.assign(value); }
    inline NotificationEventOverview& WithAggregateNotificationEventArn(const Aws::String& value) { SetAggregateNotificationEventArn(value); return *this;}
    inline NotificationEventOverview& WithAggregateNotificationEventArn(Aws::String&& value) { SetAggregateNotificationEventArn(std::move(value)); return *this;}
    inline NotificationEventOverview& WithAggregateNotificationEventArn(const char* value) { SetAggregateNotificationEventArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides an aggregated summary data for notification events.</p>
     */
    inline const AggregationSummary& GetAggregationSummary() const{ return m_aggregationSummary; }
    inline bool AggregationSummaryHasBeenSet() const { return m_aggregationSummaryHasBeenSet; }
    inline void SetAggregationSummary(const AggregationSummary& value) { m_aggregationSummaryHasBeenSet = true; m_aggregationSummary = value; }
    inline void SetAggregationSummary(AggregationSummary&& value) { m_aggregationSummaryHasBeenSet = true; m_aggregationSummary = std::move(value); }
    inline NotificationEventOverview& WithAggregationSummary(const AggregationSummary& value) { SetAggregationSummary(value); return *this;}
    inline NotificationEventOverview& WithAggregationSummary(AggregationSummary&& value) { SetAggregationSummary(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_notificationConfigurationArn;
    bool m_notificationConfigurationArnHasBeenSet = false;

    Aws::String m_relatedAccount;
    bool m_relatedAccountHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    NotificationEventSummary m_notificationEvent;
    bool m_notificationEventHasBeenSet = false;

    AggregationEventType m_aggregationEventType;
    bool m_aggregationEventTypeHasBeenSet = false;

    Aws::String m_aggregateNotificationEventArn;
    bool m_aggregateNotificationEventArnHasBeenSet = false;

    AggregationSummary m_aggregationSummary;
    bool m_aggregationSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
