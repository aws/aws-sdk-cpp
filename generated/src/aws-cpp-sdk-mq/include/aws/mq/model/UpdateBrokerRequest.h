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
    AWS_MQ_API UpdateBrokerRequest();

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
    inline const AuthenticationStrategy& GetAuthenticationStrategy() const{ return m_authenticationStrategy; }
    inline bool AuthenticationStrategyHasBeenSet() const { return m_authenticationStrategyHasBeenSet; }
    inline void SetAuthenticationStrategy(const AuthenticationStrategy& value) { m_authenticationStrategyHasBeenSet = true; m_authenticationStrategy = value; }
    inline void SetAuthenticationStrategy(AuthenticationStrategy&& value) { m_authenticationStrategyHasBeenSet = true; m_authenticationStrategy = std::move(value); }
    inline UpdateBrokerRequest& WithAuthenticationStrategy(const AuthenticationStrategy& value) { SetAuthenticationStrategy(value); return *this;}
    inline UpdateBrokerRequest& WithAuthenticationStrategy(AuthenticationStrategy&& value) { SetAuthenticationStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables automatic upgrades to new patch versions for brokers as new versions
     * are released and supported by Amazon MQ. Automatic upgrades occur during the
     * scheduled maintenance window or after a manual broker reboot.</p> <p>Must
     * be set to true for ActiveMQ brokers version 5.18 and above and for RabbitMQ
     * brokers version 3.13 and above.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline UpdateBrokerRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }
    inline bool BrokerIdHasBeenSet() const { return m_brokerIdHasBeenSet; }
    inline void SetBrokerId(const Aws::String& value) { m_brokerIdHasBeenSet = true; m_brokerId = value; }
    inline void SetBrokerId(Aws::String&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::move(value); }
    inline void SetBrokerId(const char* value) { m_brokerIdHasBeenSet = true; m_brokerId.assign(value); }
    inline UpdateBrokerRequest& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}
    inline UpdateBrokerRequest& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}
    inline UpdateBrokerRequest& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of information about the configuration.</p>
     */
    inline const ConfigurationId& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const ConfigurationId& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(ConfigurationId&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline UpdateBrokerRequest& WithConfiguration(const ConfigurationId& value) { SetConfiguration(value); return *this;}
    inline UpdateBrokerRequest& WithConfiguration(ConfigurationId&& value) { SetConfiguration(std::move(value)); return *this;}
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
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline UpdateBrokerRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline UpdateBrokerRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline UpdateBrokerRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline const Aws::String& GetHostInstanceType() const{ return m_hostInstanceType; }
    inline bool HostInstanceTypeHasBeenSet() const { return m_hostInstanceTypeHasBeenSet; }
    inline void SetHostInstanceType(const Aws::String& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = value; }
    inline void SetHostInstanceType(Aws::String&& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = std::move(value); }
    inline void SetHostInstanceType(const char* value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType.assign(value); }
    inline UpdateBrokerRequest& WithHostInstanceType(const Aws::String& value) { SetHostInstanceType(value); return *this;}
    inline UpdateBrokerRequest& WithHostInstanceType(Aws::String&& value) { SetHostInstanceType(std::move(value)); return *this;}
    inline UpdateBrokerRequest& WithHostInstanceType(const char* value) { SetHostInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker. Does not apply to RabbitMQ brokers.</p>
     */
    inline const LdapServerMetadataInput& GetLdapServerMetadata() const{ return m_ldapServerMetadata; }
    inline bool LdapServerMetadataHasBeenSet() const { return m_ldapServerMetadataHasBeenSet; }
    inline void SetLdapServerMetadata(const LdapServerMetadataInput& value) { m_ldapServerMetadataHasBeenSet = true; m_ldapServerMetadata = value; }
    inline void SetLdapServerMetadata(LdapServerMetadataInput&& value) { m_ldapServerMetadataHasBeenSet = true; m_ldapServerMetadata = std::move(value); }
    inline UpdateBrokerRequest& WithLdapServerMetadata(const LdapServerMetadataInput& value) { SetLdapServerMetadata(value); return *this;}
    inline UpdateBrokerRequest& WithLdapServerMetadata(LdapServerMetadataInput&& value) { SetLdapServerMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables Amazon CloudWatch logging for brokers.</p>
     */
    inline const Logs& GetLogs() const{ return m_logs; }
    inline bool LogsHasBeenSet() const { return m_logsHasBeenSet; }
    inline void SetLogs(const Logs& value) { m_logsHasBeenSet = true; m_logs = value; }
    inline void SetLogs(Logs&& value) { m_logsHasBeenSet = true; m_logs = std::move(value); }
    inline UpdateBrokerRequest& WithLogs(const Logs& value) { SetLogs(value); return *this;}
    inline UpdateBrokerRequest& WithLogs(Logs&& value) { SetLogs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline const WeeklyStartTime& GetMaintenanceWindowStartTime() const{ return m_maintenanceWindowStartTime; }
    inline bool MaintenanceWindowStartTimeHasBeenSet() const { return m_maintenanceWindowStartTimeHasBeenSet; }
    inline void SetMaintenanceWindowStartTime(const WeeklyStartTime& value) { m_maintenanceWindowStartTimeHasBeenSet = true; m_maintenanceWindowStartTime = value; }
    inline void SetMaintenanceWindowStartTime(WeeklyStartTime&& value) { m_maintenanceWindowStartTimeHasBeenSet = true; m_maintenanceWindowStartTime = std::move(value); }
    inline UpdateBrokerRequest& WithMaintenanceWindowStartTime(const WeeklyStartTime& value) { SetMaintenanceWindowStartTime(value); return *this;}
    inline UpdateBrokerRequest& WithMaintenanceWindowStartTime(WeeklyStartTime&& value) { SetMaintenanceWindowStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline UpdateBrokerRequest& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline UpdateBrokerRequest& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline UpdateBrokerRequest& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline UpdateBrokerRequest& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline UpdateBrokerRequest& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines whether this broker is a part of a data replication pair.</p>
     */
    inline const DataReplicationMode& GetDataReplicationMode() const{ return m_dataReplicationMode; }
    inline bool DataReplicationModeHasBeenSet() const { return m_dataReplicationModeHasBeenSet; }
    inline void SetDataReplicationMode(const DataReplicationMode& value) { m_dataReplicationModeHasBeenSet = true; m_dataReplicationMode = value; }
    inline void SetDataReplicationMode(DataReplicationMode&& value) { m_dataReplicationModeHasBeenSet = true; m_dataReplicationMode = std::move(value); }
    inline UpdateBrokerRequest& WithDataReplicationMode(const DataReplicationMode& value) { SetDataReplicationMode(value); return *this;}
    inline UpdateBrokerRequest& WithDataReplicationMode(DataReplicationMode&& value) { SetDataReplicationMode(std::move(value)); return *this;}
    ///@}
  private:

    AuthenticationStrategy m_authenticationStrategy;
    bool m_authenticationStrategyHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
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

    DataReplicationMode m_dataReplicationMode;
    bool m_dataReplicationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
