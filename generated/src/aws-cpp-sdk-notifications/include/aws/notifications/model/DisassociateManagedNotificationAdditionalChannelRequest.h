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
  class DisassociateManagedNotificationAdditionalChannelRequest : public NotificationsRequest
  {
  public:
    AWS_NOTIFICATIONS_API DisassociateManagedNotificationAdditionalChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateManagedNotificationAdditionalChannel"; }

    AWS_NOTIFICATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Channel to associate with the
     * <code>ManagedNotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetChannelArn() const { return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    template<typename ChannelArnT = Aws::String>
    void SetChannelArn(ChannelArnT&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::forward<ChannelArnT>(value); }
    template<typename ChannelArnT = Aws::String>
    DisassociateManagedNotificationAdditionalChannelRequest& WithChannelArn(ChannelArnT&& value) { SetChannelArn(std::forward<ChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Managed Notification Configuration to
     * associate with the additional Channel.</p>
     */
    inline const Aws::String& GetManagedNotificationConfigurationArn() const { return m_managedNotificationConfigurationArn; }
    inline bool ManagedNotificationConfigurationArnHasBeenSet() const { return m_managedNotificationConfigurationArnHasBeenSet; }
    template<typename ManagedNotificationConfigurationArnT = Aws::String>
    void SetManagedNotificationConfigurationArn(ManagedNotificationConfigurationArnT&& value) { m_managedNotificationConfigurationArnHasBeenSet = true; m_managedNotificationConfigurationArn = std::forward<ManagedNotificationConfigurationArnT>(value); }
    template<typename ManagedNotificationConfigurationArnT = Aws::String>
    DisassociateManagedNotificationAdditionalChannelRequest& WithManagedNotificationConfigurationArn(ManagedNotificationConfigurationArnT&& value) { SetManagedNotificationConfigurationArn(std::forward<ManagedNotificationConfigurationArnT>(value)); return *this;}
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
