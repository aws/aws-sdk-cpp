/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhuborchestrator/model/PluginHealth.h>
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
namespace MigrationHubOrchestrator
{
namespace Model
{

  /**
   * <p>The summary of the Migration Hub Orchestrator plugin.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/PluginSummary">AWS
   * API Reference</a></p>
   */
  class PluginSummary
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API PluginSummary();
    AWS_MIGRATIONHUBORCHESTRATOR_API PluginSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API PluginSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the plugin.</p>
     */
    inline const Aws::String& GetPluginId() const{ return m_pluginId; }
    inline bool PluginIdHasBeenSet() const { return m_pluginIdHasBeenSet; }
    inline void SetPluginId(const Aws::String& value) { m_pluginIdHasBeenSet = true; m_pluginId = value; }
    inline void SetPluginId(Aws::String&& value) { m_pluginIdHasBeenSet = true; m_pluginId = std::move(value); }
    inline void SetPluginId(const char* value) { m_pluginIdHasBeenSet = true; m_pluginId.assign(value); }
    inline PluginSummary& WithPluginId(const Aws::String& value) { SetPluginId(value); return *this;}
    inline PluginSummary& WithPluginId(Aws::String&& value) { SetPluginId(std::move(value)); return *this;}
    inline PluginSummary& WithPluginId(const char* value) { SetPluginId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the host.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }
    inline PluginSummary& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}
    inline PluginSummary& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}
    inline PluginSummary& WithHostname(const char* value) { SetHostname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the plugin.</p>
     */
    inline const PluginHealth& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const PluginHealth& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(PluginHealth&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline PluginSummary& WithStatus(const PluginHealth& value) { SetStatus(value); return *this;}
    inline PluginSummary& WithStatus(PluginHealth&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address at which the plugin is located.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline PluginSummary& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline PluginSummary& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline PluginSummary& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the plugin.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline PluginSummary& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline PluginSummary& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline PluginSummary& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the plugin was registered.</p>
     */
    inline const Aws::String& GetRegisteredTime() const{ return m_registeredTime; }
    inline bool RegisteredTimeHasBeenSet() const { return m_registeredTimeHasBeenSet; }
    inline void SetRegisteredTime(const Aws::String& value) { m_registeredTimeHasBeenSet = true; m_registeredTime = value; }
    inline void SetRegisteredTime(Aws::String&& value) { m_registeredTimeHasBeenSet = true; m_registeredTime = std::move(value); }
    inline void SetRegisteredTime(const char* value) { m_registeredTimeHasBeenSet = true; m_registeredTime.assign(value); }
    inline PluginSummary& WithRegisteredTime(const Aws::String& value) { SetRegisteredTime(value); return *this;}
    inline PluginSummary& WithRegisteredTime(Aws::String&& value) { SetRegisteredTime(std::move(value)); return *this;}
    inline PluginSummary& WithRegisteredTime(const char* value) { SetRegisteredTime(value); return *this;}
    ///@}
  private:

    Aws::String m_pluginId;
    bool m_pluginIdHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    PluginHealth m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_registeredTime;
    bool m_registeredTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
