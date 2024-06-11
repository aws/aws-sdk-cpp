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
    AWS_SECURITYHUB_API AwsAmazonMqBrokerDetails();
    AWS_SECURITYHUB_API AwsAmazonMqBrokerDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAmazonMqBrokerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The authentication strategy used to secure the broker. The default is
     * <code>SIMPLE</code>. </p>
     */
    inline const Aws::String& GetAuthenticationStrategy() const{ return m_authenticationStrategy; }
    inline bool AuthenticationStrategyHasBeenSet() const { return m_authenticationStrategyHasBeenSet; }
    inline void SetAuthenticationStrategy(const Aws::String& value) { m_authenticationStrategyHasBeenSet = true; m_authenticationStrategy = value; }
    inline void SetAuthenticationStrategy(Aws::String&& value) { m_authenticationStrategyHasBeenSet = true; m_authenticationStrategy = std::move(value); }
    inline void SetAuthenticationStrategy(const char* value) { m_authenticationStrategyHasBeenSet = true; m_authenticationStrategy.assign(value); }
    inline AwsAmazonMqBrokerDetails& WithAuthenticationStrategy(const Aws::String& value) { SetAuthenticationStrategy(value); return *this;}
    inline AwsAmazonMqBrokerDetails& WithAuthenticationStrategy(Aws::String&& value) { SetAuthenticationStrategy(std::move(value)); return *this;}
    inline AwsAmazonMqBrokerDetails& WithAuthenticationStrategy(const char* value) { SetAuthenticationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Whether automatically upgrade new minor versions for brokers, as new
     * versions are released and supported by Amazon MQ. Automatic upgrades occur
     * during the scheduled maintenance window of the broker or after a manual broker
     * reboot. </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline AwsAmazonMqBrokerDetails& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the broker. </p>
     */
    inline const Aws::String& GetBrokerArn() const{ return m_brokerArn; }
    inline bool BrokerArnHasBeenSet() const { return m_brokerArnHasBeenSet; }
    inline void SetBrokerArn(const Aws::String& value) { m_brokerArnHasBeenSet = true; m_brokerArn = value; }
    inline void SetBrokerArn(Aws::String&& value) { m_brokerArnHasBeenSet = true; m_brokerArn = std::move(value); }
    inline void SetBrokerArn(const char* value) { m_brokerArnHasBeenSet = true; m_brokerArn.assign(value); }
    inline AwsAmazonMqBrokerDetails& WithBrokerArn(const Aws::String& value) { SetBrokerArn(value); return *this;}
    inline AwsAmazonMqBrokerDetails& WithBrokerArn(Aws::String&& value) { SetBrokerArn(std::move(value)); return *this;}
    inline AwsAmazonMqBrokerDetails& WithBrokerArn(const char* value) { SetBrokerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The broker's name. </p>
     */
    inline const Aws::String& GetBrokerName() const{ return m_brokerName; }
    inline bool BrokerNameHasBeenSet() const { return m_brokerNameHasBeenSet; }
    inline void SetBrokerName(const Aws::String& value) { m_brokerNameHasBeenSet = true; m_brokerName = value; }
    inline void SetBrokerName(Aws::String&& value) { m_brokerNameHasBeenSet = true; m_brokerName = std::move(value); }
    inline void SetBrokerName(const char* value) { m_brokerNameHasBeenSet = true; m_brokerName.assign(value); }
    inline AwsAmazonMqBrokerDetails& WithBrokerName(const Aws::String& value) { SetBrokerName(value); return *this;}
    inline AwsAmazonMqBrokerDetails& WithBrokerName(Aws::String&& value) { SetBrokerName(std::move(value)); return *this;}
    inline AwsAmazonMqBrokerDetails& WithBrokerName(const char* value) { SetBrokerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The broker's deployment mode. </p>
     */
    inline const Aws::String& GetDeploymentMode() const{ return m_deploymentMode; }
    inline bool DeploymentModeHasBeenSet() const { return m_deploymentModeHasBeenSet; }
    inline void SetDeploymentMode(const Aws::String& value) { m_deploymentModeHasBeenSet = true; m_deploymentMode = value; }
    inline void SetDeploymentMode(Aws::String&& value) { m_deploymentModeHasBeenSet = true; m_deploymentMode = std::move(value); }
    inline void SetDeploymentMode(const char* value) { m_deploymentModeHasBeenSet = true; m_deploymentMode.assign(value); }
    inline AwsAmazonMqBrokerDetails& WithDeploymentMode(const Aws::String& value) { SetDeploymentMode(value); return *this;}
    inline AwsAmazonMqBrokerDetails& WithDeploymentMode(Aws::String&& value) { SetDeploymentMode(std::move(value)); return *this;}
    inline AwsAmazonMqBrokerDetails& WithDeploymentMode(const char* value) { SetDeploymentMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Encryption options for the broker. Doesn’t apply to RabbitMQ brokers. </p>
     */
    inline const AwsAmazonMqBrokerEncryptionOptionsDetails& GetEncryptionOptions() const{ return m_encryptionOptions; }
    inline bool EncryptionOptionsHasBeenSet() const { return m_encryptionOptionsHasBeenSet; }
    inline void SetEncryptionOptions(const AwsAmazonMqBrokerEncryptionOptionsDetails& value) { m_encryptionOptionsHasBeenSet = true; m_encryptionOptions = value; }
    inline void SetEncryptionOptions(AwsAmazonMqBrokerEncryptionOptionsDetails&& value) { m_encryptionOptionsHasBeenSet = true; m_encryptionOptions = std::move(value); }
    inline AwsAmazonMqBrokerDetails& WithEncryptionOptions(const AwsAmazonMqBrokerEncryptionOptionsDetails& value) { SetEncryptionOptions(value); return *this;}
    inline AwsAmazonMqBrokerDetails& WithEncryptionOptions(AwsAmazonMqBrokerEncryptionOptionsDetails&& value) { SetEncryptionOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of broker engine. </p>
     */
    inline const Aws::String& GetEngineType() const{ return m_engineType; }
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }
    inline void SetEngineType(const Aws::String& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }
    inline void SetEngineType(Aws::String&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }
    inline void SetEngineType(const char* value) { m_engineTypeHasBeenSet = true; m_engineType.assign(value); }
    inline AwsAmazonMqBrokerDetails& WithEngineType(const Aws::String& value) { SetEngineType(value); return *this;}
    inline AwsAmazonMqBrokerDetails& WithEngineType(Aws::String&& value) { SetEngineType(std::move(value)); return *this;}
    inline AwsAmazonMqBrokerDetails& WithEngineType(const char* value) { SetEngineType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of the broker engine. </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline AwsAmazonMqBrokerDetails& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline AwsAmazonMqBrokerDetails& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline AwsAmazonMqBrokerDetails& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The broker's instance type. </p>
     */
    inline const Aws::String& GetHostInstanceType() const{ return m_hostInstanceType; }
    inline bool HostInstanceTypeHasBeenSet() const { return m_hostInstanceTypeHasBeenSet; }
    inline void SetHostInstanceType(const Aws::String& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = value; }
    inline void SetHostInstanceType(Aws::String&& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = std::move(value); }
    inline void SetHostInstanceType(const char* value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType.assign(value); }
    inline AwsAmazonMqBrokerDetails& WithHostInstanceType(const Aws::String& value) { SetHostInstanceType(value); return *this;}
    inline AwsAmazonMqBrokerDetails& WithHostInstanceType(Aws::String&& value) { SetHostInstanceType(std::move(value)); return *this;}
    inline AwsAmazonMqBrokerDetails& WithHostInstanceType(const char* value) { SetHostInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique ID that Amazon MQ generates for the broker. </p>
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }
    inline bool BrokerIdHasBeenSet() const { return m_brokerIdHasBeenSet; }
    inline void SetBrokerId(const Aws::String& value) { m_brokerIdHasBeenSet = true; m_brokerId = value; }
    inline void SetBrokerId(Aws::String&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::move(value); }
    inline void SetBrokerId(const char* value) { m_brokerIdHasBeenSet = true; m_brokerId.assign(value); }
    inline AwsAmazonMqBrokerDetails& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}
    inline AwsAmazonMqBrokerDetails& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}
    inline AwsAmazonMqBrokerDetails& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The metadata of the Lightweight Directory Access Protocol (LDAP) server used
     * to authenticate and authorize connections to the broker. This is an optional
     * failover server. </p>
     */
    inline const AwsAmazonMqBrokerLdapServerMetadataDetails& GetLdapServerMetadata() const{ return m_ldapServerMetadata; }
    inline bool LdapServerMetadataHasBeenSet() const { return m_ldapServerMetadataHasBeenSet; }
    inline void SetLdapServerMetadata(const AwsAmazonMqBrokerLdapServerMetadataDetails& value) { m_ldapServerMetadataHasBeenSet = true; m_ldapServerMetadata = value; }
    inline void SetLdapServerMetadata(AwsAmazonMqBrokerLdapServerMetadataDetails&& value) { m_ldapServerMetadataHasBeenSet = true; m_ldapServerMetadata = std::move(value); }
    inline AwsAmazonMqBrokerDetails& WithLdapServerMetadata(const AwsAmazonMqBrokerLdapServerMetadataDetails& value) { SetLdapServerMetadata(value); return *this;}
    inline AwsAmazonMqBrokerDetails& WithLdapServerMetadata(AwsAmazonMqBrokerLdapServerMetadataDetails&& value) { SetLdapServerMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Turns on Amazon CloudWatch logging for brokers. </p>
     */
    inline const AwsAmazonMqBrokerLogsDetails& GetLogs() const{ return m_logs; }
    inline bool LogsHasBeenSet() const { return m_logsHasBeenSet; }
    inline void SetLogs(const AwsAmazonMqBrokerLogsDetails& value) { m_logsHasBeenSet = true; m_logs = value; }
    inline void SetLogs(AwsAmazonMqBrokerLogsDetails&& value) { m_logsHasBeenSet = true; m_logs = std::move(value); }
    inline AwsAmazonMqBrokerDetails& WithLogs(const AwsAmazonMqBrokerLogsDetails& value) { SetLogs(value); return *this;}
    inline AwsAmazonMqBrokerDetails& WithLogs(AwsAmazonMqBrokerLogsDetails&& value) { SetLogs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The scheduled time period (UTC) during which Amazon MQ begins to apply
     * pending updates or patches to the broker. </p>
     */
    inline const AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails& GetMaintenanceWindowStartTime() const{ return m_maintenanceWindowStartTime; }
    inline bool MaintenanceWindowStartTimeHasBeenSet() const { return m_maintenanceWindowStartTimeHasBeenSet; }
    inline void SetMaintenanceWindowStartTime(const AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails& value) { m_maintenanceWindowStartTimeHasBeenSet = true; m_maintenanceWindowStartTime = value; }
    inline void SetMaintenanceWindowStartTime(AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails&& value) { m_maintenanceWindowStartTimeHasBeenSet = true; m_maintenanceWindowStartTime = std::move(value); }
    inline AwsAmazonMqBrokerDetails& WithMaintenanceWindowStartTime(const AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails& value) { SetMaintenanceWindowStartTime(value); return *this;}
    inline AwsAmazonMqBrokerDetails& WithMaintenanceWindowStartTime(AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails&& value) { SetMaintenanceWindowStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Permits connections from applications outside of the VPC that hosts the
     * broker's subnets. </p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline AwsAmazonMqBrokerDetails& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of rules (one minimum, 125 maximum) that authorize connections to
     * brokers. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline AwsAmazonMqBrokerDetails& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline AwsAmazonMqBrokerDetails& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline AwsAmazonMqBrokerDetails& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline AwsAmazonMqBrokerDetails& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline AwsAmazonMqBrokerDetails& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The broker's storage type. </p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }
    inline AwsAmazonMqBrokerDetails& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}
    inline AwsAmazonMqBrokerDetails& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}
    inline AwsAmazonMqBrokerDetails& WithStorageType(const char* value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of groups that define which subnets and IP ranges the broker can
     * use from different Availability Zones. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline AwsAmazonMqBrokerDetails& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline AwsAmazonMqBrokerDetails& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline AwsAmazonMqBrokerDetails& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline AwsAmazonMqBrokerDetails& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline AwsAmazonMqBrokerDetails& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The list of all broker usernames for the specified broker. Doesn't apply to
     * RabbitMQ brokers. </p>
     */
    inline const Aws::Vector<AwsAmazonMqBrokerUsersDetails>& GetUsers() const{ return m_users; }
    inline bool UsersHasBeenSet() const { return m_usersHasBeenSet; }
    inline void SetUsers(const Aws::Vector<AwsAmazonMqBrokerUsersDetails>& value) { m_usersHasBeenSet = true; m_users = value; }
    inline void SetUsers(Aws::Vector<AwsAmazonMqBrokerUsersDetails>&& value) { m_usersHasBeenSet = true; m_users = std::move(value); }
    inline AwsAmazonMqBrokerDetails& WithUsers(const Aws::Vector<AwsAmazonMqBrokerUsersDetails>& value) { SetUsers(value); return *this;}
    inline AwsAmazonMqBrokerDetails& WithUsers(Aws::Vector<AwsAmazonMqBrokerUsersDetails>&& value) { SetUsers(std::move(value)); return *this;}
    inline AwsAmazonMqBrokerDetails& AddUsers(const AwsAmazonMqBrokerUsersDetails& value) { m_usersHasBeenSet = true; m_users.push_back(value); return *this; }
    inline AwsAmazonMqBrokerDetails& AddUsers(AwsAmazonMqBrokerUsersDetails&& value) { m_usersHasBeenSet = true; m_users.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_authenticationStrategy;
    bool m_authenticationStrategyHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
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

    bool m_publiclyAccessible;
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
