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
    AWS_MQ_API DescribeBrokerResult();
    AWS_MQ_API DescribeBrokerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MQ_API DescribeBrokerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Actions required for a broker.</p>
     */
    inline const Aws::Vector<ActionRequired>& GetActionsRequired() const{ return m_actionsRequired; }
    inline void SetActionsRequired(const Aws::Vector<ActionRequired>& value) { m_actionsRequired = value; }
    inline void SetActionsRequired(Aws::Vector<ActionRequired>&& value) { m_actionsRequired = std::move(value); }
    inline DescribeBrokerResult& WithActionsRequired(const Aws::Vector<ActionRequired>& value) { SetActionsRequired(value); return *this;}
    inline DescribeBrokerResult& WithActionsRequired(Aws::Vector<ActionRequired>&& value) { SetActionsRequired(std::move(value)); return *this;}
    inline DescribeBrokerResult& AddActionsRequired(const ActionRequired& value) { m_actionsRequired.push_back(value); return *this; }
    inline DescribeBrokerResult& AddActionsRequired(ActionRequired&& value) { m_actionsRequired.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authentication strategy used to secure the broker. The default is
     * SIMPLE.</p>
     */
    inline const AuthenticationStrategy& GetAuthenticationStrategy() const{ return m_authenticationStrategy; }
    inline void SetAuthenticationStrategy(const AuthenticationStrategy& value) { m_authenticationStrategy = value; }
    inline void SetAuthenticationStrategy(AuthenticationStrategy&& value) { m_authenticationStrategy = std::move(value); }
    inline DescribeBrokerResult& WithAuthenticationStrategy(const AuthenticationStrategy& value) { SetAuthenticationStrategy(value); return *this;}
    inline DescribeBrokerResult& WithAuthenticationStrategy(AuthenticationStrategy&& value) { SetAuthenticationStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables automatic upgrades to new patch versions for brokers as new versions
     * are released and supported by Amazon MQ. Automatic upgrades occur during the
     * scheduled maintenance window or after a manual broker reboot.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgrade = value; }
    inline DescribeBrokerResult& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetBrokerArn() const{ return m_brokerArn; }
    inline void SetBrokerArn(const Aws::String& value) { m_brokerArn = value; }
    inline void SetBrokerArn(Aws::String&& value) { m_brokerArn = std::move(value); }
    inline void SetBrokerArn(const char* value) { m_brokerArn.assign(value); }
    inline DescribeBrokerResult& WithBrokerArn(const Aws::String& value) { SetBrokerArn(value); return *this;}
    inline DescribeBrokerResult& WithBrokerArn(Aws::String&& value) { SetBrokerArn(std::move(value)); return *this;}
    inline DescribeBrokerResult& WithBrokerArn(const char* value) { SetBrokerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }
    inline void SetBrokerId(const Aws::String& value) { m_brokerId = value; }
    inline void SetBrokerId(Aws::String&& value) { m_brokerId = std::move(value); }
    inline void SetBrokerId(const char* value) { m_brokerId.assign(value); }
    inline DescribeBrokerResult& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}
    inline DescribeBrokerResult& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}
    inline DescribeBrokerResult& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of information about allocated brokers.</p>
     */
    inline const Aws::Vector<BrokerInstance>& GetBrokerInstances() const{ return m_brokerInstances; }
    inline void SetBrokerInstances(const Aws::Vector<BrokerInstance>& value) { m_brokerInstances = value; }
    inline void SetBrokerInstances(Aws::Vector<BrokerInstance>&& value) { m_brokerInstances = std::move(value); }
    inline DescribeBrokerResult& WithBrokerInstances(const Aws::Vector<BrokerInstance>& value) { SetBrokerInstances(value); return *this;}
    inline DescribeBrokerResult& WithBrokerInstances(Aws::Vector<BrokerInstance>&& value) { SetBrokerInstances(std::move(value)); return *this;}
    inline DescribeBrokerResult& AddBrokerInstances(const BrokerInstance& value) { m_brokerInstances.push_back(value); return *this; }
    inline DescribeBrokerResult& AddBrokerInstances(BrokerInstance&& value) { m_brokerInstances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The broker's name. This value must be unique in your Amazon Web Services
     * account account, 1-50 characters long, must contain only letters, numbers,
     * dashes, and underscores, and must not contain white spaces, brackets, wildcard
     * characters, or special characters.</p>
     */
    inline const Aws::String& GetBrokerName() const{ return m_brokerName; }
    inline void SetBrokerName(const Aws::String& value) { m_brokerName = value; }
    inline void SetBrokerName(Aws::String&& value) { m_brokerName = std::move(value); }
    inline void SetBrokerName(const char* value) { m_brokerName.assign(value); }
    inline DescribeBrokerResult& WithBrokerName(const Aws::String& value) { SetBrokerName(value); return *this;}
    inline DescribeBrokerResult& WithBrokerName(Aws::String&& value) { SetBrokerName(std::move(value)); return *this;}
    inline DescribeBrokerResult& WithBrokerName(const char* value) { SetBrokerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's status.</p>
     */
    inline const BrokerState& GetBrokerState() const{ return m_brokerState; }
    inline void SetBrokerState(const BrokerState& value) { m_brokerState = value; }
    inline void SetBrokerState(BrokerState&& value) { m_brokerState = std::move(value); }
    inline DescribeBrokerResult& WithBrokerState(const BrokerState& value) { SetBrokerState(value); return *this;}
    inline DescribeBrokerResult& WithBrokerState(BrokerState&& value) { SetBrokerState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of all revisions for the specified configuration.</p>
     */
    inline const Configurations& GetConfigurations() const{ return m_configurations; }
    inline void SetConfigurations(const Configurations& value) { m_configurations = value; }
    inline void SetConfigurations(Configurations&& value) { m_configurations = std::move(value); }
    inline DescribeBrokerResult& WithConfigurations(const Configurations& value) { SetConfigurations(value); return *this;}
    inline DescribeBrokerResult& WithConfigurations(Configurations&& value) { SetConfigurations(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the broker was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_created = std::move(value); }
    inline DescribeBrokerResult& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline DescribeBrokerResult& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's deployment mode.</p>
     */
    inline const DeploymentMode& GetDeploymentMode() const{ return m_deploymentMode; }
    inline void SetDeploymentMode(const DeploymentMode& value) { m_deploymentMode = value; }
    inline void SetDeploymentMode(DeploymentMode&& value) { m_deploymentMode = std::move(value); }
    inline DescribeBrokerResult& WithDeploymentMode(const DeploymentMode& value) { SetDeploymentMode(value); return *this;}
    inline DescribeBrokerResult& WithDeploymentMode(DeploymentMode&& value) { SetDeploymentMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encryption options for the broker.</p>
     */
    inline const EncryptionOptions& GetEncryptionOptions() const{ return m_encryptionOptions; }
    inline void SetEncryptionOptions(const EncryptionOptions& value) { m_encryptionOptions = value; }
    inline void SetEncryptionOptions(EncryptionOptions&& value) { m_encryptionOptions = std::move(value); }
    inline DescribeBrokerResult& WithEncryptionOptions(const EncryptionOptions& value) { SetEncryptionOptions(value); return *this;}
    inline DescribeBrokerResult& WithEncryptionOptions(EncryptionOptions&& value) { SetEncryptionOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of broker engine. Currently, Amazon MQ supports ACTIVEMQ and
     * RABBITMQ.</p>
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }
    inline void SetEngineType(const EngineType& value) { m_engineType = value; }
    inline void SetEngineType(EngineType&& value) { m_engineType = std::move(value); }
    inline DescribeBrokerResult& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}
    inline DescribeBrokerResult& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker engine version. For more information, see the <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/activemq-version-management.html">ActiveMQ
     * version management</a> and the <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/rabbitmq-version-management.html">RabbitMQ
     * version management</a> sections in the Amazon MQ Developer Guide.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersion.assign(value); }
    inline DescribeBrokerResult& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline DescribeBrokerResult& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline DescribeBrokerResult& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's instance type.</p>
     */
    inline const Aws::String& GetHostInstanceType() const{ return m_hostInstanceType; }
    inline void SetHostInstanceType(const Aws::String& value) { m_hostInstanceType = value; }
    inline void SetHostInstanceType(Aws::String&& value) { m_hostInstanceType = std::move(value); }
    inline void SetHostInstanceType(const char* value) { m_hostInstanceType.assign(value); }
    inline DescribeBrokerResult& WithHostInstanceType(const Aws::String& value) { SetHostInstanceType(value); return *this;}
    inline DescribeBrokerResult& WithHostInstanceType(Aws::String&& value) { SetHostInstanceType(std::move(value)); return *this;}
    inline DescribeBrokerResult& WithHostInstanceType(const char* value) { SetHostInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the LDAP server used to authenticate and authorize
     * connections to the broker.</p>
     */
    inline const LdapServerMetadataOutput& GetLdapServerMetadata() const{ return m_ldapServerMetadata; }
    inline void SetLdapServerMetadata(const LdapServerMetadataOutput& value) { m_ldapServerMetadata = value; }
    inline void SetLdapServerMetadata(LdapServerMetadataOutput&& value) { m_ldapServerMetadata = std::move(value); }
    inline DescribeBrokerResult& WithLdapServerMetadata(const LdapServerMetadataOutput& value) { SetLdapServerMetadata(value); return *this;}
    inline DescribeBrokerResult& WithLdapServerMetadata(LdapServerMetadataOutput&& value) { SetLdapServerMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of information about logs currently enabled and pending to be
     * deployed for the specified broker.</p>
     */
    inline const LogsSummary& GetLogs() const{ return m_logs; }
    inline void SetLogs(const LogsSummary& value) { m_logs = value; }
    inline void SetLogs(LogsSummary&& value) { m_logs = std::move(value); }
    inline DescribeBrokerResult& WithLogs(const LogsSummary& value) { SetLogs(value); return *this;}
    inline DescribeBrokerResult& WithLogs(LogsSummary&& value) { SetLogs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline const WeeklyStartTime& GetMaintenanceWindowStartTime() const{ return m_maintenanceWindowStartTime; }
    inline void SetMaintenanceWindowStartTime(const WeeklyStartTime& value) { m_maintenanceWindowStartTime = value; }
    inline void SetMaintenanceWindowStartTime(WeeklyStartTime&& value) { m_maintenanceWindowStartTime = std::move(value); }
    inline DescribeBrokerResult& WithMaintenanceWindowStartTime(const WeeklyStartTime& value) { SetMaintenanceWindowStartTime(value); return *this;}
    inline DescribeBrokerResult& WithMaintenanceWindowStartTime(WeeklyStartTime&& value) { SetMaintenanceWindowStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication strategy that will be applied when the broker is rebooted.
     * The default is SIMPLE.</p>
     */
    inline const AuthenticationStrategy& GetPendingAuthenticationStrategy() const{ return m_pendingAuthenticationStrategy; }
    inline void SetPendingAuthenticationStrategy(const AuthenticationStrategy& value) { m_pendingAuthenticationStrategy = value; }
    inline void SetPendingAuthenticationStrategy(AuthenticationStrategy&& value) { m_pendingAuthenticationStrategy = std::move(value); }
    inline DescribeBrokerResult& WithPendingAuthenticationStrategy(const AuthenticationStrategy& value) { SetPendingAuthenticationStrategy(value); return *this;}
    inline DescribeBrokerResult& WithPendingAuthenticationStrategy(AuthenticationStrategy&& value) { SetPendingAuthenticationStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker engine version to upgrade to. For more information, see the <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/activemq-version-management.html">ActiveMQ
     * version management</a> and the <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/rabbitmq-version-management.html">RabbitMQ
     * version management</a> sections in the Amazon MQ Developer Guide.</p>
     */
    inline const Aws::String& GetPendingEngineVersion() const{ return m_pendingEngineVersion; }
    inline void SetPendingEngineVersion(const Aws::String& value) { m_pendingEngineVersion = value; }
    inline void SetPendingEngineVersion(Aws::String&& value) { m_pendingEngineVersion = std::move(value); }
    inline void SetPendingEngineVersion(const char* value) { m_pendingEngineVersion.assign(value); }
    inline DescribeBrokerResult& WithPendingEngineVersion(const Aws::String& value) { SetPendingEngineVersion(value); return *this;}
    inline DescribeBrokerResult& WithPendingEngineVersion(Aws::String&& value) { SetPendingEngineVersion(std::move(value)); return *this;}
    inline DescribeBrokerResult& WithPendingEngineVersion(const char* value) { SetPendingEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's host instance type to upgrade to. For a list of supported
     * instance types, see <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/broker.html#broker-instance-types">Broker
     * instance types</a>.</p>
     */
    inline const Aws::String& GetPendingHostInstanceType() const{ return m_pendingHostInstanceType; }
    inline void SetPendingHostInstanceType(const Aws::String& value) { m_pendingHostInstanceType = value; }
    inline void SetPendingHostInstanceType(Aws::String&& value) { m_pendingHostInstanceType = std::move(value); }
    inline void SetPendingHostInstanceType(const char* value) { m_pendingHostInstanceType.assign(value); }
    inline DescribeBrokerResult& WithPendingHostInstanceType(const Aws::String& value) { SetPendingHostInstanceType(value); return *this;}
    inline DescribeBrokerResult& WithPendingHostInstanceType(Aws::String&& value) { SetPendingHostInstanceType(std::move(value)); return *this;}
    inline DescribeBrokerResult& WithPendingHostInstanceType(const char* value) { SetPendingHostInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the LDAP server that will be used to authenticate and
     * authorize connections to the broker after it is rebooted.</p>
     */
    inline const LdapServerMetadataOutput& GetPendingLdapServerMetadata() const{ return m_pendingLdapServerMetadata; }
    inline void SetPendingLdapServerMetadata(const LdapServerMetadataOutput& value) { m_pendingLdapServerMetadata = value; }
    inline void SetPendingLdapServerMetadata(LdapServerMetadataOutput&& value) { m_pendingLdapServerMetadata = std::move(value); }
    inline DescribeBrokerResult& WithPendingLdapServerMetadata(const LdapServerMetadataOutput& value) { SetPendingLdapServerMetadata(value); return *this;}
    inline DescribeBrokerResult& WithPendingLdapServerMetadata(LdapServerMetadataOutput&& value) { SetPendingLdapServerMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of pending security groups to authorize connections to brokers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPendingSecurityGroups() const{ return m_pendingSecurityGroups; }
    inline void SetPendingSecurityGroups(const Aws::Vector<Aws::String>& value) { m_pendingSecurityGroups = value; }
    inline void SetPendingSecurityGroups(Aws::Vector<Aws::String>&& value) { m_pendingSecurityGroups = std::move(value); }
    inline DescribeBrokerResult& WithPendingSecurityGroups(const Aws::Vector<Aws::String>& value) { SetPendingSecurityGroups(value); return *this;}
    inline DescribeBrokerResult& WithPendingSecurityGroups(Aws::Vector<Aws::String>&& value) { SetPendingSecurityGroups(std::move(value)); return *this;}
    inline DescribeBrokerResult& AddPendingSecurityGroups(const Aws::String& value) { m_pendingSecurityGroups.push_back(value); return *this; }
    inline DescribeBrokerResult& AddPendingSecurityGroups(Aws::String&& value) { m_pendingSecurityGroups.push_back(std::move(value)); return *this; }
    inline DescribeBrokerResult& AddPendingSecurityGroups(const char* value) { m_pendingSecurityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables connections from applications outside of the VPC that hosts the
     * broker's subnets.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessible = value; }
    inline DescribeBrokerResult& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of rules (1 minimum, 125 maximum) that authorize connections to
     * brokers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroups = std::move(value); }
    inline DescribeBrokerResult& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline DescribeBrokerResult& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline DescribeBrokerResult& AddSecurityGroups(const Aws::String& value) { m_securityGroups.push_back(value); return *this; }
    inline DescribeBrokerResult& AddSecurityGroups(Aws::String&& value) { m_securityGroups.push_back(std::move(value)); return *this; }
    inline DescribeBrokerResult& AddSecurityGroups(const char* value) { m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The broker's storage type.</p>
     */
    inline const BrokerStorageType& GetStorageType() const{ return m_storageType; }
    inline void SetStorageType(const BrokerStorageType& value) { m_storageType = value; }
    inline void SetStorageType(BrokerStorageType&& value) { m_storageType = std::move(value); }
    inline DescribeBrokerResult& WithStorageType(const BrokerStorageType& value) { SetStorageType(value); return *this;}
    inline DescribeBrokerResult& WithStorageType(BrokerStorageType&& value) { SetStorageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of groups that define which subnets and IP ranges the broker can use
     * from different Availability Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIds = std::move(value); }
    inline DescribeBrokerResult& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline DescribeBrokerResult& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline DescribeBrokerResult& AddSubnetIds(const Aws::String& value) { m_subnetIds.push_back(value); return *this; }
    inline DescribeBrokerResult& AddSubnetIds(Aws::String&& value) { m_subnetIds.push_back(std::move(value)); return *this; }
    inline DescribeBrokerResult& AddSubnetIds(const char* value) { m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of all tags associated with this broker.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeBrokerResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeBrokerResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeBrokerResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeBrokerResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeBrokerResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeBrokerResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeBrokerResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeBrokerResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeBrokerResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of all broker usernames for the specified broker.</p>
     */
    inline const Aws::Vector<UserSummary>& GetUsers() const{ return m_users; }
    inline void SetUsers(const Aws::Vector<UserSummary>& value) { m_users = value; }
    inline void SetUsers(Aws::Vector<UserSummary>&& value) { m_users = std::move(value); }
    inline DescribeBrokerResult& WithUsers(const Aws::Vector<UserSummary>& value) { SetUsers(value); return *this;}
    inline DescribeBrokerResult& WithUsers(Aws::Vector<UserSummary>&& value) { SetUsers(std::move(value)); return *this;}
    inline DescribeBrokerResult& AddUsers(const UserSummary& value) { m_users.push_back(value); return *this; }
    inline DescribeBrokerResult& AddUsers(UserSummary&& value) { m_users.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The replication details of the data replication-enabled broker. Only returned
     * if dataReplicationMode is set to CRDR.</p>
     */
    inline const DataReplicationMetadataOutput& GetDataReplicationMetadata() const{ return m_dataReplicationMetadata; }
    inline void SetDataReplicationMetadata(const DataReplicationMetadataOutput& value) { m_dataReplicationMetadata = value; }
    inline void SetDataReplicationMetadata(DataReplicationMetadataOutput&& value) { m_dataReplicationMetadata = std::move(value); }
    inline DescribeBrokerResult& WithDataReplicationMetadata(const DataReplicationMetadataOutput& value) { SetDataReplicationMetadata(value); return *this;}
    inline DescribeBrokerResult& WithDataReplicationMetadata(DataReplicationMetadataOutput&& value) { SetDataReplicationMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether this broker is a part of a data replication pair.</p>
     */
    inline const DataReplicationMode& GetDataReplicationMode() const{ return m_dataReplicationMode; }
    inline void SetDataReplicationMode(const DataReplicationMode& value) { m_dataReplicationMode = value; }
    inline void SetDataReplicationMode(DataReplicationMode&& value) { m_dataReplicationMode = std::move(value); }
    inline DescribeBrokerResult& WithDataReplicationMode(const DataReplicationMode& value) { SetDataReplicationMode(value); return *this;}
    inline DescribeBrokerResult& WithDataReplicationMode(DataReplicationMode&& value) { SetDataReplicationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pending replication details of the data replication-enabled broker. Only
     * returned if pendingDataReplicationMode is set to CRDR.</p>
     */
    inline const DataReplicationMetadataOutput& GetPendingDataReplicationMetadata() const{ return m_pendingDataReplicationMetadata; }
    inline void SetPendingDataReplicationMetadata(const DataReplicationMetadataOutput& value) { m_pendingDataReplicationMetadata = value; }
    inline void SetPendingDataReplicationMetadata(DataReplicationMetadataOutput&& value) { m_pendingDataReplicationMetadata = std::move(value); }
    inline DescribeBrokerResult& WithPendingDataReplicationMetadata(const DataReplicationMetadataOutput& value) { SetPendingDataReplicationMetadata(value); return *this;}
    inline DescribeBrokerResult& WithPendingDataReplicationMetadata(DataReplicationMetadataOutput&& value) { SetPendingDataReplicationMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether this broker will be a part of a data replication pair after
     * reboot.</p>
     */
    inline const DataReplicationMode& GetPendingDataReplicationMode() const{ return m_pendingDataReplicationMode; }
    inline void SetPendingDataReplicationMode(const DataReplicationMode& value) { m_pendingDataReplicationMode = value; }
    inline void SetPendingDataReplicationMode(DataReplicationMode&& value) { m_pendingDataReplicationMode = std::move(value); }
    inline DescribeBrokerResult& WithPendingDataReplicationMode(const DataReplicationMode& value) { SetPendingDataReplicationMode(value); return *this;}
    inline DescribeBrokerResult& WithPendingDataReplicationMode(DataReplicationMode&& value) { SetPendingDataReplicationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeBrokerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeBrokerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeBrokerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ActionRequired> m_actionsRequired;

    AuthenticationStrategy m_authenticationStrategy;

    bool m_autoMinorVersionUpgrade;

    Aws::String m_brokerArn;

    Aws::String m_brokerId;

    Aws::Vector<BrokerInstance> m_brokerInstances;

    Aws::String m_brokerName;

    BrokerState m_brokerState;

    Configurations m_configurations;

    Aws::Utils::DateTime m_created;

    DeploymentMode m_deploymentMode;

    EncryptionOptions m_encryptionOptions;

    EngineType m_engineType;

    Aws::String m_engineVersion;

    Aws::String m_hostInstanceType;

    LdapServerMetadataOutput m_ldapServerMetadata;

    LogsSummary m_logs;

    WeeklyStartTime m_maintenanceWindowStartTime;

    AuthenticationStrategy m_pendingAuthenticationStrategy;

    Aws::String m_pendingEngineVersion;

    Aws::String m_pendingHostInstanceType;

    LdapServerMetadataOutput m_pendingLdapServerMetadata;

    Aws::Vector<Aws::String> m_pendingSecurityGroups;

    bool m_publiclyAccessible;

    Aws::Vector<Aws::String> m_securityGroups;

    BrokerStorageType m_storageType;

    Aws::Vector<Aws::String> m_subnetIds;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Vector<UserSummary> m_users;

    DataReplicationMetadataOutput m_dataReplicationMetadata;

    DataReplicationMode m_dataReplicationMode;

    DataReplicationMetadataOutput m_pendingDataReplicationMetadata;

    DataReplicationMode m_pendingDataReplicationMode;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
