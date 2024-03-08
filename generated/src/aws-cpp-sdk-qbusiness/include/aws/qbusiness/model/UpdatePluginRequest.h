/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/PluginAuthConfiguration.h>
#include <aws/qbusiness/model/PluginState.h>
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


    /**
     * <p>The identifier of the application the plugin is attached to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the application the plugin is attached to.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the application the plugin is attached to.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the application the plugin is attached to.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the application the plugin is attached to.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the application the plugin is attached to.</p>
     */
    inline UpdatePluginRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the application the plugin is attached to.</p>
     */
    inline UpdatePluginRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the application the plugin is attached to.</p>
     */
    inline UpdatePluginRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The authentication configuration the plugin is using.</p>
     */
    inline const PluginAuthConfiguration& GetAuthConfiguration() const{ return m_authConfiguration; }

    /**
     * <p>The authentication configuration the plugin is using.</p>
     */
    inline bool AuthConfigurationHasBeenSet() const { return m_authConfigurationHasBeenSet; }

    /**
     * <p>The authentication configuration the plugin is using.</p>
     */
    inline void SetAuthConfiguration(const PluginAuthConfiguration& value) { m_authConfigurationHasBeenSet = true; m_authConfiguration = value; }

    /**
     * <p>The authentication configuration the plugin is using.</p>
     */
    inline void SetAuthConfiguration(PluginAuthConfiguration&& value) { m_authConfigurationHasBeenSet = true; m_authConfiguration = std::move(value); }

    /**
     * <p>The authentication configuration the plugin is using.</p>
     */
    inline UpdatePluginRequest& WithAuthConfiguration(const PluginAuthConfiguration& value) { SetAuthConfiguration(value); return *this;}

    /**
     * <p>The authentication configuration the plugin is using.</p>
     */
    inline UpdatePluginRequest& WithAuthConfiguration(PluginAuthConfiguration&& value) { SetAuthConfiguration(std::move(value)); return *this;}


    /**
     * <p>The name of the plugin.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the plugin.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name of the plugin.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of the plugin.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of the plugin.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of the plugin.</p>
     */
    inline UpdatePluginRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the plugin.</p>
     */
    inline UpdatePluginRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the plugin.</p>
     */
    inline UpdatePluginRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The identifier of the plugin.</p>
     */
    inline const Aws::String& GetPluginId() const{ return m_pluginId; }

    /**
     * <p>The identifier of the plugin.</p>
     */
    inline bool PluginIdHasBeenSet() const { return m_pluginIdHasBeenSet; }

    /**
     * <p>The identifier of the plugin.</p>
     */
    inline void SetPluginId(const Aws::String& value) { m_pluginIdHasBeenSet = true; m_pluginId = value; }

    /**
     * <p>The identifier of the plugin.</p>
     */
    inline void SetPluginId(Aws::String&& value) { m_pluginIdHasBeenSet = true; m_pluginId = std::move(value); }

    /**
     * <p>The identifier of the plugin.</p>
     */
    inline void SetPluginId(const char* value) { m_pluginIdHasBeenSet = true; m_pluginId.assign(value); }

    /**
     * <p>The identifier of the plugin.</p>
     */
    inline UpdatePluginRequest& WithPluginId(const Aws::String& value) { SetPluginId(value); return *this;}

    /**
     * <p>The identifier of the plugin.</p>
     */
    inline UpdatePluginRequest& WithPluginId(Aws::String&& value) { SetPluginId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the plugin.</p>
     */
    inline UpdatePluginRequest& WithPluginId(const char* value) { SetPluginId(value); return *this;}


    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline const Aws::String& GetServerUrl() const{ return m_serverUrl; }

    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline bool ServerUrlHasBeenSet() const { return m_serverUrlHasBeenSet; }

    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline void SetServerUrl(const Aws::String& value) { m_serverUrlHasBeenSet = true; m_serverUrl = value; }

    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline void SetServerUrl(Aws::String&& value) { m_serverUrlHasBeenSet = true; m_serverUrl = std::move(value); }

    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline void SetServerUrl(const char* value) { m_serverUrlHasBeenSet = true; m_serverUrl.assign(value); }

    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline UpdatePluginRequest& WithServerUrl(const Aws::String& value) { SetServerUrl(value); return *this;}

    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline UpdatePluginRequest& WithServerUrl(Aws::String&& value) { SetServerUrl(std::move(value)); return *this;}

    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline UpdatePluginRequest& WithServerUrl(const char* value) { SetServerUrl(value); return *this;}


    /**
     * <p>The status of the plugin. </p>
     */
    inline const PluginState& GetState() const{ return m_state; }

    /**
     * <p>The status of the plugin. </p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The status of the plugin. </p>
     */
    inline void SetState(const PluginState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The status of the plugin. </p>
     */
    inline void SetState(PluginState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The status of the plugin. </p>
     */
    inline UpdatePluginRequest& WithState(const PluginState& value) { SetState(value); return *this;}

    /**
     * <p>The status of the plugin. </p>
     */
    inline UpdatePluginRequest& WithState(PluginState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    PluginAuthConfiguration m_authConfiguration;
    bool m_authConfigurationHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_pluginId;
    bool m_pluginIdHasBeenSet = false;

    Aws::String m_serverUrl;
    bool m_serverUrlHasBeenSet = false;

    PluginState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
