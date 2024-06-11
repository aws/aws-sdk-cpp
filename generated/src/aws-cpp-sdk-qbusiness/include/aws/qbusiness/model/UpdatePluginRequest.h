/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/PluginState.h>
#include <aws/qbusiness/model/CustomPluginConfiguration.h>
#include <aws/qbusiness/model/PluginAuthConfiguration.h>
#include <utility>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class UpdatePluginRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API UpdatePluginRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePlugin"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the application the plugin is attached to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline UpdatePluginRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline UpdatePluginRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline UpdatePluginRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the plugin.</p>
     */
    inline const Aws::String& GetPluginId() const{ return m_pluginId; }
    inline bool PluginIdHasBeenSet() const { return m_pluginIdHasBeenSet; }
    inline void SetPluginId(const Aws::String& value) { m_pluginIdHasBeenSet = true; m_pluginId = value; }
    inline void SetPluginId(Aws::String&& value) { m_pluginIdHasBeenSet = true; m_pluginId = std::move(value); }
    inline void SetPluginId(const char* value) { m_pluginIdHasBeenSet = true; m_pluginId.assign(value); }
    inline UpdatePluginRequest& WithPluginId(const Aws::String& value) { SetPluginId(value); return *this;}
    inline UpdatePluginRequest& WithPluginId(Aws::String&& value) { SetPluginId(std::move(value)); return *this;}
    inline UpdatePluginRequest& WithPluginId(const char* value) { SetPluginId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the plugin.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline UpdatePluginRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline UpdatePluginRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline UpdatePluginRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the plugin. </p>
     */
    inline const PluginState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const PluginState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(PluginState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline UpdatePluginRequest& WithState(const PluginState& value) { SetState(value); return *this;}
    inline UpdatePluginRequest& WithState(PluginState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline const Aws::String& GetServerUrl() const{ return m_serverUrl; }
    inline bool ServerUrlHasBeenSet() const { return m_serverUrlHasBeenSet; }
    inline void SetServerUrl(const Aws::String& value) { m_serverUrlHasBeenSet = true; m_serverUrl = value; }
    inline void SetServerUrl(Aws::String&& value) { m_serverUrlHasBeenSet = true; m_serverUrl = std::move(value); }
    inline void SetServerUrl(const char* value) { m_serverUrlHasBeenSet = true; m_serverUrl.assign(value); }
    inline UpdatePluginRequest& WithServerUrl(const Aws::String& value) { SetServerUrl(value); return *this;}
    inline UpdatePluginRequest& WithServerUrl(Aws::String&& value) { SetServerUrl(std::move(value)); return *this;}
    inline UpdatePluginRequest& WithServerUrl(const char* value) { SetServerUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a custom plugin.</p>
     */
    inline const CustomPluginConfiguration& GetCustomPluginConfiguration() const{ return m_customPluginConfiguration; }
    inline bool CustomPluginConfigurationHasBeenSet() const { return m_customPluginConfigurationHasBeenSet; }
    inline void SetCustomPluginConfiguration(const CustomPluginConfiguration& value) { m_customPluginConfigurationHasBeenSet = true; m_customPluginConfiguration = value; }
    inline void SetCustomPluginConfiguration(CustomPluginConfiguration&& value) { m_customPluginConfigurationHasBeenSet = true; m_customPluginConfiguration = std::move(value); }
    inline UpdatePluginRequest& WithCustomPluginConfiguration(const CustomPluginConfiguration& value) { SetCustomPluginConfiguration(value); return *this;}
    inline UpdatePluginRequest& WithCustomPluginConfiguration(CustomPluginConfiguration&& value) { SetCustomPluginConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication configuration the plugin is using.</p>
     */
    inline const PluginAuthConfiguration& GetAuthConfiguration() const{ return m_authConfiguration; }
    inline bool AuthConfigurationHasBeenSet() const { return m_authConfigurationHasBeenSet; }
    inline void SetAuthConfiguration(const PluginAuthConfiguration& value) { m_authConfigurationHasBeenSet = true; m_authConfiguration = value; }
    inline void SetAuthConfiguration(PluginAuthConfiguration&& value) { m_authConfigurationHasBeenSet = true; m_authConfiguration = std::move(value); }
    inline UpdatePluginRequest& WithAuthConfiguration(const PluginAuthConfiguration& value) { SetAuthConfiguration(value); return *this;}
    inline UpdatePluginRequest& WithAuthConfiguration(PluginAuthConfiguration&& value) { SetAuthConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_pluginId;
    bool m_pluginIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    PluginState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_serverUrl;
    bool m_serverUrlHasBeenSet = false;

    CustomPluginConfiguration m_customPluginConfiguration;
    bool m_customPluginConfigurationHasBeenSet = false;

    PluginAuthConfiguration m_authConfiguration;
    bool m_authConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
