﻿/**
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
    AWS_NEPTUNE_API ModifyDBInstanceRequest();

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
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }
    inline ModifyDBInstanceRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}
    inline ModifyDBInstanceRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported by Neptune.</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
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
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }
    inline ModifyDBInstanceRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}
    inline ModifyDBInstanceRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}
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
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }
    inline ModifyDBInstanceRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}
    inline ModifyDBInstanceRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DB security groups to authorize on this DB instance. Changing this
     * setting doesn't result in an outage and the change is asynchronously applied as
     * soon as possible.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing DBSecurityGroups.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetDBSecurityGroups() const{ return m_dBSecurityGroups; }
    inline bool DBSecurityGroupsHasBeenSet() const { return m_dBSecurityGroupsHasBeenSet; }
    inline void SetDBSecurityGroups(const Aws::Vector<Aws::String>& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = value; }
    inline void SetDBSecurityGroups(Aws::Vector<Aws::String>&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = std::move(value); }
    inline ModifyDBInstanceRequest& WithDBSecurityGroups(const Aws::Vector<Aws::String>& value) { SetDBSecurityGroups(value); return *this;}
    inline ModifyDBInstanceRequest& WithDBSecurityGroups(Aws::Vector<Aws::String>&& value) { SetDBSecurityGroups(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& AddDBSecurityGroups(const Aws::String& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }
    inline ModifyDBInstanceRequest& AddDBSecurityGroups(Aws::String&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(std::move(value)); return *this; }
    inline ModifyDBInstanceRequest& AddDBSecurityGroups(const char* value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of EC2 VPC security groups to authorize on this DB instance. This
     * change is asynchronously applied as soon as possible.</p> <p>Not applicable. The
     * associated list of EC2 VPC security groups is managed by the DB cluster. For
     * more information, see <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match existing VpcSecurityGroupIds.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }
    inline ModifyDBInstanceRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}
    inline ModifyDBInstanceRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    inline ModifyDBInstanceRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline ModifyDBInstanceRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
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
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }
    inline ModifyDBInstanceRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported by Neptune.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }
    inline ModifyDBInstanceRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}
    inline ModifyDBInstanceRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}
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
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }
    inline ModifyDBInstanceRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}
    inline ModifyDBInstanceRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not applicable. The retention period for automated backups is managed by the
     * DB cluster. For more information, see <a>ModifyDBCluster</a>.</p> <p>Default:
     * Uses existing setting</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }
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
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }
    inline ModifyDBInstanceRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}
    inline ModifyDBInstanceRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}
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
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }
    inline ModifyDBInstanceRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline ModifyDBInstanceRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment. Changing this
     * parameter doesn't result in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }
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
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline ModifyDBInstanceRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline ModifyDBInstanceRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that major version upgrades are allowed. Changing this parameter
     * doesn't result in an outage and the change is asynchronously applied as soon as
     * possible.</p>
     */
    inline bool GetAllowMajorVersionUpgrade() const{ return m_allowMajorVersionUpgrade; }
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
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline ModifyDBInstanceRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported by Neptune.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }
    inline ModifyDBInstanceRequest& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}
    inline ModifyDBInstanceRequest& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new Provisioned IOPS (I/O operations per second) value for the
     * instance.</p> <p>Changing this setting doesn't result in an outage and the
     * change is applied during the next maintenance window unless the
     * <code>ApplyImmediately</code> parameter is set to <code>true</code> for this
     * request.</p> <p>Default: Uses existing setting</p>
     */
    inline int GetIops() const{ return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline ModifyDBInstanceRequest& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }
    inline ModifyDBInstanceRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}
    inline ModifyDBInstanceRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}
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
    inline const Aws::String& GetNewDBInstanceIdentifier() const{ return m_newDBInstanceIdentifier; }
    inline bool NewDBInstanceIdentifierHasBeenSet() const { return m_newDBInstanceIdentifierHasBeenSet; }
    inline void SetNewDBInstanceIdentifier(const Aws::String& value) { m_newDBInstanceIdentifierHasBeenSet = true; m_newDBInstanceIdentifier = value; }
    inline void SetNewDBInstanceIdentifier(Aws::String&& value) { m_newDBInstanceIdentifierHasBeenSet = true; m_newDBInstanceIdentifier = std::move(value); }
    inline void SetNewDBInstanceIdentifier(const char* value) { m_newDBInstanceIdentifierHasBeenSet = true; m_newDBInstanceIdentifier.assign(value); }
    inline ModifyDBInstanceRequest& WithNewDBInstanceIdentifier(const Aws::String& value) { SetNewDBInstanceIdentifier(value); return *this;}
    inline ModifyDBInstanceRequest& WithNewDBInstanceIdentifier(Aws::String&& value) { SetNewDBInstanceIdentifier(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithNewDBInstanceIdentifier(const char* value) { SetNewDBInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }
    inline ModifyDBInstanceRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}
    inline ModifyDBInstanceRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const{ return m_tdeCredentialArn; }
    inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }
    inline void SetTdeCredentialArn(const Aws::String& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }
    inline void SetTdeCredentialArn(Aws::String&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = std::move(value); }
    inline void SetTdeCredentialArn(const char* value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn.assign(value); }
    inline ModifyDBInstanceRequest& WithTdeCredentialArn(const Aws::String& value) { SetTdeCredentialArn(value); return *this;}
    inline ModifyDBInstanceRequest& WithTdeCredentialArn(Aws::String&& value) { SetTdeCredentialArn(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithTdeCredentialArn(const char* value) { SetTdeCredentialArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline const Aws::String& GetTdeCredentialPassword() const{ return m_tdeCredentialPassword; }
    inline bool TdeCredentialPasswordHasBeenSet() const { return m_tdeCredentialPasswordHasBeenSet; }
    inline void SetTdeCredentialPassword(const Aws::String& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = value; }
    inline void SetTdeCredentialPassword(Aws::String&& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = std::move(value); }
    inline void SetTdeCredentialPassword(const char* value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword.assign(value); }
    inline ModifyDBInstanceRequest& WithTdeCredentialPassword(const Aws::String& value) { SetTdeCredentialPassword(value); return *this;}
    inline ModifyDBInstanceRequest& WithTdeCredentialPassword(Aws::String&& value) { SetTdeCredentialPassword(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithTdeCredentialPassword(const char* value) { SetTdeCredentialPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the certificate that needs to be associated with the instance.</p>
     */
    inline const Aws::String& GetCACertificateIdentifier() const{ return m_cACertificateIdentifier; }
    inline bool CACertificateIdentifierHasBeenSet() const { return m_cACertificateIdentifierHasBeenSet; }
    inline void SetCACertificateIdentifier(const Aws::String& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = value; }
    inline void SetCACertificateIdentifier(Aws::String&& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = std::move(value); }
    inline void SetCACertificateIdentifier(const char* value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier.assign(value); }
    inline ModifyDBInstanceRequest& WithCACertificateIdentifier(const Aws::String& value) { SetCACertificateIdentifier(value); return *this;}
    inline ModifyDBInstanceRequest& WithCACertificateIdentifier(Aws::String&& value) { SetCACertificateIdentifier(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithCACertificateIdentifier(const char* value) { SetCACertificateIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline ModifyDBInstanceRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline ModifyDBInstanceRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True to copy all tags from the DB instance to snapshots of the DB instance,
     * and otherwise false. The default is false.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }
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
    inline int GetMonitoringInterval() const{ return m_monitoringInterval; }
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
    inline int GetDBPortNumber() const{ return m_dBPortNumber; }
    inline bool DBPortNumberHasBeenSet() const { return m_dBPortNumberHasBeenSet; }
    inline void SetDBPortNumber(int value) { m_dBPortNumberHasBeenSet = true; m_dBPortNumber = value; }
    inline ModifyDBInstanceRequest& WithDBPortNumber(int value) { SetDBPortNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the IAM role that permits Neptune to send enhanced monitoring
     * metrics to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const{ return m_monitoringRoleArn; }
    inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }
    inline void SetMonitoringRoleArn(const Aws::String& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }
    inline void SetMonitoringRoleArn(Aws::String&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::move(value); }
    inline void SetMonitoringRoleArn(const char* value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn.assign(value); }
    inline ModifyDBInstanceRequest& WithMonitoringRoleArn(const Aws::String& value) { SetMonitoringRoleArn(value); return *this;}
    inline ModifyDBInstanceRequest& WithMonitoringRoleArn(Aws::String&& value) { SetMonitoringRoleArn(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported</p>
     */
    inline const Aws::String& GetDomainIAMRoleName() const{ return m_domainIAMRoleName; }
    inline bool DomainIAMRoleNameHasBeenSet() const { return m_domainIAMRoleNameHasBeenSet; }
    inline void SetDomainIAMRoleName(const Aws::String& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = value; }
    inline void SetDomainIAMRoleName(Aws::String&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::move(value); }
    inline void SetDomainIAMRoleName(const char* value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName.assign(value); }
    inline ModifyDBInstanceRequest& WithDomainIAMRoleName(const Aws::String& value) { SetDomainIAMRoleName(value); return *this;}
    inline ModifyDBInstanceRequest& WithDomainIAMRoleName(Aws::String&& value) { SetDomainIAMRoleName(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithDomainIAMRoleName(const char* value) { SetDomainIAMRoleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies the order in which a Read Replica is promoted to the
     * primary instance after a failure of the existing primary instance.</p>
     * <p>Default: 1</p> <p>Valid Values: 0 - 15</p>
     */
    inline int GetPromotionTier() const{ return m_promotionTier; }
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
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }
    inline ModifyDBInstanceRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline bool GetEnablePerformanceInsights() const{ return m_enablePerformanceInsights; }
    inline bool EnablePerformanceInsightsHasBeenSet() const { return m_enablePerformanceInsightsHasBeenSet; }
    inline void SetEnablePerformanceInsights(bool value) { m_enablePerformanceInsightsHasBeenSet = true; m_enablePerformanceInsights = value; }
    inline ModifyDBInstanceRequest& WithEnablePerformanceInsights(bool value) { SetEnablePerformanceInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const{ return m_performanceInsightsKMSKeyId; }
    inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }
    inline void SetPerformanceInsightsKMSKeyId(const Aws::String& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = value; }
    inline void SetPerformanceInsightsKMSKeyId(Aws::String&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::move(value); }
    inline void SetPerformanceInsightsKMSKeyId(const char* value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId.assign(value); }
    inline ModifyDBInstanceRequest& WithPerformanceInsightsKMSKeyId(const Aws::String& value) { SetPerformanceInsightsKMSKeyId(value); return *this;}
    inline ModifyDBInstanceRequest& WithPerformanceInsightsKMSKeyId(Aws::String&& value) { SetPerformanceInsightsKMSKeyId(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithPerformanceInsightsKMSKeyId(const char* value) { SetPerformanceInsightsKMSKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * CloudWatch Logs for a specific DB instance or DB cluster.</p>
     */
    inline const CloudwatchLogsExportConfiguration& GetCloudwatchLogsExportConfiguration() const{ return m_cloudwatchLogsExportConfiguration; }
    inline bool CloudwatchLogsExportConfigurationHasBeenSet() const { return m_cloudwatchLogsExportConfigurationHasBeenSet; }
    inline void SetCloudwatchLogsExportConfiguration(const CloudwatchLogsExportConfiguration& value) { m_cloudwatchLogsExportConfigurationHasBeenSet = true; m_cloudwatchLogsExportConfiguration = value; }
    inline void SetCloudwatchLogsExportConfiguration(CloudwatchLogsExportConfiguration&& value) { m_cloudwatchLogsExportConfigurationHasBeenSet = true; m_cloudwatchLogsExportConfiguration = std::move(value); }
    inline ModifyDBInstanceRequest& WithCloudwatchLogsExportConfiguration(const CloudwatchLogsExportConfiguration& value) { SetCloudwatchLogsExportConfiguration(value); return *this;}
    inline ModifyDBInstanceRequest& WithCloudwatchLogsExportConfiguration(CloudwatchLogsExportConfiguration&& value) { SetCloudwatchLogsExportConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether the DB instance has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/manage-console-instances-delete.html">Deleting
     * a DB Instance</a>.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline ModifyDBInstanceRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}
  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_dBSecurityGroups;
    bool m_dBSecurityGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet = false;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_allowMajorVersionUpgrade;
    bool m_allowMajorVersionUpgradeHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    int m_iops;
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

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet = false;

    int m_monitoringInterval;
    bool m_monitoringIntervalHasBeenSet = false;

    int m_dBPortNumber;
    bool m_dBPortNumberHasBeenSet = false;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet = false;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet = false;

    int m_promotionTier;
    bool m_promotionTierHasBeenSet = false;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet = false;

    bool m_enablePerformanceInsights;
    bool m_enablePerformanceInsightsHasBeenSet = false;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet = false;

    CloudwatchLogsExportConfiguration m_cloudwatchLogsExportConfiguration;
    bool m_cloudwatchLogsExportConfigurationHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
