/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/MQRequest.h>
#include <aws/mq/model/AuthenticationStrategy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/ConfigurationId.h>
#include <aws/mq/model/LdapServerMetadataInput.h>
#include <aws/mq/model/Logs.h>
#include <aws/mq/model/WeeklyStartTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/model/DataReplicationMode.h>
#include <utility>

namespace Aws
{
namespace MQ
{
namespace Model
{

  /**
   * <p>Updates the broker using the specified properties.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UpdateBrokerRequest">AWS
   * API Reference</a></p>
   */
  class UpdateBrokerRequest : public MQRequest
  {
  public:
    AWS_MQ_API UpdateBrokerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBroker"; }

    AWS_MQ_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Optional. The authentication strategy used to secure the broker. The default
     * is SIMPLE.</p>
     */
    inline AuthenticationStrategy GetAuthenticationStrategy() const { return m_authenticationStrategy; }
    inline bool AuthenticationStrategyHasBeenSet() const { return m_authenticationStrategyHasBeenSet; }
    inline void SetAuthenticationStrategy(AuthenticationStrategy value) { m_authenticationStrategyHasBeenSet = true; m_authenticationStrategy = value; }
    inline UpdateBrokerRequest& WithAuthenticationStrategy(AuthenticationStrategy value) { SetAuthenticationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables automatic upgrades to new patch versions for brokers as new versions
     * are released and supported by Amazon MQ. Automatic upgrades occur during the
     * scheduled maintenance window or after a manual broker reboot.</p> <p>Must
     * be set to true for ActiveMQ brokers version 5.18 and above and for RabbitMQ
     * brokers version 3.13 and above.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline UpdateBrokerRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline const Aws::String& GetBrokerId() const { return m_brokerId; }
    inline bool BrokerIdHasBeenSet() const { return m_brokerIdHasBeenSet; }
    template<typename BrokerIdT = Aws::String>
    void SetBrokerId(BrokerIdT&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::forward<BrokerIdT>(value); }
    template<typename BrokerIdT = Aws::String>
    UpdateBrokerRequest& WithBrokerId(BrokerIdT&& value) { SetBrokerId(std::forward<BrokerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of information about the configuration.</p>
     */
    inline const ConfigurationId& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = ConfigurationId>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = ConfigurationId>
    UpdateBrokerRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker engine version. For more information, see the <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/activemq-version-management.html">ActiveMQ
     * version management</a> and the <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/rabbitmq-version-management.html">RabbitMQ
     * version management</a> sections in the Amazon MQ Developer Guide.</p>
     * <p>When upgrading to ActiveMQ version 5.18 and above or RabbitMQ version
     * 3.13 and above, you must have autoMinorVersionUpgrade set to true for the
     * broker.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    UpdateBrokerRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline const Aws::String& GetHostInstanceType() const { return m_hostInstanceType; }
    inline bool HostInstanceTypeHasBeenSet() const { return m_hostInstanceTypeHasBeenSet; }
    template<typename HostInstanceTypeT = Aws::String>
    void SetHostInstanceType(HostInstanceTypeT&& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = std::forward<HostInstanceTypeT>(value); }
    template<typename HostInstanceTypeT = Aws::String>
    UpdateBrokerRequest& WithHostInstanceType(HostInstanceTypeT&& value) { SetHostInstanceType(std::forward<HostInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker. Does not apply to RabbitMQ brokers.</p>
     */
    inline const LdapServerMetadataInput& GetLdapServerMetadata() const { return m_ldapServerMetadata; }
    inline bool LdapServerMetadataHasBeenSet() const { return m_ldapServerMetadataHasBeenSet; }
    template<typename LdapServerMetadataT = LdapServerMetadataInput>
    void SetLdapServerMetadata(LdapServerMetadataT&& value) { m_ldapServerMetadataHasBeenSet = true; m_ldapServerMetadata = std::forward<LdapServerMetadataT>(value); }
    template<typename LdapServerMetadataT = LdapServerMetadataInput>
    UpdateBrokerRequest& WithLdapServerMetadata(LdapServerMetadataT&& value) { SetLdapServerMetadata(std::forward<LdapServerMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables Amazon CloudWatch logging for brokers.</p>
     */
    inline const Logs& GetLogs() const { return m_logs; }
    inline bool LogsHasBeenSet() const { return m_logsHasBeenSet; }
    template<typename LogsT = Logs>
    void SetLogs(LogsT&& value) { m_logsHasBeenSet = true; m_logs = std::forward<LogsT>(value); }
    template<typename LogsT = Logs>
    UpdateBrokerRequest& WithLogs(LogsT&& value) { SetLogs(std::forward<LogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline const WeeklyStartTime& GetMaintenanceWindowStartTime() const { return m_maintenanceWindowStartTime; }
    inline bool MaintenanceWindowStartTimeHasBeenSet() const { return m_maintenanceWindowStartTimeHasBeenSet; }
    template<typename MaintenanceWindowStartTimeT = WeeklyStartTime>
    void SetMaintenanceWindowStartTime(MaintenanceWindowStartTimeT&& value) { m_maintenanceWindowStartTimeHasBeenSet = true; m_maintenanceWindowStartTime = std::forward<MaintenanceWindowStartTimeT>(value); }
    template<typename MaintenanceWindowStartTimeT = WeeklyStartTime>
    UpdateBrokerRequest& WithMaintenanceWindowStartTime(MaintenanceWindowStartTimeT&& value) { SetMaintenanceWindowStartTime(std::forward<MaintenanceWindowStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    UpdateBrokerRequest& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    UpdateBrokerRequest& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines whether this broker is a part of a data replication pair.</p>
     */
    inline DataReplicationMode GetDataReplicationMode() const { return m_dataReplicationMode; }
    inline bool DataReplicationModeHasBeenSet() const { return m_dataReplicationModeHasBeenSet; }
    inline void SetDataReplicationMode(DataReplicationMode value) { m_dataReplicationModeHasBeenSet = true; m_dataReplicationMode = value; }
    inline UpdateBrokerRequest& WithDataReplicationMode(DataReplicationMode value) { SetDataReplicationMode(value); return *this;}
    ///@}
  private:

    AuthenticationStrategy m_authenticationStrategy{AuthenticationStrategy::NOT_SET};
    bool m_authenticationStrategyHasBeenSet = false;

    bool m_autoMinorVersionUpgrade{false};
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::String m_brokerId;
    bool m_brokerIdHasBeenSet = false;

    ConfigurationId m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_hostInstanceType;
    bool m_hostInstanceTypeHasBeenSet = false;

    LdapServerMetadataInput m_ldapServerMetadata;
    bool m_ldapServerMetadataHasBeenSet = false;

    Logs m_logs;
    bool m_logsHasBeenSet = false;

    WeeklyStartTime m_maintenanceWindowStartTime;
    bool m_maintenanceWindowStartTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    DataReplicationMode m_dataReplicationMode{DataReplicationMode::NOT_SET};
    bool m_dataReplicationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
