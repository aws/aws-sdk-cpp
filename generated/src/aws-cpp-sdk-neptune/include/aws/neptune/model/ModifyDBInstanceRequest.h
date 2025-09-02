/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/CloudwatchLogsExportConfiguration.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class ModifyDBInstanceRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API ModifyDBInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBInstance"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The DB instance identifier. This value is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * DBInstance.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const { return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    template<typename DBInstanceIdentifierT = Aws::String>
    void SetDBInstanceIdentifier(DBInstanceIdentifierT&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::forward<DBInstanceIdentifierT>(value); }
    template<typename DBInstanceIdentifierT = Aws::String>
    ModifyDBInstanceRequest& WithDBInstanceIdentifier(DBInstanceIdentifierT&& value) { SetDBInstanceIdentifier(std::forward<DBInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported by Neptune.</p>
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline ModifyDBInstanceRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all
     * Amazon Regions.</p> <p>If you modify the DB instance class, an outage occurs
     * during the change. The change is applied during the next maintenance window,
     * unless <code>ApplyImmediately</code> is specified as <code>true</code> for this
     * request.</p> <p>Default: Uses existing setting</p>
     */
    inline const Aws::String& GetDBInstanceClass() const { return m_dBInstanceClass; }
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
    template<typename DBInstanceClassT = Aws::String>
    void SetDBInstanceClass(DBInstanceClassT&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::forward<DBInstanceClassT>(value); }
    template<typename DBInstanceClassT = Aws::String>
    ModifyDBInstanceRequest& WithDBInstanceClass(DBInstanceClassT&& value) { SetDBInstanceClass(std::forward<DBInstanceClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new DB subnet group for the DB instance. You can use this parameter to
     * move your DB instance to a different VPC.</p> <p>Changing the subnet group
     * causes an outage during the change. The change is applied during the next
     * maintenance window, unless you specify <code>true</code> for the
     * <code>ApplyImmediately</code> parameter.</p> <p>Constraints: If supplied, must
     * match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetGroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const { return m_dBSubnetGroupName; }
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }
    template<typename DBSubnetGroupNameT = Aws::String>
    void SetDBSubnetGroupName(DBSubnetGroupNameT&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::forward<DBSubnetGroupNameT>(value); }
    template<typename DBSubnetGroupNameT = Aws::String>
    ModifyDBInstanceRequest& WithDBSubnetGroupName(DBSubnetGroupNameT&& value) { SetDBSubnetGroupName(std::forward<DBSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DB security groups to authorize on this DB instance. Changing this
     * setting doesn't result in an outage and the change is asynchronously applied as
     * soon as possible.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing DBSecurityGroups.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetDBSecurityGroups() const { return m_dBSecurityGroups; }
    inline bool DBSecurityGroupsHasBeenSet() const { return m_dBSecurityGroupsHasBeenSet; }
    template<typename DBSecurityGroupsT = Aws::Vector<Aws::String>>
    void SetDBSecurityGroups(DBSecurityGroupsT&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = std::forward<DBSecurityGroupsT>(value); }
    template<typename DBSecurityGroupsT = Aws::Vector<Aws::String>>
    ModifyDBInstanceRequest& WithDBSecurityGroups(DBSecurityGroupsT&& value) { SetDBSecurityGroups(std::forward<DBSecurityGroupsT>(value)); return *this;}
    template<typename DBSecurityGroupsT = Aws::String>
    ModifyDBInstanceRequest& AddDBSecurityGroups(DBSecurityGroupsT&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.emplace_back(std::forward<DBSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of EC2 VPC security groups to authorize on this DB instance. This
     * change is asynchronously applied as soon as possible.</p> <p>Not applicable. The
     * associated list of EC2 VPC security groups is managed by the DB cluster. For
     * more information, see <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match existing VpcSecurityGroupIds.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const { return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::forward<VpcSecurityGroupIdsT>(value); }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    ModifyDBInstanceRequest& WithVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { SetVpcSecurityGroupIds(std::forward<VpcSecurityGroupIdsT>(value)); return *this;}
    template<typename VpcSecurityGroupIdsT = Aws::String>
    ModifyDBInstanceRequest& AddVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.emplace_back(std::forward<VpcSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the modifications in this request and any pending
     * modifications are asynchronously applied as soon as possible, regardless of the
     * <code>PreferredMaintenanceWindow</code> setting for the DB instance.</p> <p> If
     * this parameter is set to <code>false</code>, changes to the DB instance are
     * applied during the next maintenance window. Some parameter changes can cause an
     * outage and are applied on the next call to <a>RebootDBInstance</a>, or the next
     * failure reboot.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetApplyImmediately() const { return m_applyImmediately; }
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }
    inline ModifyDBInstanceRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported by Neptune.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const { return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    template<typename MasterUserPasswordT = Aws::String>
    void SetMasterUserPassword(MasterUserPasswordT&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::forward<MasterUserPasswordT>(value); }
    template<typename MasterUserPasswordT = Aws::String>
    ModifyDBInstanceRequest& WithMasterUserPassword(MasterUserPasswordT&& value) { SetMasterUserPassword(std::forward<MasterUserPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB parameter group to apply to the DB instance. Changing this
     * setting doesn't result in an outage. The parameter group name itself is changed
     * immediately, but the actual parameter changes are not applied until you reboot
     * the instance without failover. The db instance will NOT be rebooted
     * automatically and the parameter changes will NOT be applied during the next
     * maintenance window.</p> <p>Default: Uses existing setting</p> <p>Constraints:
     * The DB parameter group must be in the same DB parameter group family as this DB
     * instance.</p>
     */
    inline const Aws::String& GetDBParameterGroupName() const { return m_dBParameterGroupName; }
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }
    template<typename DBParameterGroupNameT = Aws::String>
    void SetDBParameterGroupName(DBParameterGroupNameT&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::forward<DBParameterGroupNameT>(value); }
    template<typename DBParameterGroupNameT = Aws::String>
    ModifyDBInstanceRequest& WithDBParameterGroupName(DBParameterGroupNameT&& value) { SetDBParameterGroupName(std::forward<DBParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not applicable. The retention period for automated backups is managed by the
     * DB cluster. For more information, see <a>ModifyDBCluster</a>.</p> <p>Default:
     * Uses existing setting</p>
     */
    inline int GetBackupRetentionPeriod() const { return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline ModifyDBInstanceRequest& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled.</p> <p>Not applicable. The daily time range for creating
     * automated backups is managed by the DB cluster. For more information, see
     * <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format hh24:mi-hh24:mi</p> </li> <li> <p>Must be in Universal Time Coordinated
     * (UTC)</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window</p> </li> <li> <p>Must be at least 30 minutes</p> </li> </ul>
     */
    inline const Aws::String& GetPreferredBackupWindow() const { return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    template<typename PreferredBackupWindowT = Aws::String>
    void SetPreferredBackupWindow(PreferredBackupWindowT&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::forward<PreferredBackupWindowT>(value); }
    template<typename PreferredBackupWindowT = Aws::String>
    ModifyDBInstanceRequest& WithPreferredBackupWindow(PreferredBackupWindowT&& value) { SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter doesn't result in an
     * outage, except in the following situation, and the change is asynchronously
     * applied as soon as possible. If there are pending actions that cause a reboot,
     * and the maintenance window is changed to include the current time, then changing
     * this parameter will cause a reboot of the DB instance. If moving this window to
     * the current time, there must be at least 30 minutes between the current time and
     * end of the window to ensure pending changes are applied.</p> <p>Default: Uses
     * existing setting</p> <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon |
     * Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Must be at least 30
     * minutes</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    ModifyDBInstanceRequest& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment. Changing this
     * parameter doesn't result in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request.</p>
     */
    inline bool GetMultiAZ() const { return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline ModifyDBInstanceRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the database engine to upgrade to. Currently, setting
     * this parameter has no effect. To upgrade your database engine to the most recent
     * release, use the <a>ApplyPendingMaintenanceAction</a> API.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    ModifyDBInstanceRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that major version upgrades are allowed. Changing this parameter
     * doesn't result in an outage and the change is asynchronously applied as soon as
     * possible.</p>
     */
    inline bool GetAllowMajorVersionUpgrade() const { return m_allowMajorVersionUpgrade; }
    inline bool AllowMajorVersionUpgradeHasBeenSet() const { return m_allowMajorVersionUpgradeHasBeenSet; }
    inline void SetAllowMajorVersionUpgrade(bool value) { m_allowMajorVersionUpgradeHasBeenSet = true; m_allowMajorVersionUpgrade = value; }
    inline ModifyDBInstanceRequest& WithAllowMajorVersionUpgrade(bool value) { SetAllowMajorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates that minor version upgrades are applied automatically to the DB
     * instance during the maintenance window. Changing this parameter doesn't result
     * in an outage except in the following case and the change is asynchronously
     * applied as soon as possible. An outage will result if this parameter is set to
     * <code>true</code> during the maintenance window, and a newer minor version is
     * available, and Neptune has enabled auto patching for that engine version.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline ModifyDBInstanceRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported by Neptune.</p>
     */
    inline const Aws::String& GetLicenseModel() const { return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    template<typename LicenseModelT = Aws::String>
    void SetLicenseModel(LicenseModelT&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::forward<LicenseModelT>(value); }
    template<typename LicenseModelT = Aws::String>
    ModifyDBInstanceRequest& WithLicenseModel(LicenseModelT&& value) { SetLicenseModel(std::forward<LicenseModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new Provisioned IOPS (I/O operations per second) value for the
     * instance.</p> <p>Changing this setting doesn't result in an outage and the
     * change is applied during the next maintenance window unless the
     * <code>ApplyImmediately</code> parameter is set to <code>true</code> for this
     * request.</p> <p>Default: Uses existing setting</p>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline ModifyDBInstanceRequest& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline const Aws::String& GetOptionGroupName() const { return m_optionGroupName; }
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
    template<typename OptionGroupNameT = Aws::String>
    void SetOptionGroupName(OptionGroupNameT&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::forward<OptionGroupNameT>(value); }
    template<typename OptionGroupNameT = Aws::String>
    ModifyDBInstanceRequest& WithOptionGroupName(OptionGroupNameT&& value) { SetOptionGroupName(std::forward<OptionGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The new DB instance identifier for the DB instance when renaming a DB
     * instance. When you change the DB instance identifier, an instance reboot will
     * occur immediately if you set <code>Apply Immediately</code> to true, or will
     * occur during the next maintenance window if <code>Apply Immediately</code> to
     * false. This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>mydbinstance</code> </p>
     */
    inline const Aws::String& GetNewDBInstanceIdentifier() const { return m_newDBInstanceIdentifier; }
    inline bool NewDBInstanceIdentifierHasBeenSet() const { return m_newDBInstanceIdentifierHasBeenSet; }
    template<typename NewDBInstanceIdentifierT = Aws::String>
    void SetNewDBInstanceIdentifier(NewDBInstanceIdentifierT&& value) { m_newDBInstanceIdentifierHasBeenSet = true; m_newDBInstanceIdentifier = std::forward<NewDBInstanceIdentifierT>(value); }
    template<typename NewDBInstanceIdentifierT = Aws::String>
    ModifyDBInstanceRequest& WithNewDBInstanceIdentifier(NewDBInstanceIdentifierT&& value) { SetNewDBInstanceIdentifier(std::forward<NewDBInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not applicable. In Neptune the storage type is managed at the DB Cluster
     * level.</p>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    ModifyDBInstanceRequest& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const { return m_tdeCredentialArn; }
    inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }
    template<typename TdeCredentialArnT = Aws::String>
    void SetTdeCredentialArn(TdeCredentialArnT&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = std::forward<TdeCredentialArnT>(value); }
    template<typename TdeCredentialArnT = Aws::String>
    ModifyDBInstanceRequest& WithTdeCredentialArn(TdeCredentialArnT&& value) { SetTdeCredentialArn(std::forward<TdeCredentialArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline const Aws::String& GetTdeCredentialPassword() const { return m_tdeCredentialPassword; }
    inline bool TdeCredentialPasswordHasBeenSet() const { return m_tdeCredentialPasswordHasBeenSet; }
    template<typename TdeCredentialPasswordT = Aws::String>
    void SetTdeCredentialPassword(TdeCredentialPasswordT&& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = std::forward<TdeCredentialPasswordT>(value); }
    template<typename TdeCredentialPasswordT = Aws::String>
    ModifyDBInstanceRequest& WithTdeCredentialPassword(TdeCredentialPasswordT&& value) { SetTdeCredentialPassword(std::forward<TdeCredentialPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the certificate that needs to be associated with the instance.</p>
     */
    inline const Aws::String& GetCACertificateIdentifier() const { return m_cACertificateIdentifier; }
    inline bool CACertificateIdentifierHasBeenSet() const { return m_cACertificateIdentifierHasBeenSet; }
    template<typename CACertificateIdentifierT = Aws::String>
    void SetCACertificateIdentifier(CACertificateIdentifierT&& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = std::forward<CACertificateIdentifierT>(value); }
    template<typename CACertificateIdentifierT = Aws::String>
    ModifyDBInstanceRequest& WithCACertificateIdentifier(CACertificateIdentifierT&& value) { SetCACertificateIdentifier(std::forward<CACertificateIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    ModifyDBInstanceRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True to copy all tags from the DB instance to snapshots of the DB instance,
     * and otherwise false. The default is false.</p>
     */
    inline bool GetCopyTagsToSnapshot() const { return m_copyTagsToSnapshot; }
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }
    inline ModifyDBInstanceRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline int GetMonitoringInterval() const { return m_monitoringInterval; }
    inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }
    inline ModifyDBInstanceRequest& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which the database accepts connections.</p> <p>The value
     * of the <code>DBPortNumber</code> parameter must not match any of the port values
     * specified for options in the option group for the DB instance.</p> <p>Your
     * database will restart when you change the <code>DBPortNumber</code> value
     * regardless of the value of the <code>ApplyImmediately</code> parameter.</p> <p>
     * Default: <code>8182</code> </p>
     */
    inline int GetDBPortNumber() const { return m_dBPortNumber; }
    inline bool DBPortNumberHasBeenSet() const { return m_dBPortNumberHasBeenSet; }
    inline void SetDBPortNumber(int value) { m_dBPortNumberHasBeenSet = true; m_dBPortNumber = value; }
    inline ModifyDBInstanceRequest& WithDBPortNumber(int value) { SetDBPortNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB instance is publicly accessible.</p> <p>When the DB
     * instance is publicly accessible and you connect from outside of the DB
     * instance's virtual private cloud (VPC), its Domain Name System (DNS) endpoint
     * resolves to the public IP address. When you connect from within the same VPC as
     * the DB instance, the endpoint resolves to the private IP address. Access to the
     * DB instance is ultimately controlled by the security group it uses. That public
     * access isn't permitted if the security group assigned to the DB cluster doesn't
     * permit it.</p> <p>When the DB instance isn't publicly accessible, it is an
     * internal DB instance with a DNS name that resolves to a private IP address.</p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline ModifyDBInstanceRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the IAM role that permits Neptune to send enhanced monitoring
     * metrics to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const { return m_monitoringRoleArn; }
    inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }
    template<typename MonitoringRoleArnT = Aws::String>
    void SetMonitoringRoleArn(MonitoringRoleArnT&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::forward<MonitoringRoleArnT>(value); }
    template<typename MonitoringRoleArnT = Aws::String>
    ModifyDBInstanceRequest& WithMonitoringRoleArn(MonitoringRoleArnT&& value) { SetMonitoringRoleArn(std::forward<MonitoringRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported</p>
     */
    inline const Aws::String& GetDomainIAMRoleName() const { return m_domainIAMRoleName; }
    inline bool DomainIAMRoleNameHasBeenSet() const { return m_domainIAMRoleNameHasBeenSet; }
    template<typename DomainIAMRoleNameT = Aws::String>
    void SetDomainIAMRoleName(DomainIAMRoleNameT&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::forward<DomainIAMRoleNameT>(value); }
    template<typename DomainIAMRoleNameT = Aws::String>
    ModifyDBInstanceRequest& WithDomainIAMRoleName(DomainIAMRoleNameT&& value) { SetDomainIAMRoleName(std::forward<DomainIAMRoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies the order in which a Read Replica is promoted to the
     * primary instance after a failure of the existing primary instance.</p>
     * <p>Default: 1</p> <p>Valid Values: 0 - 15</p>
     */
    inline int GetPromotionTier() const { return m_promotionTier; }
    inline bool PromotionTierHasBeenSet() const { return m_promotionTierHasBeenSet; }
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }
    inline ModifyDBInstanceRequest& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True to enable mapping of Amazon Identity and Access Management (IAM)
     * accounts to database accounts, and otherwise false.</p> <p>You can enable IAM
     * database authentication for the following database engines</p> <p>Not
     * applicable. Mapping Amazon IAM accounts to database accounts is managed by the
     * DB cluster. For more information, see <a>ModifyDBCluster</a>.</p> <p>Default:
     * <code>false</code> </p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const { return m_enableIAMDatabaseAuthentication; }
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }
    inline ModifyDBInstanceRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline bool GetEnablePerformanceInsights() const { return m_enablePerformanceInsights; }
    inline bool EnablePerformanceInsightsHasBeenSet() const { return m_enablePerformanceInsightsHasBeenSet; }
    inline void SetEnablePerformanceInsights(bool value) { m_enablePerformanceInsightsHasBeenSet = true; m_enablePerformanceInsights = value; }
    inline ModifyDBInstanceRequest& WithEnablePerformanceInsights(bool value) { SetEnablePerformanceInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const { return m_performanceInsightsKMSKeyId; }
    inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }
    template<typename PerformanceInsightsKMSKeyIdT = Aws::String>
    void SetPerformanceInsightsKMSKeyId(PerformanceInsightsKMSKeyIdT&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::forward<PerformanceInsightsKMSKeyIdT>(value); }
    template<typename PerformanceInsightsKMSKeyIdT = Aws::String>
    ModifyDBInstanceRequest& WithPerformanceInsightsKMSKeyId(PerformanceInsightsKMSKeyIdT&& value) { SetPerformanceInsightsKMSKeyId(std::forward<PerformanceInsightsKMSKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * CloudWatch Logs for a specific DB instance or DB cluster.</p>
     */
    inline const CloudwatchLogsExportConfiguration& GetCloudwatchLogsExportConfiguration() const { return m_cloudwatchLogsExportConfiguration; }
    inline bool CloudwatchLogsExportConfigurationHasBeenSet() const { return m_cloudwatchLogsExportConfigurationHasBeenSet; }
    template<typename CloudwatchLogsExportConfigurationT = CloudwatchLogsExportConfiguration>
    void SetCloudwatchLogsExportConfiguration(CloudwatchLogsExportConfigurationT&& value) { m_cloudwatchLogsExportConfigurationHasBeenSet = true; m_cloudwatchLogsExportConfiguration = std::forward<CloudwatchLogsExportConfigurationT>(value); }
    template<typename CloudwatchLogsExportConfigurationT = CloudwatchLogsExportConfiguration>
    ModifyDBInstanceRequest& WithCloudwatchLogsExportConfiguration(CloudwatchLogsExportConfigurationT&& value) { SetCloudwatchLogsExportConfiguration(std::forward<CloudwatchLogsExportConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether the DB instance has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/manage-console-instances-delete.html">Deleting
     * a DB Instance</a>.</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline ModifyDBInstanceRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}
  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_dBSecurityGroups;
    bool m_dBSecurityGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    bool m_applyImmediately{false};
    bool m_applyImmediatelyHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet = false;

    int m_backupRetentionPeriod{0};
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    bool m_multiAZ{false};
    bool m_multiAZHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_allowMajorVersionUpgrade{false};
    bool m_allowMajorVersionUpgradeHasBeenSet = false;

    bool m_autoMinorVersionUpgrade{false};
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::String m_newDBInstanceIdentifier;
    bool m_newDBInstanceIdentifierHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet = false;

    Aws::String m_tdeCredentialPassword;
    bool m_tdeCredentialPasswordHasBeenSet = false;

    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    bool m_copyTagsToSnapshot{false};
    bool m_copyTagsToSnapshotHasBeenSet = false;

    int m_monitoringInterval{0};
    bool m_monitoringIntervalHasBeenSet = false;

    int m_dBPortNumber{0};
    bool m_dBPortNumberHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet = false;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet = false;

    int m_promotionTier{0};
    bool m_promotionTierHasBeenSet = false;

    bool m_enableIAMDatabaseAuthentication{false};
    bool m_enableIAMDatabaseAuthenticationHasBeenSet = false;

    bool m_enablePerformanceInsights{false};
    bool m_enablePerformanceInsightsHasBeenSet = false;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet = false;

    CloudwatchLogsExportConfiguration m_cloudwatchLogsExportConfiguration;
    bool m_cloudwatchLogsExportConfigurationHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
