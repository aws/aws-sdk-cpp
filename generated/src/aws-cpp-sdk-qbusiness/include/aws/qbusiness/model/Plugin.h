﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/PluginType.h>
#include <aws/qbusiness/model/PluginState.h>
#include <aws/qbusiness/model/PluginBuildStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Information about an Amazon Q Business plugin and its
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/Plugin">AWS
   * API Reference</a></p>
   */
  class Plugin
  {
  public:
    AWS_QBUSINESS_API Plugin();
    AWS_QBUSINESS_API Plugin(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Plugin& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the plugin.</p>
     */
    inline const Aws::String& GetPluginId() const{ return m_pluginId; }
    inline bool PluginIdHasBeenSet() const { return m_pluginIdHasBeenSet; }
    inline void SetPluginId(const Aws::String& value) { m_pluginIdHasBeenSet = true; m_pluginId = value; }
    inline void SetPluginId(Aws::String&& value) { m_pluginIdHasBeenSet = true; m_pluginId = std::move(value); }
    inline void SetPluginId(const char* value) { m_pluginIdHasBeenSet = true; m_pluginId.assign(value); }
    inline Plugin& WithPluginId(const Aws::String& value) { SetPluginId(value); return *this;}
    inline Plugin& WithPluginId(Aws::String&& value) { SetPluginId(std::move(value)); return *this;}
    inline Plugin& WithPluginId(const char* value) { SetPluginId(value); return *this;}
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
    inline Plugin& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline Plugin& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline Plugin& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the plugin.</p>
     */
    inline const PluginType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const PluginType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(PluginType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Plugin& WithType(const PluginType& value) { SetType(value); return *this;}
    inline Plugin& WithType(PluginType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plugin server URL used for configuration.</p>
     */
    inline const Aws::String& GetServerUrl() const{ return m_serverUrl; }
    inline bool ServerUrlHasBeenSet() const { return m_serverUrlHasBeenSet; }
    inline void SetServerUrl(const Aws::String& value) { m_serverUrlHasBeenSet = true; m_serverUrl = value; }
    inline void SetServerUrl(Aws::String&& value) { m_serverUrlHasBeenSet = true; m_serverUrl = std::move(value); }
    inline void SetServerUrl(const char* value) { m_serverUrlHasBeenSet = true; m_serverUrl.assign(value); }
    inline Plugin& WithServerUrl(const Aws::String& value) { SetServerUrl(value); return *this;}
    inline Plugin& WithServerUrl(Aws::String&& value) { SetServerUrl(std::move(value)); return *this;}
    inline Plugin& WithServerUrl(const char* value) { SetServerUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the plugin.</p>
     */
    inline const PluginState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const PluginState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(PluginState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Plugin& WithState(const PluginState& value) { SetState(value); return *this;}
    inline Plugin& WithState(PluginState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the plugin.</p>
     */
    inline const PluginBuildStatus& GetBuildStatus() const{ return m_buildStatus; }
    inline bool BuildStatusHasBeenSet() const { return m_buildStatusHasBeenSet; }
    inline void SetBuildStatus(const PluginBuildStatus& value) { m_buildStatusHasBeenSet = true; m_buildStatus = value; }
    inline void SetBuildStatus(PluginBuildStatus&& value) { m_buildStatusHasBeenSet = true; m_buildStatus = std::move(value); }
    inline Plugin& WithBuildStatus(const PluginBuildStatus& value) { SetBuildStatus(value); return *this;}
    inline Plugin& WithBuildStatus(PluginBuildStatus&& value) { SetBuildStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the plugin was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Plugin& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Plugin& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the plugin was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline Plugin& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline Plugin& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_pluginId;
    bool m_pluginIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    PluginType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_serverUrl;
    bool m_serverUrlHasBeenSet = false;

    PluginState m_state;
    bool m_stateHasBeenSet = false;

    PluginBuildStatus m_buildStatus;
    bool m_buildStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
