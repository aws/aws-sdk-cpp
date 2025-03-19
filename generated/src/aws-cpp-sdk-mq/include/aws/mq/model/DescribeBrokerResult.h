/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/model/AuthenticationStrategy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/BrokerState.h>
#include <aws/mq/model/Configurations.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mq/model/DeploymentMode.h>
#include <aws/mq/model/EncryptionOptions.h>
#include <aws/mq/model/EngineType.h>
#include <aws/mq/model/LdapServerMetadataOutput.h>
#include <aws/mq/model/LogsSummary.h>
#include <aws/mq/model/WeeklyStartTime.h>
#include <aws/mq/model/BrokerStorageType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mq/model/DataReplicationMetadataOutput.h>
#include <aws/mq/model/DataReplicationMode.h>
#include <aws/mq/model/ActionRequired.h>
#include <aws/mq/model/BrokerInstance.h>
#include <aws/mq/model/UserSummary.h>
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
  class DescribeBrokerResult
  {
  public:
    AWS_MQ_API DescribeBrokerResult() = default;
    AWS_MQ_API DescribeBrokerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MQ_API DescribeBrokerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Actions required for a broker.</p>
     */
    inline const Aws::Vector<ActionRequired>& GetActionsRequired() const { return m_actionsRequired; }
    template<typename ActionsRequiredT = Aws::Vector<ActionRequired>>
    void SetActionsRequired(ActionsRequiredT&& value) { m_actionsRequiredHasBeenSet = true; m_actionsRequired = std::forward<ActionsRequiredT>(value); }
    template<typename ActionsRequiredT = Aws::Vector<ActionRequired>>
    DescribeBrokerResult& WithActionsRequired(ActionsRequiredT&& value) { SetActionsRequired(std::forward<ActionsRequiredT>(value)); return *this;}
    template<typename ActionsRequiredT = ActionRequired>
    DescribeBrokerResult& AddActionsRequired(ActionsRequiredT&& value) { m_actionsRequiredHasBeenSet = true; m_actionsRequired.emplace_back(std::forward<ActionsRequiredT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authentication strategy used to secure the broker. The default is
     * SIMPLE.</p>
     */
    inline AuthenticationStrategy GetAuthenticationStrategy() const { return m_authenticationStrategy; }
    inline void SetAuthenticationStrategy(AuthenticationStrategy value) { m_authenticationStrategyHasBeenSet = true; m_authenticationStrategy = value; }
    inline DescribeBrokerResult& WithAuthenticationStrategy(AuthenticationStrategy value) { SetAuthenticationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables automatic upgrades to new patch versions for brokers as new versions
     * are released and supported by Amazon MQ. Automatic upgrades occur during the
     * scheduled maintenance window or after a manual broker reboot.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline DescribeBrokerResult& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetBrokerArn() const { return m_brokerArn; }
    template<typename BrokerArnT = Aws::String>
    void SetBrokerArn(BrokerArnT&& value) { m_brokerArnHasBeenSet = true; m_brokerArn = std::forward<BrokerArnT>(value); }
    template<typename BrokerArnT = Aws::String>
    DescribeBrokerResult& WithBrokerArn(BrokerArnT&& value) { SetBrokerArn(std::forward<BrokerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline const Aws::String& GetBrokerId() const { return m_brokerId; }
    template<typename BrokerIdT = Aws::String>
    void SetBrokerId(BrokerIdT&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::forward<BrokerIdT>(value); }
    template<typename BrokerIdT = Aws::String>
    DescribeBrokerResult& WithBrokerId(BrokerIdT&& value) { SetBrokerId(std::forward<BrokerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of information about allocated brokers.</p>
     */
    inline const Aws::Vector<BrokerInstance>& GetBrokerInstances() const { return m_brokerInstances; }
    template<typename BrokerInstancesT = Aws::Vector<BrokerInstance>>
    void SetBrokerInstances(BrokerInstancesT&& value) { m_brokerInstancesHasBeenSet = true; m_brokerInstances = std::forward<BrokerInstancesT>(value); }
    template<typename BrokerInstancesT = Aws::Vector<BrokerInstance>>
    DescribeBrokerResult& WithBrokerInstances(BrokerInstancesT&& value) { SetBrokerInstances(std::forward<BrokerInstancesT>(value)); return *this;}
    template<typename BrokerInstancesT = BrokerInstance>
    DescribeBrokerResult& AddBrokerInstances(BrokerInstancesT&& value) { m_brokerInstancesHasBeenSet = true; m_brokerInstances.emplace_back(std::forward<BrokerInstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The broker's name. This value must be unique in your Amazon Web Services
     * account account, 1-50 characters long, must contain only letters, numbers,
     * dashes, and underscores, and must not contain white spaces, brackets, wildcard
     * characters, or special characters.</p>
     */
    inline const Aws::String& GetBrokerName() const { return m_brokerName; }
    template<typename BrokerNameT = Aws::String>
    void SetBrokerName(BrokerNameT&& value) { m_brokerNameHasBeenSet = true; m_brokerName = std::forward<BrokerNameT>(value); }
    template<typename BrokerNameT = Aws::String>
    DescribeBrokerResult& WithBrokerName(BrokerNameT&& value) { SetBrokerName(std::forward<BrokerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's status.</p>
     */
    inline BrokerState GetBrokerState() const { return m_brokerState; }
    inline void SetBrokerState(BrokerState value) { m_brokerStateHasBeenSet = true; m_brokerState = value; }
    inline DescribeBrokerResult& WithBrokerState(BrokerState value) { SetBrokerState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of all revisions for the specified configuration.</p>
     */
    inline const Configurations& GetConfigurations() const { return m_configurations; }
    template<typename ConfigurationsT = Configurations>
    void SetConfigurations(ConfigurationsT&& value) { m_configurationsHasBeenSet = true; m_configurations = std::forward<ConfigurationsT>(value); }
    template<typename ConfigurationsT = Configurations>
    DescribeBrokerResult& WithConfigurations(ConfigurationsT&& value) { SetConfigurations(std::forward<ConfigurationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the broker was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
    template<typename CreatedT = Aws::Utils::DateTime>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Utils::DateTime>
    DescribeBrokerResult& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's deployment mode.</p>
     */
    inline DeploymentMode GetDeploymentMode() const { return m_deploymentMode; }
    inline void SetDeploymentMode(DeploymentMode value) { m_deploymentModeHasBeenSet = true; m_deploymentMode = value; }
    inline DescribeBrokerResult& WithDeploymentMode(DeploymentMode value) { SetDeploymentMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encryption options for the broker.</p>
     */
    inline const EncryptionOptions& GetEncryptionOptions() const { return m_encryptionOptions; }
    template<typename EncryptionOptionsT = EncryptionOptions>
    void SetEncryptionOptions(EncryptionOptionsT&& value) { m_encryptionOptionsHasBeenSet = true; m_encryptionOptions = std::forward<EncryptionOptionsT>(value); }
    template<typename EncryptionOptionsT = EncryptionOptions>
    DescribeBrokerResult& WithEncryptionOptions(EncryptionOptionsT&& value) { SetEncryptionOptions(std::forward<EncryptionOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of broker engine. Currently, Amazon MQ supports ACTIVEMQ and
     * RABBITMQ.</p>
     */
    inline EngineType GetEngineType() const { return m_engineType; }
    inline void SetEngineType(EngineType value) { m_engineTypeHasBeenSet = true; m_engineType = value; }
    inline DescribeBrokerResult& WithEngineType(EngineType value) { SetEngineType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker engine version. For more information, see the <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/activemq-version-management.html">ActiveMQ
     * version management</a> and the <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/rabbitmq-version-management.html">RabbitMQ
     * version management</a> sections in the Amazon MQ Developer Guide.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    DescribeBrokerResult& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's instance type.</p>
     */
    inline const Aws::String& GetHostInstanceType() const { return m_hostInstanceType; }
    template<typename HostInstanceTypeT = Aws::String>
    void SetHostInstanceType(HostInstanceTypeT&& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = std::forward<HostInstanceTypeT>(value); }
    template<typename HostInstanceTypeT = Aws::String>
    DescribeBrokerResult& WithHostInstanceType(HostInstanceTypeT&& value) { SetHostInstanceType(std::forward<HostInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker.</p>
     */
    inline const LdapServerMetadataOutput& GetLdapServerMetadata() const { return m_ldapServerMetadata; }
    template<typename LdapServerMetadataT = LdapServerMetadataOutput>
    void SetLdapServerMetadata(LdapServerMetadataT&& value) { m_ldapServerMetadataHasBeenSet = true; m_ldapServerMetadata = std::forward<LdapServerMetadataT>(value); }
    template<typename LdapServerMetadataT = LdapServerMetadataOutput>
    DescribeBrokerResult& WithLdapServerMetadata(LdapServerMetadataT&& value) { SetLdapServerMetadata(std::forward<LdapServerMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of information about logs currently enabled and pending to be
     * deployed for the specified broker.</p>
     */
    inline const LogsSummary& GetLogs() const { return m_logs; }
    template<typename LogsT = LogsSummary>
    void SetLogs(LogsT&& value) { m_logsHasBeenSet = true; m_logs = std::forward<LogsT>(value); }
    template<typename LogsT = LogsSummary>
    DescribeBrokerResult& WithLogs(LogsT&& value) { SetLogs(std::forward<LogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline const WeeklyStartTime& GetMaintenanceWindowStartTime() const { return m_maintenanceWindowStartTime; }
    template<typename MaintenanceWindowStartTimeT = WeeklyStartTime>
    void SetMaintenanceWindowStartTime(MaintenanceWindowStartTimeT&& value) { m_maintenanceWindowStartTimeHasBeenSet = true; m_maintenanceWindowStartTime = std::forward<MaintenanceWindowStartTimeT>(value); }
    template<typename MaintenanceWindowStartTimeT = WeeklyStartTime>
    DescribeBrokerResult& WithMaintenanceWindowStartTime(MaintenanceWindowStartTimeT&& value) { SetMaintenanceWindowStartTime(std::forward<MaintenanceWindowStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication strategy that will be applied when the broker is rebooted.
     * The default is SIMPLE.</p>
     */
    inline AuthenticationStrategy GetPendingAuthenticationStrategy() const { return m_pendingAuthenticationStrategy; }
    inline void SetPendingAuthenticationStrategy(AuthenticationStrategy value) { m_pendingAuthenticationStrategyHasBeenSet = true; m_pendingAuthenticationStrategy = value; }
    inline DescribeBrokerResult& WithPendingAuthenticationStrategy(AuthenticationStrategy value) { SetPendingAuthenticationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker engine version to upgrade to. For more information, see the <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/activemq-version-management.html">ActiveMQ
     * version management</a> and the <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/rabbitmq-version-management.html">RabbitMQ
     * version management</a> sections in the Amazon MQ Developer Guide.</p>
     */
    inline const Aws::String& GetPendingEngineVersion() const { return m_pendingEngineVersion; }
    template<typename PendingEngineVersionT = Aws::String>
    void SetPendingEngineVersion(PendingEngineVersionT&& value) { m_pendingEngineVersionHasBeenSet = true; m_pendingEngineVersion = std::forward<PendingEngineVersionT>(value); }
    template<typename PendingEngineVersionT = Aws::String>
    DescribeBrokerResult& WithPendingEngineVersion(PendingEngineVersionT&& value) { SetPendingEngineVersion(std::forward<PendingEngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline const Aws::String& GetPendingHostInstanceType() const { return m_pendingHostInstanceType; }
    template<typename PendingHostInstanceTypeT = Aws::String>
    void SetPendingHostInstanceType(PendingHostInstanceTypeT&& value) { m_pendingHostInstanceTypeHasBeenSet = true; m_pendingHostInstanceType = std::forward<PendingHostInstanceTypeT>(value); }
    template<typename PendingHostInstanceTypeT = Aws::String>
    DescribeBrokerResult& WithPendingHostInstanceType(PendingHostInstanceTypeT&& value) { SetPendingHostInstanceType(std::forward<PendingHostInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the LDAP server that will be used to authenticate and
     * authorize connections to the broker after it is rebooted.</p>
     */
    inline const LdapServerMetadataOutput& GetPendingLdapServerMetadata() const { return m_pendingLdapServerMetadata; }
    template<typename PendingLdapServerMetadataT = LdapServerMetadataOutput>
    void SetPendingLdapServerMetadata(PendingLdapServerMetadataT&& value) { m_pendingLdapServerMetadataHasBeenSet = true; m_pendingLdapServerMetadata = std::forward<PendingLdapServerMetadataT>(value); }
    template<typename PendingLdapServerMetadataT = LdapServerMetadataOutput>
    DescribeBrokerResult& WithPendingLdapServerMetadata(PendingLdapServerMetadataT&& value) { SetPendingLdapServerMetadata(std::forward<PendingLdapServerMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of pending security groups to authorize connections to brokers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPendingSecurityGroups() const { return m_pendingSecurityGroups; }
    template<typename PendingSecurityGroupsT = Aws::Vector<Aws::String>>
    void SetPendingSecurityGroups(PendingSecurityGroupsT&& value) { m_pendingSecurityGroupsHasBeenSet = true; m_pendingSecurityGroups = std::forward<PendingSecurityGroupsT>(value); }
    template<typename PendingSecurityGroupsT = Aws::Vector<Aws::String>>
    DescribeBrokerResult& WithPendingSecurityGroups(PendingSecurityGroupsT&& value) { SetPendingSecurityGroups(std::forward<PendingSecurityGroupsT>(value)); return *this;}
    template<typename PendingSecurityGroupsT = Aws::String>
    DescribeBrokerResult& AddPendingSecurityGroups(PendingSecurityGroupsT&& value) { m_pendingSecurityGroupsHasBeenSet = true; m_pendingSecurityGroups.emplace_back(std::forward<PendingSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables connections from applications outside of the VPC that hosts the
     * broker's subnets.</p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline DescribeBrokerResult& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of rules (1 minimum, 125 maximum) that authorize connections to
     * brokers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    DescribeBrokerResult& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    DescribeBrokerResult& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The broker's storage type.</p>
     */
    inline BrokerStorageType GetStorageType() const { return m_storageType; }
    inline void SetStorageType(BrokerStorageType value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline DescribeBrokerResult& WithStorageType(BrokerStorageType value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of groups that define which subnets and IP ranges the broker can use
     * from different Availability Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    DescribeBrokerResult& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    DescribeBrokerResult& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of all tags associated with this broker.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribeBrokerResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribeBrokerResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The list of all broker usernames for the specified broker.</p>
     */
    inline const Aws::Vector<UserSummary>& GetUsers() const { return m_users; }
    template<typename UsersT = Aws::Vector<UserSummary>>
    void SetUsers(UsersT&& value) { m_usersHasBeenSet = true; m_users = std::forward<UsersT>(value); }
    template<typename UsersT = Aws::Vector<UserSummary>>
    DescribeBrokerResult& WithUsers(UsersT&& value) { SetUsers(std::forward<UsersT>(value)); return *this;}
    template<typename UsersT = UserSummary>
    DescribeBrokerResult& AddUsers(UsersT&& value) { m_usersHasBeenSet = true; m_users.emplace_back(std::forward<UsersT>(value)); return *this; }
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
    DescribeBrokerResult& WithDataReplicationMetadata(DataReplicationMetadataT&& value) { SetDataReplicationMetadata(std::forward<DataReplicationMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether this broker is a part of a data replication pair.</p>
     */
    inline DataReplicationMode GetDataReplicationMode() const { return m_dataReplicationMode; }
    inline void SetDataReplicationMode(DataReplicationMode value) { m_dataReplicationModeHasBeenSet = true; m_dataReplicationMode = value; }
    inline DescribeBrokerResult& WithDataReplicationMode(DataReplicationMode value) { SetDataReplicationMode(value); return *this;}
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
    DescribeBrokerResult& WithPendingDataReplicationMetadata(PendingDataReplicationMetadataT&& value) { SetPendingDataReplicationMetadata(std::forward<PendingDataReplicationMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether this broker will be a part of a data replication pair after
     * reboot.</p>
     */
    inline DataReplicationMode GetPendingDataReplicationMode() const { return m_pendingDataReplicationMode; }
    inline void SetPendingDataReplicationMode(DataReplicationMode value) { m_pendingDataReplicationModeHasBeenSet = true; m_pendingDataReplicationMode = value; }
    inline DescribeBrokerResult& WithPendingDataReplicationMode(DataReplicationMode value) { SetPendingDataReplicationMode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBrokerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ActionRequired> m_actionsRequired;
    bool m_actionsRequiredHasBeenSet = false;

    AuthenticationStrategy m_authenticationStrategy{AuthenticationStrategy::NOT_SET};
    bool m_authenticationStrategyHasBeenSet = false;

    bool m_autoMinorVersionUpgrade{false};
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::String m_brokerArn;
    bool m_brokerArnHasBeenSet = false;

    Aws::String m_brokerId;
    bool m_brokerIdHasBeenSet = false;

    Aws::Vector<BrokerInstance> m_brokerInstances;
    bool m_brokerInstancesHasBeenSet = false;

    Aws::String m_brokerName;
    bool m_brokerNameHasBeenSet = false;

    BrokerState m_brokerState{BrokerState::NOT_SET};
    bool m_brokerStateHasBeenSet = false;

    Configurations m_configurations;
    bool m_configurationsHasBeenSet = false;

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;

    DeploymentMode m_deploymentMode{DeploymentMode::NOT_SET};
    bool m_deploymentModeHasBeenSet = false;

    EncryptionOptions m_encryptionOptions;
    bool m_encryptionOptionsHasBeenSet = false;

    EngineType m_engineType{EngineType::NOT_SET};
    bool m_engineTypeHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_hostInstanceType;
    bool m_hostInstanceTypeHasBeenSet = false;

    LdapServerMetadataOutput m_ldapServerMetadata;
    bool m_ldapServerMetadataHasBeenSet = false;

    LogsSummary m_logs;
    bool m_logsHasBeenSet = false;

    WeeklyStartTime m_maintenanceWindowStartTime;
    bool m_maintenanceWindowStartTimeHasBeenSet = false;

    AuthenticationStrategy m_pendingAuthenticationStrategy{AuthenticationStrategy::NOT_SET};
    bool m_pendingAuthenticationStrategyHasBeenSet = false;

    Aws::String m_pendingEngineVersion;
    bool m_pendingEngineVersionHasBeenSet = false;

    Aws::String m_pendingHostInstanceType;
    bool m_pendingHostInstanceTypeHasBeenSet = false;

    LdapServerMetadataOutput m_pendingLdapServerMetadata;
    bool m_pendingLdapServerMetadataHasBeenSet = false;

    Aws::Vector<Aws::String> m_pendingSecurityGroups;
    bool m_pendingSecurityGroupsHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    BrokerStorageType m_storageType{BrokerStorageType::NOT_SET};
    bool m_storageTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<UserSummary> m_users;
    bool m_usersHasBeenSet = false;

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
