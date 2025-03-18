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
  class RegisterNotificationHubRequest : public NotificationsRequest
  {
  public:
    AWS_NOTIFICATIONS_API RegisterNotificationHubRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterNotificationHub"; }

    AWS_NOTIFICATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Region of the <code>NotificationHub</code>.</p>
     */
    inline const Aws::String& GetNotificationHubRegion() const { return m_notificationHubRegion; }
    inline bool NotificationHubRegionHasBeenSet() const { return m_notificationHubRegionHasBeenSet; }
    template<typename NotificationHubRegionT = Aws::String>
    void SetNotificationHubRegion(NotificationHubRegionT&& value) { m_notificationHubRegionHasBeenSet = true; m_notificationHubRegion = std::forward<NotificationHubRegionT>(value); }
    template<typename NotificationHubRegionT = Aws::String>
    RegisterNotificationHubRequest& WithNotificationHubRegion(NotificationHubRegionT&& value) { SetNotificationHubRegion(std::forward<NotificationHubRegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_notificationHubRegion;
    bool m_notificationHubRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
