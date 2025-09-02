/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class CreateDBInstanceRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API CreateDBInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBInstance"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Not supported.</p>
     */
    inline const Aws::String& GetDBName() const { return m_dBName; }
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }
    template<typename DBNameT = Aws::String>
    void SetDBName(DBNameT&& value) { m_dBNameHasBeenSet = true; m_dBName = std::forward<DBNameT>(value); }
    template<typename DBNameT = Aws::String>
    CreateDBInstanceRequest& WithDBName(DBNameT&& value) { SetDBName(std::forward<DBNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const { return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    template<typename DBInstanceIdentifierT = Aws::String>
    void SetDBInstanceIdentifier(DBInstanceIdentifierT&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::forward<DBInstanceIdentifierT>(value); }
    template<typename DBInstanceIdentifierT = Aws::String>
    CreateDBInstanceRequest& WithDBInstanceIdentifier(DBInstanceIdentifierT&& value) { SetDBInstanceIdentifier(std::forward<DBInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported by Neptune.</p>
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline CreateDBInstanceRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all
     * Amazon Regions.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const { return m_dBInstanceClass; }
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
    template<typename DBInstanceClassT = Aws::String>
    void SetDBInstanceClass(DBInstanceClassT&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::forward<DBInstanceClassT>(value); }
    template<typename DBInstanceClassT = Aws::String>
    CreateDBInstanceRequest& WithDBInstanceClass(DBInstanceClassT&& value) { SetDBInstanceClass(std::forward<DBInstanceClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database engine to be used for this instance.</p> <p>Valid
     * Values: <code>neptune</code> </p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    CreateDBInstanceRequest& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported by Neptune.</p>
     */
    inline const Aws::String& GetMasterUsername() const { return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    template<typename MasterUsernameT = Aws::String>
    void SetMasterUsername(MasterUsernameT&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::forward<MasterUsernameT>(value); }
    template<typename MasterUsernameT = Aws::String>
    CreateDBInstanceRequest& WithMasterUsername(MasterUsernameT&& value) { SetMasterUsername(std::forward<MasterUsernameT>(value)); return *this;}
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
    CreateDBInstanceRequest& WithMasterUserPassword(MasterUserPasswordT&& value) { SetMasterUserPassword(std::forward<MasterUserPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDBSecurityGroups() const { return m_dBSecurityGroups; }
    inline bool DBSecurityGroupsHasBeenSet() const { return m_dBSecurityGroupsHasBeenSet; }
    template<typename DBSecurityGroupsT = Aws::Vector<Aws::String>>
    void SetDBSecurityGroups(DBSecurityGroupsT&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = std::forward<DBSecurityGroupsT>(value); }
    template<typename DBSecurityGroupsT = Aws::Vector<Aws::String>>
    CreateDBInstanceRequest& WithDBSecurityGroups(DBSecurityGroupsT&& value) { SetDBSecurityGroups(std::forward<DBSecurityGroupsT>(value)); return *this;}
    template<typename DBSecurityGroupsT = Aws::String>
    CreateDBInstanceRequest& AddDBSecurityGroups(DBSecurityGroupsT&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.emplace_back(std::forward<DBSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Not applicable. The associated list of EC2 VPC security groups is managed by
     * the DB cluster. For more information, see <a>CreateDBCluster</a>.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const { return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::forward<VpcSecurityGroupIdsT>(value); }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateDBInstanceRequest& WithVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { SetVpcSecurityGroupIds(std::forward<VpcSecurityGroupIdsT>(value)); return *this;}
    template<typename VpcSecurityGroupIdsT = Aws::String>
    CreateDBInstanceRequest& AddVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.emplace_back(std::forward<VpcSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The EC2 Availability Zone that the DB instance is created in</p> <p>Default:
     * A random, system-chosen Availability Zone in the endpoint's Amazon Region.</p>
     * <p> Example: <code>us-east-1d</code> </p> <p> Constraint: The AvailabilityZone
     * parameter can't be specified if the MultiAZ parameter is set to
     * <code>true</code>. The specified Availability Zone must be in the same Amazon
     * Region as the current endpoint.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CreateDBInstanceRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A DB subnet group to associate with this DB instance.</p> <p>If there is no
     * DB subnet group, then it is a non-VPC DB instance.</p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const { return m_dBSubnetGroupName; }
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }
    template<typename DBSubnetGroupNameT = Aws::String>
    void SetDBSubnetGroupName(DBSubnetGroupNameT&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::forward<DBSubnetGroupNameT>(value); }
    template<typename DBSubnetGroupNameT = Aws::String>
    CreateDBInstanceRequest& WithDBSubnetGroupName(DBSubnetGroupNameT&& value) { SetDBSubnetGroupName(std::forward<DBSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time range each week during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p> <p> Format:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p>The default is a 30-minute window
     * selected at random from an 8-hour block of time for each Amazon Region,
     * occurring on a random day of the week.</p> <p>Valid Days: Mon, Tue, Wed, Thu,
     * Fri, Sat, Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    CreateDBInstanceRequest& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers,
     * or hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupName() const { return m_dBParameterGroupName; }
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }
    template<typename DBParameterGroupNameT = Aws::String>
    void SetDBParameterGroupName(DBParameterGroupNameT&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::forward<DBParameterGroupNameT>(value); }
    template<typename DBParameterGroupNameT = Aws::String>
    CreateDBInstanceRequest& WithDBParameterGroupName(DBParameterGroupNameT&& value) { SetDBParameterGroupName(std::forward<DBParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which automated backups are retained.</p> <p>Not
     * applicable. The retention period for automated backups is managed by the DB
     * cluster. For more information, see <a>CreateDBCluster</a>.</p> <p>Default: 1</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be a value from 0 to 35</p> </li> <li>
     * <p>Cannot be set to 0 if the DB instance is a source to Read Replicas</p> </li>
     * </ul>
     */
    inline int GetBackupRetentionPeriod() const { return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline CreateDBInstanceRequest& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The daily time range during which automated backups are created.</p> <p>Not
     * applicable. The daily time range for creating automated backups is managed by
     * the DB cluster. For more information, see <a>CreateDBCluster</a>.</p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const { return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    template<typename PreferredBackupWindowT = Aws::String>
    void SetPreferredBackupWindow(PreferredBackupWindowT&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::forward<PreferredBackupWindowT>(value); }
    template<typename PreferredBackupWindowT = Aws::String>
    CreateDBInstanceRequest& WithPreferredBackupWindow(PreferredBackupWindowT&& value) { SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which the database accepts connections.</p> <p>Not
     * applicable. The port is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p> Default: <code>8182</code> </p> <p>Type:
     * Integer</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline CreateDBInstanceRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment. You can't set the
     * AvailabilityZone parameter if the MultiAZ parameter is set to true.</p>
     */
    inline bool GetMultiAZ() const { return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline CreateDBInstanceRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the database engine to use. Currently, setting this
     * parameter has no effect.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    CreateDBInstanceRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that minor engine upgrades are applied automatically to the DB
     * instance during the maintenance window.</p> <p>Default: <code>true</code> </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline CreateDBInstanceRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>License model information for this DB instance.</p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline const Aws::String& GetLicenseModel() const { return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    template<typename LicenseModelT = Aws::String>
    void SetLicenseModel(LicenseModelT&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::forward<LicenseModelT>(value); }
    template<typename LicenseModelT = Aws::String>
    CreateDBInstanceRequest& WithLicenseModel(LicenseModelT&& value) { SetLicenseModel(std::forward<LicenseModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB instance.</p>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline CreateDBInstanceRequest& WithIops(int value) { SetIops(value); return *this;}
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
    CreateDBInstanceRequest& WithOptionGroupName(OptionGroupNameT&& value) { SetOptionGroupName(std::forward<OptionGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline const Aws::String& GetCharacterSetName() const { return m_characterSetName; }
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }
    template<typename CharacterSetNameT = Aws::String>
    void SetCharacterSetName(CharacterSetNameT&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::forward<CharacterSetNameT>(value); }
    template<typename CharacterSetNameT = Aws::String>
    CreateDBInstanceRequest& WithCharacterSetName(CharacterSetNameT&& value) { SetCharacterSetName(std::forward<CharacterSetNameT>(value)); return *this;}
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
    inline CreateDBInstanceRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the new instance.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDBInstanceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDBInstanceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the DB cluster that the instance will belong to.</p> <p>For
     * information on creating a DB cluster, see <a>CreateDBCluster</a>.</p> <p>Type:
     * String</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    template<typename DBClusterIdentifierT = Aws::String>
    void SetDBClusterIdentifier(DBClusterIdentifierT&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value); }
    template<typename DBClusterIdentifierT = Aws::String>
    CreateDBInstanceRequest& WithDBClusterIdentifier(DBClusterIdentifierT&& value) { SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value)); return *this;}
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
    CreateDBInstanceRequest& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
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
    CreateDBInstanceRequest& WithTdeCredentialArn(TdeCredentialArnT&& value) { SetTdeCredentialArn(std::forward<TdeCredentialArnT>(value)); return *this;}
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
    CreateDBInstanceRequest& WithTdeCredentialPassword(TdeCredentialPasswordT&& value) { SetTdeCredentialPassword(std::forward<TdeCredentialPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance is encrypted.</p> <p>Not applicable. The
     * encryption for DB instances is managed by the DB cluster. For more information,
     * see <a>CreateDBCluster</a>.</p> <p>Default: false</p>
     */
    inline bool GetStorageEncrypted() const { return m_storageEncrypted; }
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }
    inline CreateDBInstanceRequest& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon KMS key identifier for an encrypted DB instance.</p> <p>The KMS
     * key identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If
     * you are creating a DB instance with the same Amazon account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key.</p> <p>Not applicable. The
     * KMS key identifier is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p>If the <code>StorageEncrypted</code> parameter is
     * true, and you do not specify a value for the <code>KmsKeyId</code> parameter,
     * then Amazon Neptune will use your default encryption key. Amazon KMS creates the
     * default encryption key for your Amazon account. Your Amazon account has a
     * different default encryption key for each Amazon Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateDBInstanceRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the Active Directory Domain to create the instance in.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    CreateDBInstanceRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True to copy all tags from the DB instance to snapshots of the DB instance,
     * and otherwise false. The default is false.</p>
     */
    inline bool GetCopyTagsToSnapshot() const { return m_copyTagsToSnapshot; }
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }
    inline CreateDBInstanceRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}
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
    inline CreateDBInstanceRequest& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}
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
    CreateDBInstanceRequest& WithMonitoringRoleArn(MonitoringRoleArnT&& value) { SetMonitoringRoleArn(std::forward<MonitoringRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline const Aws::String& GetDomainIAMRoleName() const { return m_domainIAMRoleName; }
    inline bool DomainIAMRoleNameHasBeenSet() const { return m_domainIAMRoleNameHasBeenSet; }
    template<typename DomainIAMRoleNameT = Aws::String>
    void SetDomainIAMRoleName(DomainIAMRoleNameT&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::forward<DomainIAMRoleNameT>(value); }
    template<typename DomainIAMRoleNameT = Aws::String>
    CreateDBInstanceRequest& WithDomainIAMRoleName(DomainIAMRoleNameT&& value) { SetDomainIAMRoleName(std::forward<DomainIAMRoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies the order in which an Read Replica is promoted to the
     * primary instance after a failure of the existing primary instance. </p>
     * <p>Default: 1</p> <p>Valid Values: 0 - 15</p>
     */
    inline int GetPromotionTier() const { return m_promotionTier; }
    inline bool PromotionTierHasBeenSet() const { return m_promotionTierHasBeenSet; }
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }
    inline CreateDBInstanceRequest& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone of the DB instance.</p>
     */
    inline const Aws::String& GetTimezone() const { return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    template<typename TimezoneT = Aws::String>
    void SetTimezone(TimezoneT&& value) { m_timezoneHasBeenSet = true; m_timezone = std::forward<TimezoneT>(value); }
    template<typename TimezoneT = Aws::String>
    CreateDBInstanceRequest& WithTimezone(TimezoneT&& value) { SetTimezone(std::forward<TimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not supported by Neptune (ignored).</p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const { return m_enableIAMDatabaseAuthentication; }
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }
    inline CreateDBInstanceRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline bool GetEnablePerformanceInsights() const { return m_enablePerformanceInsights; }
    inline bool EnablePerformanceInsightsHasBeenSet() const { return m_enablePerformanceInsightsHasBeenSet; }
    inline void SetEnablePerformanceInsights(bool value) { m_enablePerformanceInsightsHasBeenSet = true; m_enablePerformanceInsights = value; }
    inline CreateDBInstanceRequest& WithEnablePerformanceInsights(bool value) { SetEnablePerformanceInsights(value); return *this;}
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
    CreateDBInstanceRequest& WithPerformanceInsightsKMSKeyId(PerformanceInsightsKMSKeyIdT&& value) { SetPerformanceInsightsKMSKeyId(std::forward<PerformanceInsightsKMSKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const { return m_enableCloudwatchLogsExports; }
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }
    template<typename EnableCloudwatchLogsExportsT = Aws::Vector<Aws::String>>
    void SetEnableCloudwatchLogsExports(EnableCloudwatchLogsExportsT&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::forward<EnableCloudwatchLogsExportsT>(value); }
    template<typename EnableCloudwatchLogsExportsT = Aws::Vector<Aws::String>>
    CreateDBInstanceRequest& WithEnableCloudwatchLogsExports(EnableCloudwatchLogsExportsT&& value) { SetEnableCloudwatchLogsExports(std::forward<EnableCloudwatchLogsExportsT>(value)); return *this;}
    template<typename EnableCloudwatchLogsExportsT = Aws::String>
    CreateDBInstanceRequest& AddEnableCloudwatchLogsExports(EnableCloudwatchLogsExportsT&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.emplace_back(std::forward<EnableCloudwatchLogsExportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether the DB instance has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/manage-console-instances-delete.html">Deleting
     * a DB Instance</a>.</p> <p>DB instances in a DB cluster can be deleted even when
     * deletion protection is enabled in their parent DB cluster.</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline CreateDBInstanceRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}
  private:

    Aws::String m_dBName;
    bool m_dBNameHasBeenSet = false;

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::Vector<Aws::String> m_dBSecurityGroups;
    bool m_dBSecurityGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet = false;

    int m_backupRetentionPeriod{0};
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    bool m_multiAZ{false};
    bool m_multiAZHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_autoMinorVersionUpgrade{false};
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet = false;

    Aws::String m_tdeCredentialPassword;
    bool m_tdeCredentialPasswordHasBeenSet = false;

    bool m_storageEncrypted{false};
    bool m_storageEncryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    bool m_copyTagsToSnapshot{false};
    bool m_copyTagsToSnapshotHasBeenSet = false;

    int m_monitoringInterval{0};
    bool m_monitoringIntervalHasBeenSet = false;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet = false;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet = false;

    int m_promotionTier{0};
    bool m_promotionTierHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    bool m_enableIAMDatabaseAuthentication{false};
    bool m_enableIAMDatabaseAuthenticationHasBeenSet = false;

    bool m_enablePerformanceInsights{false};
    bool m_enablePerformanceInsightsHasBeenSet = false;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
