/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsAmazonMqBrokerEncryptionOptionsDetails.h>
#include <aws/securityhub/model/AwsAmazonMqBrokerLdapServerMetadataDetails.h>
#include <aws/securityhub/model/AwsAmazonMqBrokerLogsDetails.h>
#include <aws/securityhub/model/AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsAmazonMqBrokerUsersDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details about an Amazon MQ message broker. A message broker allows
   * software applications and components to communicate using various programming
   * languages, operating systems, and formal messaging protocols. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAmazonMqBrokerDetails">AWS
   * API Reference</a></p>
   */
  class AwsAmazonMqBrokerDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAmazonMqBrokerDetails() = default;
    AWS_SECURITYHUB_API AwsAmazonMqBrokerDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAmazonMqBrokerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The authentication strategy used to secure the broker. The default is
     * <code>SIMPLE</code>. </p>
     */
    inline const Aws::String& GetAuthenticationStrategy() const { return m_authenticationStrategy; }
    inline bool AuthenticationStrategyHasBeenSet() const { return m_authenticationStrategyHasBeenSet; }
    template<typename AuthenticationStrategyT = Aws::String>
    void SetAuthenticationStrategy(AuthenticationStrategyT&& value) { m_authenticationStrategyHasBeenSet = true; m_authenticationStrategy = std::forward<AuthenticationStrategyT>(value); }
    template<typename AuthenticationStrategyT = Aws::String>
    AwsAmazonMqBrokerDetails& WithAuthenticationStrategy(AuthenticationStrategyT&& value) { SetAuthenticationStrategy(std::forward<AuthenticationStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Whether automatically upgrade new minor versions for brokers, as new
     * versions are released and supported by Amazon MQ. Automatic upgrades occur
     * during the scheduled maintenance window of the broker or after a manual broker
     * reboot. </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline AwsAmazonMqBrokerDetails& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the broker. </p>
     */
    inline const Aws::String& GetBrokerArn() const { return m_brokerArn; }
    inline bool BrokerArnHasBeenSet() const { return m_brokerArnHasBeenSet; }
    template<typename BrokerArnT = Aws::String>
    void SetBrokerArn(BrokerArnT&& value) { m_brokerArnHasBeenSet = true; m_brokerArn = std::forward<BrokerArnT>(value); }
    template<typename BrokerArnT = Aws::String>
    AwsAmazonMqBrokerDetails& WithBrokerArn(BrokerArnT&& value) { SetBrokerArn(std::forward<BrokerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's name. </p>
     */
    inline const Aws::String& GetBrokerName() const { return m_brokerName; }
    inline bool BrokerNameHasBeenSet() const { return m_brokerNameHasBeenSet; }
    template<typename BrokerNameT = Aws::String>
    void SetBrokerName(BrokerNameT&& value) { m_brokerNameHasBeenSet = true; m_brokerName = std::forward<BrokerNameT>(value); }
    template<typename BrokerNameT = Aws::String>
    AwsAmazonMqBrokerDetails& WithBrokerName(BrokerNameT&& value) { SetBrokerName(std::forward<BrokerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The broker's deployment mode. </p>
     */
    inline const Aws::String& GetDeploymentMode() const { return m_deploymentMode; }
    inline bool DeploymentModeHasBeenSet() const { return m_deploymentModeHasBeenSet; }
    template<typename DeploymentModeT = Aws::String>
    void SetDeploymentMode(DeploymentModeT&& value) { m_deploymentModeHasBeenSet = true; m_deploymentMode = std::forward<DeploymentModeT>(value); }
    template<typename DeploymentModeT = Aws::String>
    AwsAmazonMqBrokerDetails& WithDeploymentMode(DeploymentModeT&& value) { SetDeploymentMode(std::forward<DeploymentModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Encryption options for the broker. Doesn’t apply to RabbitMQ brokers. </p>
     */
    inline const AwsAmazonMqBrokerEncryptionOptionsDetails& GetEncryptionOptions() const { return m_encryptionOptions; }
    inline bool EncryptionOptionsHasBeenSet() const { return m_encryptionOptionsHasBeenSet; }
    template<typename EncryptionOptionsT = AwsAmazonMqBrokerEncryptionOptionsDetails>
    void SetEncryptionOptions(EncryptionOptionsT&& value) { m_encryptionOptionsHasBeenSet = true; m_encryptionOptions = std::forward<EncryptionOptionsT>(value); }
    template<typename EncryptionOptionsT = AwsAmazonMqBrokerEncryptionOptionsDetails>
    AwsAmazonMqBrokerDetails& WithEncryptionOptions(EncryptionOptionsT&& value) { SetEncryptionOptions(std::forward<EncryptionOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of broker engine. </p>
     */
    inline const Aws::String& GetEngineType() const { return m_engineType; }
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }
    template<typename EngineTypeT = Aws::String>
    void SetEngineType(EngineTypeT&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::forward<EngineTypeT>(value); }
    template<typename EngineTypeT = Aws::String>
    AwsAmazonMqBrokerDetails& WithEngineType(EngineTypeT&& value) { SetEngineType(std::forward<EngineTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of the broker engine. </p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    AwsAmazonMqBrokerDetails& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The broker's instance type. </p>
     */
    inline const Aws::String& GetHostInstanceType() const { return m_hostInstanceType; }
    inline bool HostInstanceTypeHasBeenSet() const { return m_hostInstanceTypeHasBeenSet; }
    template<typename HostInstanceTypeT = Aws::String>
    void SetHostInstanceType(HostInstanceTypeT&& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = std::forward<HostInstanceTypeT>(value); }
    template<typename HostInstanceTypeT = Aws::String>
    AwsAmazonMqBrokerDetails& WithHostInstanceType(HostInstanceTypeT&& value) { SetHostInstanceType(std::forward<HostInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique ID that Amazon MQ generates for the broker. </p>
     */
    inline const Aws::String& GetBrokerId() const { return m_brokerId; }
    inline bool BrokerIdHasBeenSet() const { return m_brokerIdHasBeenSet; }
    template<typename BrokerIdT = Aws::String>
    void SetBrokerId(BrokerIdT&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::forward<BrokerIdT>(value); }
    template<typename BrokerIdT = Aws::String>
    AwsAmazonMqBrokerDetails& WithBrokerId(BrokerIdT&& value) { SetBrokerId(std::forward<BrokerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The metadata of the Lightweight Directory Access Protocol (LDAP) server used
     * to authenticate and authorize connections to the broker. This is an optional
     * failover server. </p>
     */
    inline const AwsAmazonMqBrokerLdapServerMetadataDetails& GetLdapServerMetadata() const { return m_ldapServerMetadata; }
    inline bool LdapServerMetadataHasBeenSet() const { return m_ldapServerMetadataHasBeenSet; }
    template<typename LdapServerMetadataT = AwsAmazonMqBrokerLdapServerMetadataDetails>
    void SetLdapServerMetadata(LdapServerMetadataT&& value) { m_ldapServerMetadataHasBeenSet = true; m_ldapServerMetadata = std::forward<LdapServerMetadataT>(value); }
    template<typename LdapServerMetadataT = AwsAmazonMqBrokerLdapServerMetadataDetails>
    AwsAmazonMqBrokerDetails& WithLdapServerMetadata(LdapServerMetadataT&& value) { SetLdapServerMetadata(std::forward<LdapServerMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Turns on Amazon CloudWatch logging for brokers. </p>
     */
    inline const AwsAmazonMqBrokerLogsDetails& GetLogs() const { return m_logs; }
    inline bool LogsHasBeenSet() const { return m_logsHasBeenSet; }
    template<typename LogsT = AwsAmazonMqBrokerLogsDetails>
    void SetLogs(LogsT&& value) { m_logsHasBeenSet = true; m_logs = std::forward<LogsT>(value); }
    template<typename LogsT = AwsAmazonMqBrokerLogsDetails>
    AwsAmazonMqBrokerDetails& WithLogs(LogsT&& value) { SetLogs(std::forward<LogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The scheduled time period (UTC) during which Amazon MQ begins to apply
     * pending updates or patches to the broker. </p>
     */
    inline const AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails& GetMaintenanceWindowStartTime() const { return m_maintenanceWindowStartTime; }
    inline bool MaintenanceWindowStartTimeHasBeenSet() const { return m_maintenanceWindowStartTimeHasBeenSet; }
    template<typename MaintenanceWindowStartTimeT = AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails>
    void SetMaintenanceWindowStartTime(MaintenanceWindowStartTimeT&& value) { m_maintenanceWindowStartTimeHasBeenSet = true; m_maintenanceWindowStartTime = std::forward<MaintenanceWindowStartTimeT>(value); }
    template<typename MaintenanceWindowStartTimeT = AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails>
    AwsAmazonMqBrokerDetails& WithMaintenanceWindowStartTime(MaintenanceWindowStartTimeT&& value) { SetMaintenanceWindowStartTime(std::forward<MaintenanceWindowStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Permits connections from applications outside of the VPC that hosts the
     * broker's subnets. </p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline AwsAmazonMqBrokerDetails& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of rules (one minimum, 125 maximum) that authorize connections to
     * brokers. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    AwsAmazonMqBrokerDetails& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    AwsAmazonMqBrokerDetails& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The broker's storage type. </p>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    AwsAmazonMqBrokerDetails& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of groups that define which subnets and IP ranges the broker can
     * use from different Availability Zones. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    AwsAmazonMqBrokerDetails& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    AwsAmazonMqBrokerDetails& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The list of all broker usernames for the specified broker. Doesn't apply to
     * RabbitMQ brokers. </p>
     */
    inline const Aws::Vector<AwsAmazonMqBrokerUsersDetails>& GetUsers() const { return m_users; }
    inline bool UsersHasBeenSet() const { return m_usersHasBeenSet; }
    template<typename UsersT = Aws::Vector<AwsAmazonMqBrokerUsersDetails>>
    void SetUsers(UsersT&& value) { m_usersHasBeenSet = true; m_users = std::forward<UsersT>(value); }
    template<typename UsersT = Aws::Vector<AwsAmazonMqBrokerUsersDetails>>
    AwsAmazonMqBrokerDetails& WithUsers(UsersT&& value) { SetUsers(std::forward<UsersT>(value)); return *this;}
    template<typename UsersT = AwsAmazonMqBrokerUsersDetails>
    AwsAmazonMqBrokerDetails& AddUsers(UsersT&& value) { m_usersHasBeenSet = true; m_users.emplace_back(std::forward<UsersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_authenticationStrategy;
    bool m_authenticationStrategyHasBeenSet = false;

    bool m_autoMinorVersionUpgrade{false};
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::String m_brokerArn;
    bool m_brokerArnHasBeenSet = false;

    Aws::String m_brokerName;
    bool m_brokerNameHasBeenSet = false;

    Aws::String m_deploymentMode;
    bool m_deploymentModeHasBeenSet = false;

    AwsAmazonMqBrokerEncryptionOptionsDetails m_encryptionOptions;
    bool m_encryptionOptionsHasBeenSet = false;

    Aws::String m_engineType;
    bool m_engineTypeHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_hostInstanceType;
    bool m_hostInstanceTypeHasBeenSet = false;

    Aws::String m_brokerId;
    bool m_brokerIdHasBeenSet = false;

    AwsAmazonMqBrokerLdapServerMetadataDetails m_ldapServerMetadata;
    bool m_ldapServerMetadataHasBeenSet = false;

    AwsAmazonMqBrokerLogsDetails m_logs;
    bool m_logsHasBeenSet = false;

    AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails m_maintenanceWindowStartTime;
    bool m_maintenanceWindowStartTimeHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<AwsAmazonMqBrokerUsersDetails> m_users;
    bool m_usersHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
