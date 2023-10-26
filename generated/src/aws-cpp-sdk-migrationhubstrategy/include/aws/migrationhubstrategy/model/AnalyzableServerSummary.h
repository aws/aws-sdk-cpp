/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p>Summary information about an analyzable server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/AnalyzableServerSummary">AWS
   * API Reference</a></p>
   */
  class AnalyzableServerSummary
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AnalyzableServerSummary();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AnalyzableServerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AnalyzableServerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The host name of the analyzable server.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }

    /**
     * <p>The host name of the analyzable server.</p>
     */
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }

    /**
     * <p>The host name of the analyzable server.</p>
     */
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>The host name of the analyzable server.</p>
     */
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }

    /**
     * <p>The host name of the analyzable server.</p>
     */
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }

    /**
     * <p>The host name of the analyzable server.</p>
     */
    inline AnalyzableServerSummary& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}

    /**
     * <p>The host name of the analyzable server.</p>
     */
    inline AnalyzableServerSummary& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}

    /**
     * <p>The host name of the analyzable server.</p>
     */
    inline AnalyzableServerSummary& WithHostname(const char* value) { SetHostname(value); return *this;}


    /**
     * <p>The ip address of the analyzable server.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The ip address of the analyzable server.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The ip address of the analyzable server.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The ip address of the analyzable server.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The ip address of the analyzable server.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The ip address of the analyzable server.</p>
     */
    inline AnalyzableServerSummary& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The ip address of the analyzable server.</p>
     */
    inline AnalyzableServerSummary& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The ip address of the analyzable server.</p>
     */
    inline AnalyzableServerSummary& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>The data source of the analyzable server.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The data source of the analyzable server.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The data source of the analyzable server.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The data source of the analyzable server.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The data source of the analyzable server.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The data source of the analyzable server.</p>
     */
    inline AnalyzableServerSummary& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The data source of the analyzable server.</p>
     */
    inline AnalyzableServerSummary& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The data source of the analyzable server.</p>
     */
    inline AnalyzableServerSummary& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The virtual machine id of the analyzable server.</p>
     */
    inline const Aws::String& GetVmId() const{ return m_vmId; }

    /**
     * <p>The virtual machine id of the analyzable server.</p>
     */
    inline bool VmIdHasBeenSet() const { return m_vmIdHasBeenSet; }

    /**
     * <p>The virtual machine id of the analyzable server.</p>
     */
    inline void SetVmId(const Aws::String& value) { m_vmIdHasBeenSet = true; m_vmId = value; }

    /**
     * <p>The virtual machine id of the analyzable server.</p>
     */
    inline void SetVmId(Aws::String&& value) { m_vmIdHasBeenSet = true; m_vmId = std::move(value); }

    /**
     * <p>The virtual machine id of the analyzable server.</p>
     */
    inline void SetVmId(const char* value) { m_vmIdHasBeenSet = true; m_vmId.assign(value); }

    /**
     * <p>The virtual machine id of the analyzable server.</p>
     */
    inline AnalyzableServerSummary& WithVmId(const Aws::String& value) { SetVmId(value); return *this;}

    /**
     * <p>The virtual machine id of the analyzable server.</p>
     */
    inline AnalyzableServerSummary& WithVmId(Aws::String&& value) { SetVmId(std::move(value)); return *this;}

    /**
     * <p>The virtual machine id of the analyzable server.</p>
     */
    inline AnalyzableServerSummary& WithVmId(const char* value) { SetVmId(value); return *this;}

  private:

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_vmId;
    bool m_vmIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
