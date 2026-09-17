/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/NotificationsRequest.h>
#include <aws/notifications/Notifications_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Notifications {
namespace Model {

/**
 */
class UpdateManagedNotificationChannelAssociationRequest : public NotificationsRequest {
 public:
  AWS_NOTIFICATIONS_API UpdateManagedNotificationChannelAssociationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateManagedNotificationChannelAssociation"; }

  AWS_NOTIFICATIONS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the
   * <code>ManagedNotificationConfiguration</code> whose Channel association property
   * you want to update.</p>
   */
  inline const Aws::String& GetManagedNotificationConfigurationArn() const { return m_managedNotificationConfigurationArn; }
  inline bool ManagedNotificationConfigurationArnHasBeenSet() const { return m_managedNotificationConfigurationArnHasBeenSet; }
  template <typename ManagedNotificationConfigurationArnT = Aws::String>
  void SetManagedNotificationConfigurationArn(ManagedNotificationConfigurationArnT&& value) {
    m_managedNotificationConfigurationArnHasBeenSet = true;
    m_managedNotificationConfigurationArn = std::forward<ManagedNotificationConfigurationArnT>(value);
  }
  template <typename ManagedNotificationConfigurationArnT = Aws::String>
  UpdateManagedNotificationChannelAssociationRequest& WithManagedNotificationConfigurationArn(
      ManagedNotificationConfigurationArnT&& value) {
    SetManagedNotificationConfigurationArn(std::forward<ManagedNotificationConfigurationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the channel association to update. You can specify one of
   * the following:</p> <ul> <li> <p>An Account contact identifier.</p> </li> <li>
   * <p>A Channel ARN.</p> </li> </ul>
   */
  inline const Aws::String& GetChannelIdentifier() const { return m_channelIdentifier; }
  inline bool ChannelIdentifierHasBeenSet() const { return m_channelIdentifierHasBeenSet; }
  template <typename ChannelIdentifierT = Aws::String>
  void SetChannelIdentifier(ChannelIdentifierT&& value) {
    m_channelIdentifierHasBeenSet = true;
    m_channelIdentifier = std::forward<ChannelIdentifierT>(value);
  }
  template <typename ChannelIdentifierT = Aws::String>
  UpdateManagedNotificationChannelAssociationRequest& WithChannelIdentifier(ChannelIdentifierT&& value) {
    SetChannelIdentifier(std::forward<ChannelIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the association is subscribed to sensitive events. The
   * <code>notifications:SubscribeSensitiveEvents</code> permission controls access
   * to sensitive events.</p>
   */
  inline bool GetIsSensitiveEventsSubscribed() const { return m_isSensitiveEventsSubscribed; }
  inline bool IsSensitiveEventsSubscribedHasBeenSet() const { return m_isSensitiveEventsSubscribedHasBeenSet; }
  inline void SetIsSensitiveEventsSubscribed(bool value) {
    m_isSensitiveEventsSubscribedHasBeenSet = true;
    m_isSensitiveEventsSubscribed = value;
  }
  inline UpdateManagedNotificationChannelAssociationRequest& WithIsSensitiveEventsSubscribed(bool value) {
    SetIsSensitiveEventsSubscribed(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_managedNotificationConfigurationArn;

  Aws::String m_channelIdentifier;

  bool m_isSensitiveEventsSubscribed{false};
  bool m_managedNotificationConfigurationArnHasBeenSet = false;
  bool m_channelIdentifierHasBeenSet = false;
  bool m_isSensitiveEventsSubscribedHasBeenSet = false;
};

}  // namespace Model
}  // namespace Notifications
}  // namespace Aws
