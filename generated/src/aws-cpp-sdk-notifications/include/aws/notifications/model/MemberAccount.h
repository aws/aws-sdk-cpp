/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/model/MemberAccountNotificationConfigurationStatus.h>
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
   * <p>Contains information about a member account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/MemberAccount">AWS
   * API Reference</a></p>
   */
  class MemberAccount
  {
  public:
    AWS_NOTIFICATIONS_API MemberAccount() = default;
    AWS_NOTIFICATIONS_API MemberAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API MemberAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the notification configuration associated
     * with the member account.</p>
     */
    inline const Aws::String& GetNotificationConfigurationArn() const { return m_notificationConfigurationArn; }
    inline bool NotificationConfigurationArnHasBeenSet() const { return m_notificationConfigurationArnHasBeenSet; }
    template<typename NotificationConfigurationArnT = Aws::String>
    void SetNotificationConfigurationArn(NotificationConfigurationArnT&& value) { m_notificationConfigurationArnHasBeenSet = true; m_notificationConfigurationArn = std::forward<NotificationConfigurationArnT>(value); }
    template<typename NotificationConfigurationArnT = Aws::String>
    MemberAccount& WithNotificationConfigurationArn(NotificationConfigurationArnT&& value) { SetNotificationConfigurationArn(std::forward<NotificationConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS account ID of the member account.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    MemberAccount& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the member account.</p>
     */
    inline MemberAccountNotificationConfigurationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MemberAccountNotificationConfigurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline MemberAccount& WithStatus(MemberAccountNotificationConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current status of the member account.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    MemberAccount& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the organizational unit containing the member
     * account.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const { return m_organizationalUnitId; }
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }
    template<typename OrganizationalUnitIdT = Aws::String>
    void SetOrganizationalUnitId(OrganizationalUnitIdT&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::forward<OrganizationalUnitIdT>(value); }
    template<typename OrganizationalUnitIdT = Aws::String>
    MemberAccount& WithOrganizationalUnitId(OrganizationalUnitIdT&& value) { SetOrganizationalUnitId(std::forward<OrganizationalUnitIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_notificationConfigurationArn;
    bool m_notificationConfigurationArnHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    MemberAccountNotificationConfigurationStatus m_status{MemberAccountNotificationConfigurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
