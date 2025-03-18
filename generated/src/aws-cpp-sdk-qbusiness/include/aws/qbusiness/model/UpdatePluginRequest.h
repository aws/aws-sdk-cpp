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
    AWS_QBUSINESS_API UpdatePluginRequest() = default;

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
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    UpdatePluginRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the plugin.</p>
     */
    inline const Aws::String& GetPluginId() const { return m_pluginId; }
    inline bool PluginIdHasBeenSet() const { return m_pluginIdHasBeenSet; }
    template<typename PluginIdT = Aws::String>
    void SetPluginId(PluginIdT&& value) { m_pluginIdHasBeenSet = true; m_pluginId = std::forward<PluginIdT>(value); }
    template<typename PluginIdT = Aws::String>
    UpdatePluginRequest& WithPluginId(PluginIdT&& value) { SetPluginId(std::forward<PluginIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the plugin.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UpdatePluginRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the plugin. </p>
     */
    inline PluginState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(PluginState value) { m_stateHasBeenSet = true; m_state = value; }
    inline UpdatePluginRequest& WithState(PluginState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline const Aws::String& GetServerUrl() const { return m_serverUrl; }
    inline bool ServerUrlHasBeenSet() const { return m_serverUrlHasBeenSet; }
    template<typename ServerUrlT = Aws::String>
    void SetServerUrl(ServerUrlT&& value) { m_serverUrlHasBeenSet = true; m_serverUrl = std::forward<ServerUrlT>(value); }
    template<typename ServerUrlT = Aws::String>
    UpdatePluginRequest& WithServerUrl(ServerUrlT&& value) { SetServerUrl(std::forward<ServerUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a custom plugin.</p>
     */
    inline const CustomPluginConfiguration& GetCustomPluginConfiguration() const { return m_customPluginConfiguration; }
    inline bool CustomPluginConfigurationHasBeenSet() const { return m_customPluginConfigurationHasBeenSet; }
    template<typename CustomPluginConfigurationT = CustomPluginConfiguration>
    void SetCustomPluginConfiguration(CustomPluginConfigurationT&& value) { m_customPluginConfigurationHasBeenSet = true; m_customPluginConfiguration = std::forward<CustomPluginConfigurationT>(value); }
    template<typename CustomPluginConfigurationT = CustomPluginConfiguration>
    UpdatePluginRequest& WithCustomPluginConfiguration(CustomPluginConfigurationT&& value) { SetCustomPluginConfiguration(std::forward<CustomPluginConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication configuration the plugin is using.</p>
     */
    inline const PluginAuthConfiguration& GetAuthConfiguration() const { return m_authConfiguration; }
    inline bool AuthConfigurationHasBeenSet() const { return m_authConfigurationHasBeenSet; }
    template<typename AuthConfigurationT = PluginAuthConfiguration>
    void SetAuthConfiguration(AuthConfigurationT&& value) { m_authConfigurationHasBeenSet = true; m_authConfiguration = std::forward<AuthConfigurationT>(value); }
    template<typename AuthConfigurationT = PluginAuthConfiguration>
    UpdatePluginRequest& WithAuthConfiguration(AuthConfigurationT&& value) { SetAuthConfiguration(std::forward<AuthConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_pluginId;
    bool m_pluginIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    PluginState m_state{PluginState::NOT_SET};
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
