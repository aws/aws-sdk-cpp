/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/notifications/model/ManagedNotificationEventSummary.h>
#include <aws/notifications/model/AggregationEventType.h>
#include <aws/notifications/model/AggregationSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes an overview and metadata for a
   * ManagedNotificationEvent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/ManagedNotificationEventOverview">AWS
   * API Reference</a></p>
   */
  class ManagedNotificationEventOverview
  {
  public:
    AWS_NOTIFICATIONS_API ManagedNotificationEventOverview();
    AWS_NOTIFICATIONS_API ManagedNotificationEventOverview(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API ManagedNotificationEventOverview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ManagedNotificationEvent.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ManagedNotificationEventOverview& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ManagedNotificationEventOverview& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ManagedNotificationEventOverview& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the
     * <code>ManagedNotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetManagedNotificationConfigurationArn() const{ return m_managedNotificationConfigurationArn; }
    inline bool ManagedNotificationConfigurationArnHasBeenSet() const { return m_managedNotificationConfigurationArnHasBeenSet; }
    inline void SetManagedNotificationConfigurationArn(const Aws::String& value) { m_managedNotificationConfigurationArnHasBeenSet = true; m_managedNotificationConfigurationArn = value; }
    inline void SetManagedNotificationConfigurationArn(Aws::String&& value) { m_managedNotificationConfigurationArnHasBeenSet = true; m_managedNotificationConfigurationArn = std::move(value); }
    inline void SetManagedNotificationConfigurationArn(const char* value) { m_managedNotificationConfigurationArnHasBeenSet = true; m_managedNotificationConfigurationArn.assign(value); }
    inline ManagedNotificationEventOverview& WithManagedNotificationConfigurationArn(const Aws::String& value) { SetManagedNotificationConfigurationArn(value); return *this;}
    inline ManagedNotificationEventOverview& WithManagedNotificationConfigurationArn(Aws::String&& value) { SetManagedNotificationConfigurationArn(std::move(value)); return *this;}
    inline ManagedNotificationEventOverview& WithManagedNotificationConfigurationArn(const char* value) { SetManagedNotificationConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account that related to the <code>ManagedNotificationEvent</code>.</p>
     */
    inline const Aws::String& GetRelatedAccount() const{ return m_relatedAccount; }
    inline bool RelatedAccountHasBeenSet() const { return m_relatedAccountHasBeenSet; }
    inline void SetRelatedAccount(const Aws::String& value) { m_relatedAccountHasBeenSet = true; m_relatedAccount = value; }
    inline void SetRelatedAccount(Aws::String&& value) { m_relatedAccountHasBeenSet = true; m_relatedAccount = std::move(value); }
    inline void SetRelatedAccount(const char* value) { m_relatedAccountHasBeenSet = true; m_relatedAccount.assign(value); }
    inline ManagedNotificationEventOverview& WithRelatedAccount(const Aws::String& value) { SetRelatedAccount(value); return *this;}
    inline ManagedNotificationEventOverview& WithRelatedAccount(Aws::String&& value) { SetRelatedAccount(std::move(value)); return *this;}
    inline ManagedNotificationEventOverview& WithRelatedAccount(const char* value) { SetRelatedAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the <code>ManagedNotificationEvent</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ManagedNotificationEventOverview& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ManagedNotificationEventOverview& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ManagedNotificationEventSummary& GetNotificationEvent() const{ return m_notificationEvent; }
    inline bool NotificationEventHasBeenSet() const { return m_notificationEventHasBeenSet; }
    inline void SetNotificationEvent(const ManagedNotificationEventSummary& value) { m_notificationEventHasBeenSet = true; m_notificationEvent = value; }
    inline void SetNotificationEvent(ManagedNotificationEventSummary&& value) { m_notificationEventHasBeenSet = true; m_notificationEvent = std::move(value); }
    inline ManagedNotificationEventOverview& WithNotificationEvent(const ManagedNotificationEventSummary& value) { SetNotificationEvent(value); return *this;}
    inline ManagedNotificationEventOverview& WithNotificationEvent(ManagedNotificationEventSummary&& value) { SetNotificationEvent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notifications aggregation type.</p> <ul> <li> <p>Values:</p> <ul> <li>
     * <p> <code>AGGREGATE</code> </p> <ul> <li> <p>The notification event is an
     * aggregate notification. Aggregate notifications summarize grouped events over a
     * specified time period.</p> </li> </ul> </li> <li> <p> <code>CHILD</code> </p>
     * <ul> <li> <p>Some <code>EventRules</code> are <code>ACTIVE</code> and some are
     * <code>INACTIVE</code>. Any call can be run.</p> </li> </ul> </li> <li> <p>
     * <code>NONE</code> </p> <ul> <li> <p>The notification isn't aggregated.</p> </li>
     * </ul> </li> </ul> </li> </ul>
     */
    inline const AggregationEventType& GetAggregationEventType() const{ return m_aggregationEventType; }
    inline bool AggregationEventTypeHasBeenSet() const { return m_aggregationEventTypeHasBeenSet; }
    inline void SetAggregationEventType(const AggregationEventType& value) { m_aggregationEventTypeHasBeenSet = true; m_aggregationEventType = value; }
    inline void SetAggregationEventType(AggregationEventType&& value) { m_aggregationEventTypeHasBeenSet = true; m_aggregationEventType = std::move(value); }
    inline ManagedNotificationEventOverview& WithAggregationEventType(const AggregationEventType& value) { SetAggregationEventType(value); return *this;}
    inline ManagedNotificationEventOverview& WithAggregationEventType(AggregationEventType&& value) { SetAggregationEventType(std::move(value)); return *this;}
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
    inline ManagedNotificationEventOverview& WithOrganizationalUnitId(const Aws::String& value) { SetOrganizationalUnitId(value); return *this;}
    inline ManagedNotificationEventOverview& WithOrganizationalUnitId(Aws::String&& value) { SetOrganizationalUnitId(std::move(value)); return *this;}
    inline ManagedNotificationEventOverview& WithOrganizationalUnitId(const char* value) { SetOrganizationalUnitId(value); return *this;}
    ///@}

    ///@{
    
    inline const AggregationSummary& GetAggregationSummary() const{ return m_aggregationSummary; }
    inline bool AggregationSummaryHasBeenSet() const { return m_aggregationSummaryHasBeenSet; }
    inline void SetAggregationSummary(const AggregationSummary& value) { m_aggregationSummaryHasBeenSet = true; m_aggregationSummary = value; }
    inline void SetAggregationSummary(AggregationSummary&& value) { m_aggregationSummaryHasBeenSet = true; m_aggregationSummary = std::move(value); }
    inline ManagedNotificationEventOverview& WithAggregationSummary(const AggregationSummary& value) { SetAggregationSummary(value); return *this;}
    inline ManagedNotificationEventOverview& WithAggregationSummary(AggregationSummary&& value) { SetAggregationSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of the regions where the aggregated notifications in this
     * <code>NotificationEvent</code> originated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAggregatedNotificationRegions() const{ return m_aggregatedNotificationRegions; }
    inline bool AggregatedNotificationRegionsHasBeenSet() const { return m_aggregatedNotificationRegionsHasBeenSet; }
    inline void SetAggregatedNotificationRegions(const Aws::Vector<Aws::String>& value) { m_aggregatedNotificationRegionsHasBeenSet = true; m_aggregatedNotificationRegions = value; }
    inline void SetAggregatedNotificationRegions(Aws::Vector<Aws::String>&& value) { m_aggregatedNotificationRegionsHasBeenSet = true; m_aggregatedNotificationRegions = std::move(value); }
    inline ManagedNotificationEventOverview& WithAggregatedNotificationRegions(const Aws::Vector<Aws::String>& value) { SetAggregatedNotificationRegions(value); return *this;}
    inline ManagedNotificationEventOverview& WithAggregatedNotificationRegions(Aws::Vector<Aws::String>&& value) { SetAggregatedNotificationRegions(std::move(value)); return *this;}
    inline ManagedNotificationEventOverview& AddAggregatedNotificationRegions(const Aws::String& value) { m_aggregatedNotificationRegionsHasBeenSet = true; m_aggregatedNotificationRegions.push_back(value); return *this; }
    inline ManagedNotificationEventOverview& AddAggregatedNotificationRegions(Aws::String&& value) { m_aggregatedNotificationRegionsHasBeenSet = true; m_aggregatedNotificationRegions.push_back(std::move(value)); return *this; }
    inline ManagedNotificationEventOverview& AddAggregatedNotificationRegions(const char* value) { m_aggregatedNotificationRegionsHasBeenSet = true; m_aggregatedNotificationRegions.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_managedNotificationConfigurationArn;
    bool m_managedNotificationConfigurationArnHasBeenSet = false;

    Aws::String m_relatedAccount;
    bool m_relatedAccountHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    ManagedNotificationEventSummary m_notificationEvent;
    bool m_notificationEventHasBeenSet = false;

    AggregationEventType m_aggregationEventType;
    bool m_aggregationEventTypeHasBeenSet = false;

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet = false;

    AggregationSummary m_aggregationSummary;
    bool m_aggregationSummaryHasBeenSet = false;

    Aws::Vector<Aws::String> m_aggregatedNotificationRegions;
    bool m_aggregatedNotificationRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
