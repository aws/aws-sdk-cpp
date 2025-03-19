/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/model/AuthenticationStrategy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/ConfigurationId.h>
#include <aws/mq/model/LdapServerMetadataOutput.h>
#include <aws/mq/model/Logs.h>
#include <aws/mq/model/WeeklyStartTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/model/DataReplicationMetadataOutput.h>
#include <aws/mq/model/DataReplicationMode.h>
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
namespace MQ
{
namespace Model
{
  class UpdateBrokerResult
  {
  public:
    AWS_MQ_API UpdateBrokerResult() = default;
    AWS_MQ_API UpdateBrokerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MQ_API UpdateBrokerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Optional. The authentication strategy used to secure the broker. The default
     * is SIMPLE.</p>
     */
    inline AuthenticationStrategy GetAuthenticationStrategy() const { return m_authenticationStrategy; }
    inline void SetAuthenticationStrategy(AuthenticationStrategy value) { m_authenticationStrategyHasBeenSet = true; m_authenticationStrategy = value; }
    inline UpdateBrokerResult& WithAuthenticationStrategy(AuthenticationStrategy value) { SetAuthenticationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables automatic upgrades to new patch versions for brokers as new versions
     * are released and supported by Amazon MQ. Automatic upgrades occur during the
     * scheduled maintenance window or after a manual broker reboot.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline UpdateBrokerResult& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline const Aws::String& GetBrokerId() const { return m_brokerId; }
    template<typename BrokerIdT = Aws::String>
    void SetBrokerId(BrokerIdT&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::forward<BrokerIdT>(value); }
    template<typename BrokerIdT = Aws::String>
    UpdateBrokerResult& WithBrokerId(BrokerIdT&& value) { SetBrokerId(std::forward<BrokerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the updated configuration.</p>
     */
    inline const ConfigurationId& GetConfiguration() const { return m_configuration; }
    template<typename ConfigurationT = ConfigurationId>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = ConfigurationId>
    UpdateBrokerResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker engine version to upgrade to. For more information, see the <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/activemq-version-management.html">ActiveMQ
     * version management</a> and the <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/rabbitmq-version-management.html">RabbitMQ
     * version management</a> sections in the Amazon MQ Developer Guide.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    UpdateBrokerResult& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline const Aws::String& GetHostInstanceType() const { return m_hostInstanceType; }
    template<typename HostInstanceTypeT = Aws::String>
    void SetHostInstanceType(HostInstanceTypeT&& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = std::forward<HostInstanceTypeT>(value); }
    template<typename HostInstanceTypeT = Aws::String>
    UpdateBrokerResult& WithHostInstanceType(HostInstanceTypeT&& value) { SetHostInstanceType(std::forward<HostInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker. Does not apply to RabbitMQ brokers.</p>
     */
    inline const LdapServerMetadataOutput& GetLdapServerMetadata() const { return m_ldapServerMetadata; }
    template<typename LdapServerMetadataT = LdapServerMetadataOutput>
    void SetLdapServerMetadata(LdapServerMetadataT&& value) { m_ldapServerMetadataHasBeenSet = true; m_ldapServerMetadata = std::forward<LdapServerMetadataT>(value); }
    template<typename LdapServerMetadataT = LdapServerMetadataOutput>
    UpdateBrokerResult& WithLdapServerMetadata(LdapServerMetadataT&& value) { SetLdapServerMetadata(std::forward<LdapServerMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of information about logs to be enabled for the specified
     * broker.</p>
     */
    inline const Logs& GetLogs() const { return m_logs; }
    template<typename LogsT = Logs>
    void SetLogs(LogsT&& value) { m_logsHasBeenSet = true; m_logs = std::forward<LogsT>(value); }
    template<typename LogsT = Logs>
    UpdateBrokerResult& WithLogs(LogsT&& value) { SetLogs(std::forward<LogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline const WeeklyStartTime& GetMaintenanceWindowStartTime() const { return m_maintenanceWindowStartTime; }
    template<typename MaintenanceWindowStartTimeT = WeeklyStartTime>
    void SetMaintenanceWindowStartTime(MaintenanceWindowStartTimeT&& value) { m_maintenanceWindowStartTimeHasBeenSet = true; m_maintenanceWindowStartTime = std::forward<MaintenanceWindowStartTimeT>(value); }
    template<typename MaintenanceWindowStartTimeT = WeeklyStartTime>
    UpdateBrokerResult& WithMaintenanceWindowStartTime(MaintenanceWindowStartTimeT&& value) { SetMaintenanceWindowStartTime(std::forward<MaintenanceWindowStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of security groups (1 minimum, 5 maximum) that authorizes
     * connections to brokers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    UpdateBrokerResult& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    UpdateBrokerResult& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The replication details of the data replication-enabled broker. Only returned
     * if dataReplicationMode is set to CRDR.</p>
     */
    inline const DataReplicationMetadataOutput& GetDataReplicationMetadata() const { return m_dataReplicationMetadata; }
    template<typename DataReplicationMetadataT = DataReplicationMetadataOutput>
    void SetDataReplicationMetadata(DataReplicationMetadataT&& value) { m_dataReplicationMetadataHasBeenSet = true; m_dataReplicationMetadata = std::forward<DataReplicationMetadataT>(value); }
    template<typename DataReplicationMetadataT = DataReplicationMetadataOutput>
    UpdateBrokerResult& WithDataReplicationMetadata(DataReplicationMetadataT&& value) { SetDataReplicationMetadata(std::forward<DataReplicationMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether this broker is a part of a data replication pair.</p>
     */
    inline DataReplicationMode GetDataReplicationMode() const { return m_dataReplicationMode; }
    inline void SetDataReplicationMode(DataReplicationMode value) { m_dataReplicationModeHasBeenSet = true; m_dataReplicationMode = value; }
    inline UpdateBrokerResult& WithDataReplicationMode(DataReplicationMode value) { SetDataReplicationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pending replication details of the data replication-enabled broker. Only
     * returned if pendingDataReplicationMode is set to CRDR.</p>
     */
    inline const DataReplicationMetadataOutput& GetPendingDataReplicationMetadata() const { return m_pendingDataReplicationMetadata; }
    template<typename PendingDataReplicationMetadataT = DataReplicationMetadataOutput>
    void SetPendingDataReplicationMetadata(PendingDataReplicationMetadataT&& value) { m_pendingDataReplicationMetadataHasBeenSet = true; m_pendingDataReplicationMetadata = std::forward<PendingDataReplicationMetadataT>(value); }
    template<typename PendingDataReplicationMetadataT = DataReplicationMetadataOutput>
    UpdateBrokerResult& WithPendingDataReplicationMetadata(PendingDataReplicationMetadataT&& value) { SetPendingDataReplicationMetadata(std::forward<PendingDataReplicationMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether this broker will be a part of a data replication pair after
     * reboot.</p>
     */
    inline DataReplicationMode GetPendingDataReplicationMode() const { return m_pendingDataReplicationMode; }
    inline void SetPendingDataReplicationMode(DataReplicationMode value) { m_pendingDataReplicationModeHasBeenSet = true; m_pendingDataReplicationMode = value; }
    inline UpdateBrokerResult& WithPendingDataReplicationMode(DataReplicationMode value) { SetPendingDataReplicationMode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateBrokerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    LdapServerMetadataOutput m_ldapServerMetadata;
    bool m_ldapServerMetadataHasBeenSet = false;

    Logs m_logs;
    bool m_logsHasBeenSet = false;

    WeeklyStartTime m_maintenanceWindowStartTime;
    bool m_maintenanceWindowStartTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    DataReplicationMetadataOutput m_dataReplicationMetadata;
    bool m_dataReplicationMetadataHasBeenSet = false;

    DataReplicationMode m_dataReplicationMode{DataReplicationMode::NOT_SET};
    bool m_dataReplicationModeHasBeenSet = false;

    DataReplicationMetadataOutput m_pendingDataReplicationMetadata;
    bool m_pendingDataReplicationMetadataHasBeenSet = false;

    DataReplicationMode m_pendingDataReplicationMode{DataReplicationMode::NOT_SET};
    bool m_pendingDataReplicationModeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
