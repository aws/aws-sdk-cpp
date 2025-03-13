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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AnalyzableServerSummary() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AnalyzableServerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AnalyzableServerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The host name of the analyzable server.</p>
     */
    inline const Aws::String& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = Aws::String>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = Aws::String>
    AnalyzableServerSummary& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ip address of the analyzable server.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    AnalyzableServerSummary& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source of the analyzable server.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    AnalyzableServerSummary& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual machine id of the analyzable server.</p>
     */
    inline const Aws::String& GetVmId() const { return m_vmId; }
    inline bool VmIdHasBeenSet() const { return m_vmIdHasBeenSet; }
    template<typename VmIdT = Aws::String>
    void SetVmId(VmIdT&& value) { m_vmIdHasBeenSet = true; m_vmId = std::forward<VmIdT>(value); }
    template<typename VmIdT = Aws::String>
    AnalyzableServerSummary& WithVmId(VmIdT&& value) { SetVmId(std::forward<VmIdT>(value)); return *this;}
    ///@}
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
