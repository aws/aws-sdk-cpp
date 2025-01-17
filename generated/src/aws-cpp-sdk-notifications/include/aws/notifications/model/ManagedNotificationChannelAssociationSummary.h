/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/model/ChannelType.h>
#include <aws/notifications/model/ChannelAssociationOverrideOption.h>
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
   * <p>Provides a summary of channel associations for a managed notification
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/ManagedNotificationChannelAssociationSummary">AWS
   * API Reference</a></p>
   */
  class ManagedNotificationChannelAssociationSummary
  {
  public:
    AWS_NOTIFICATIONS_API ManagedNotificationChannelAssociationSummary();
    AWS_NOTIFICATIONS_API ManagedNotificationChannelAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API ManagedNotificationChannelAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the notification channel.</p>
     */
    inline const Aws::String& GetChannelIdentifier() const{ return m_channelIdentifier; }
    inline bool ChannelIdentifierHasBeenSet() const { return m_channelIdentifierHasBeenSet; }
    inline void SetChannelIdentifier(const Aws::String& value) { m_channelIdentifierHasBeenSet = true; m_channelIdentifier = value; }
    inline void SetChannelIdentifier(Aws::String&& value) { m_channelIdentifierHasBeenSet = true; m_channelIdentifier = std::move(value); }
    inline void SetChannelIdentifier(const char* value) { m_channelIdentifierHasBeenSet = true; m_channelIdentifier.assign(value); }
    inline ManagedNotificationChannelAssociationSummary& WithChannelIdentifier(const Aws::String& value) { SetChannelIdentifier(value); return *this;}
    inline ManagedNotificationChannelAssociationSummary& WithChannelIdentifier(Aws::String&& value) { SetChannelIdentifier(std::move(value)); return *this;}
    inline ManagedNotificationChannelAssociationSummary& WithChannelIdentifier(const char* value) { SetChannelIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of notification channel used for message delivery.</p> <ul> <li>
     * <p>Values:</p> <ul> <li> <p> <code>ACCOUNT_CONTACT</code> </p> <ul> <li>
     * <p>Delivers notifications to Account Managed contacts through the User
     * Notification Service.</p> </li> </ul> </li> <li> <p> <code>MOBILE</code> </p>
     * <ul> <li> <p>Delivers notifications through the Amazon Web Services Console
     * Mobile Application to mobile devices.</p> </li> </ul> </li> <li> <p>
     * <code>CHATBOT</code> </p> <ul> <li> <p>Delivers notifications through Chatbot to
     * collaboration platforms (Slack, Chime).</p> </li> </ul> </li> <li> <p>
     * <code>EMAIL</code> </p> <ul> <li> <p>Delivers notifications to email
     * addresses.</p> </li> </ul> </li> </ul> </li> </ul>
     */
    inline const ChannelType& GetChannelType() const{ return m_channelType; }
    inline bool ChannelTypeHasBeenSet() const { return m_channelTypeHasBeenSet; }
    inline void SetChannelType(const ChannelType& value) { m_channelTypeHasBeenSet = true; m_channelType = value; }
    inline void SetChannelType(ChannelType&& value) { m_channelTypeHasBeenSet = true; m_channelType = std::move(value); }
    inline ManagedNotificationChannelAssociationSummary& WithChannelType(const ChannelType& value) { SetChannelType(value); return *this;}
    inline ManagedNotificationChannelAssociationSummary& WithChannelType(ChannelType&& value) { SetChannelType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Controls whether users can modify channel associations for a notification
     * configuration.</p> <ul> <li> <p>Values:</p> <ul> <li> <p> <code>ENABLED</code>
     * </p> <ul> <li> <p>Users can associate or disassociate channels with the
     * notification configuration.</p> </li> </ul> </li> <li> <p> <code>DISABLED</code>
     * </p> <ul> <li> <p>Users cannot associate or disassociate channels with the
     * notification configuration.</p> </li> </ul> </li> </ul> </li> </ul>
     */
    inline const ChannelAssociationOverrideOption& GetOverrideOption() const{ return m_overrideOption; }
    inline bool OverrideOptionHasBeenSet() const { return m_overrideOptionHasBeenSet; }
    inline void SetOverrideOption(const ChannelAssociationOverrideOption& value) { m_overrideOptionHasBeenSet = true; m_overrideOption = value; }
    inline void SetOverrideOption(ChannelAssociationOverrideOption&& value) { m_overrideOptionHasBeenSet = true; m_overrideOption = std::move(value); }
    inline ManagedNotificationChannelAssociationSummary& WithOverrideOption(const ChannelAssociationOverrideOption& value) { SetOverrideOption(value); return *this;}
    inline ManagedNotificationChannelAssociationSummary& WithOverrideOption(ChannelAssociationOverrideOption&& value) { SetOverrideOption(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelIdentifier;
    bool m_channelIdentifierHasBeenSet = false;

    ChannelType m_channelType;
    bool m_channelTypeHasBeenSet = false;

    ChannelAssociationOverrideOption m_overrideOption;
    bool m_overrideOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
