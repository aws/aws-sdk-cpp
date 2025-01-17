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
    AWS_NOTIFICATIONS_API RegisterNotificationHubRequest();

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
    inline const Aws::String& GetNotificationHubRegion() const{ return m_notificationHubRegion; }
    inline bool NotificationHubRegionHasBeenSet() const { return m_notificationHubRegionHasBeenSet; }
    inline void SetNotificationHubRegion(const Aws::String& value) { m_notificationHubRegionHasBeenSet = true; m_notificationHubRegion = value; }
    inline void SetNotificationHubRegion(Aws::String&& value) { m_notificationHubRegionHasBeenSet = true; m_notificationHubRegion = std::move(value); }
    inline void SetNotificationHubRegion(const char* value) { m_notificationHubRegionHasBeenSet = true; m_notificationHubRegion.assign(value); }
    inline RegisterNotificationHubRequest& WithNotificationHubRegion(const Aws::String& value) { SetNotificationHubRegion(value); return *this;}
    inline RegisterNotificationHubRequest& WithNotificationHubRegion(Aws::String&& value) { SetNotificationHubRegion(std::move(value)); return *this;}
    inline RegisterNotificationHubRequest& WithNotificationHubRegion(const char* value) { SetNotificationHubRegion(value); return *this;}
    ///@}
  private:

    Aws::String m_notificationHubRegion;
    bool m_notificationHubRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
