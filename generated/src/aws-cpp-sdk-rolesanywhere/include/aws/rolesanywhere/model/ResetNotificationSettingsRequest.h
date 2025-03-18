/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rolesanywhere/model/NotificationSettingKey.h>
#include <utility>

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

  /**
   */
  class ResetNotificationSettingsRequest : public RolesAnywhereRequest
  {
  public:
    AWS_ROLESANYWHERE_API ResetNotificationSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetNotificationSettings"; }

    AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of notification setting keys to reset. A notification setting key
     * includes the event and the channel. </p>
     */
    inline const Aws::Vector<NotificationSettingKey>& GetNotificationSettingKeys() const { return m_notificationSettingKeys; }
    inline bool NotificationSettingKeysHasBeenSet() const { return m_notificationSettingKeysHasBeenSet; }
    template<typename NotificationSettingKeysT = Aws::Vector<NotificationSettingKey>>
    void SetNotificationSettingKeys(NotificationSettingKeysT&& value) { m_notificationSettingKeysHasBeenSet = true; m_notificationSettingKeys = std::forward<NotificationSettingKeysT>(value); }
    template<typename NotificationSettingKeysT = Aws::Vector<NotificationSettingKey>>
    ResetNotificationSettingsRequest& WithNotificationSettingKeys(NotificationSettingKeysT&& value) { SetNotificationSettingKeys(std::forward<NotificationSettingKeysT>(value)); return *this;}
    template<typename NotificationSettingKeysT = NotificationSettingKey>
    ResetNotificationSettingsRequest& AddNotificationSettingKeys(NotificationSettingKeysT&& value) { m_notificationSettingKeysHasBeenSet = true; m_notificationSettingKeys.emplace_back(std::forward<NotificationSettingKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the trust anchor.</p>
     */
    inline const Aws::String& GetTrustAnchorId() const { return m_trustAnchorId; }
    inline bool TrustAnchorIdHasBeenSet() const { return m_trustAnchorIdHasBeenSet; }
    template<typename TrustAnchorIdT = Aws::String>
    void SetTrustAnchorId(TrustAnchorIdT&& value) { m_trustAnchorIdHasBeenSet = true; m_trustAnchorId = std::forward<TrustAnchorIdT>(value); }
    template<typename TrustAnchorIdT = Aws::String>
    ResetNotificationSettingsRequest& WithTrustAnchorId(TrustAnchorIdT&& value) { SetTrustAnchorId(std::forward<TrustAnchorIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NotificationSettingKey> m_notificationSettingKeys;
    bool m_notificationSettingKeysHasBeenSet = false;

    Aws::String m_trustAnchorId;
    bool m_trustAnchorIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
