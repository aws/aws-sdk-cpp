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


    /**
     * <p>Optional. The authentication strategy used to secure the broker. The default
     * is SIMPLE.</p>
     */
    inline const AuthenticationStrategy& GetAuthenticationStrategy() const{ return m_authenticationStrategy; }

    /**
     * <p>Optional. The authentication strategy used to secure the broker. The default
     * is SIMPLE.</p>
     */
    inline bool AuthenticationStrategyHasBeenSet() const { return m_authenticationStrategyHasBeenSet; }

    /**
     * <p>Optional. The authentication strategy used to secure the broker. The default
     * is SIMPLE.</p>
     */
    inline void SetAuthenticationStrategy(const AuthenticationStrategy& value) { m_authenticationStrategyHasBeenSet = true; m_authenticationStrategy = value; }

    /**
     * <p>Optional. The authentication strategy used to secure the broker. The default
     * is SIMPLE.</p>
     */
    inline void SetAuthenticationStrategy(AuthenticationStrategy&& value) { m_authenticationStrategyHasBeenSet = true; m_authenticationStrategy = std::move(value); }

    /**
     * <p>Optional. The authentication strategy used to secure the broker. The default
     * is SIMPLE.</p>
     */
    inline UpdateBrokerRequest& WithAuthenticationStrategy(const AuthenticationStrategy& value) { SetAuthenticationStrategy(value); return *this;}

    /**
     * <p>Optional. The authentication strategy used to secure the broker. The default
     * is SIMPLE.</p>
     */
    inline UpdateBrokerRequest& WithAuthenticationStrategy(AuthenticationStrategy&& value) { SetAuthenticationStrategy(std::move(value)); return *this;}


    /**
     * <p>Enables automatic upgrades to new minor versions for brokers, as new versions
     * are released and supported by Amazon MQ. Automatic upgrades occur during the
     * scheduled maintenance window of the broker or after a manual broker reboot.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>Enables automatic upgrades to new minor versions for brokers, as new versions
     * are released and supported by Amazon MQ. Automatic upgrades occur during the
     * scheduled maintenance window of the broker or after a manual broker reboot.</p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p>Enables automatic upgrades to new minor versions for brokers, as new versions
     * are released and supported by Amazon MQ. Automatic upgrades occur during the
     * scheduled maintenance window of the broker or after a manual broker reboot.</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>Enables automatic upgrades to new minor versions for brokers, as new versions
     * are released and supported by Amazon MQ. Automatic upgrades occur during the
     * scheduled maintenance window of the broker or after a manual broker reboot.</p>
     */
    inline UpdateBrokerRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline bool BrokerIdHasBeenSet() const { return m_brokerIdHasBeenSet; }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(const Aws::String& value) { m_brokerIdHasBeenSet = true; m_brokerId = value; }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(Aws::String&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::move(value); }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(const char* value) { m_brokerIdHasBeenSet = true; m_brokerId.assign(value); }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline UpdateBrokerRequest& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline UpdateBrokerRequest& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline UpdateBrokerRequest& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}


    /**
     * <p>A list of information about the configuration.</p>
     */
    inline const ConfigurationId& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>A list of information about the configuration.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>A list of information about the configuration.</p>
     */
    inline void SetConfiguration(const ConfigurationId& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>A list of information about the configuration.</p>
     */
    inline void SetConfiguration(ConfigurationId&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>A list of information about the configuration.</p>
     */
    inline UpdateBrokerRequest& WithConfiguration(const ConfigurationId& value) { SetConfiguration(value); return *this;}

    /**
     * <p>A list of information about the configuration.</p>
     */
    inline UpdateBrokerRequest& WithConfiguration(ConfigurationId&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The broker engine version. For a list of supported engine versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The broker engine version. For a list of supported engine versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The broker engine version. For a list of supported engine versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The broker engine version. For a list of supported engine versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The broker engine version. For a list of supported engine versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The broker engine version. For a list of supported engine versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline UpdateBrokerRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The broker engine version. For a list of supported engine versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline UpdateBrokerRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The broker engine version. For a list of supported engine versions, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker-engine.html">Supported
     * engines</a>.</p>
     */
    inline UpdateBrokerRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline const Aws::String& GetHostInstanceType() const{ return m_hostInstanceType; }

    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline bool HostInstanceTypeHasBeenSet() const { return m_hostInstanceTypeHasBeenSet; }

    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline void SetHostInstanceType(const Aws::String& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = value; }

    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline void SetHostInstanceType(Aws::String&& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = std::move(value); }

    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline void SetHostInstanceType(const char* value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType.assign(value); }

    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline UpdateBrokerRequest& WithHostInstanceType(const Aws::String& value) { SetHostInstanceType(value); return *this;}

    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline UpdateBrokerRequest& WithHostInstanceType(Aws::String&& value) { SetHostInstanceType(std::move(value)); return *this;}

    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline UpdateBrokerRequest& WithHostInstanceType(const char* value) { SetHostInstanceType(value); return *this;}


    /**
     * <p>Optional. The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker. Does not apply to RabbitMQ brokers.</p>
     */
    inline const LdapServerMetadataInput& GetLdapServerMetadata() const{ return m_ldapServerMetadata; }

    /**
     * <p>Optional. The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker. Does not apply to RabbitMQ brokers.</p>
     */
    inline bool LdapServerMetadataHasBeenSet() const { return m_ldapServerMetadataHasBeenSet; }

    /**
     * <p>Optional. The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker. Does not apply to RabbitMQ brokers.</p>
     */
    inline void SetLdapServerMetadata(const LdapServerMetadataInput& value) { m_ldapServerMetadataHasBeenSet = true; m_ldapServerMetadata = value; }

    /**
     * <p>Optional. The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker. Does not apply to RabbitMQ brokers.</p>
     */
    inline void SetLdapServerMetadata(LdapServerMetadataInput&& value) { m_ldapServerMetadataHasBeenSet = true; m_ldapServerMetadata = std::move(value); }

    /**
     * <p>Optional. The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker. Does not apply to RabbitMQ brokers.</p>
     */
    inline UpdateBrokerRequest& WithLdapServerMetadata(const LdapServerMetadataInput& value) { SetLdapServerMetadata(value); return *this;}

    /**
     * <p>Optional. The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker. Does not apply to RabbitMQ brokers.</p>
     */
    inline UpdateBrokerRequest& WithLdapServerMetadata(LdapServerMetadataInput&& value) { SetLdapServerMetadata(std::move(value)); return *this;}


    /**
     * <p>Enables Amazon CloudWatch logging for brokers.</p>
     */
    inline const Logs& GetLogs() const{ return m_logs; }

    /**
     * <p>Enables Amazon CloudWatch logging for brokers.</p>
     */
    inline bool LogsHasBeenSet() const { return m_logsHasBeenSet; }

    /**
     * <p>Enables Amazon CloudWatch logging for brokers.</p>
     */
    inline void SetLogs(const Logs& value) { m_logsHasBeenSet = true; m_logs = value; }

    /**
     * <p>Enables Amazon CloudWatch logging for brokers.</p>
     */
    inline void SetLogs(Logs&& value) { m_logsHasBeenSet = true; m_logs = std::move(value); }

    /**
     * <p>Enables Amazon CloudWatch logging for brokers.</p>
     */
    inline UpdateBrokerRequest& WithLogs(const Logs& value) { SetLogs(value); return *this;}

    /**
     * <p>Enables Amazon CloudWatch logging for brokers.</p>
     */
    inline UpdateBrokerRequest& WithLogs(Logs&& value) { SetLogs(std::move(value)); return *this;}


    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline const WeeklyStartTime& GetMaintenanceWindowStartTime() const{ return m_maintenanceWindowStartTime; }

    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline bool MaintenanceWindowStartTimeHasBeenSet() const { return m_maintenanceWindowStartTimeHasBeenSet; }

    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline void SetMaintenanceWindowStartTime(const WeeklyStartTime& value) { m_maintenanceWindowStartTimeHasBeenSet = true; m_maintenanceWindowStartTime = value; }

    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline void SetMaintenanceWindowStartTime(WeeklyStartTime&& value) { m_maintenanceWindowStartTimeHasBeenSet = true; m_maintenanceWindowStartTime = std::move(value); }

    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline UpdateBrokerRequest& WithMaintenanceWindowStartTime(const WeeklyStartTime& value) { SetMaintenanceWindowStartTime(value); return *this;}

    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline UpdateBrokerRequest& WithMaintenanceWindowStartTime(WeeklyStartTime&& value) { SetMaintenanceWindowStartTime(std::move(value)); return *this;}


    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline UpdateBrokerRequest& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline UpdateBrokerRequest& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline UpdateBrokerRequest& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline UpdateBrokerRequest& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline UpdateBrokerRequest& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

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
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
