/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworkscm/model/MaintenanceStatus.h>
#include <aws/opsworkscm/model/ServerStatus.h>
#include <aws/opsworkscm/model/EngineAttribute.h>
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
namespace OpsWorksCM
{
namespace Model
{

  /**
   * <p>Describes a configuration management server. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/Server">AWS
   * API Reference</a></p>
   */
  class Server
  {
  public:
    AWS_OPSWORKSCM_API Server() = default;
    AWS_OPSWORKSCM_API Server(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKSCM_API Server& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKSCM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Associate a public IP address with a server that you are launching. </p>
     */
    inline bool GetAssociatePublicIpAddress() const { return m_associatePublicIpAddress; }
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }
    inline Server& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of automated backups to keep. </p>
     */
    inline int GetBackupRetentionCount() const { return m_backupRetentionCount; }
    inline bool BackupRetentionCountHasBeenSet() const { return m_backupRetentionCountHasBeenSet; }
    inline void SetBackupRetentionCount(int value) { m_backupRetentionCountHasBeenSet = true; m_backupRetentionCount = value; }
    inline Server& WithBackupRetentionCount(int value) { SetBackupRetentionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the server. </p>
     */
    inline const Aws::String& GetServerName() const { return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    template<typename ServerNameT = Aws::String>
    void SetServerName(ServerNameT&& value) { m_serverNameHasBeenSet = true; m_serverName = std::forward<ServerNameT>(value); }
    template<typename ServerNameT = Aws::String>
    Server& WithServerName(ServerNameT&& value) { SetServerName(std::forward<ServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time stamp of server creation. Example <code>2016-07-29T13:38:47.520Z</code>
     * </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Server& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the CloudFormation stack that was used to create the server. </p>
     */
    inline const Aws::String& GetCloudFormationStackArn() const { return m_cloudFormationStackArn; }
    inline bool CloudFormationStackArnHasBeenSet() const { return m_cloudFormationStackArnHasBeenSet; }
    template<typename CloudFormationStackArnT = Aws::String>
    void SetCloudFormationStackArn(CloudFormationStackArnT&& value) { m_cloudFormationStackArnHasBeenSet = true; m_cloudFormationStackArn = std::forward<CloudFormationStackArnT>(value); }
    template<typename CloudFormationStackArnT = Aws::String>
    Server& WithCloudFormationStackArn(CloudFormationStackArnT&& value) { SetCloudFormationStackArn(std::forward<CloudFormationStackArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional public endpoint of a server, such as
     * <code>https://aws.my-company.com</code>. You cannot access the server by using
     * the <code>Endpoint</code> value if the server has a <code>CustomDomain</code>
     * specified.</p>
     */
    inline const Aws::String& GetCustomDomain() const { return m_customDomain; }
    inline bool CustomDomainHasBeenSet() const { return m_customDomainHasBeenSet; }
    template<typename CustomDomainT = Aws::String>
    void SetCustomDomain(CustomDomainT&& value) { m_customDomainHasBeenSet = true; m_customDomain = std::forward<CustomDomainT>(value); }
    template<typename CustomDomainT = Aws::String>
    Server& WithCustomDomain(CustomDomainT&& value) { SetCustomDomain(std::forward<CustomDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disables automated backups. The number of stored backups is dependent on the
     * value of PreferredBackupCount. </p>
     */
    inline bool GetDisableAutomatedBackup() const { return m_disableAutomatedBackup; }
    inline bool DisableAutomatedBackupHasBeenSet() const { return m_disableAutomatedBackupHasBeenSet; }
    inline void SetDisableAutomatedBackup(bool value) { m_disableAutomatedBackupHasBeenSet = true; m_disableAutomatedBackup = value; }
    inline Server& WithDisableAutomatedBackup(bool value) { SetDisableAutomatedBackup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A DNS name that can be used to access the engine. Example:
     * <code>myserver-asdfghjkl.us-east-1.opsworks.io</code>. You cannot access the
     * server by using the <code>Endpoint</code> value if the server has a
     * <code>CustomDomain</code> specified. </p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    Server& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine type of the server. Valid values in this release include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    Server& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline const Aws::String& GetEngineModel() const { return m_engineModel; }
    inline bool EngineModelHasBeenSet() const { return m_engineModelHasBeenSet; }
    template<typename EngineModelT = Aws::String>
    void SetEngineModel(EngineModelT&& value) { m_engineModelHasBeenSet = true; m_engineModel = std::forward<EngineModelT>(value); }
    template<typename EngineModelT = Aws::String>
    Server& WithEngineModel(EngineModelT&& value) { SetEngineModel(std::forward<EngineModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response of a createServer() request returns the master credential to
     * access the server in EngineAttributes. These credentials are not stored by AWS
     * OpsWorks CM; they are returned only as part of the result of createServer().
     * </p> <p class="title"> <b>Attributes returned in a createServer response for
     * Chef</b> </p> <ul> <li> <p> <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A
     * base64-encoded RSA private key that is generated by AWS OpsWorks for Chef
     * Automate. This private key is required to access the Chef API.</p> </li> <li>
     * <p> <code>CHEF_STARTER_KIT</code>: A base64-encoded ZIP file. The ZIP file
     * contains a Chef starter kit, which includes a README, a configuration file, and
     * the required RSA private key. Save this file, unzip it, and then change to the
     * directory where you've unzipped the file contents. From this directory, you can
     * run Knife commands.</p> </li> </ul> <p class="title"> <b>Attributes returned in
     * a createServer response for Puppet</b> </p> <ul> <li> <p>
     * <code>PUPPET_STARTER_KIT</code>: A base64-encoded ZIP file. The ZIP file
     * contains a Puppet starter kit, including a README and a required private key.
     * Save this file, unzip it, and then change to the directory where you've unzipped
     * the file contents.</p> </li> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: An
     * administrator password that you can use to sign in to the Puppet Enterprise
     * console after the server is online.</p> </li> </ul>
     */
    inline const Aws::Vector<EngineAttribute>& GetEngineAttributes() const { return m_engineAttributes; }
    inline bool EngineAttributesHasBeenSet() const { return m_engineAttributesHasBeenSet; }
    template<typename EngineAttributesT = Aws::Vector<EngineAttribute>>
    void SetEngineAttributes(EngineAttributesT&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes = std::forward<EngineAttributesT>(value); }
    template<typename EngineAttributesT = Aws::Vector<EngineAttribute>>
    Server& WithEngineAttributes(EngineAttributesT&& value) { SetEngineAttributes(std::forward<EngineAttributesT>(value)); return *this;}
    template<typename EngineAttributesT = EngineAttribute>
    Server& AddEngineAttributes(EngineAttributesT&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes.emplace_back(std::forward<EngineAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The engine version of the server. For a Chef server, the valid value for
     * EngineVersion is currently <code>2</code>. For a Puppet server, specify either
     * <code>2019</code> or <code>2017</code>. </p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    Server& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance profile ARN of the server. </p>
     */
    inline const Aws::String& GetInstanceProfileArn() const { return m_instanceProfileArn; }
    inline bool InstanceProfileArnHasBeenSet() const { return m_instanceProfileArnHasBeenSet; }
    template<typename InstanceProfileArnT = Aws::String>
    void SetInstanceProfileArn(InstanceProfileArnT&& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = std::forward<InstanceProfileArnT>(value); }
    template<typename InstanceProfileArnT = Aws::String>
    Server& WithInstanceProfileArn(InstanceProfileArnT&& value) { SetInstanceProfileArn(std::forward<InstanceProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The instance type for the server, as specified in the CloudFormation stack.
     * This might not be the same instance type that is shown in the EC2 console. </p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    Server& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key pair associated with the server. </p>
     */
    inline const Aws::String& GetKeyPair() const { return m_keyPair; }
    inline bool KeyPairHasBeenSet() const { return m_keyPairHasBeenSet; }
    template<typename KeyPairT = Aws::String>
    void SetKeyPair(KeyPairT&& value) { m_keyPairHasBeenSet = true; m_keyPair = std::forward<KeyPairT>(value); }
    template<typename KeyPairT = Aws::String>
    Server& WithKeyPair(KeyPairT&& value) { SetKeyPair(std::forward<KeyPairT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the most recent server maintenance run. Shows
     * <code>SUCCESS</code> or <code>FAILED</code>. </p>
     */
    inline MaintenanceStatus GetMaintenanceStatus() const { return m_maintenanceStatus; }
    inline bool MaintenanceStatusHasBeenSet() const { return m_maintenanceStatusHasBeenSet; }
    inline void SetMaintenanceStatus(MaintenanceStatus value) { m_maintenanceStatusHasBeenSet = true; m_maintenanceStatus = value; }
    inline Server& WithMaintenanceStatus(MaintenanceStatus value) { SetMaintenanceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preferred maintenance period specified for the server. </p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    Server& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preferred backup period specified for the server. </p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const { return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    template<typename PreferredBackupWindowT = Aws::String>
    void SetPreferredBackupWindow(PreferredBackupWindowT&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::forward<PreferredBackupWindowT>(value); }
    template<typename PreferredBackupWindowT = Aws::String>
    Server& WithPreferredBackupWindow(PreferredBackupWindowT&& value) { SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The security group IDs for the server, as specified in the CloudFormation
     * stack. These might not be the same security groups that are shown in the EC2
     * console. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    Server& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    Server& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The service role ARN used to create the server. </p>
     */
    inline const Aws::String& GetServiceRoleArn() const { return m_serviceRoleArn; }
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }
    template<typename ServiceRoleArnT = Aws::String>
    void SetServiceRoleArn(ServiceRoleArnT&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::forward<ServiceRoleArnT>(value); }
    template<typename ServiceRoleArnT = Aws::String>
    Server& WithServiceRoleArn(ServiceRoleArnT&& value) { SetServiceRoleArn(std::forward<ServiceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The server's status. This field displays the states of actions in progress,
     * such as creating, running, or backing up the server, as well as the server's
     * health state. </p>
     */
    inline ServerStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ServerStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Server& WithStatus(ServerStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Depending on the server status, this field has either a human-readable
     * message (such as a create or backup error), or an escaped block of JSON (used
     * for health check results). </p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    Server& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The subnet IDs specified in a CreateServer request. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    Server& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    Server& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the server. </p>
     */
    inline const Aws::String& GetServerArn() const { return m_serverArn; }
    inline bool ServerArnHasBeenSet() const { return m_serverArnHasBeenSet; }
    template<typename ServerArnT = Aws::String>
    void SetServerArn(ServerArnT&& value) { m_serverArnHasBeenSet = true; m_serverArn = std::forward<ServerArnT>(value); }
    template<typename ServerArnT = Aws::String>
    Server& WithServerArn(ServerArnT&& value) { SetServerArn(std::forward<ServerArnT>(value)); return *this;}
    ///@}
  private:

    bool m_associatePublicIpAddress{false};
    bool m_associatePublicIpAddressHasBeenSet = false;

    int m_backupRetentionCount{0};
    bool m_backupRetentionCountHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_cloudFormationStackArn;
    bool m_cloudFormationStackArnHasBeenSet = false;

    Aws::String m_customDomain;
    bool m_customDomainHasBeenSet = false;

    bool m_disableAutomatedBackup{false};
    bool m_disableAutomatedBackupHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineModel;
    bool m_engineModelHasBeenSet = false;

    Aws::Vector<EngineAttribute> m_engineAttributes;
    bool m_engineAttributesHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_instanceProfileArn;
    bool m_instanceProfileArnHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_keyPair;
    bool m_keyPairHasBeenSet = false;

    MaintenanceStatus m_maintenanceStatus{MaintenanceStatus::NOT_SET};
    bool m_maintenanceStatusHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet = false;

    ServerStatus m_status{ServerStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_serverArn;
    bool m_serverArnHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
