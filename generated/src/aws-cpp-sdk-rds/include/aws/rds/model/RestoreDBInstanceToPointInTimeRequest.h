/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <aws/rds/model/ProcessorFeature.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBInstanceToPointInTimeMessage">AWS
   * API Reference</a></p>
   */
  class RestoreDBInstanceToPointInTimeRequest : public RDSRequest
  {
  public:
    AWS_RDS_API RestoreDBInstanceToPointInTimeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreDBInstanceToPointInTime"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the source DB instance from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing DB
     * instance.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceDBInstanceIdentifier() const { return m_sourceDBInstanceIdentifier; }
    inline bool SourceDBInstanceIdentifierHasBeenSet() const { return m_sourceDBInstanceIdentifierHasBeenSet; }
    template<typename SourceDBInstanceIdentifierT = Aws::String>
    void SetSourceDBInstanceIdentifier(SourceDBInstanceIdentifierT&& value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier = std::forward<SourceDBInstanceIdentifierT>(value); }
    template<typename SourceDBInstanceIdentifierT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithSourceDBInstanceIdentifier(SourceDBInstanceIdentifierT&& value) { SetSourceDBInstanceIdentifier(std::forward<SourceDBInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new DB instance to create.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Can't end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetTargetDBInstanceIdentifier() const { return m_targetDBInstanceIdentifier; }
    inline bool TargetDBInstanceIdentifierHasBeenSet() const { return m_targetDBInstanceIdentifierHasBeenSet; }
    template<typename TargetDBInstanceIdentifierT = Aws::String>
    void SetTargetDBInstanceIdentifier(TargetDBInstanceIdentifierT&& value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier = std::forward<TargetDBInstanceIdentifierT>(value); }
    template<typename TargetDBInstanceIdentifierT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithTargetDBInstanceIdentifier(TargetDBInstanceIdentifierT&& value) { SetTargetDBInstanceIdentifier(std::forward<TargetDBInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time to restore from.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be a time in Universal Coordinated Time (UTC) format.</p> </li> <li> <p>Must be
     * before the latest restorable time for the DB instance.</p> </li> <li> <p>Can't
     * be specified if the <code>UseLatestRestorableTime</code> parameter is
     * enabled.</p> </li> </ul> <p>Example: <code>2009-09-07T23:45:00Z</code> </p>
     */
    inline const Aws::Utils::DateTime& GetRestoreTime() const { return m_restoreTime; }
    inline bool RestoreTimeHasBeenSet() const { return m_restoreTimeHasBeenSet; }
    template<typename RestoreTimeT = Aws::Utils::DateTime>
    void SetRestoreTime(RestoreTimeT&& value) { m_restoreTimeHasBeenSet = true; m_restoreTime = std::forward<RestoreTimeT>(value); }
    template<typename RestoreTimeT = Aws::Utils::DateTime>
    RestoreDBInstanceToPointInTimeRequest& WithRestoreTime(RestoreTimeT&& value) { SetRestoreTime(std::forward<RestoreTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance is restored from the latest backup time. By
     * default, the DB instance isn't restored from the latest backup time.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be specified if the
     * <code>RestoreTime</code> parameter is provided.</p> </li> </ul>
     */
    inline bool GetUseLatestRestorableTime() const { return m_useLatestRestorableTime; }
    inline bool UseLatestRestorableTimeHasBeenSet() const { return m_useLatestRestorableTimeHasBeenSet; }
    inline void SetUseLatestRestorableTime(bool value) { m_useLatestRestorableTimeHasBeenSet = true; m_useLatestRestorableTime = value; }
    inline RestoreDBInstanceToPointInTimeRequest& WithUseLatestRestorableTime(bool value) { SetUseLatestRestorableTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example
     * db.m4.large. Not all DB instance classes are available in all Amazon Web
     * Services Regions, or for all database engines. For the full list of DB instance
     * classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Default: The same
     * DB instance class as the original DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const { return m_dBInstanceClass; }
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
    template<typename DBInstanceClassT = Aws::String>
    void SetDBInstanceClass(DBInstanceClassT&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::forward<DBInstanceClassT>(value); }
    template<typename DBInstanceClassT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithDBInstanceClass(DBInstanceClassT&& value) { SetDBInstanceClass(std::forward<DBInstanceClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which the database accepts connections.</p> <p>Default:
     * The same port as the original DB instance.</p> <p>Constraints:</p> <ul> <li>
     * <p>The value must be <code>1150-65535</code>.</p> </li> </ul>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline RestoreDBInstanceToPointInTimeRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraints:</p>
     * <ul> <li> <p>You can't specify the <code>AvailabilityZone</code> parameter if
     * the DB instance is a Multi-AZ deployment.</p> </li> </ul> <p>Example:
     * <code>us-east-1a</code> </p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints:</p>
     * <ul> <li> <p>If supplied, must match the name of an existing DB subnet
     * group.</p> </li> </ul> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const { return m_dBSubnetGroupName; }
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }
    template<typename DBSubnetGroupNameT = Aws::String>
    void SetDBSubnetGroupName(DBSubnetGroupNameT&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::forward<DBSubnetGroupNameT>(value); }
    template<typename DBSubnetGroupNameT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithDBSubnetGroupName(DBSubnetGroupNameT&& value) { SetDBSubnetGroupName(std::forward<DBSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Secifies whether the DB instance is a Multi-AZ deployment.</p> <p>This
     * setting doesn't apply to RDS Custom.</p> <p>Constraints:</p> <ul> <li> <p>You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> </li> </ul>
     */
    inline bool GetMultiAZ() const { return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline RestoreDBInstanceToPointInTimeRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance is publicly accessible.</p> <p>When the DB
     * cluster is publicly accessible, its Domain Name System (DNS) endpoint resolves
     * to the private IP address from within the DB cluster's virtual private cloud
     * (VPC). It resolves to the public IP address from outside of the DB cluster's
     * VPC. Access to the DB cluster is ultimately controlled by the security group it
     * uses. That public access isn't permitted if the security group assigned to the
     * DB cluster doesn't permit it.</p> <p>When the DB instance isn't publicly
     * accessible, it is an internal DB instance with a DNS name that resolves to a
     * private IP address.</p> <p>For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline RestoreDBInstanceToPointInTimeRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether minor version upgrades are applied automatically to the DB
     * instance during the maintenance window.</p> <p>This setting doesn't apply to RDS
     * Custom.</p> <p>For more information about automatic minor version upgrades, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Upgrading.html#USER_UpgradeDBInstance.Upgrading.AutoMinorVersionUpgrades">Automatically
     * upgrading the minor engine version</a>.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline RestoreDBInstanceToPointInTimeRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license model information for the restored DB instance.</p> 
     * <p>License models for RDS for Db2 require additional configuration. The bring
     * your own license (BYOL) model requires a custom parameter group and an Amazon
     * Web Services License Manager self-managed license. The Db2 license through
     * Amazon Web Services Marketplace model requires an Amazon Web Services
     * Marketplace subscription. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/db2-licensing.html">Amazon
     * RDS for Db2 licensing options</a> in the <i>Amazon RDS User Guide</i>.</p>
     *  <p>This setting doesn't apply to Amazon Aurora or RDS Custom DB
     * instances.</p> <p>Valid Values:</p> <ul> <li> <p>RDS for Db2 -
     * <code>bring-your-own-license | marketplace-license</code> </p> </li> <li> <p>RDS
     * for MariaDB - <code>general-public-license</code> </p> </li> <li> <p>RDS for
     * Microsoft SQL Server - <code>license-included</code> </p> </li> <li> <p>RDS for
     * MySQL - <code>general-public-license</code> </p> </li> <li> <p>RDS for Oracle -
     * <code>bring-your-own-license | license-included</code> </p> </li> <li> <p>RDS
     * for PostgreSQL - <code>postgresql-license</code> </p> </li> </ul> <p>Default:
     * Same as the source.</p>
     */
    inline const Aws::String& GetLicenseModel() const { return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    template<typename LicenseModelT = Aws::String>
    void SetLicenseModel(LicenseModelT&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::forward<LicenseModelT>(value); }
    template<typename LicenseModelT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithLicenseModel(LicenseModelT&& value) { SetLicenseModel(std::forward<LicenseModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database name for the restored DB instance.</p> <p>This parameter doesn't
     * apply to the following DB instances:</p> <ul> <li> <p>RDS Custom</p> </li> <li>
     * <p>RDS for Db2</p> </li> <li> <p>RDS for MariaDB</p> </li> <li> <p>RDS for
     * MySQL</p> </li> </ul>
     */
    inline const Aws::String& GetDBName() const { return m_dBName; }
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }
    template<typename DBNameT = Aws::String>
    void SetDBName(DBNameT&& value) { m_dBNameHasBeenSet = true; m_dBName = std::forward<DBNameT>(value); }
    template<typename DBNameT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithDBName(DBNameT&& value) { SetDBName(std::forward<DBNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine to use for the new instance.</p> <p>This setting doesn't
     * apply to RDS Custom.</p> <p>Valid Values:</p> <ul> <li> <p> <code>db2-ae</code>
     * </p> </li> <li> <p> <code>db2-se</code> </p> </li> <li> <p> <code>mariadb</code>
     * </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li>
     * <li> <p> <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code>
     * </p> </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul> <p>Default: The same as source</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be compatible with the engine of the
     * source.</p> </li> </ul>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to
     * initially allocate for the DB instance.</p> <p>This setting doesn't apply to SQL
     * Server.</p> <p>Constraints:</p> <ul> <li> <p>Must be an integer greater than
     * 1000.</p> </li> </ul>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline RestoreDBInstanceToPointInTimeRequest& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the option group to use for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance after it is associated with a DB instance</p> <p>This setting
     * doesn't apply to RDS Custom.</p>
     */
    inline const Aws::String& GetOptionGroupName() const { return m_optionGroupName; }
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
    template<typename OptionGroupNameT = Aws::String>
    void SetOptionGroupName(OptionGroupNameT&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::forward<OptionGroupNameT>(value); }
    template<typename OptionGroupNameT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithOptionGroupName(OptionGroupNameT&& value) { SetOptionGroupName(std::forward<OptionGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to copy all tags from the restored DB instance to snapshots
     * of the DB instance. By default, tags are not copied.</p>
     */
    inline bool GetCopyTagsToSnapshot() const { return m_copyTagsToSnapshot; }
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }
    inline RestoreDBInstanceToPointInTimeRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    RestoreDBInstanceToPointInTimeRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RestoreDBInstanceToPointInTimeRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The storage type to associate with the DB instance.</p> <p>Valid Values:
     * <code>gp2 | gp3 | io1 | io2 | standard</code> </p> <p>Default: <code>io1</code>,
     * if the <code>Iops</code> parameter is specified. Otherwise,
     * <code>gp3</code>.</p> <p>Constraints:</p> <ul> <li> <p>If you specify
     * <code>io1</code>, <code>io2</code>, or <code>gp3</code>, you must also include a
     * value for the <code>Iops</code> parameter.</p> </li> </ul>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const { return m_tdeCredentialArn; }
    inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }
    template<typename TdeCredentialArnT = Aws::String>
    void SetTdeCredentialArn(TdeCredentialArnT&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = std::forward<TdeCredentialArnT>(value); }
    template<typename TdeCredentialArnT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithTdeCredentialArn(TdeCredentialArnT&& value) { SetTdeCredentialArn(std::forward<TdeCredentialArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline const Aws::String& GetTdeCredentialPassword() const { return m_tdeCredentialPassword; }
    inline bool TdeCredentialPasswordHasBeenSet() const { return m_tdeCredentialPasswordHasBeenSet; }
    template<typename TdeCredentialPasswordT = Aws::String>
    void SetTdeCredentialPassword(TdeCredentialPasswordT&& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = std::forward<TdeCredentialPasswordT>(value); }
    template<typename TdeCredentialPasswordT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithTdeCredentialPassword(TdeCredentialPasswordT&& value) { SetTdeCredentialPassword(std::forward<TdeCredentialPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const { return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::forward<VpcSecurityGroupIdsT>(value); }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    RestoreDBInstanceToPointInTimeRequest& WithVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { SetVpcSecurityGroupIds(std::forward<VpcSecurityGroupIdsT>(value)); return *this;}
    template<typename VpcSecurityGroupIdsT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& AddVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.emplace_back(std::forward<VpcSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Active Directory directory ID to restore the DB instance in. Create the
     * domain before running this command. Currently, you can create only the MySQL,
     * Microsoft SQL Server, Oracle, and PostgreSQL DB instances in an Active Directory
     * Domain.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetDomainIAMRoleName() const { return m_domainIAMRoleName; }
    inline bool DomainIAMRoleNameHasBeenSet() const { return m_domainIAMRoleNameHasBeenSet; }
    template<typename DomainIAMRoleNameT = Aws::String>
    void SetDomainIAMRoleName(DomainIAMRoleNameT&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::forward<DomainIAMRoleNameT>(value); }
    template<typename DomainIAMRoleNameT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithDomainIAMRoleName(DomainIAMRoleNameT&& value) { SetDomainIAMRoleName(std::forward<DomainIAMRoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified domain name (FQDN) of an Active Directory domain.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64 characters.</p> </li>
     * </ul> <p>Example: <code>mymanagedADtest.mymanagedAD.mydomain</code> </p>
     */
    inline const Aws::String& GetDomainFqdn() const { return m_domainFqdn; }
    inline bool DomainFqdnHasBeenSet() const { return m_domainFqdnHasBeenSet; }
    template<typename DomainFqdnT = Aws::String>
    void SetDomainFqdn(DomainFqdnT&& value) { m_domainFqdnHasBeenSet = true; m_domainFqdn = std::forward<DomainFqdnT>(value); }
    template<typename DomainFqdnT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithDomainFqdn(DomainFqdnT&& value) { SetDomainFqdn(std::forward<DomainFqdnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Active Directory organizational unit for your DB instance to join.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the distinguished name format.</p>
     * </li> <li> <p>Can't be longer than 64 characters.</p> </li> </ul> <p>Example:
     * <code>OU=mymanagedADtestOU,DC=mymanagedADtest,DC=mymanagedAD,DC=mydomain</code>
     * </p>
     */
    inline const Aws::String& GetDomainOu() const { return m_domainOu; }
    inline bool DomainOuHasBeenSet() const { return m_domainOuHasBeenSet; }
    template<typename DomainOuT = Aws::String>
    void SetDomainOu(DomainOuT&& value) { m_domainOuHasBeenSet = true; m_domainOu = std::forward<DomainOuT>(value); }
    template<typename DomainOuT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithDomainOu(DomainOuT&& value) { SetDomainOu(std::forward<DomainOuT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the Secrets Manager secret with the credentials for the user
     * joining the domain.</p> <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64
     * characters.</p> </li> </ul> <p>Example:
     * <code>arn:aws:secretsmanager:region:account-number:secret:myselfmanagedADtestsecret-123456</code>
     * </p>
     */
    inline const Aws::String& GetDomainAuthSecretArn() const { return m_domainAuthSecretArn; }
    inline bool DomainAuthSecretArnHasBeenSet() const { return m_domainAuthSecretArnHasBeenSet; }
    template<typename DomainAuthSecretArnT = Aws::String>
    void SetDomainAuthSecretArn(DomainAuthSecretArnT&& value) { m_domainAuthSecretArnHasBeenSet = true; m_domainAuthSecretArn = std::forward<DomainAuthSecretArnT>(value); }
    template<typename DomainAuthSecretArnT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithDomainAuthSecretArn(DomainAuthSecretArnT&& value) { SetDomainAuthSecretArn(std::forward<DomainAuthSecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 DNS IP addresses of your primary and secondary Active Directory
     * domain controllers.</p> <p>Constraints:</p> <ul> <li> <p>Two IP addresses must
     * be provided. If there isn't a secondary domain controller, use the IP address of
     * the primary domain controller for both entries in the list.</p> </li> </ul>
     * <p>Example: <code>123.124.125.126,234.235.236.237</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainDnsIps() const { return m_domainDnsIps; }
    inline bool DomainDnsIpsHasBeenSet() const { return m_domainDnsIpsHasBeenSet; }
    template<typename DomainDnsIpsT = Aws::Vector<Aws::String>>
    void SetDomainDnsIps(DomainDnsIpsT&& value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps = std::forward<DomainDnsIpsT>(value); }
    template<typename DomainDnsIpsT = Aws::Vector<Aws::String>>
    RestoreDBInstanceToPointInTimeRequest& WithDomainDnsIps(DomainDnsIpsT&& value) { SetDomainDnsIps(std::forward<DomainDnsIpsT>(value)); return *this;}
    template<typename DomainDnsIpsT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& AddDomainDnsIps(DomainDnsIpsT&& value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps.emplace_back(std::forward<DomainDnsIpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable mapping of Amazon Web Services Identity and
     * Access Management (IAM) accounts to database accounts. By default, mapping isn't
     * enabled.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>For more
     * information about IAM database authentication, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication for MySQL and PostgreSQL</a> in the <i>Amazon RDS
     * User Guide.</i> </p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const { return m_enableIAMDatabaseAuthentication; }
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }
    inline RestoreDBInstanceToPointInTimeRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const { return m_enableCloudwatchLogsExports; }
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }
    template<typename EnableCloudwatchLogsExportsT = Aws::Vector<Aws::String>>
    void SetEnableCloudwatchLogsExports(EnableCloudwatchLogsExportsT&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::forward<EnableCloudwatchLogsExportsT>(value); }
    template<typename EnableCloudwatchLogsExportsT = Aws::Vector<Aws::String>>
    RestoreDBInstanceToPointInTimeRequest& WithEnableCloudwatchLogsExports(EnableCloudwatchLogsExportsT&& value) { SetEnableCloudwatchLogsExports(std::forward<EnableCloudwatchLogsExportsT>(value)); return *this;}
    template<typename EnableCloudwatchLogsExportsT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& AddEnableCloudwatchLogsExports(EnableCloudwatchLogsExportsT&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.emplace_back(std::forward<EnableCloudwatchLogsExportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline const Aws::Vector<ProcessorFeature>& GetProcessorFeatures() const { return m_processorFeatures; }
    inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }
    template<typename ProcessorFeaturesT = Aws::Vector<ProcessorFeature>>
    void SetProcessorFeatures(ProcessorFeaturesT&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = std::forward<ProcessorFeaturesT>(value); }
    template<typename ProcessorFeaturesT = Aws::Vector<ProcessorFeature>>
    RestoreDBInstanceToPointInTimeRequest& WithProcessorFeatures(ProcessorFeaturesT&& value) { SetProcessorFeatures(std::forward<ProcessorFeaturesT>(value)); return *this;}
    template<typename ProcessorFeaturesT = ProcessorFeature>
    RestoreDBInstanceToPointInTimeRequest& AddProcessorFeatures(ProcessorFeaturesT&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.emplace_back(std::forward<ProcessorFeaturesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance class of the DB instance uses its default
     * processor features.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline bool GetUseDefaultProcessorFeatures() const { return m_useDefaultProcessorFeatures; }
    inline bool UseDefaultProcessorFeaturesHasBeenSet() const { return m_useDefaultProcessorFeaturesHasBeenSet; }
    inline void SetUseDefaultProcessorFeatures(bool value) { m_useDefaultProcessorFeaturesHasBeenSet = true; m_useDefaultProcessorFeatures = value; }
    inline RestoreDBInstanceToPointInTimeRequest& WithUseDefaultProcessorFeatures(bool value) { SetUseDefaultProcessorFeatures(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB parameter group to associate with this DB instance.</p>
     * <p>If you do not specify a value for <code>DBParameterGroupName</code>, then the
     * default <code>DBParameterGroup</code> for the specified DB engine is used.</p>
     * <p>This setting doesn't apply to RDS Custom.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match the name of an existing DB parameter group.</p> </li>
     * <li> <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupName() const { return m_dBParameterGroupName; }
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }
    template<typename DBParameterGroupNameT = Aws::String>
    void SetDBParameterGroupName(DBParameterGroupNameT&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::forward<DBParameterGroupNameT>(value); }
    template<typename DBParameterGroupNameT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithDBParameterGroupName(DBParameterGroupNameT&& value) { SetDBParameterGroupName(std::forward<DBParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance has deletion protection enabled. The
     * database can't be deleted when deletion protection is enabled. By default,
     * deletion protection isn't enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>.</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline RestoreDBInstanceToPointInTimeRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID of the source DB instance from which to restore.</p>
     */
    inline const Aws::String& GetSourceDbiResourceId() const { return m_sourceDbiResourceId; }
    inline bool SourceDbiResourceIdHasBeenSet() const { return m_sourceDbiResourceIdHasBeenSet; }
    template<typename SourceDbiResourceIdT = Aws::String>
    void SetSourceDbiResourceId(SourceDbiResourceIdT&& value) { m_sourceDbiResourceIdHasBeenSet = true; m_sourceDbiResourceId = std::forward<SourceDbiResourceIdT>(value); }
    template<typename SourceDbiResourceIdT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithSourceDbiResourceId(SourceDbiResourceIdT&& value) { SetSourceDbiResourceId(std::forward<SourceDbiResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper limit in gibibytes (GiB) to which Amazon RDS can automatically
     * scale the storage of the DB instance.</p> <p>For more information about this
     * setting, including limitations that apply to it, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PIOPS.StorageTypes.html#USER_PIOPS.Autoscaling">
     * Managing capacity automatically with Amazon RDS storage autoscaling</a> in the
     * <i>Amazon RDS User Guide</i>.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline int GetMaxAllocatedStorage() const { return m_maxAllocatedStorage; }
    inline bool MaxAllocatedStorageHasBeenSet() const { return m_maxAllocatedStorageHasBeenSet; }
    inline void SetMaxAllocatedStorage(int value) { m_maxAllocatedStorageHasBeenSet = true; m_maxAllocatedStorage = value; }
    inline RestoreDBInstanceToPointInTimeRequest& WithMaxAllocatedStorage(int value) { SetMaxAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replicated automated backups from which
     * to restore, for example,
     * <code>arn:aws:rds:us-east-1:123456789012:auto-backup:ab-L2IJCEXJP7XQ7HOJ4SIEXAMPLE</code>.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline const Aws::String& GetSourceDBInstanceAutomatedBackupsArn() const { return m_sourceDBInstanceAutomatedBackupsArn; }
    inline bool SourceDBInstanceAutomatedBackupsArnHasBeenSet() const { return m_sourceDBInstanceAutomatedBackupsArnHasBeenSet; }
    template<typename SourceDBInstanceAutomatedBackupsArnT = Aws::String>
    void SetSourceDBInstanceAutomatedBackupsArn(SourceDBInstanceAutomatedBackupsArnT&& value) { m_sourceDBInstanceAutomatedBackupsArnHasBeenSet = true; m_sourceDBInstanceAutomatedBackupsArn = std::forward<SourceDBInstanceAutomatedBackupsArnT>(value); }
    template<typename SourceDBInstanceAutomatedBackupsArnT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithSourceDBInstanceAutomatedBackupsArn(SourceDBInstanceAutomatedBackupsArnT&& value) { SetSourceDBInstanceAutomatedBackupsArn(std::forward<SourceDBInstanceAutomatedBackupsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable a customer-owned IP address (CoIP) for an RDS on
     * Outposts DB instance.</p> <p>A <i>CoIP</i> provides local or external
     * connectivity to resources in your Outpost subnets through your on-premises
     * network. For some use cases, a CoIP can provide lower latency for connections to
     * the DB instance from outside of its virtual private cloud (VPC) on your local
     * network.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>For more
     * information about RDS on Outposts, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about CoIPs, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/routing.html#ip-addressing">Customer-owned
     * IP addresses</a> in the <i>Amazon Web Services Outposts User Guide</i>.</p>
     */
    inline bool GetEnableCustomerOwnedIp() const { return m_enableCustomerOwnedIp; }
    inline bool EnableCustomerOwnedIpHasBeenSet() const { return m_enableCustomerOwnedIpHasBeenSet; }
    inline void SetEnableCustomerOwnedIp(bool value) { m_enableCustomerOwnedIpHasBeenSet = true; m_enableCustomerOwnedIp = value; }
    inline RestoreDBInstanceToPointInTimeRequest& WithEnableCustomerOwnedIp(bool value) { SetEnableCustomerOwnedIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance profile associated with the underlying Amazon EC2 instance of an
     * RDS Custom DB instance. The instance profile must meet the following
     * requirements:</p> <ul> <li> <p>The profile must exist in your account.</p> </li>
     * <li> <p>The profile must have an IAM role that Amazon EC2 has permissions to
     * assume.</p> </li> <li> <p>The instance profile name and the associated IAM role
     * name must start with the prefix <code>AWSRDSCustom</code>.</p> </li> </ul>
     * <p>For the list of permissions required for the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-setup-orcl.html#custom-setup-orcl.iam-vpc">
     * Configure IAM and your VPC</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting is required for RDS Custom.</p>
     */
    inline const Aws::String& GetCustomIamInstanceProfile() const { return m_customIamInstanceProfile; }
    inline bool CustomIamInstanceProfileHasBeenSet() const { return m_customIamInstanceProfileHasBeenSet; }
    template<typename CustomIamInstanceProfileT = Aws::String>
    void SetCustomIamInstanceProfile(CustomIamInstanceProfileT&& value) { m_customIamInstanceProfileHasBeenSet = true; m_customIamInstanceProfile = std::forward<CustomIamInstanceProfileT>(value); }
    template<typename CustomIamInstanceProfileT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithCustomIamInstanceProfile(CustomIamInstanceProfileT&& value) { SetCustomIamInstanceProfile(std::forward<CustomIamInstanceProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location for storing automated backups and manual snapshots for the
     * restored DB instance.</p> <p>Valid Values:</p> <ul> <li> <p> <code>local</code>
     * (Dedicated Local Zone)</p> </li> <li> <p> <code>outposts</code> (Amazon Web
     * Services Outposts)</p> </li> <li> <p> <code>region</code> (Amazon Web Services
     * Region)</p> </li> </ul> <p>Default: <code>region</code> </p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetBackupTarget() const { return m_backupTarget; }
    inline bool BackupTargetHasBeenSet() const { return m_backupTargetHasBeenSet; }
    template<typename BackupTargetT = Aws::String>
    void SetBackupTarget(BackupTargetT&& value) { m_backupTargetHasBeenSet = true; m_backupTarget = std::forward<BackupTargetT>(value); }
    template<typename BackupTargetT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithBackupTarget(BackupTargetT&& value) { SetBackupTarget(std::forward<BackupTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type of the DB instance.</p> <p>The network type is determined by
     * the <code>DBSubnetGroup</code> specified for the DB instance. A
     * <code>DBSubnetGroup</code> can support only the IPv4 protocol or the IPv4 and
     * the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p> <p>Valid Values:</p> <ul> <li> <p> <code>IPV4</code> </p> </li> <li> <p>
     * <code>DUAL</code> </p> </li> </ul>
     */
    inline const Aws::String& GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    template<typename NetworkTypeT = Aws::String>
    void SetNetworkType(NetworkTypeT&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::forward<NetworkTypeT>(value); }
    template<typename NetworkTypeT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithNetworkType(NetworkTypeT&& value) { SetNetworkType(std::forward<NetworkTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage throughput value for the DB instance.</p> <p>This setting doesn't
     * apply to RDS Custom or Amazon Aurora.</p>
     */
    inline int GetStorageThroughput() const { return m_storageThroughput; }
    inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
    inline void SetStorageThroughput(int value) { m_storageThroughputHasBeenSet = true; m_storageThroughput = value; }
    inline RestoreDBInstanceToPointInTimeRequest& WithStorageThroughput(int value) { SetStorageThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage (in gibibytes) to allocate initially for the DB
     * instance. Follow the allocation rules specified in
     * <code>CreateDBInstance</code>.</p> <p>This setting isn't valid for RDS for SQL
     * Server.</p>  <p>Be sure to allocate enough storage for your new DB
     * instance so that the restore operation can succeed. You can also allocate
     * additional storage for future growth.</p> 
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline RestoreDBInstanceToPointInTimeRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable a dedicated log volume (DLV) for the DB
     * instance.</p>
     */
    inline bool GetDedicatedLogVolume() const { return m_dedicatedLogVolume; }
    inline bool DedicatedLogVolumeHasBeenSet() const { return m_dedicatedLogVolumeHasBeenSet; }
    inline void SetDedicatedLogVolume(bool value) { m_dedicatedLogVolumeHasBeenSet = true; m_dedicatedLogVolume = value; }
    inline RestoreDBInstanceToPointInTimeRequest& WithDedicatedLogVolume(bool value) { SetDedicatedLogVolume(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CA certificate identifier to use for the DB instance's server
     * certificate.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.SSL.html">Using
     * SSL/TLS to encrypt a connection to a DB instance</a> in the <i>Amazon RDS User
     * Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.SSL.html">
     * Using SSL/TLS to encrypt a connection to a DB cluster</a> in the <i>Amazon
     * Aurora User Guide</i>.</p>
     */
    inline const Aws::String& GetCACertificateIdentifier() const { return m_cACertificateIdentifier; }
    inline bool CACertificateIdentifierHasBeenSet() const { return m_cACertificateIdentifierHasBeenSet; }
    template<typename CACertificateIdentifierT = Aws::String>
    void SetCACertificateIdentifier(CACertificateIdentifierT&& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = std::forward<CACertificateIdentifierT>(value); }
    template<typename CACertificateIdentifierT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithCACertificateIdentifier(CACertificateIdentifierT&& value) { SetCACertificateIdentifier(std::forward<CACertificateIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle type for this DB instance.</p>  <p>By default, this
     * value is set to <code>open-source-rds-extended-support</code>, which enrolls
     * your DB instance into Amazon RDS Extended Support. At the end of standard
     * support, you can avoid charges for Extended Support by setting the value to
     * <code>open-source-rds-extended-support-disabled</code>. In this case, RDS
     * automatically upgrades your restored DB instance to a higher engine version, if
     * the major engine version is past its end of standard support date.</p> 
     * <p>You can use this setting to enroll your DB instance into Amazon RDS Extended
     * Support. With RDS Extended Support, you can run the selected major engine
     * version on your DB instance past the end of standard support for that engine
     * version. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/extended-support.html">Amazon
     * RDS Extended Support with Amazon RDS</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting applies only to RDS for MySQL and RDS for
     * PostgreSQL. For Amazon Aurora DB instances, the life cycle type is managed by
     * the DB cluster.</p> <p>Valid Values: <code>open-source-rds-extended-support |
     * open-source-rds-extended-support-disabled</code> </p> <p>Default:
     * <code>open-source-rds-extended-support</code> </p>
     */
    inline const Aws::String& GetEngineLifecycleSupport() const { return m_engineLifecycleSupport; }
    inline bool EngineLifecycleSupportHasBeenSet() const { return m_engineLifecycleSupportHasBeenSet; }
    template<typename EngineLifecycleSupportT = Aws::String>
    void SetEngineLifecycleSupport(EngineLifecycleSupportT&& value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport = std::forward<EngineLifecycleSupportT>(value); }
    template<typename EngineLifecycleSupportT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithEngineLifecycleSupport(EngineLifecycleSupportT&& value) { SetEngineLifecycleSupport(std::forward<EngineLifecycleSupportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to manage the master user password with Amazon Web Services
     * Secrets Manager in the restored DB instance.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide</i>.</p> <p>Constraints:</p> <ul> <li> <p>Applies to RDS for Oracle
     * only.</p> </li> </ul>
     */
    inline bool GetManageMasterUserPassword() const { return m_manageMasterUserPassword; }
    inline bool ManageMasterUserPasswordHasBeenSet() const { return m_manageMasterUserPasswordHasBeenSet; }
    inline void SetManageMasterUserPassword(bool value) { m_manageMasterUserPasswordHasBeenSet = true; m_manageMasterUserPassword = value; }
    inline RestoreDBInstanceToPointInTimeRequest& WithManageMasterUserPassword(bool value) { SetManageMasterUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if the master user password is managed by RDS in
     * Amazon Web Services Secrets Manager for the DB instance.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>If you don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * <p>There is a default KMS key for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetMasterUserSecretKmsKeyId() const { return m_masterUserSecretKmsKeyId; }
    inline bool MasterUserSecretKmsKeyIdHasBeenSet() const { return m_masterUserSecretKmsKeyIdHasBeenSet; }
    template<typename MasterUserSecretKmsKeyIdT = Aws::String>
    void SetMasterUserSecretKmsKeyId(MasterUserSecretKmsKeyIdT&& value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId = std::forward<MasterUserSecretKmsKeyIdT>(value); }
    template<typename MasterUserSecretKmsKeyIdT = Aws::String>
    RestoreDBInstanceToPointInTimeRequest& WithMasterUserSecretKmsKeyId(MasterUserSecretKmsKeyIdT&& value) { SetMasterUserSecretKmsKeyId(std::forward<MasterUserSecretKmsKeyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceDBInstanceIdentifier;
    bool m_sourceDBInstanceIdentifierHasBeenSet = false;

    Aws::String m_targetDBInstanceIdentifier;
    bool m_targetDBInstanceIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_restoreTime{};
    bool m_restoreTimeHasBeenSet = false;

    bool m_useLatestRestorableTime{false};
    bool m_useLatestRestorableTimeHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    bool m_multiAZ{false};
    bool m_multiAZHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    bool m_autoMinorVersionUpgrade{false};
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    Aws::String m_dBName;
    bool m_dBNameHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    bool m_copyTagsToSnapshot{false};
    bool m_copyTagsToSnapshotHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet = false;

    Aws::String m_tdeCredentialPassword;
    bool m_tdeCredentialPasswordHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet = false;

    Aws::String m_domainFqdn;
    bool m_domainFqdnHasBeenSet = false;

    Aws::String m_domainOu;
    bool m_domainOuHasBeenSet = false;

    Aws::String m_domainAuthSecretArn;
    bool m_domainAuthSecretArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_domainDnsIps;
    bool m_domainDnsIpsHasBeenSet = false;

    bool m_enableIAMDatabaseAuthentication{false};
    bool m_enableIAMDatabaseAuthenticationHasBeenSet = false;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet = false;

    Aws::Vector<ProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet = false;

    bool m_useDefaultProcessorFeatures{false};
    bool m_useDefaultProcessorFeaturesHasBeenSet = false;

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;

    Aws::String m_sourceDbiResourceId;
    bool m_sourceDbiResourceIdHasBeenSet = false;

    int m_maxAllocatedStorage{0};
    bool m_maxAllocatedStorageHasBeenSet = false;

    Aws::String m_sourceDBInstanceAutomatedBackupsArn;
    bool m_sourceDBInstanceAutomatedBackupsArnHasBeenSet = false;

    bool m_enableCustomerOwnedIp{false};
    bool m_enableCustomerOwnedIpHasBeenSet = false;

    Aws::String m_customIamInstanceProfile;
    bool m_customIamInstanceProfileHasBeenSet = false;

    Aws::String m_backupTarget;
    bool m_backupTargetHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;

    int m_storageThroughput{0};
    bool m_storageThroughputHasBeenSet = false;

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;

    bool m_dedicatedLogVolume{false};
    bool m_dedicatedLogVolumeHasBeenSet = false;

    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet = false;

    Aws::String m_engineLifecycleSupport;
    bool m_engineLifecycleSupportHasBeenSet = false;

    bool m_manageMasterUserPassword{false};
    bool m_manageMasterUserPasswordHasBeenSet = false;

    Aws::String m_masterUserSecretKmsKeyId;
    bool m_masterUserSecretKmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
