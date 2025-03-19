/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/notifications/model/ManagedNotificationChildEventSummary.h>
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
   * <code>ManagedNotificationChildEvent</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/ManagedNotificationChildEventOverview">AWS
   * API Reference</a></p>
   */
  class ManagedNotificationChildEventOverview
  {
  public:
    AWS_NOTIFICATIONS_API ManagedNotificationChildEventOverview() = default;
    AWS_NOTIFICATIONS_API ManagedNotificationChildEventOverview(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API ManagedNotificationChildEventOverview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the
     * <code>ManagedNotificationChildEvent</code>.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ManagedNotificationChildEventOverview& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
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
    ManagedNotificationChildEventOverview& WithManagedNotificationConfigurationArn(ManagedNotificationConfigurationArnT&& value) { SetManagedNotificationConfigurationArn(std::forward<ManagedNotificationConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account that related to the
     * <code>ManagedNotificationChildEvent</code>.</p>
     */
    inline const Aws::String& GetRelatedAccount() const { return m_relatedAccount; }
    inline bool RelatedAccountHasBeenSet() const { return m_relatedAccountHasBeenSet; }
    template<typename RelatedAccountT = Aws::String>
    void SetRelatedAccount(RelatedAccountT&& value) { m_relatedAccountHasBeenSet = true; m_relatedAccount = std::forward<RelatedAccountT>(value); }
    template<typename RelatedAccountT = Aws::String>
    ManagedNotificationChildEventOverview& WithRelatedAccount(RelatedAccountT&& value) { SetRelatedAccount(std::forward<RelatedAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the <code>ManagedNotificationChildEvent</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ManagedNotificationChildEventOverview& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the <code>ManagedNotificationChildEvent</code>.</p>
     */
    inline const ManagedNotificationChildEventSummary& GetChildEvent() const { return m_childEvent; }
    inline bool ChildEventHasBeenSet() const { return m_childEventHasBeenSet; }
    template<typename ChildEventT = ManagedNotificationChildEventSummary>
    void SetChildEvent(ChildEventT&& value) { m_childEventHasBeenSet = true; m_childEvent = std::forward<ChildEventT>(value); }
    template<typename ChildEventT = ManagedNotificationChildEventSummary>
    ManagedNotificationChildEventOverview& WithChildEvent(ChildEventT&& value) { SetChildEvent(std::forward<ChildEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ManagedNotificationEvent that is
     * associated with this <code>ManagedNotificationChildEvent</code>.</p>
     */
    inline const Aws::String& GetAggregateManagedNotificationEventArn() const { return m_aggregateManagedNotificationEventArn; }
    inline bool AggregateManagedNotificationEventArnHasBeenSet() const { return m_aggregateManagedNotificationEventArnHasBeenSet; }
    template<typename AggregateManagedNotificationEventArnT = Aws::String>
    void SetAggregateManagedNotificationEventArn(AggregateManagedNotificationEventArnT&& value) { m_aggregateManagedNotificationEventArnHasBeenSet = true; m_aggregateManagedNotificationEventArn = std::forward<AggregateManagedNotificationEventArnT>(value); }
    template<typename AggregateManagedNotificationEventArnT = Aws::String>
    ManagedNotificationChildEventOverview& WithAggregateManagedNotificationEventArn(AggregateManagedNotificationEventArnT&& value) { SetAggregateManagedNotificationEventArn(std::forward<AggregateManagedNotificationEventArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Organizational Unit Id that an AWS account belongs to.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const { return m_organizationalUnitId; }
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }
    template<typename OrganizationalUnitIdT = Aws::String>
    void SetOrganizationalUnitId(OrganizationalUnitIdT&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::forward<OrganizationalUnitIdT>(value); }
    template<typename OrganizationalUnitIdT = Aws::String>
    ManagedNotificationChildEventOverview& WithOrganizationalUnitId(OrganizationalUnitIdT&& value) { SetOrganizationalUnitId(std::forward<OrganizationalUnitIdT>(value)); return *this;}
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

    ManagedNotificationChildEventSummary m_childEvent;
    bool m_childEventHasBeenSet = false;

    Aws::String m_aggregateManagedNotificationEventArn;
    bool m_aggregateManagedNotificationEventArnHasBeenSet = false;

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
