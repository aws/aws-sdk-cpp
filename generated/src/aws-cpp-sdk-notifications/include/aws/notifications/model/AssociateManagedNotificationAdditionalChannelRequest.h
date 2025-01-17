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
  class AssociateManagedNotificationAdditionalChannelRequest : public NotificationsRequest
  {
  public:
    AWS_NOTIFICATIONS_API AssociateManagedNotificationAdditionalChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateManagedNotificationAdditionalChannel"; }

    AWS_NOTIFICATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Channel to associate with the
     * <code>ManagedNotificationConfiguration</code>.</p> <p>Supported ARNs include
     * Chatbot, the Console Mobile Application, and email (notifications-contacts).</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }
    inline AssociateManagedNotificationAdditionalChannelRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline AssociateManagedNotificationAdditionalChannelRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline AssociateManagedNotificationAdditionalChannelRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the
     * <code>ManagedNotificationConfiguration</code> to associate with the additional
     * Channel.</p>
     */
    inline const Aws::String& GetManagedNotificationConfigurationArn() const{ return m_managedNotificationConfigurationArn; }
    inline bool ManagedNotificationConfigurationArnHasBeenSet() const { return m_managedNotificationConfigurationArnHasBeenSet; }
    inline void SetManagedNotificationConfigurationArn(const Aws::String& value) { m_managedNotificationConfigurationArnHasBeenSet = true; m_managedNotificationConfigurationArn = value; }
    inline void SetManagedNotificationConfigurationArn(Aws::String&& value) { m_managedNotificationConfigurationArnHasBeenSet = true; m_managedNotificationConfigurationArn = std::move(value); }
    inline void SetManagedNotificationConfigurationArn(const char* value) { m_managedNotificationConfigurationArnHasBeenSet = true; m_managedNotificationConfigurationArn.assign(value); }
    inline AssociateManagedNotificationAdditionalChannelRequest& WithManagedNotificationConfigurationArn(const Aws::String& value) { SetManagedNotificationConfigurationArn(value); return *this;}
    inline AssociateManagedNotificationAdditionalChannelRequest& WithManagedNotificationConfigurationArn(Aws::String&& value) { SetManagedNotificationConfigurationArn(std::move(value)); return *this;}
    inline AssociateManagedNotificationAdditionalChannelRequest& WithManagedNotificationConfigurationArn(const char* value) { SetManagedNotificationConfigurationArn(value); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_managedNotificationConfigurationArn;
    bool m_managedNotificationConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
