/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworkscm/model/BackupType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworkscm/model/BackupStatus.h>
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
   * <p>Describes a single backup. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/Backup">AWS
   * API Reference</a></p>
   */
  class Backup
  {
  public:
    AWS_OPSWORKSCM_API Backup() = default;
    AWS_OPSWORKSCM_API Backup(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKSCM_API Backup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKSCM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the backup. </p>
     */
    inline const Aws::String& GetBackupArn() const { return m_backupArn; }
    inline bool BackupArnHasBeenSet() const { return m_backupArnHasBeenSet; }
    template<typename BackupArnT = Aws::String>
    void SetBackupArn(BackupArnT&& value) { m_backupArnHasBeenSet = true; m_backupArn = std::forward<BackupArnT>(value); }
    template<typename BackupArnT = Aws::String>
    Backup& WithBackupArn(BackupArnT&& value) { SetBackupArn(std::forward<BackupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The generated ID of the backup. Example:
     * <code>myServerName-yyyyMMddHHmmssSSS</code> </p>
     */
    inline const Aws::String& GetBackupId() const { return m_backupId; }
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }
    template<typename BackupIdT = Aws::String>
    void SetBackupId(BackupIdT&& value) { m_backupIdHasBeenSet = true; m_backupId = std::forward<BackupIdT>(value); }
    template<typename BackupIdT = Aws::String>
    Backup& WithBackupId(BackupIdT&& value) { SetBackupId(std::forward<BackupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The backup type. Valid values are <code>automated</code> or
     * <code>manual</code>. </p>
     */
    inline BackupType GetBackupType() const { return m_backupType; }
    inline bool BackupTypeHasBeenSet() const { return m_backupTypeHasBeenSet; }
    inline void SetBackupType(BackupType value) { m_backupTypeHasBeenSet = true; m_backupType = value; }
    inline Backup& WithBackupType(BackupType value) { SetBackupType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time stamp when the backup was created in the database. Example:
     * <code>2016-07-29T13:38:47.520Z</code> </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Backup& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A user-provided description for a manual backup. This field is empty for
     * automated backups. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Backup& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The engine type that is obtained from the server when the backup is created.
     * </p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    Backup& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The engine model that is obtained from the server when the backup is
     * created. </p>
     */
    inline const Aws::String& GetEngineModel() const { return m_engineModel; }
    inline bool EngineModelHasBeenSet() const { return m_engineModelHasBeenSet; }
    template<typename EngineModelT = Aws::String>
    void SetEngineModel(EngineModelT&& value) { m_engineModelHasBeenSet = true; m_engineModel = std::forward<EngineModelT>(value); }
    template<typename EngineModelT = Aws::String>
    Backup& WithEngineModel(EngineModelT&& value) { SetEngineModel(std::forward<EngineModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The engine version that is obtained from the server when the backup is
     * created. </p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    Backup& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The EC2 instance profile ARN that is obtained from the server when the
     * backup is created. Because this value is stored, you are not required to provide
     * the InstanceProfileArn again if you restore a backup. </p>
     */
    inline const Aws::String& GetInstanceProfileArn() const { return m_instanceProfileArn; }
    inline bool InstanceProfileArnHasBeenSet() const { return m_instanceProfileArnHasBeenSet; }
    template<typename InstanceProfileArnT = Aws::String>
    void SetInstanceProfileArn(InstanceProfileArnT&& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = std::forward<InstanceProfileArnT>(value); }
    template<typename InstanceProfileArnT = Aws::String>
    Backup& WithInstanceProfileArn(InstanceProfileArnT&& value) { SetInstanceProfileArn(std::forward<InstanceProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The instance type that is obtained from the server when the backup is
     * created. </p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    Backup& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The key pair that is obtained from the server when the backup is created.
     * </p>
     */
    inline const Aws::String& GetKeyPair() const { return m_keyPair; }
    inline bool KeyPairHasBeenSet() const { return m_keyPairHasBeenSet; }
    template<typename KeyPairT = Aws::String>
    void SetKeyPair(KeyPairT&& value) { m_keyPairHasBeenSet = true; m_keyPair = std::forward<KeyPairT>(value); }
    template<typename KeyPairT = Aws::String>
    Backup& WithKeyPair(KeyPairT&& value) { SetKeyPair(std::forward<KeyPairT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The preferred backup period that is obtained from the server when the backup
     * is created. </p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const { return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    template<typename PreferredBackupWindowT = Aws::String>
    void SetPreferredBackupWindow(PreferredBackupWindowT&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::forward<PreferredBackupWindowT>(value); }
    template<typename PreferredBackupWindowT = Aws::String>
    Backup& WithPreferredBackupWindow(PreferredBackupWindowT&& value) { SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The preferred maintenance period that is obtained from the server when the
     * backup is created. </p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    Backup& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon S3 URL of the backup's log file. </p>
     */
    inline const Aws::String& GetS3LogUrl() const { return m_s3LogUrl; }
    inline bool S3LogUrlHasBeenSet() const { return m_s3LogUrlHasBeenSet; }
    template<typename S3LogUrlT = Aws::String>
    void SetS3LogUrl(S3LogUrlT&& value) { m_s3LogUrlHasBeenSet = true; m_s3LogUrl = std::forward<S3LogUrlT>(value); }
    template<typename S3LogUrlT = Aws::String>
    Backup& WithS3LogUrl(S3LogUrlT&& value) { SetS3LogUrl(std::forward<S3LogUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The security group IDs that are obtained from the server when the backup is
     * created. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    Backup& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    Backup& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the server from which the backup was made. </p>
     */
    inline const Aws::String& GetServerName() const { return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    template<typename ServerNameT = Aws::String>
    void SetServerName(ServerNameT&& value) { m_serverNameHasBeenSet = true; m_serverName = std::forward<ServerNameT>(value); }
    template<typename ServerNameT = Aws::String>
    Backup& WithServerName(ServerNameT&& value) { SetServerName(std::forward<ServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The service role ARN that is obtained from the server when the backup is
     * created. </p>
     */
    inline const Aws::String& GetServiceRoleArn() const { return m_serviceRoleArn; }
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }
    template<typename ServiceRoleArnT = Aws::String>
    void SetServiceRoleArn(ServiceRoleArnT&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::forward<ServiceRoleArnT>(value); }
    template<typename ServiceRoleArnT = Aws::String>
    Backup& WithServiceRoleArn(ServiceRoleArnT&& value) { SetServiceRoleArn(std::forward<ServiceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a backup while in progress. </p>
     */
    inline BackupStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(BackupStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Backup& WithStatus(BackupStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An informational message about backup status. </p>
     */
    inline const Aws::String& GetStatusDescription() const { return m_statusDescription; }
    inline bool StatusDescriptionHasBeenSet() const { return m_statusDescriptionHasBeenSet; }
    template<typename StatusDescriptionT = Aws::String>
    void SetStatusDescription(StatusDescriptionT&& value) { m_statusDescriptionHasBeenSet = true; m_statusDescription = std::forward<StatusDescriptionT>(value); }
    template<typename StatusDescriptionT = Aws::String>
    Backup& WithStatusDescription(StatusDescriptionT&& value) { SetStatusDescription(std::forward<StatusDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The subnet IDs that are obtained from the server when the backup is created.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    Backup& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    Backup& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The version of OpsWorks CM-specific tools that is obtained from the server
     * when the backup is created. </p>
     */
    inline const Aws::String& GetToolsVersion() const { return m_toolsVersion; }
    inline bool ToolsVersionHasBeenSet() const { return m_toolsVersionHasBeenSet; }
    template<typename ToolsVersionT = Aws::String>
    void SetToolsVersion(ToolsVersionT&& value) { m_toolsVersionHasBeenSet = true; m_toolsVersion = std::forward<ToolsVersionT>(value); }
    template<typename ToolsVersionT = Aws::String>
    Backup& WithToolsVersion(ToolsVersionT&& value) { SetToolsVersion(std::forward<ToolsVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The user ARN of the requester for manual backups. This field is empty for
     * automated backups. </p>
     */
    inline const Aws::String& GetUserArn() const { return m_userArn; }
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }
    template<typename UserArnT = Aws::String>
    void SetUserArn(UserArnT&& value) { m_userArnHasBeenSet = true; m_userArn = std::forward<UserArnT>(value); }
    template<typename UserArnT = Aws::String>
    Backup& WithUserArn(UserArnT&& value) { SetUserArn(std::forward<UserArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupArn;
    bool m_backupArnHasBeenSet = false;

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet = false;

    BackupType m_backupType{BackupType::NOT_SET};
    bool m_backupTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineModel;
    bool m_engineModelHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_instanceProfileArn;
    bool m_instanceProfileArnHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_keyPair;
    bool m_keyPairHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_s3LogUrl;
    bool m_s3LogUrlHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet = false;

    BackupStatus m_status{BackupStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusDescription;
    bool m_statusDescriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_toolsVersion;
    bool m_toolsVersionHasBeenSet = false;

    Aws::String m_userArn;
    bool m_userArnHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
