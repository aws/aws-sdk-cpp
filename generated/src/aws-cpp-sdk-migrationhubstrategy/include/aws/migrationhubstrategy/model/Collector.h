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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Collector();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Collector(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Collector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates the health of a collector. </p>
     */
    inline const CollectorHealth& GetCollectorHealth() const{ return m_collectorHealth; }
    inline bool CollectorHealthHasBeenSet() const { return m_collectorHealthHasBeenSet; }
    inline void SetCollectorHealth(const CollectorHealth& value) { m_collectorHealthHasBeenSet = true; m_collectorHealth = value; }
    inline void SetCollectorHealth(CollectorHealth&& value) { m_collectorHealthHasBeenSet = true; m_collectorHealth = std::move(value); }
    inline Collector& WithCollectorHealth(const CollectorHealth& value) { SetCollectorHealth(value); return *this;}
    inline Collector& WithCollectorHealth(CollectorHealth&& value) { SetCollectorHealth(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the collector. </p>
     */
    inline const Aws::String& GetCollectorId() const{ return m_collectorId; }
    inline bool CollectorIdHasBeenSet() const { return m_collectorIdHasBeenSet; }
    inline void SetCollectorId(const Aws::String& value) { m_collectorIdHasBeenSet = true; m_collectorId = value; }
    inline void SetCollectorId(Aws::String&& value) { m_collectorIdHasBeenSet = true; m_collectorId = std::move(value); }
    inline void SetCollectorId(const char* value) { m_collectorIdHasBeenSet = true; m_collectorId.assign(value); }
    inline Collector& WithCollectorId(const Aws::String& value) { SetCollectorId(value); return *this;}
    inline Collector& WithCollectorId(Aws::String&& value) { SetCollectorId(std::move(value)); return *this;}
    inline Collector& WithCollectorId(const char* value) { SetCollectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Current version of the collector that is running in the environment that you
     * specify. </p>
     */
    inline const Aws::String& GetCollectorVersion() const{ return m_collectorVersion; }
    inline bool CollectorVersionHasBeenSet() const { return m_collectorVersionHasBeenSet; }
    inline void SetCollectorVersion(const Aws::String& value) { m_collectorVersionHasBeenSet = true; m_collectorVersion = value; }
    inline void SetCollectorVersion(Aws::String&& value) { m_collectorVersionHasBeenSet = true; m_collectorVersion = std::move(value); }
    inline void SetCollectorVersion(const char* value) { m_collectorVersionHasBeenSet = true; m_collectorVersion.assign(value); }
    inline Collector& WithCollectorVersion(const Aws::String& value) { SetCollectorVersion(value); return *this;}
    inline Collector& WithCollectorVersion(Aws::String&& value) { SetCollectorVersion(std::move(value)); return *this;}
    inline Collector& WithCollectorVersion(const char* value) { SetCollectorVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary of the collector configuration.</p>
     */
    inline const ConfigurationSummary& GetConfigurationSummary() const{ return m_configurationSummary; }
    inline bool ConfigurationSummaryHasBeenSet() const { return m_configurationSummaryHasBeenSet; }
    inline void SetConfigurationSummary(const ConfigurationSummary& value) { m_configurationSummaryHasBeenSet = true; m_configurationSummary = value; }
    inline void SetConfigurationSummary(ConfigurationSummary&& value) { m_configurationSummaryHasBeenSet = true; m_configurationSummary = std::move(value); }
    inline Collector& WithConfigurationSummary(const ConfigurationSummary& value) { SetConfigurationSummary(value); return *this;}
    inline Collector& WithConfigurationSummary(ConfigurationSummary&& value) { SetConfigurationSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Hostname of the server that is hosting the collector. </p>
     */
    inline const Aws::String& GetHostName() const{ return m_hostName; }
    inline bool HostNameHasBeenSet() const { return m_hostNameHasBeenSet; }
    inline void SetHostName(const Aws::String& value) { m_hostNameHasBeenSet = true; m_hostName = value; }
    inline void SetHostName(Aws::String&& value) { m_hostNameHasBeenSet = true; m_hostName = std::move(value); }
    inline void SetHostName(const char* value) { m_hostNameHasBeenSet = true; m_hostName.assign(value); }
    inline Collector& WithHostName(const Aws::String& value) { SetHostName(value); return *this;}
    inline Collector& WithHostName(Aws::String&& value) { SetHostName(std::move(value)); return *this;}
    inline Collector& WithHostName(const char* value) { SetHostName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> IP address of the server that is hosting the collector. </p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline Collector& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline Collector& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline Collector& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Time when the collector last pinged the service. </p>
     */
    inline const Aws::String& GetLastActivityTimeStamp() const{ return m_lastActivityTimeStamp; }
    inline bool LastActivityTimeStampHasBeenSet() const { return m_lastActivityTimeStampHasBeenSet; }
    inline void SetLastActivityTimeStamp(const Aws::String& value) { m_lastActivityTimeStampHasBeenSet = true; m_lastActivityTimeStamp = value; }
    inline void SetLastActivityTimeStamp(Aws::String&& value) { m_lastActivityTimeStampHasBeenSet = true; m_lastActivityTimeStamp = std::move(value); }
    inline void SetLastActivityTimeStamp(const char* value) { m_lastActivityTimeStampHasBeenSet = true; m_lastActivityTimeStamp.assign(value); }
    inline Collector& WithLastActivityTimeStamp(const Aws::String& value) { SetLastActivityTimeStamp(value); return *this;}
    inline Collector& WithLastActivityTimeStamp(Aws::String&& value) { SetLastActivityTimeStamp(std::move(value)); return *this;}
    inline Collector& WithLastActivityTimeStamp(const char* value) { SetLastActivityTimeStamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Time when the collector registered with the service. </p>
     */
    inline const Aws::String& GetRegisteredTimeStamp() const{ return m_registeredTimeStamp; }
    inline bool RegisteredTimeStampHasBeenSet() const { return m_registeredTimeStampHasBeenSet; }
    inline void SetRegisteredTimeStamp(const Aws::String& value) { m_registeredTimeStampHasBeenSet = true; m_registeredTimeStamp = value; }
    inline void SetRegisteredTimeStamp(Aws::String&& value) { m_registeredTimeStampHasBeenSet = true; m_registeredTimeStamp = std::move(value); }
    inline void SetRegisteredTimeStamp(const char* value) { m_registeredTimeStampHasBeenSet = true; m_registeredTimeStamp.assign(value); }
    inline Collector& WithRegisteredTimeStamp(const Aws::String& value) { SetRegisteredTimeStamp(value); return *this;}
    inline Collector& WithRegisteredTimeStamp(Aws::String&& value) { SetRegisteredTimeStamp(std::move(value)); return *this;}
    inline Collector& WithRegisteredTimeStamp(const char* value) { SetRegisteredTimeStamp(value); return *this;}
    ///@}
  private:

    CollectorHealth m_collectorHealth;
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
