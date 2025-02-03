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
    AWS_NOTIFICATIONS_API ManagedNotificationChildEventOverview();
    AWS_NOTIFICATIONS_API ManagedNotificationChildEventOverview(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API ManagedNotificationChildEventOverview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the
     * <code>ManagedNotificationChildEvent</code>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ManagedNotificationChildEventOverview& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ManagedNotificationChildEventOverview& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ManagedNotificationChildEventOverview& WithArn(const char* value) { SetArn(value); return *this;}
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
    inline ManagedNotificationChildEventOverview& WithManagedNotificationConfigurationArn(const Aws::String& value) { SetManagedNotificationConfigurationArn(value); return *this;}
    inline ManagedNotificationChildEventOverview& WithManagedNotificationConfigurationArn(Aws::String&& value) { SetManagedNotificationConfigurationArn(std::move(value)); return *this;}
    inline ManagedNotificationChildEventOverview& WithManagedNotificationConfigurationArn(const char* value) { SetManagedNotificationConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account that related to the
     * <code>ManagedNotificationChildEvent</code>.</p>
     */
    inline const Aws::String& GetRelatedAccount() const{ return m_relatedAccount; }
    inline bool RelatedAccountHasBeenSet() const { return m_relatedAccountHasBeenSet; }
    inline void SetRelatedAccount(const Aws::String& value) { m_relatedAccountHasBeenSet = true; m_relatedAccount = value; }
    inline void SetRelatedAccount(Aws::String&& value) { m_relatedAccountHasBeenSet = true; m_relatedAccount = std::move(value); }
    inline void SetRelatedAccount(const char* value) { m_relatedAccountHasBeenSet = true; m_relatedAccount.assign(value); }
    inline ManagedNotificationChildEventOverview& WithRelatedAccount(const Aws::String& value) { SetRelatedAccount(value); return *this;}
    inline ManagedNotificationChildEventOverview& WithRelatedAccount(Aws::String&& value) { SetRelatedAccount(std::move(value)); return *this;}
    inline ManagedNotificationChildEventOverview& WithRelatedAccount(const char* value) { SetRelatedAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the <code>ManagedNotificationChildEvent</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ManagedNotificationChildEventOverview& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ManagedNotificationChildEventOverview& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the <code>ManagedNotificationChildEvent</code>.</p>
     */
    inline const ManagedNotificationChildEventSummary& GetChildEvent() const{ return m_childEvent; }
    inline bool ChildEventHasBeenSet() const { return m_childEventHasBeenSet; }
    inline void SetChildEvent(const ManagedNotificationChildEventSummary& value) { m_childEventHasBeenSet = true; m_childEvent = value; }
    inline void SetChildEvent(ManagedNotificationChildEventSummary&& value) { m_childEventHasBeenSet = true; m_childEvent = std::move(value); }
    inline ManagedNotificationChildEventOverview& WithChildEvent(const ManagedNotificationChildEventSummary& value) { SetChildEvent(value); return *this;}
    inline ManagedNotificationChildEventOverview& WithChildEvent(ManagedNotificationChildEventSummary&& value) { SetChildEvent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ManagedNotificationEvent that is
     * associated with this <code>ManagedNotificationChildEvent</code>.</p>
     */
    inline const Aws::String& GetAggregateManagedNotificationEventArn() const{ return m_aggregateManagedNotificationEventArn; }
    inline bool AggregateManagedNotificationEventArnHasBeenSet() const { return m_aggregateManagedNotificationEventArnHasBeenSet; }
    inline void SetAggregateManagedNotificationEventArn(const Aws::String& value) { m_aggregateManagedNotificationEventArnHasBeenSet = true; m_aggregateManagedNotificationEventArn = value; }
    inline void SetAggregateManagedNotificationEventArn(Aws::String&& value) { m_aggregateManagedNotificationEventArnHasBeenSet = true; m_aggregateManagedNotificationEventArn = std::move(value); }
    inline void SetAggregateManagedNotificationEventArn(const char* value) { m_aggregateManagedNotificationEventArnHasBeenSet = true; m_aggregateManagedNotificationEventArn.assign(value); }
    inline ManagedNotificationChildEventOverview& WithAggregateManagedNotificationEventArn(const Aws::String& value) { SetAggregateManagedNotificationEventArn(value); return *this;}
    inline ManagedNotificationChildEventOverview& WithAggregateManagedNotificationEventArn(Aws::String&& value) { SetAggregateManagedNotificationEventArn(std::move(value)); return *this;}
    inline ManagedNotificationChildEventOverview& WithAggregateManagedNotificationEventArn(const char* value) { SetAggregateManagedNotificationEventArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Organizational Unit Id that an AWS account belongs to.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const{ return m_organizationalUnitId; }
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }
    inline void SetOrganizationalUnitId(const Aws::String& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = value; }
    inline void SetOrganizationalUnitId(Aws::String&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::move(value); }
    inline void SetOrganizationalUnitId(const char* value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId.assign(value); }
    inline ManagedNotificationChildEventOverview& WithOrganizationalUnitId(const Aws::String& value) { SetOrganizationalUnitId(value); return *this;}
    inline ManagedNotificationChildEventOverview& WithOrganizationalUnitId(Aws::String&& value) { SetOrganizationalUnitId(std::move(value)); return *this;}
    inline ManagedNotificationChildEventOverview& WithOrganizationalUnitId(const char* value) { SetOrganizationalUnitId(value); return *this;}
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
