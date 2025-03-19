/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/PluginType.h>
#include <aws/qbusiness/model/PluginAuthConfiguration.h>
#include <aws/qbusiness/model/CustomPluginConfiguration.h>
#include <aws/qbusiness/model/PluginBuildStatus.h>
#include <aws/qbusiness/model/PluginState.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QBusiness
{
namespace Model
{
  class GetPluginResult
  {
  public:
    AWS_QBUSINESS_API GetPluginResult() = default;
    AWS_QBUSINESS_API GetPluginResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetPluginResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the application which contains the plugin.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    GetPluginResult& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the plugin.</p>
     */
    inline const Aws::String& GetPluginId() const { return m_pluginId; }
    template<typename PluginIdT = Aws::String>
    void SetPluginId(PluginIdT&& value) { m_pluginIdHasBeenSet = true; m_pluginId = std::forward<PluginIdT>(value); }
    template<typename PluginIdT = Aws::String>
    GetPluginResult& WithPluginId(PluginIdT&& value) { SetPluginId(std::forward<PluginIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the plugin.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    GetPluginResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the plugin.</p>
     */
    inline PluginType GetType() const { return m_type; }
    inline void SetType(PluginType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetPluginResult& WithType(PluginType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline const Aws::String& GetServerUrl() const { return m_serverUrl; }
    template<typename ServerUrlT = Aws::String>
    void SetServerUrl(ServerUrlT&& value) { m_serverUrlHasBeenSet = true; m_serverUrl = std::forward<ServerUrlT>(value); }
    template<typename ServerUrlT = Aws::String>
    GetPluginResult& WithServerUrl(ServerUrlT&& value) { SetServerUrl(std::forward<ServerUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PluginAuthConfiguration& GetAuthConfiguration() const { return m_authConfiguration; }
    template<typename AuthConfigurationT = PluginAuthConfiguration>
    void SetAuthConfiguration(AuthConfigurationT&& value) { m_authConfigurationHasBeenSet = true; m_authConfiguration = std::forward<AuthConfigurationT>(value); }
    template<typename AuthConfigurationT = PluginAuthConfiguration>
    GetPluginResult& WithAuthConfiguration(AuthConfigurationT&& value) { SetAuthConfiguration(std::forward<AuthConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information required to create a custom plugin.</p>
     */
    inline const CustomPluginConfiguration& GetCustomPluginConfiguration() const { return m_customPluginConfiguration; }
    template<typename CustomPluginConfigurationT = CustomPluginConfiguration>
    void SetCustomPluginConfiguration(CustomPluginConfigurationT&& value) { m_customPluginConfigurationHasBeenSet = true; m_customPluginConfiguration = std::forward<CustomPluginConfigurationT>(value); }
    template<typename CustomPluginConfigurationT = CustomPluginConfiguration>
    GetPluginResult& WithCustomPluginConfiguration(CustomPluginConfigurationT&& value) { SetCustomPluginConfiguration(std::forward<CustomPluginConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of a plugin. A plugin is modified asynchronously.</p>
     */
    inline PluginBuildStatus GetBuildStatus() const { return m_buildStatus; }
    inline void SetBuildStatus(PluginBuildStatus value) { m_buildStatusHasBeenSet = true; m_buildStatus = value; }
    inline GetPluginResult& WithBuildStatus(PluginBuildStatus value) { SetBuildStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role with permission to access
     * resources needed to create the plugin.</p>
     */
    inline const Aws::String& GetPluginArn() const { return m_pluginArn; }
    template<typename PluginArnT = Aws::String>
    void SetPluginArn(PluginArnT&& value) { m_pluginArnHasBeenSet = true; m_pluginArn = std::forward<PluginArnT>(value); }
    template<typename PluginArnT = Aws::String>
    GetPluginResult& WithPluginArn(PluginArnT&& value) { SetPluginArn(std::forward<PluginArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the plugin.</p>
     */
    inline PluginState GetState() const { return m_state; }
    inline void SetState(PluginState value) { m_stateHasBeenSet = true; m_state = value; }
    inline GetPluginResult& WithState(PluginState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the plugin was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetPluginResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the plugin was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetPluginResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPluginResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_pluginId;
    bool m_pluginIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    PluginType m_type{PluginType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_serverUrl;
    bool m_serverUrlHasBeenSet = false;

    PluginAuthConfiguration m_authConfiguration;
    bool m_authConfigurationHasBeenSet = false;

    CustomPluginConfiguration m_customPluginConfiguration;
    bool m_customPluginConfigurationHasBeenSet = false;

    PluginBuildStatus m_buildStatus{PluginBuildStatus::NOT_SET};
    bool m_buildStatusHasBeenSet = false;

    Aws::String m_pluginArn;
    bool m_pluginArnHasBeenSet = false;

    PluginState m_state{PluginState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
