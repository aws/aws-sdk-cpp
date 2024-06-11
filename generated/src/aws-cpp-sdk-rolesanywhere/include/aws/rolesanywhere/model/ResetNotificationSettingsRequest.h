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
    AWS_ROLESANYWHERE_API ResetNotificationSettingsRequest();

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
    inline const Aws::Vector<NotificationSettingKey>& GetNotificationSettingKeys() const{ return m_notificationSettingKeys; }
    inline bool NotificationSettingKeysHasBeenSet() const { return m_notificationSettingKeysHasBeenSet; }
    inline void SetNotificationSettingKeys(const Aws::Vector<NotificationSettingKey>& value) { m_notificationSettingKeysHasBeenSet = true; m_notificationSettingKeys = value; }
    inline void SetNotificationSettingKeys(Aws::Vector<NotificationSettingKey>&& value) { m_notificationSettingKeysHasBeenSet = true; m_notificationSettingKeys = std::move(value); }
    inline ResetNotificationSettingsRequest& WithNotificationSettingKeys(const Aws::Vector<NotificationSettingKey>& value) { SetNotificationSettingKeys(value); return *this;}
    inline ResetNotificationSettingsRequest& WithNotificationSettingKeys(Aws::Vector<NotificationSettingKey>&& value) { SetNotificationSettingKeys(std::move(value)); return *this;}
    inline ResetNotificationSettingsRequest& AddNotificationSettingKeys(const NotificationSettingKey& value) { m_notificationSettingKeysHasBeenSet = true; m_notificationSettingKeys.push_back(value); return *this; }
    inline ResetNotificationSettingsRequest& AddNotificationSettingKeys(NotificationSettingKey&& value) { m_notificationSettingKeysHasBeenSet = true; m_notificationSettingKeys.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the trust anchor.</p>
     */
    inline const Aws::String& GetTrustAnchorId() const{ return m_trustAnchorId; }
    inline bool TrustAnchorIdHasBeenSet() const { return m_trustAnchorIdHasBeenSet; }
    inline void SetTrustAnchorId(const Aws::String& value) { m_trustAnchorIdHasBeenSet = true; m_trustAnchorId = value; }
    inline void SetTrustAnchorId(Aws::String&& value) { m_trustAnchorIdHasBeenSet = true; m_trustAnchorId = std::move(value); }
    inline void SetTrustAnchorId(const char* value) { m_trustAnchorIdHasBeenSet = true; m_trustAnchorId.assign(value); }
    inline ResetNotificationSettingsRequest& WithTrustAnchorId(const Aws::String& value) { SetTrustAnchorId(value); return *this;}
    inline ResetNotificationSettingsRequest& WithTrustAnchorId(Aws::String&& value) { SetTrustAnchorId(std::move(value)); return *this;}
    inline ResetNotificationSettingsRequest& WithTrustAnchorId(const char* value) { SetTrustAnchorId(value); return *this;}
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
