﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rolesanywhere/model/Source.h>
#include <aws/rolesanywhere/model/NotificationSetting.h>
#include <aws/rolesanywhere/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

  /**
   */
  class CreateTrustAnchorRequest : public RolesAnywhereRequest
  {
  public:
    AWS_ROLESANYWHERE_API CreateTrustAnchorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrustAnchor"; }

    AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies whether the trust anchor is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CreateTrustAnchorRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the trust anchor.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateTrustAnchorRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateTrustAnchorRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateTrustAnchorRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of notification settings to be associated to the trust anchor.</p>
     */
    inline const Aws::Vector<NotificationSetting>& GetNotificationSettings() const{ return m_notificationSettings; }
    inline bool NotificationSettingsHasBeenSet() const { return m_notificationSettingsHasBeenSet; }
    inline void SetNotificationSettings(const Aws::Vector<NotificationSetting>& value) { m_notificationSettingsHasBeenSet = true; m_notificationSettings = value; }
    inline void SetNotificationSettings(Aws::Vector<NotificationSetting>&& value) { m_notificationSettingsHasBeenSet = true; m_notificationSettings = std::move(value); }
    inline CreateTrustAnchorRequest& WithNotificationSettings(const Aws::Vector<NotificationSetting>& value) { SetNotificationSettings(value); return *this;}
    inline CreateTrustAnchorRequest& WithNotificationSettings(Aws::Vector<NotificationSetting>&& value) { SetNotificationSettings(std::move(value)); return *this;}
    inline CreateTrustAnchorRequest& AddNotificationSettings(const NotificationSetting& value) { m_notificationSettingsHasBeenSet = true; m_notificationSettings.push_back(value); return *this; }
    inline CreateTrustAnchorRequest& AddNotificationSettings(NotificationSetting&& value) { m_notificationSettingsHasBeenSet = true; m_notificationSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The trust anchor type and its related certificate data.</p>
     */
    inline const Source& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Source& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Source&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline CreateTrustAnchorRequest& WithSource(const Source& value) { SetSource(value); return *this;}
    inline CreateTrustAnchorRequest& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to attach to the trust anchor.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateTrustAnchorRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateTrustAnchorRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateTrustAnchorRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateTrustAnchorRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<NotificationSetting> m_notificationSettings;
    bool m_notificationSettingsHasBeenSet = false;

    Source m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
