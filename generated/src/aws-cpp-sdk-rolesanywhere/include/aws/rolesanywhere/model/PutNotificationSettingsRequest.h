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
    AWS_ROLESANYWHERE_API PutNotificationSettingsRequest();

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
    inline const Aws::Vector<NotificationSetting>& GetNotificationSettings() const{ return m_notificationSettings; }
    inline bool NotificationSettingsHasBeenSet() const { return m_notificationSettingsHasBeenSet; }
    inline void SetNotificationSettings(const Aws::Vector<NotificationSetting>& value) { m_notificationSettingsHasBeenSet = true; m_notificationSettings = value; }
    inline void SetNotificationSettings(Aws::Vector<NotificationSetting>&& value) { m_notificationSettingsHasBeenSet = true; m_notificationSettings = std::move(value); }
    inline PutNotificationSettingsRequest& WithNotificationSettings(const Aws::Vector<NotificationSetting>& value) { SetNotificationSettings(value); return *this;}
    inline PutNotificationSettingsRequest& WithNotificationSettings(Aws::Vector<NotificationSetting>&& value) { SetNotificationSettings(std::move(value)); return *this;}
    inline PutNotificationSettingsRequest& AddNotificationSettings(const NotificationSetting& value) { m_notificationSettingsHasBeenSet = true; m_notificationSettings.push_back(value); return *this; }
    inline PutNotificationSettingsRequest& AddNotificationSettings(NotificationSetting&& value) { m_notificationSettingsHasBeenSet = true; m_notificationSettings.push_back(std::move(value)); return *this; }
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
    inline PutNotificationSettingsRequest& WithTrustAnchorId(const Aws::String& value) { SetTrustAnchorId(value); return *this;}
    inline PutNotificationSettingsRequest& WithTrustAnchorId(Aws::String&& value) { SetTrustAnchorId(std::move(value)); return *this;}
    inline PutNotificationSettingsRequest& WithTrustAnchorId(const char* value) { SetTrustAnchorId(value); return *this;}
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
