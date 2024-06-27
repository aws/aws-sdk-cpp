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
#include <aws/mq/model/DeploymentMode.h>
#include <aws/mq/model/EncryptionOptions.h>
#include <aws/mq/model/EngineType.h>
#include <aws/mq/model/LdapServerMetadataInput.h>
#include <aws/mq/model/Logs.h>
#include <aws/mq/model/WeeklyStartTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/model/BrokerStorageType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mq/model/DataReplicationMode.h>
#include <aws/mq/model/User.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MQ
{
namespace Model
{

  /**
   * <p>Creates a broker using the specified properties.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateBrokerRequest">AWS
   * API Reference</a></p>
   */
  class CreateBrokerRequest : public MQRequest
  {
  public:
    AWS_MQ_API CreateBrokerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBroker"; }

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
    inline CreateBrokerRequest& WithAuthenticationStrategy(const AuthenticationStrategy& value) { SetAuthenticationStrategy(value); return *this;}
    inline CreateBrokerRequest& WithAuthenticationStrategy(AuthenticationStrategy&& value) { SetAuthenticationStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables automatic upgrades to new patch versions for brokers as new versions
     * are released and supported by Amazon MQ. Automatic upgrades occur during the
     * scheduled maintenance window or after a manual broker reboot. Set to true by
     * default, if no value is specified.</p> <p>Must be set to true for ActiveMQ
     * brokers version 5.18 and above and for RabbitMQ brokers version 3.13 and
     * above.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline CreateBrokerRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. The broker's name. This value must be unique in your Amazon Web
     * Services account, 1-50 characters long, must contain only letters, numbers,
     * dashes, and underscores, and must not contain white spaces, brackets, wildcard
     * characters, or special characters.</p> <p>Do not add personally
     * identifiable information (PII) or other confidential or sensitive information in
     * broker names. Broker names are accessible to other Amazon Web Services services,
     * including CloudWatch Logs. Broker names are not intended to be used for private
     * or sensitive data.</p>
     */
    inline const Aws::String& GetBrokerName() const{ return m_brokerName; }
    inline bool BrokerNameHasBeenSet() const { return m_brokerNameHasBeenSet; }
    inline void SetBrokerName(const Aws::String& value) { m_brokerNameHasBeenSet = true; m_brokerName = value; }
    inline void SetBrokerName(Aws::String&& value) { m_brokerNameHasBeenSet = true; m_brokerName = std::move(value); }
    inline void SetBrokerName(const char* value) { m_brokerNameHasBeenSet = true; m_brokerName.assign(value); }
    inline CreateBrokerRequest& WithBrokerName(const Aws::String& value) { SetBrokerName(value); return *this;}
    inline CreateBrokerRequest& WithBrokerName(Aws::String&& value) { SetBrokerName(std::move(value)); return *this;}
    inline CreateBrokerRequest& WithBrokerName(const char* value) { SetBrokerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of information about the configuration.</p>
     */
    inline const ConfigurationId& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const ConfigurationId& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(ConfigurationId&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline CreateBrokerRequest& WithConfiguration(const ConfigurationId& value) { SetConfiguration(value); return *this;}
    inline CreateBrokerRequest& WithConfiguration(ConfigurationId&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID that the requester receives for the created broker. Amazon MQ
     * passes your ID with the API action.</p> <p>We recommend using a
     * Universally Unique Identifier (UUID) for the creatorRequestId. You may omit the
     * creatorRequestId if your application doesn't require idempotency.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }
    inline CreateBrokerRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}
    inline CreateBrokerRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}
    inline CreateBrokerRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. The broker's deployment mode.</p>
     */
    inline const DeploymentMode& GetDeploymentMode() const{ return m_deploymentMode; }
    inline bool DeploymentModeHasBeenSet() const { return m_deploymentModeHasBeenSet; }
    inline void SetDeploymentMode(const DeploymentMode& value) { m_deploymentModeHasBeenSet = true; m_deploymentMode = value; }
    inline void SetDeploymentMode(DeploymentMode&& value) { m_deploymentModeHasBeenSet = true; m_deploymentMode = std::move(value); }
    inline CreateBrokerRequest& WithDeploymentMode(const DeploymentMode& value) { SetDeploymentMode(value); return *this;}
    inline CreateBrokerRequest& WithDeploymentMode(DeploymentMode&& value) { SetDeploymentMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encryption options for the broker.</p>
     */
    inline const EncryptionOptions& GetEncryptionOptions() const{ return m_encryptionOptions; }
    inline bool EncryptionOptionsHasBeenSet() const { return m_encryptionOptionsHasBeenSet; }
    inline void SetEncryptionOptions(const EncryptionOptions& value) { m_encryptionOptionsHasBeenSet = true; m_encryptionOptions = value; }
    inline void SetEncryptionOptions(EncryptionOptions&& value) { m_encryptionOptionsHasBeenSet = true; m_encryptionOptions = std::move(value); }
    inline CreateBrokerRequest& WithEncryptionOptions(const EncryptionOptions& value) { SetEncryptionOptions(value); return *this;}
    inline CreateBrokerRequest& WithEncryptionOptions(EncryptionOptions&& value) { SetEncryptionOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. The type of broker engine. Currently, Amazon MQ supports ACTIVEMQ
     * and RABBITMQ.</p>
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }
    inline void SetEngineType(const EngineType& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }
    inline void SetEngineType(EngineType&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }
    inline CreateBrokerRequest& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}
    inline CreateBrokerRequest& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker engine version. Defaults to the latest available version for the
     * specified broker engine type. For more information, see the <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/activemq-version-management.html">ActiveMQ
     * version management</a> and the <a
     * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/rabbitmq-version-management.html">RabbitMQ
     * version management</a> sections in the Amazon MQ Developer Guide.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline CreateBrokerRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline CreateBrokerRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline CreateBrokerRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. The broker's instance type.</p>
     */
    inline const Aws::String& GetHostInstanceType() const{ return m_hostInstanceType; }
    inline bool HostInstanceTypeHasBeenSet() const { return m_hostInstanceTypeHasBeenSet; }
    inline void SetHostInstanceType(const Aws::String& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = value; }
    inline void SetHostInstanceType(Aws::String&& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = std::move(value); }
    inline void SetHostInstanceType(const char* value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType.assign(value); }
    inline CreateBrokerRequest& WithHostInstanceType(const Aws::String& value) { SetHostInstanceType(value); return *this;}
    inline CreateBrokerRequest& WithHostInstanceType(Aws::String&& value) { SetHostInstanceType(std::move(value)); return *this;}
    inline CreateBrokerRequest& WithHostInstanceType(const char* value) { SetHostInstanceType(value); return *this;}
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
    inline CreateBrokerRequest& WithLdapServerMetadata(const LdapServerMetadataInput& value) { SetLdapServerMetadata(value); return *this;}
    inline CreateBrokerRequest& WithLdapServerMetadata(LdapServerMetadataInput&& value) { SetLdapServerMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables Amazon CloudWatch logging for brokers.</p>
     */
    inline const Logs& GetLogs() const{ return m_logs; }
    inline bool LogsHasBeenSet() const { return m_logsHasBeenSet; }
    inline void SetLogs(const Logs& value) { m_logsHasBeenSet = true; m_logs = value; }
    inline void SetLogs(Logs&& value) { m_logsHasBeenSet = true; m_logs = std::move(value); }
    inline CreateBrokerRequest& WithLogs(const Logs& value) { SetLogs(value); return *this;}
    inline CreateBrokerRequest& WithLogs(Logs&& value) { SetLogs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that determine the WeeklyStartTime.</p>
     */
    inline const WeeklyStartTime& GetMaintenanceWindowStartTime() const{ return m_maintenanceWindowStartTime; }
    inline bool MaintenanceWindowStartTimeHasBeenSet() const { return m_maintenanceWindowStartTimeHasBeenSet; }
    inline void SetMaintenanceWindowStartTime(const WeeklyStartTime& value) { m_maintenanceWindowStartTimeHasBeenSet = true; m_maintenanceWindowStartTime = value; }
    inline void SetMaintenanceWindowStartTime(WeeklyStartTime&& value) { m_maintenanceWindowStartTimeHasBeenSet = true; m_maintenanceWindowStartTime = std::move(value); }
    inline CreateBrokerRequest& WithMaintenanceWindowStartTime(const WeeklyStartTime& value) { SetMaintenanceWindowStartTime(value); return *this;}
    inline CreateBrokerRequest& WithMaintenanceWindowStartTime(WeeklyStartTime&& value) { SetMaintenanceWindowStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables connections from applications outside of the VPC that hosts the
     * broker's subnets. Set to false by default, if no value is provided.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline CreateBrokerRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of rules (1 minimum, 125 maximum) that authorize connections to
     * brokers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline CreateBrokerRequest& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline CreateBrokerRequest& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline CreateBrokerRequest& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline CreateBrokerRequest& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline CreateBrokerRequest& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The broker's storage type.</p>
     */
    inline const BrokerStorageType& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const BrokerStorageType& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(BrokerStorageType&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline CreateBrokerRequest& WithStorageType(const BrokerStorageType& value) { SetStorageType(value); return *this;}
    inline CreateBrokerRequest& WithStorageType(BrokerStorageType&& value) { SetStorageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of groups that define which subnets and IP ranges the broker can use
     * from different Availability Zones. If you specify more than one subnet, the
     * subnets must be in different Availability Zones. Amazon MQ will not be able to
     * create VPC endpoints for your broker with multiple subnets in the same
     * Availability Zone. A SINGLE_INSTANCE deployment requires one subnet (for
     * example, the default subnet). An ACTIVE_STANDBY_MULTI_AZ Amazon MQ for ActiveMQ
     * deployment requires two subnets. A CLUSTER_MULTI_AZ Amazon MQ for RabbitMQ
     * deployment has no subnet requirements when deployed with public accessibility.
     * Deployment without public accessibility requires at least one subnet.</p>
     * <p>If you specify subnets in a <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-sharing.html">shared
     * VPC</a> for a RabbitMQ broker, the associated VPC to which the specified subnets
     * belong must be owned by your Amazon Web Services account. Amazon MQ will not be
     * able to create VPC endpoints in VPCs that are not owned by your Amazon Web
     * Services account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline CreateBrokerRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline CreateBrokerRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline CreateBrokerRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline CreateBrokerRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline CreateBrokerRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Create tags when creating the broker.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateBrokerRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateBrokerRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateBrokerRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateBrokerRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateBrokerRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateBrokerRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateBrokerRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateBrokerRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateBrokerRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of broker users (persons or applications) who can access queues and
     * topics. For Amazon MQ for RabbitMQ brokers, one and only one administrative user
     * is accepted and created when a broker is first provisioned. All subsequent
     * broker users are created by making RabbitMQ API calls directly to brokers or via
     * the RabbitMQ web console.</p>
     */
    inline const Aws::Vector<User>& GetUsers() const{ return m_users; }
    inline bool UsersHasBeenSet() const { return m_usersHasBeenSet; }
    inline void SetUsers(const Aws::Vector<User>& value) { m_usersHasBeenSet = true; m_users = value; }
    inline void SetUsers(Aws::Vector<User>&& value) { m_usersHasBeenSet = true; m_users = std::move(value); }
    inline CreateBrokerRequest& WithUsers(const Aws::Vector<User>& value) { SetUsers(value); return *this;}
    inline CreateBrokerRequest& WithUsers(Aws::Vector<User>&& value) { SetUsers(std::move(value)); return *this;}
    inline CreateBrokerRequest& AddUsers(const User& value) { m_usersHasBeenSet = true; m_users.push_back(value); return *this; }
    inline CreateBrokerRequest& AddUsers(User&& value) { m_usersHasBeenSet = true; m_users.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines whether this broker is a part of a data replication pair.</p>
     */
    inline const DataReplicationMode& GetDataReplicationMode() const{ return m_dataReplicationMode; }
    inline bool DataReplicationModeHasBeenSet() const { return m_dataReplicationModeHasBeenSet; }
    inline void SetDataReplicationMode(const DataReplicationMode& value) { m_dataReplicationModeHasBeenSet = true; m_dataReplicationMode = value; }
    inline void SetDataReplicationMode(DataReplicationMode&& value) { m_dataReplicationModeHasBeenSet = true; m_dataReplicationMode = std::move(value); }
    inline CreateBrokerRequest& WithDataReplicationMode(const DataReplicationMode& value) { SetDataReplicationMode(value); return *this;}
    inline CreateBrokerRequest& WithDataReplicationMode(DataReplicationMode&& value) { SetDataReplicationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the primary broker that is used to
     * replicate data from in a data replication pair, and is applied to the replica
     * broker. Must be set when dataReplicationMode is set to CRDR.</p>
     */
    inline const Aws::String& GetDataReplicationPrimaryBrokerArn() const{ return m_dataReplicationPrimaryBrokerArn; }
    inline bool DataReplicationPrimaryBrokerArnHasBeenSet() const { return m_dataReplicationPrimaryBrokerArnHasBeenSet; }
    inline void SetDataReplicationPrimaryBrokerArn(const Aws::String& value) { m_dataReplicationPrimaryBrokerArnHasBeenSet = true; m_dataReplicationPrimaryBrokerArn = value; }
    inline void SetDataReplicationPrimaryBrokerArn(Aws::String&& value) { m_dataReplicationPrimaryBrokerArnHasBeenSet = true; m_dataReplicationPrimaryBrokerArn = std::move(value); }
    inline void SetDataReplicationPrimaryBrokerArn(const char* value) { m_dataReplicationPrimaryBrokerArnHasBeenSet = true; m_dataReplicationPrimaryBrokerArn.assign(value); }
    inline CreateBrokerRequest& WithDataReplicationPrimaryBrokerArn(const Aws::String& value) { SetDataReplicationPrimaryBrokerArn(value); return *this;}
    inline CreateBrokerRequest& WithDataReplicationPrimaryBrokerArn(Aws::String&& value) { SetDataReplicationPrimaryBrokerArn(std::move(value)); return *this;}
    inline CreateBrokerRequest& WithDataReplicationPrimaryBrokerArn(const char* value) { SetDataReplicationPrimaryBrokerArn(value); return *this;}
    ///@}
  private:

    AuthenticationStrategy m_authenticationStrategy;
    bool m_authenticationStrategyHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::String m_brokerName;
    bool m_brokerNameHasBeenSet = false;

    ConfigurationId m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    DeploymentMode m_deploymentMode;
    bool m_deploymentModeHasBeenSet = false;

    EncryptionOptions m_encryptionOptions;
    bool m_encryptionOptionsHasBeenSet = false;

    EngineType m_engineType;
    bool m_engineTypeHasBeenSet = false;

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

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    BrokerStorageType m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<User> m_users;
    bool m_usersHasBeenSet = false;

    DataReplicationMode m_dataReplicationMode;
    bool m_dataReplicationModeHasBeenSet = false;

    Aws::String m_dataReplicationPrimaryBrokerArn;
    bool m_dataReplicationPrimaryBrokerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
