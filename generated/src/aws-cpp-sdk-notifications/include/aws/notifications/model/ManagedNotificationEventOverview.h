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
    AWS_NOTIFICATIONS_API ManagedNotificationEventOverview() = default;
    AWS_NOTIFICATIONS_API ManagedNotificationEventOverview(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API ManagedNotificationEventOverview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ManagedNotificationEvent.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ManagedNotificationEventOverview& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the
     * <code>ManagedNotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetManagedNotificationConfigurationArn() const { return m_managedNotificationConfigurationArn; }
    inline bool ManagedNotificationConfigurationArnHasBeenSet() const { return m_managedNotificationConfigurationArnHasBeenSet; }
    template<typename ManagedNotificationConfigurationArnT = Aws::String>
    void SetManagedNotificationConfigurationArn(ManagedNotificationConfigurationArnT&& value) { m_managedNotificationConfigurationArnHasBeenSet = true; m_managedNotificationConfigurationArn = std::forward<ManagedNotificationConfigurationArnT>(value); }
    template<typename ManagedNotificationConfigurationArnT = Aws::String>
    ManagedNotificationEventOverview& WithManagedNotificationConfigurationArn(ManagedNotificationConfigurationArnT&& value) { SetManagedNotificationConfigurationArn(std::forward<ManagedNotificationConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account that related to the <code>ManagedNotificationEvent</code>.</p>
     */
    inline const Aws::String& GetRelatedAccount() const { return m_relatedAccount; }
    inline bool RelatedAccountHasBeenSet() const { return m_relatedAccountHasBeenSet; }
    template<typename RelatedAccountT = Aws::String>
    void SetRelatedAccount(RelatedAccountT&& value) { m_relatedAccountHasBeenSet = true; m_relatedAccount = std::forward<RelatedAccountT>(value); }
    template<typename RelatedAccountT = Aws::String>
    ManagedNotificationEventOverview& WithRelatedAccount(RelatedAccountT&& value) { SetRelatedAccount(std::forward<RelatedAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the <code>ManagedNotificationEvent</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ManagedNotificationEventOverview& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const ManagedNotificationEventSummary& GetNotificationEvent() const { return m_notificationEvent; }
    inline bool NotificationEventHasBeenSet() const { return m_notificationEventHasBeenSet; }
    template<typename NotificationEventT = ManagedNotificationEventSummary>
    void SetNotificationEvent(NotificationEventT&& value) { m_notificationEventHasBeenSet = true; m_notificationEvent = std::forward<NotificationEventT>(value); }
    template<typename NotificationEventT = ManagedNotificationEventSummary>
    ManagedNotificationEventOverview& WithNotificationEvent(NotificationEventT&& value) { SetNotificationEvent(std::forward<NotificationEventT>(value)); return *this;}
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
    inline AggregationEventType GetAggregationEventType() const { return m_aggregationEventType; }
    inline bool AggregationEventTypeHasBeenSet() const { return m_aggregationEventTypeHasBeenSet; }
    inline void SetAggregationEventType(AggregationEventType value) { m_aggregationEventTypeHasBeenSet = true; m_aggregationEventType = value; }
    inline ManagedNotificationEventOverview& WithAggregationEventType(AggregationEventType value) { SetAggregationEventType(value); return *this;}
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
    ManagedNotificationEventOverview& WithOrganizationalUnitId(OrganizationalUnitIdT&& value) { SetOrganizationalUnitId(std::forward<OrganizationalUnitIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AggregationSummary& GetAggregationSummary() const { return m_aggregationSummary; }
    inline bool AggregationSummaryHasBeenSet() const { return m_aggregationSummaryHasBeenSet; }
    template<typename AggregationSummaryT = AggregationSummary>
    void SetAggregationSummary(AggregationSummaryT&& value) { m_aggregationSummaryHasBeenSet = true; m_aggregationSummary = std::forward<AggregationSummaryT>(value); }
    template<typename AggregationSummaryT = AggregationSummary>
    ManagedNotificationEventOverview& WithAggregationSummary(AggregationSummaryT&& value) { SetAggregationSummary(std::forward<AggregationSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of the regions where the aggregated notifications in this
     * <code>NotificationEvent</code> originated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAggregatedNotificationRegions() const { return m_aggregatedNotificationRegions; }
    inline bool AggregatedNotificationRegionsHasBeenSet() const { return m_aggregatedNotificationRegionsHasBeenSet; }
    template<typename AggregatedNotificationRegionsT = Aws::Vector<Aws::String>>
    void SetAggregatedNotificationRegions(AggregatedNotificationRegionsT&& value) { m_aggregatedNotificationRegionsHasBeenSet = true; m_aggregatedNotificationRegions = std::forward<AggregatedNotificationRegionsT>(value); }
    template<typename AggregatedNotificationRegionsT = Aws::Vector<Aws::String>>
    ManagedNotificationEventOverview& WithAggregatedNotificationRegions(AggregatedNotificationRegionsT&& value) { SetAggregatedNotificationRegions(std::forward<AggregatedNotificationRegionsT>(value)); return *this;}
    template<typename AggregatedNotificationRegionsT = Aws::String>
    ManagedNotificationEventOverview& AddAggregatedNotificationRegions(AggregatedNotificationRegionsT&& value) { m_aggregatedNotificationRegionsHasBeenSet = true; m_aggregatedNotificationRegions.emplace_back(std::forward<AggregatedNotificationRegionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_managedNotificationConfigurationArn;
    bool m_managedNotificationConfigurationArnHasBeenSet = false;

    Aws::String m_relatedAccount;
    bool m_relatedAccountHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    ManagedNotificationEventSummary m_notificationEvent;
    bool m_notificationEventHasBeenSet = false;

    AggregationEventType m_aggregationEventType{AggregationEventType::NOT_SET};
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
