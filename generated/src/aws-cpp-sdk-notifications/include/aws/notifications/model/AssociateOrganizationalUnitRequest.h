/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/NotificationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Notifications
{
namespace Model
{

  /**
   */
  class AssociateOrganizationalUnitRequest : public NotificationsRequest
  {
  public:
    AWS_NOTIFICATIONS_API AssociateOrganizationalUnitRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateOrganizationalUnit"; }

    AWS_NOTIFICATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the organizational unit to associate.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const { return m_organizationalUnitId; }
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }
    template<typename OrganizationalUnitIdT = Aws::String>
    void SetOrganizationalUnitId(OrganizationalUnitIdT&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::forward<OrganizationalUnitIdT>(value); }
    template<typename OrganizationalUnitIdT = Aws::String>
    AssociateOrganizationalUnitRequest& WithOrganizationalUnitId(OrganizationalUnitIdT&& value) { SetOrganizationalUnitId(std::forward<OrganizationalUnitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the notification configuration to associate
     * with the organizational unit.</p>
     */
    inline const Aws::String& GetNotificationConfigurationArn() const { return m_notificationConfigurationArn; }
    inline bool NotificationConfigurationArnHasBeenSet() const { return m_notificationConfigurationArnHasBeenSet; }
    template<typename NotificationConfigurationArnT = Aws::String>
    void SetNotificationConfigurationArn(NotificationConfigurationArnT&& value) { m_notificationConfigurationArnHasBeenSet = true; m_notificationConfigurationArn = std::forward<NotificationConfigurationArnT>(value); }
    template<typename NotificationConfigurationArnT = Aws::String>
    AssociateOrganizationalUnitRequest& WithNotificationConfigurationArn(NotificationConfigurationArnT&& value) { SetNotificationConfigurationArn(std::forward<NotificationConfigurationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet = false;

    Aws::String m_notificationConfigurationArn;
    bool m_notificationConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
