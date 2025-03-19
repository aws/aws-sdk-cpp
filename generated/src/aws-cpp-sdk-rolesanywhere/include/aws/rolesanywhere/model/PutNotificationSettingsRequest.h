/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rolesanywhere/model/NotificationSetting.h>
#include <utility>

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

  /**
   */
  class PutNotificationSettingsRequest : public RolesAnywhereRequest
  {
  public:
    AWS_ROLESANYWHERE_API PutNotificationSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutNotificationSettings"; }

    AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of notification settings to be associated to the trust anchor.</p>
     */
    inline const Aws::Vector<NotificationSetting>& GetNotificationSettings() const { return m_notificationSettings; }
    inline bool NotificationSettingsHasBeenSet() const { return m_notificationSettingsHasBeenSet; }
    template<typename NotificationSettingsT = Aws::Vector<NotificationSetting>>
    void SetNotificationSettings(NotificationSettingsT&& value) { m_notificationSettingsHasBeenSet = true; m_notificationSettings = std::forward<NotificationSettingsT>(value); }
    template<typename NotificationSettingsT = Aws::Vector<NotificationSetting>>
    PutNotificationSettingsRequest& WithNotificationSettings(NotificationSettingsT&& value) { SetNotificationSettings(std::forward<NotificationSettingsT>(value)); return *this;}
    template<typename NotificationSettingsT = NotificationSetting>
    PutNotificationSettingsRequest& AddNotificationSettings(NotificationSettingsT&& value) { m_notificationSettingsHasBeenSet = true; m_notificationSettings.emplace_back(std::forward<NotificationSettingsT>(value)); return *this; }
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
    PutNotificationSettingsRequest& WithTrustAnchorId(TrustAnchorIdT&& value) { SetTrustAnchorId(std::forward<TrustAnchorIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NotificationSetting> m_notificationSettings;
    bool m_notificationSettingsHasBeenSet = false;

    Aws::String m_trustAnchorId;
    bool m_trustAnchorIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
