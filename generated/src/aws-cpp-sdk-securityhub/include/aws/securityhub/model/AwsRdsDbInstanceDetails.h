/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsRdsDbInstanceEndpoint.h>
#include <aws/securityhub/model/AwsRdsDbSubnetGroup.h>
#include <aws/securityhub/model/AwsRdsDbPendingModifiedValues.h>
#include <aws/securityhub/model/AwsRdsDbInstanceAssociatedRole.h>
#include <aws/securityhub/model/AwsRdsDbInstanceVpcSecurityGroup.h>
#include <aws/securityhub/model/AwsRdsDbParameterGroup.h>
#include <aws/securityhub/model/AwsRdsDbOptionGroupMembership.h>
#include <aws/securityhub/model/AwsRdsDbStatusInfo.h>
#include <aws/securityhub/model/AwsRdsDbDomainMembership.h>
#include <aws/securityhub/model/AwsRdsDbProcessorFeature.h>
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
   * <p>Contains the details of an Amazon RDS DB instance.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbInstanceDetails">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbInstanceDetails
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbInstanceDetails() = default;
    AWS_SECURITYHUB_API AwsRdsDbInstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbInstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IAM roles associated with the DB instance.</p>
     */
    inline const Aws::Vector<AwsRdsDbInstanceAssociatedRole>& GetAssociatedRoles() const { return m_associatedRoles; }
    inline bool AssociatedRolesHasBeenSet() const { return m_associatedRolesHasBeenSet; }
    template<typename AssociatedRolesT = Aws::Vector<AwsRdsDbInstanceAssociatedRole>>
    void SetAssociatedRoles(AssociatedRolesT&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = std::forward<AssociatedRolesT>(value); }
    template<typename AssociatedRolesT = Aws::Vector<AwsRdsDbInstanceAssociatedRole>>
    AwsRdsDbInstanceDetails& WithAssociatedRoles(AssociatedRolesT&& value) { SetAssociatedRoles(std::forward<AssociatedRolesT>(value)); return *this;}
    template<typename AssociatedRolesT = AwsRdsDbInstanceAssociatedRole>
    AwsRdsDbInstanceDetails& AddAssociatedRoles(AssociatedRolesT&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles.emplace_back(std::forward<AssociatedRolesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the CA certificate for this DB instance.</p>
     */
    inline const Aws::String& GetCACertificateIdentifier() const { return m_cACertificateIdentifier; }
    inline bool CACertificateIdentifierHasBeenSet() const { return m_cACertificateIdentifierHasBeenSet; }
    template<typename CACertificateIdentifierT = Aws::String>
    void SetCACertificateIdentifier(CACertificateIdentifierT&& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = std::forward<CACertificateIdentifierT>(value); }
    template<typename CACertificateIdentifierT = Aws::String>
    AwsRdsDbInstanceDetails& WithCACertificateIdentifier(CACertificateIdentifierT&& value) { SetCACertificateIdentifier(std::forward<CACertificateIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the DB instance is a member of a DB cluster, contains the name of the DB
     * cluster that the DB instance is a member of.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    template<typename DBClusterIdentifierT = Aws::String>
    void SetDBClusterIdentifier(DBClusterIdentifierT&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value); }
    template<typename DBClusterIdentifierT = Aws::String>
    AwsRdsDbInstanceDetails& WithDBClusterIdentifier(DBClusterIdentifierT&& value) { SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a user-supplied database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const { return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    template<typename DBInstanceIdentifierT = Aws::String>
    void SetDBInstanceIdentifier(DBInstanceIdentifierT&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::forward<DBInstanceIdentifierT>(value); }
    template<typename DBInstanceIdentifierT = Aws::String>
    AwsRdsDbInstanceDetails& WithDBInstanceIdentifier(DBInstanceIdentifierT&& value) { SetDBInstanceIdentifier(std::forward<DBInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the name of the compute and memory capacity class of the DB
     * instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const { return m_dBInstanceClass; }
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
    template<typename DBInstanceClassT = Aws::String>
    void SetDBInstanceClass(DBInstanceClassT&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::forward<DBInstanceClassT>(value); }
    template<typename DBInstanceClassT = Aws::String>
    AwsRdsDbInstanceDetails& WithDBInstanceClass(DBInstanceClassT&& value) { SetDBInstanceClass(std::forward<DBInstanceClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the port that the DB instance listens on. If the DB instance is
     * part of a DB cluster, this can be a different port than the DB cluster port.</p>
     */
    inline int GetDbInstancePort() const { return m_dbInstancePort; }
    inline bool DbInstancePortHasBeenSet() const { return m_dbInstancePortHasBeenSet; }
    inline void SetDbInstancePort(int value) { m_dbInstancePortHasBeenSet = true; m_dbInstancePort = value; }
    inline AwsRdsDbInstanceDetails& WithDbInstancePort(int value) { SetDbInstancePort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * instance. This identifier is found in CloudTrail log entries whenever the KMS
     * key for the DB instance is accessed. </p>
     */
    inline const Aws::String& GetDbiResourceId() const { return m_dbiResourceId; }
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }
    template<typename DbiResourceIdT = Aws::String>
    void SetDbiResourceId(DbiResourceIdT&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::forward<DbiResourceIdT>(value); }
    template<typename DbiResourceIdT = Aws::String>
    AwsRdsDbInstanceDetails& WithDbiResourceId(DbiResourceIdT&& value) { SetDbiResourceId(std::forward<DbiResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p> <b>MySQL, MariaDB, SQL Server, PostgreSQL</b> </p> <p>Contains the
     * name of the initial database of this instance that was provided at create time,
     * if one was specified when the DB instance was created. This same name is
     * returned for the life of the DB instance.</p> <p> <b>Oracle</b> </p> <p>Contains
     * the Oracle System ID (SID) of the created DB instance. Not shown when the
     * returned parameters don't apply to an Oracle DB instance. </p>
     */
    inline const Aws::String& GetDBName() const { return m_dBName; }
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }
    template<typename DBNameT = Aws::String>
    void SetDBName(DBNameT&& value) { m_dBNameHasBeenSet = true; m_dBName = std::forward<DBNameT>(value); }
    template<typename DBNameT = Aws::String>
    AwsRdsDbInstanceDetails& WithDBName(DBNameT&& value) { SetDBName(std::forward<DBNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB instance has deletion protection enabled.</p>
     * <p>When deletion protection is enabled, the database cannot be deleted.</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline AwsRdsDbInstanceDetails& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the connection endpoint.</p>
     */
    inline const AwsRdsDbInstanceEndpoint& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = AwsRdsDbInstanceEndpoint>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = AwsRdsDbInstanceEndpoint>
    AwsRdsDbInstanceDetails& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the name of the database engine to use for this DB instance.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    AwsRdsDbInstanceDetails& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    AwsRdsDbInstanceDetails& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if mapping of IAM accounts to database accounts is enabled, and
     * otherwise false.</p> <p>IAM database authentication can be enabled for the
     * following database engines.</p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34
     * or higher</p> </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p>
     * </li> <li> <p>Aurora 5.6 or higher</p> </li> </ul>
     */
    inline bool GetIAMDatabaseAuthenticationEnabled() const { return m_iAMDatabaseAuthenticationEnabled; }
    inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }
    inline void SetIAMDatabaseAuthenticationEnabled(bool value) { m_iAMDatabaseAuthenticationEnabledHasBeenSet = true; m_iAMDatabaseAuthenticationEnabled = value; }
    inline AwsRdsDbInstanceDetails& WithIAMDatabaseAuthenticationEnabled(bool value) { SetIAMDatabaseAuthenticationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the DB instance was created.</p> <p>For more information about
     * the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetInstanceCreateTime() const { return m_instanceCreateTime; }
    inline bool InstanceCreateTimeHasBeenSet() const { return m_instanceCreateTimeHasBeenSet; }
    template<typename InstanceCreateTimeT = Aws::String>
    void SetInstanceCreateTime(InstanceCreateTimeT&& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = std::forward<InstanceCreateTimeT>(value); }
    template<typename InstanceCreateTimeT = Aws::String>
    AwsRdsDbInstanceDetails& WithInstanceCreateTime(InstanceCreateTimeT&& value) { SetInstanceCreateTime(std::forward<InstanceCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB instance.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    AwsRdsDbInstanceDetails& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the accessibility options for the DB instance.</p> <p>A value of
     * true specifies an Internet-facing instance with a publicly resolvable DNS name,
     * which resolves to a public IP address.</p> <p>A value of false specifies an
     * internal instance with a DNS name that resolves to a private IP address. </p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline AwsRdsDbInstanceDetails& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const { return m_storageEncrypted; }
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }
    inline AwsRdsDbInstanceDetails& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN from the key store with which the instance is associated for TDE
     * encryption.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const { return m_tdeCredentialArn; }
    inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }
    template<typename TdeCredentialArnT = Aws::String>
    void SetTdeCredentialArn(TdeCredentialArnT&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = std::forward<TdeCredentialArnT>(value); }
    template<typename TdeCredentialArnT = Aws::String>
    AwsRdsDbInstanceDetails& WithTdeCredentialArn(TdeCredentialArnT&& value) { SetTdeCredentialArn(std::forward<TdeCredentialArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of VPC security groups that the DB instance belongs to.</p>
     */
    inline const Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>& GetVpcSecurityGroups() const { return m_vpcSecurityGroups; }
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }
    template<typename VpcSecurityGroupsT = Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>>
    void SetVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::forward<VpcSecurityGroupsT>(value); }
    template<typename VpcSecurityGroupsT = Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>>
    AwsRdsDbInstanceDetails& WithVpcSecurityGroups(VpcSecurityGroupsT&& value) { SetVpcSecurityGroups(std::forward<VpcSecurityGroupsT>(value)); return *this;}
    template<typename VpcSecurityGroupsT = AwsRdsDbInstanceVpcSecurityGroup>
    AwsRdsDbInstanceDetails& AddVpcSecurityGroups(VpcSecurityGroupsT&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.emplace_back(std::forward<VpcSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the DB instance is a multiple Availability Zone deployment.</p>
     */
    inline bool GetMultiAz() const { return m_multiAz; }
    inline bool MultiAzHasBeenSet() const { return m_multiAzHasBeenSet; }
    inline void SetMultiAz(bool value) { m_multiAzHasBeenSet = true; m_multiAz = value; }
    inline AwsRdsDbInstanceDetails& WithMultiAz(bool value) { SetMultiAz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the CloudWatch Logs log stream that receives the enhanced
     * monitoring metrics data for the DB instance.</p>
     */
    inline const Aws::String& GetEnhancedMonitoringResourceArn() const { return m_enhancedMonitoringResourceArn; }
    inline bool EnhancedMonitoringResourceArnHasBeenSet() const { return m_enhancedMonitoringResourceArnHasBeenSet; }
    template<typename EnhancedMonitoringResourceArnT = Aws::String>
    void SetEnhancedMonitoringResourceArn(EnhancedMonitoringResourceArnT&& value) { m_enhancedMonitoringResourceArnHasBeenSet = true; m_enhancedMonitoringResourceArn = std::forward<EnhancedMonitoringResourceArnT>(value); }
    template<typename EnhancedMonitoringResourceArnT = Aws::String>
    AwsRdsDbInstanceDetails& WithEnhancedMonitoringResourceArn(EnhancedMonitoringResourceArnT&& value) { SetEnhancedMonitoringResourceArn(std::forward<EnhancedMonitoringResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the DB instance.</p>
     */
    inline const Aws::String& GetDbInstanceStatus() const { return m_dbInstanceStatus; }
    inline bool DbInstanceStatusHasBeenSet() const { return m_dbInstanceStatusHasBeenSet; }
    template<typename DbInstanceStatusT = Aws::String>
    void SetDbInstanceStatus(DbInstanceStatusT&& value) { m_dbInstanceStatusHasBeenSet = true; m_dbInstanceStatus = std::forward<DbInstanceStatusT>(value); }
    template<typename DbInstanceStatusT = Aws::String>
    AwsRdsDbInstanceDetails& WithDbInstanceStatus(DbInstanceStatusT&& value) { SetDbInstanceStatus(std::forward<DbInstanceStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The master user name of the DB instance.</p>
     */
    inline const Aws::String& GetMasterUsername() const { return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    template<typename MasterUsernameT = Aws::String>
    void SetMasterUsername(MasterUsernameT&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::forward<MasterUsernameT>(value); }
    template<typename MasterUsernameT = Aws::String>
    AwsRdsDbInstanceDetails& WithMasterUsername(MasterUsernameT&& value) { SetMasterUsername(std::forward<MasterUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage (in gigabytes) to initially allocate for the DB
     * instance.</p>
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline AwsRdsDbInstanceDetails& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of time each day when automated backups are created, if automated
     * backups are enabled.</p> <p>Uses the format <code>HH:MM-HH:MM</code>. For
     * example, <code>04:52-05:22</code>.</p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const { return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    template<typename PreferredBackupWindowT = Aws::String>
    void SetPreferredBackupWindow(PreferredBackupWindowT&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::forward<PreferredBackupWindowT>(value); }
    template<typename PreferredBackupWindowT = Aws::String>
    AwsRdsDbInstanceDetails& WithPreferredBackupWindow(PreferredBackupWindowT&& value) { SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which to retain automated backups.</p>
     */
    inline int GetBackupRetentionPeriod() const { return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline AwsRdsDbInstanceDetails& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the DB security groups to assign to the DB instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDbSecurityGroups() const { return m_dbSecurityGroups; }
    inline bool DbSecurityGroupsHasBeenSet() const { return m_dbSecurityGroupsHasBeenSet; }
    template<typename DbSecurityGroupsT = Aws::Vector<Aws::String>>
    void SetDbSecurityGroups(DbSecurityGroupsT&& value) { m_dbSecurityGroupsHasBeenSet = true; m_dbSecurityGroups = std::forward<DbSecurityGroupsT>(value); }
    template<typename DbSecurityGroupsT = Aws::Vector<Aws::String>>
    AwsRdsDbInstanceDetails& WithDbSecurityGroups(DbSecurityGroupsT&& value) { SetDbSecurityGroups(std::forward<DbSecurityGroupsT>(value)); return *this;}
    template<typename DbSecurityGroupsT = Aws::String>
    AwsRdsDbInstanceDetails& AddDbSecurityGroups(DbSecurityGroupsT&& value) { m_dbSecurityGroupsHasBeenSet = true; m_dbSecurityGroups.emplace_back(std::forward<DbSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the DB parameter groups to assign to the DB instance.</p>
     */
    inline const Aws::Vector<AwsRdsDbParameterGroup>& GetDbParameterGroups() const { return m_dbParameterGroups; }
    inline bool DbParameterGroupsHasBeenSet() const { return m_dbParameterGroupsHasBeenSet; }
    template<typename DbParameterGroupsT = Aws::Vector<AwsRdsDbParameterGroup>>
    void SetDbParameterGroups(DbParameterGroupsT&& value) { m_dbParameterGroupsHasBeenSet = true; m_dbParameterGroups = std::forward<DbParameterGroupsT>(value); }
    template<typename DbParameterGroupsT = Aws::Vector<AwsRdsDbParameterGroup>>
    AwsRdsDbInstanceDetails& WithDbParameterGroups(DbParameterGroupsT&& value) { SetDbParameterGroups(std::forward<DbParameterGroupsT>(value)); return *this;}
    template<typename DbParameterGroupsT = AwsRdsDbParameterGroup>
    AwsRdsDbInstanceDetails& AddDbParameterGroups(DbParameterGroupsT&& value) { m_dbParameterGroupsHasBeenSet = true; m_dbParameterGroups.emplace_back(std::forward<DbParameterGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Availability Zone where the DB instance will be created.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    AwsRdsDbInstanceDetails& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the subnet group that is associated with the DB
     * instance.</p>
     */
    inline const AwsRdsDbSubnetGroup& GetDbSubnetGroup() const { return m_dbSubnetGroup; }
    inline bool DbSubnetGroupHasBeenSet() const { return m_dbSubnetGroupHasBeenSet; }
    template<typename DbSubnetGroupT = AwsRdsDbSubnetGroup>
    void SetDbSubnetGroup(DbSubnetGroupT&& value) { m_dbSubnetGroupHasBeenSet = true; m_dbSubnetGroup = std::forward<DbSubnetGroupT>(value); }
    template<typename DbSubnetGroupT = AwsRdsDbSubnetGroup>
    AwsRdsDbInstanceDetails& WithDbSubnetGroup(DbSubnetGroupT&& value) { SetDbSubnetGroup(std::forward<DbSubnetGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Uses the format
     * <code>&lt;day&gt;:HH:MM-&lt;day&gt;:HH:MM</code>.</p> <p>For the day values, use
     * <code>mon</code>|<code>tue</code>|<code>wed</code>|<code>thu</code>|<code>fri</code>|<code>sat</code>|<code>sun</code>.</p>
     * <p>For example, <code>sun:09:32-sun:10:02</code>.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    AwsRdsDbInstanceDetails& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Changes to the DB instance that are currently pending.</p>
     */
    inline const AwsRdsDbPendingModifiedValues& GetPendingModifiedValues() const { return m_pendingModifiedValues; }
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }
    template<typename PendingModifiedValuesT = AwsRdsDbPendingModifiedValues>
    void SetPendingModifiedValues(PendingModifiedValuesT&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::forward<PendingModifiedValuesT>(value); }
    template<typename PendingModifiedValuesT = AwsRdsDbPendingModifiedValues>
    AwsRdsDbInstanceDetails& WithPendingModifiedValues(PendingModifiedValuesT&& value) { SetPendingModifiedValues(std::forward<PendingModifiedValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p> <p>For more information about the validation and
     * formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLatestRestorableTime() const { return m_latestRestorableTime; }
    inline bool LatestRestorableTimeHasBeenSet() const { return m_latestRestorableTimeHasBeenSet; }
    template<typename LatestRestorableTimeT = Aws::String>
    void SetLatestRestorableTime(LatestRestorableTimeT&& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = std::forward<LatestRestorableTimeT>(value); }
    template<typename LatestRestorableTimeT = Aws::String>
    AwsRdsDbInstanceDetails& WithLatestRestorableTime(LatestRestorableTimeT&& value) { SetLatestRestorableTime(std::forward<LatestRestorableTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether minor version patches are applied automatically.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline AwsRdsDbInstanceDetails& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this DB instance is a read replica, contains the identifier of the source
     * DB instance.</p>
     */
    inline const Aws::String& GetReadReplicaSourceDBInstanceIdentifier() const { return m_readReplicaSourceDBInstanceIdentifier; }
    inline bool ReadReplicaSourceDBInstanceIdentifierHasBeenSet() const { return m_readReplicaSourceDBInstanceIdentifierHasBeenSet; }
    template<typename ReadReplicaSourceDBInstanceIdentifierT = Aws::String>
    void SetReadReplicaSourceDBInstanceIdentifier(ReadReplicaSourceDBInstanceIdentifierT&& value) { m_readReplicaSourceDBInstanceIdentifierHasBeenSet = true; m_readReplicaSourceDBInstanceIdentifier = std::forward<ReadReplicaSourceDBInstanceIdentifierT>(value); }
    template<typename ReadReplicaSourceDBInstanceIdentifierT = Aws::String>
    AwsRdsDbInstanceDetails& WithReadReplicaSourceDBInstanceIdentifier(ReadReplicaSourceDBInstanceIdentifierT&& value) { SetReadReplicaSourceDBInstanceIdentifier(std::forward<ReadReplicaSourceDBInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of identifiers of the read replicas associated with this DB
     * instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadReplicaDBInstanceIdentifiers() const { return m_readReplicaDBInstanceIdentifiers; }
    inline bool ReadReplicaDBInstanceIdentifiersHasBeenSet() const { return m_readReplicaDBInstanceIdentifiersHasBeenSet; }
    template<typename ReadReplicaDBInstanceIdentifiersT = Aws::Vector<Aws::String>>
    void SetReadReplicaDBInstanceIdentifiers(ReadReplicaDBInstanceIdentifiersT&& value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers = std::forward<ReadReplicaDBInstanceIdentifiersT>(value); }
    template<typename ReadReplicaDBInstanceIdentifiersT = Aws::Vector<Aws::String>>
    AwsRdsDbInstanceDetails& WithReadReplicaDBInstanceIdentifiers(ReadReplicaDBInstanceIdentifiersT&& value) { SetReadReplicaDBInstanceIdentifiers(std::forward<ReadReplicaDBInstanceIdentifiersT>(value)); return *this;}
    template<typename ReadReplicaDBInstanceIdentifiersT = Aws::String>
    AwsRdsDbInstanceDetails& AddReadReplicaDBInstanceIdentifiers(ReadReplicaDBInstanceIdentifiersT&& value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers.emplace_back(std::forward<ReadReplicaDBInstanceIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of identifiers of Aurora DB clusters to which the RDS DB instance is
     * replicated as a read replica.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadReplicaDBClusterIdentifiers() const { return m_readReplicaDBClusterIdentifiers; }
    inline bool ReadReplicaDBClusterIdentifiersHasBeenSet() const { return m_readReplicaDBClusterIdentifiersHasBeenSet; }
    template<typename ReadReplicaDBClusterIdentifiersT = Aws::Vector<Aws::String>>
    void SetReadReplicaDBClusterIdentifiers(ReadReplicaDBClusterIdentifiersT&& value) { m_readReplicaDBClusterIdentifiersHasBeenSet = true; m_readReplicaDBClusterIdentifiers = std::forward<ReadReplicaDBClusterIdentifiersT>(value); }
    template<typename ReadReplicaDBClusterIdentifiersT = Aws::Vector<Aws::String>>
    AwsRdsDbInstanceDetails& WithReadReplicaDBClusterIdentifiers(ReadReplicaDBClusterIdentifiersT&& value) { SetReadReplicaDBClusterIdentifiers(std::forward<ReadReplicaDBClusterIdentifiersT>(value)); return *this;}
    template<typename ReadReplicaDBClusterIdentifiersT = Aws::String>
    AwsRdsDbInstanceDetails& AddReadReplicaDBClusterIdentifiers(ReadReplicaDBClusterIdentifiersT&& value) { m_readReplicaDBClusterIdentifiersHasBeenSet = true; m_readReplicaDBClusterIdentifiers.emplace_back(std::forward<ReadReplicaDBClusterIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>License model information for this DB instance.</p>
     */
    inline const Aws::String& GetLicenseModel() const { return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    template<typename LicenseModelT = Aws::String>
    void SetLicenseModel(LicenseModelT&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::forward<LicenseModelT>(value); }
    template<typename LicenseModelT = Aws::String>
    AwsRdsDbInstanceDetails& WithLicenseModel(LicenseModelT&& value) { SetLicenseModel(std::forward<LicenseModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the provisioned IOPS (I/O operations per second) for this DB
     * instance.</p>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline AwsRdsDbInstanceDetails& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of option group memberships for this DB instance.</p>
     */
    inline const Aws::Vector<AwsRdsDbOptionGroupMembership>& GetOptionGroupMemberships() const { return m_optionGroupMemberships; }
    inline bool OptionGroupMembershipsHasBeenSet() const { return m_optionGroupMembershipsHasBeenSet; }
    template<typename OptionGroupMembershipsT = Aws::Vector<AwsRdsDbOptionGroupMembership>>
    void SetOptionGroupMemberships(OptionGroupMembershipsT&& value) { m_optionGroupMembershipsHasBeenSet = true; m_optionGroupMemberships = std::forward<OptionGroupMembershipsT>(value); }
    template<typename OptionGroupMembershipsT = Aws::Vector<AwsRdsDbOptionGroupMembership>>
    AwsRdsDbInstanceDetails& WithOptionGroupMemberships(OptionGroupMembershipsT&& value) { SetOptionGroupMemberships(std::forward<OptionGroupMembershipsT>(value)); return *this;}
    template<typename OptionGroupMembershipsT = AwsRdsDbOptionGroupMembership>
    AwsRdsDbInstanceDetails& AddOptionGroupMemberships(OptionGroupMembershipsT&& value) { m_optionGroupMembershipsHasBeenSet = true; m_optionGroupMemberships.emplace_back(std::forward<OptionGroupMembershipsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the character set that this DB instance is associated with.</p>
     */
    inline const Aws::String& GetCharacterSetName() const { return m_characterSetName; }
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }
    template<typename CharacterSetNameT = Aws::String>
    void SetCharacterSetName(CharacterSetNameT&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::forward<CharacterSetNameT>(value); }
    template<typename CharacterSetNameT = Aws::String>
    AwsRdsDbInstanceDetails& WithCharacterSetName(CharacterSetNameT&& value) { SetCharacterSetName(std::forward<CharacterSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a DB instance with multi-Availability Zone support, the name of the
     * secondary Availability Zone.</p>
     */
    inline const Aws::String& GetSecondaryAvailabilityZone() const { return m_secondaryAvailabilityZone; }
    inline bool SecondaryAvailabilityZoneHasBeenSet() const { return m_secondaryAvailabilityZoneHasBeenSet; }
    template<typename SecondaryAvailabilityZoneT = Aws::String>
    void SetSecondaryAvailabilityZone(SecondaryAvailabilityZoneT&& value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone = std::forward<SecondaryAvailabilityZoneT>(value); }
    template<typename SecondaryAvailabilityZoneT = Aws::String>
    AwsRdsDbInstanceDetails& WithSecondaryAvailabilityZone(SecondaryAvailabilityZoneT&& value) { SetSecondaryAvailabilityZone(std::forward<SecondaryAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a read replica. If the instance isn't a read replica, this is
     * empty.</p>
     */
    inline const Aws::Vector<AwsRdsDbStatusInfo>& GetStatusInfos() const { return m_statusInfos; }
    inline bool StatusInfosHasBeenSet() const { return m_statusInfosHasBeenSet; }
    template<typename StatusInfosT = Aws::Vector<AwsRdsDbStatusInfo>>
    void SetStatusInfos(StatusInfosT&& value) { m_statusInfosHasBeenSet = true; m_statusInfos = std::forward<StatusInfosT>(value); }
    template<typename StatusInfosT = Aws::Vector<AwsRdsDbStatusInfo>>
    AwsRdsDbInstanceDetails& WithStatusInfos(StatusInfosT&& value) { SetStatusInfos(std::forward<StatusInfosT>(value)); return *this;}
    template<typename StatusInfosT = AwsRdsDbStatusInfo>
    AwsRdsDbInstanceDetails& AddStatusInfos(StatusInfosT&& value) { m_statusInfosHasBeenSet = true; m_statusInfos.emplace_back(std::forward<StatusInfosT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The storage type for the DB instance.</p>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    AwsRdsDbInstanceDetails& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Active Directory domain membership records associated with the DB
     * instance.</p>
     */
    inline const Aws::Vector<AwsRdsDbDomainMembership>& GetDomainMemberships() const { return m_domainMemberships; }
    inline bool DomainMembershipsHasBeenSet() const { return m_domainMembershipsHasBeenSet; }
    template<typename DomainMembershipsT = Aws::Vector<AwsRdsDbDomainMembership>>
    void SetDomainMemberships(DomainMembershipsT&& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships = std::forward<DomainMembershipsT>(value); }
    template<typename DomainMembershipsT = Aws::Vector<AwsRdsDbDomainMembership>>
    AwsRdsDbInstanceDetails& WithDomainMemberships(DomainMembershipsT&& value) { SetDomainMemberships(std::forward<DomainMembershipsT>(value)); return *this;}
    template<typename DomainMembershipsT = AwsRdsDbDomainMembership>
    AwsRdsDbInstanceDetails& AddDomainMemberships(DomainMembershipsT&& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships.emplace_back(std::forward<DomainMembershipsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether to copy resource tags to snapshots of the DB instance.</p>
     */
    inline bool GetCopyTagsToSnapshot() const { return m_copyTagsToSnapshot; }
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }
    inline AwsRdsDbInstanceDetails& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval, in seconds, between points when enhanced monitoring metrics are
     * collected for the DB instance.</p>
     */
    inline int GetMonitoringInterval() const { return m_monitoringInterval; }
    inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }
    inline AwsRdsDbInstanceDetails& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the IAM role that permits Amazon RDS to send enhanced monitoring
     * metrics to CloudWatch Logs.</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const { return m_monitoringRoleArn; }
    inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }
    template<typename MonitoringRoleArnT = Aws::String>
    void SetMonitoringRoleArn(MonitoringRoleArnT&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::forward<MonitoringRoleArnT>(value); }
    template<typename MonitoringRoleArnT = Aws::String>
    AwsRdsDbInstanceDetails& WithMonitoringRoleArn(MonitoringRoleArnT&& value) { SetMonitoringRoleArn(std::forward<MonitoringRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order in which to promote an Aurora replica to the primary instance after
     * a failure of the existing primary instance.</p>
     */
    inline int GetPromotionTier() const { return m_promotionTier; }
    inline bool PromotionTierHasBeenSet() const { return m_promotionTierHasBeenSet; }
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }
    inline AwsRdsDbInstanceDetails& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}
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
    AwsRdsDbInstanceDetails& WithTimezone(TimezoneT&& value) { SetTimezone(std::forward<TimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Performance Insights is enabled for the DB instance.</p>
     */
    inline bool GetPerformanceInsightsEnabled() const { return m_performanceInsightsEnabled; }
    inline bool PerformanceInsightsEnabledHasBeenSet() const { return m_performanceInsightsEnabledHasBeenSet; }
    inline void SetPerformanceInsightsEnabled(bool value) { m_performanceInsightsEnabledHasBeenSet = true; m_performanceInsightsEnabled = value; }
    inline AwsRdsDbInstanceDetails& WithPerformanceInsightsEnabled(bool value) { SetPerformanceInsightsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS key used to encrypt the Performance Insights
     * data.</p>
     */
    inline const Aws::String& GetPerformanceInsightsKmsKeyId() const { return m_performanceInsightsKmsKeyId; }
    inline bool PerformanceInsightsKmsKeyIdHasBeenSet() const { return m_performanceInsightsKmsKeyIdHasBeenSet; }
    template<typename PerformanceInsightsKmsKeyIdT = Aws::String>
    void SetPerformanceInsightsKmsKeyId(PerformanceInsightsKmsKeyIdT&& value) { m_performanceInsightsKmsKeyIdHasBeenSet = true; m_performanceInsightsKmsKeyId = std::forward<PerformanceInsightsKmsKeyIdT>(value); }
    template<typename PerformanceInsightsKmsKeyIdT = Aws::String>
    AwsRdsDbInstanceDetails& WithPerformanceInsightsKmsKeyId(PerformanceInsightsKmsKeyIdT&& value) { SetPerformanceInsightsKmsKeyId(std::forward<PerformanceInsightsKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain Performance Insights data.</p>
     */
    inline int GetPerformanceInsightsRetentionPeriod() const { return m_performanceInsightsRetentionPeriod; }
    inline bool PerformanceInsightsRetentionPeriodHasBeenSet() const { return m_performanceInsightsRetentionPeriodHasBeenSet; }
    inline void SetPerformanceInsightsRetentionPeriod(int value) { m_performanceInsightsRetentionPeriodHasBeenSet = true; m_performanceInsightsRetentionPeriod = value; }
    inline AwsRdsDbInstanceDetails& WithPerformanceInsightsRetentionPeriod(int value) { SetPerformanceInsightsRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of log types that this DB instance is configured to export to
     * CloudWatch Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledCloudWatchLogsExports() const { return m_enabledCloudWatchLogsExports; }
    inline bool EnabledCloudWatchLogsExportsHasBeenSet() const { return m_enabledCloudWatchLogsExportsHasBeenSet; }
    template<typename EnabledCloudWatchLogsExportsT = Aws::Vector<Aws::String>>
    void SetEnabledCloudWatchLogsExports(EnabledCloudWatchLogsExportsT&& value) { m_enabledCloudWatchLogsExportsHasBeenSet = true; m_enabledCloudWatchLogsExports = std::forward<EnabledCloudWatchLogsExportsT>(value); }
    template<typename EnabledCloudWatchLogsExportsT = Aws::Vector<Aws::String>>
    AwsRdsDbInstanceDetails& WithEnabledCloudWatchLogsExports(EnabledCloudWatchLogsExportsT&& value) { SetEnabledCloudWatchLogsExports(std::forward<EnabledCloudWatchLogsExportsT>(value)); return *this;}
    template<typename EnabledCloudWatchLogsExportsT = Aws::String>
    AwsRdsDbInstanceDetails& AddEnabledCloudWatchLogsExports(EnabledCloudWatchLogsExportsT&& value) { m_enabledCloudWatchLogsExportsHasBeenSet = true; m_enabledCloudWatchLogsExports.emplace_back(std::forward<EnabledCloudWatchLogsExportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline const Aws::Vector<AwsRdsDbProcessorFeature>& GetProcessorFeatures() const { return m_processorFeatures; }
    inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }
    template<typename ProcessorFeaturesT = Aws::Vector<AwsRdsDbProcessorFeature>>
    void SetProcessorFeatures(ProcessorFeaturesT&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = std::forward<ProcessorFeaturesT>(value); }
    template<typename ProcessorFeaturesT = Aws::Vector<AwsRdsDbProcessorFeature>>
    AwsRdsDbInstanceDetails& WithProcessorFeatures(ProcessorFeaturesT&& value) { SetProcessorFeatures(std::forward<ProcessorFeaturesT>(value)); return *this;}
    template<typename ProcessorFeaturesT = AwsRdsDbProcessorFeature>
    AwsRdsDbInstanceDetails& AddProcessorFeatures(ProcessorFeaturesT&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.emplace_back(std::forward<ProcessorFeaturesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const AwsRdsDbInstanceEndpoint& GetListenerEndpoint() const { return m_listenerEndpoint; }
    inline bool ListenerEndpointHasBeenSet() const { return m_listenerEndpointHasBeenSet; }
    template<typename ListenerEndpointT = AwsRdsDbInstanceEndpoint>
    void SetListenerEndpoint(ListenerEndpointT&& value) { m_listenerEndpointHasBeenSet = true; m_listenerEndpoint = std::forward<ListenerEndpointT>(value); }
    template<typename ListenerEndpointT = AwsRdsDbInstanceEndpoint>
    AwsRdsDbInstanceDetails& WithListenerEndpoint(ListenerEndpointT&& value) { SetListenerEndpoint(std::forward<ListenerEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper limit to which Amazon RDS can automatically scale the storage of
     * the DB instance.</p>
     */
    inline int GetMaxAllocatedStorage() const { return m_maxAllocatedStorage; }
    inline bool MaxAllocatedStorageHasBeenSet() const { return m_maxAllocatedStorageHasBeenSet; }
    inline void SetMaxAllocatedStorage(int value) { m_maxAllocatedStorageHasBeenSet = true; m_maxAllocatedStorage = value; }
    inline AwsRdsDbInstanceDetails& WithMaxAllocatedStorage(int value) { SetMaxAllocatedStorage(value); return *this;}
    ///@}
  private:

    Aws::Vector<AwsRdsDbInstanceAssociatedRole> m_associatedRoles;
    bool m_associatedRolesHasBeenSet = false;

    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    int m_dbInstancePort{0};
    bool m_dbInstancePortHasBeenSet = false;

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet = false;

    Aws::String m_dBName;
    bool m_dBNameHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;

    AwsRdsDbInstanceEndpoint m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_iAMDatabaseAuthenticationEnabled{false};
    bool m_iAMDatabaseAuthenticationEnabledHasBeenSet = false;

    Aws::String m_instanceCreateTime;
    bool m_instanceCreateTimeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    bool m_storageEncrypted{false};
    bool m_storageEncryptedHasBeenSet = false;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet = false;

    Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet = false;

    bool m_multiAz{false};
    bool m_multiAzHasBeenSet = false;

    Aws::String m_enhancedMonitoringResourceArn;
    bool m_enhancedMonitoringResourceArnHasBeenSet = false;

    Aws::String m_dbInstanceStatus;
    bool m_dbInstanceStatusHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    int m_backupRetentionPeriod{0};
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::Vector<Aws::String> m_dbSecurityGroups;
    bool m_dbSecurityGroupsHasBeenSet = false;

    Aws::Vector<AwsRdsDbParameterGroup> m_dbParameterGroups;
    bool m_dbParameterGroupsHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    AwsRdsDbSubnetGroup m_dbSubnetGroup;
    bool m_dbSubnetGroupHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    AwsRdsDbPendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet = false;

    Aws::String m_latestRestorableTime;
    bool m_latestRestorableTimeHasBeenSet = false;

    bool m_autoMinorVersionUpgrade{false};
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::String m_readReplicaSourceDBInstanceIdentifier;
    bool m_readReplicaSourceDBInstanceIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_readReplicaDBInstanceIdentifiers;
    bool m_readReplicaDBInstanceIdentifiersHasBeenSet = false;

    Aws::Vector<Aws::String> m_readReplicaDBClusterIdentifiers;
    bool m_readReplicaDBClusterIdentifiersHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    Aws::Vector<AwsRdsDbOptionGroupMembership> m_optionGroupMemberships;
    bool m_optionGroupMembershipsHasBeenSet = false;

    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet = false;

    Aws::String m_secondaryAvailabilityZone;
    bool m_secondaryAvailabilityZoneHasBeenSet = false;

    Aws::Vector<AwsRdsDbStatusInfo> m_statusInfos;
    bool m_statusInfosHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::Vector<AwsRdsDbDomainMembership> m_domainMemberships;
    bool m_domainMembershipsHasBeenSet = false;

    bool m_copyTagsToSnapshot{false};
    bool m_copyTagsToSnapshotHasBeenSet = false;

    int m_monitoringInterval{0};
    bool m_monitoringIntervalHasBeenSet = false;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet = false;

    int m_promotionTier{0};
    bool m_promotionTierHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    bool m_performanceInsightsEnabled{false};
    bool m_performanceInsightsEnabledHasBeenSet = false;

    Aws::String m_performanceInsightsKmsKeyId;
    bool m_performanceInsightsKmsKeyIdHasBeenSet = false;

    int m_performanceInsightsRetentionPeriod{0};
    bool m_performanceInsightsRetentionPeriodHasBeenSet = false;

    Aws::Vector<Aws::String> m_enabledCloudWatchLogsExports;
    bool m_enabledCloudWatchLogsExportsHasBeenSet = false;

    Aws::Vector<AwsRdsDbProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet = false;

    AwsRdsDbInstanceEndpoint m_listenerEndpoint;
    bool m_listenerEndpointHasBeenSet = false;

    int m_maxAllocatedStorage{0};
    bool m_maxAllocatedStorageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
