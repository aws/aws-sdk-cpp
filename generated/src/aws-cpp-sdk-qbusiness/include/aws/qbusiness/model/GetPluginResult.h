﻿/**
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
    AWS_QBUSINESS_API GetPluginResult();
    AWS_QBUSINESS_API GetPluginResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetPluginResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the application which contains the plugin.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline GetPluginResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline GetPluginResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline GetPluginResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the plugin.</p>
     */
    inline const Aws::String& GetPluginId() const{ return m_pluginId; }
    inline void SetPluginId(const Aws::String& value) { m_pluginId = value; }
    inline void SetPluginId(Aws::String&& value) { m_pluginId = std::move(value); }
    inline void SetPluginId(const char* value) { m_pluginId.assign(value); }
    inline GetPluginResult& WithPluginId(const Aws::String& value) { SetPluginId(value); return *this;}
    inline GetPluginResult& WithPluginId(Aws::String&& value) { SetPluginId(std::move(value)); return *this;}
    inline GetPluginResult& WithPluginId(const char* value) { SetPluginId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the plugin.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline GetPluginResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline GetPluginResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline GetPluginResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the plugin.</p>
     */
    inline const PluginType& GetType() const{ return m_type; }
    inline void SetType(const PluginType& value) { m_type = value; }
    inline void SetType(PluginType&& value) { m_type = std::move(value); }
    inline GetPluginResult& WithType(const PluginType& value) { SetType(value); return *this;}
    inline GetPluginResult& WithType(PluginType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source URL used for plugin configuration.</p>
     */
    inline const Aws::String& GetServerUrl() const{ return m_serverUrl; }
    inline void SetServerUrl(const Aws::String& value) { m_serverUrl = value; }
    inline void SetServerUrl(Aws::String&& value) { m_serverUrl = std::move(value); }
    inline void SetServerUrl(const char* value) { m_serverUrl.assign(value); }
    inline GetPluginResult& WithServerUrl(const Aws::String& value) { SetServerUrl(value); return *this;}
    inline GetPluginResult& WithServerUrl(Aws::String&& value) { SetServerUrl(std::move(value)); return *this;}
    inline GetPluginResult& WithServerUrl(const char* value) { SetServerUrl(value); return *this;}
    ///@}

    ///@{
    
    inline const PluginAuthConfiguration& GetAuthConfiguration() const{ return m_authConfiguration; }
    inline void SetAuthConfiguration(const PluginAuthConfiguration& value) { m_authConfiguration = value; }
    inline void SetAuthConfiguration(PluginAuthConfiguration&& value) { m_authConfiguration = std::move(value); }
    inline GetPluginResult& WithAuthConfiguration(const PluginAuthConfiguration& value) { SetAuthConfiguration(value); return *this;}
    inline GetPluginResult& WithAuthConfiguration(PluginAuthConfiguration&& value) { SetAuthConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information required to create a custom plugin.</p>
     */
    inline const CustomPluginConfiguration& GetCustomPluginConfiguration() const{ return m_customPluginConfiguration; }
    inline void SetCustomPluginConfiguration(const CustomPluginConfiguration& value) { m_customPluginConfiguration = value; }
    inline void SetCustomPluginConfiguration(CustomPluginConfiguration&& value) { m_customPluginConfiguration = std::move(value); }
    inline GetPluginResult& WithCustomPluginConfiguration(const CustomPluginConfiguration& value) { SetCustomPluginConfiguration(value); return *this;}
    inline GetPluginResult& WithCustomPluginConfiguration(CustomPluginConfiguration&& value) { SetCustomPluginConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of a plugin. A plugin is modified asynchronously.</p>
     */
    inline const PluginBuildStatus& GetBuildStatus() const{ return m_buildStatus; }
    inline void SetBuildStatus(const PluginBuildStatus& value) { m_buildStatus = value; }
    inline void SetBuildStatus(PluginBuildStatus&& value) { m_buildStatus = std::move(value); }
    inline GetPluginResult& WithBuildStatus(const PluginBuildStatus& value) { SetBuildStatus(value); return *this;}
    inline GetPluginResult& WithBuildStatus(PluginBuildStatus&& value) { SetBuildStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role with permission to access
     * resources needed to create the plugin.</p>
     */
    inline const Aws::String& GetPluginArn() const{ return m_pluginArn; }
    inline void SetPluginArn(const Aws::String& value) { m_pluginArn = value; }
    inline void SetPluginArn(Aws::String&& value) { m_pluginArn = std::move(value); }
    inline void SetPluginArn(const char* value) { m_pluginArn.assign(value); }
    inline GetPluginResult& WithPluginArn(const Aws::String& value) { SetPluginArn(value); return *this;}
    inline GetPluginResult& WithPluginArn(Aws::String&& value) { SetPluginArn(std::move(value)); return *this;}
    inline GetPluginResult& WithPluginArn(const char* value) { SetPluginArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the plugin.</p>
     */
    inline const PluginState& GetState() const{ return m_state; }
    inline void SetState(const PluginState& value) { m_state = value; }
    inline void SetState(PluginState&& value) { m_state = std::move(value); }
    inline GetPluginResult& WithState(const PluginState& value) { SetState(value); return *this;}
    inline GetPluginResult& WithState(PluginState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the plugin was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetPluginResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetPluginResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the plugin was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetPluginResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetPluginResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPluginResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPluginResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPluginResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;

    Aws::String m_pluginId;

    Aws::String m_displayName;

    PluginType m_type;

    Aws::String m_serverUrl;

    PluginAuthConfiguration m_authConfiguration;

    CustomPluginConfiguration m_customPluginConfiguration;

    PluginBuildStatus m_buildStatus;

    Aws::String m_pluginArn;

    PluginState m_state;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
