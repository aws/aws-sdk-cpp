/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/CollectorHealth.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/ConfigurationSummary.h>
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
   * <p> Process data collector that runs in the environment that you specify.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/Collector">AWS
   * API Reference</a></p>
   */
  class Collector
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Collector() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Collector(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Collector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates the health of a collector. </p>
     */
    inline CollectorHealth GetCollectorHealth() const { return m_collectorHealth; }
    inline bool CollectorHealthHasBeenSet() const { return m_collectorHealthHasBeenSet; }
    inline void SetCollectorHealth(CollectorHealth value) { m_collectorHealthHasBeenSet = true; m_collectorHealth = value; }
    inline Collector& WithCollectorHealth(CollectorHealth value) { SetCollectorHealth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the collector. </p>
     */
    inline const Aws::String& GetCollectorId() const { return m_collectorId; }
    inline bool CollectorIdHasBeenSet() const { return m_collectorIdHasBeenSet; }
    template<typename CollectorIdT = Aws::String>
    void SetCollectorId(CollectorIdT&& value) { m_collectorIdHasBeenSet = true; m_collectorId = std::forward<CollectorIdT>(value); }
    template<typename CollectorIdT = Aws::String>
    Collector& WithCollectorId(CollectorIdT&& value) { SetCollectorId(std::forward<CollectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Current version of the collector that is running in the environment that you
     * specify. </p>
     */
    inline const Aws::String& GetCollectorVersion() const { return m_collectorVersion; }
    inline bool CollectorVersionHasBeenSet() const { return m_collectorVersionHasBeenSet; }
    template<typename CollectorVersionT = Aws::String>
    void SetCollectorVersion(CollectorVersionT&& value) { m_collectorVersionHasBeenSet = true; m_collectorVersion = std::forward<CollectorVersionT>(value); }
    template<typename CollectorVersionT = Aws::String>
    Collector& WithCollectorVersion(CollectorVersionT&& value) { SetCollectorVersion(std::forward<CollectorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary of the collector configuration.</p>
     */
    inline const ConfigurationSummary& GetConfigurationSummary() const { return m_configurationSummary; }
    inline bool ConfigurationSummaryHasBeenSet() const { return m_configurationSummaryHasBeenSet; }
    template<typename ConfigurationSummaryT = ConfigurationSummary>
    void SetConfigurationSummary(ConfigurationSummaryT&& value) { m_configurationSummaryHasBeenSet = true; m_configurationSummary = std::forward<ConfigurationSummaryT>(value); }
    template<typename ConfigurationSummaryT = ConfigurationSummary>
    Collector& WithConfigurationSummary(ConfigurationSummaryT&& value) { SetConfigurationSummary(std::forward<ConfigurationSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Hostname of the server that is hosting the collector. </p>
     */
    inline const Aws::String& GetHostName() const { return m_hostName; }
    inline bool HostNameHasBeenSet() const { return m_hostNameHasBeenSet; }
    template<typename HostNameT = Aws::String>
    void SetHostName(HostNameT&& value) { m_hostNameHasBeenSet = true; m_hostName = std::forward<HostNameT>(value); }
    template<typename HostNameT = Aws::String>
    Collector& WithHostName(HostNameT&& value) { SetHostName(std::forward<HostNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> IP address of the server that is hosting the collector. </p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    Collector& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Time when the collector last pinged the service. </p>
     */
    inline const Aws::String& GetLastActivityTimeStamp() const { return m_lastActivityTimeStamp; }
    inline bool LastActivityTimeStampHasBeenSet() const { return m_lastActivityTimeStampHasBeenSet; }
    template<typename LastActivityTimeStampT = Aws::String>
    void SetLastActivityTimeStamp(LastActivityTimeStampT&& value) { m_lastActivityTimeStampHasBeenSet = true; m_lastActivityTimeStamp = std::forward<LastActivityTimeStampT>(value); }
    template<typename LastActivityTimeStampT = Aws::String>
    Collector& WithLastActivityTimeStamp(LastActivityTimeStampT&& value) { SetLastActivityTimeStamp(std::forward<LastActivityTimeStampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Time when the collector registered with the service. </p>
     */
    inline const Aws::String& GetRegisteredTimeStamp() const { return m_registeredTimeStamp; }
    inline bool RegisteredTimeStampHasBeenSet() const { return m_registeredTimeStampHasBeenSet; }
    template<typename RegisteredTimeStampT = Aws::String>
    void SetRegisteredTimeStamp(RegisteredTimeStampT&& value) { m_registeredTimeStampHasBeenSet = true; m_registeredTimeStamp = std::forward<RegisteredTimeStampT>(value); }
    template<typename RegisteredTimeStampT = Aws::String>
    Collector& WithRegisteredTimeStamp(RegisteredTimeStampT&& value) { SetRegisteredTimeStamp(std::forward<RegisteredTimeStampT>(value)); return *this;}
    ///@}
  private:

    CollectorHealth m_collectorHealth{CollectorHealth::NOT_SET};
    bool m_collectorHealthHasBeenSet = false;

    Aws::String m_collectorId;
    bool m_collectorIdHasBeenSet = false;

    Aws::String m_collectorVersion;
    bool m_collectorVersionHasBeenSet = false;

    ConfigurationSummary m_configurationSummary;
    bool m_configurationSummaryHasBeenSet = false;

    Aws::String m_hostName;
    bool m_hostNameHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_lastActivityTimeStamp;
    bool m_lastActivityTimeStampHasBeenSet = false;

    Aws::String m_registeredTimeStamp;
    bool m_registeredTimeStampHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
