﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBInstanceFromDBSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class RestoreDBInstanceFromDBSnapshotRequest : public RDSRequest
  {
  public:
    AWS_RDS_API RestoreDBInstanceFromDBSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreDBInstanceFromDBSnapshot"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the DB instance to create from the DB snapshot. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1
     * to 63 numbers, letters, or hyphens.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens.</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the DB snapshot to restore from.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must match the identifier of an existing DB snapshot.</p> </li>
     * <li> <p>Can't be specified when <code>DBClusterSnapshotIdentifier</code> is
     * specified.</p> </li> <li> <p>Must be specified when
     * <code>DBClusterSnapshotIdentifier</code> isn't specified.</p> </li> <li> <p>If
     * you are restoring from a shared manual DB snapshot, the
     * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const{ return m_dBSnapshotIdentifier; }
    inline bool DBSnapshotIdentifierHasBeenSet() const { return m_dBSnapshotIdentifierHasBeenSet; }
    inline void SetDBSnapshotIdentifier(const Aws::String& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }
    inline void SetDBSnapshotIdentifier(Aws::String&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = std::move(value); }
    inline void SetDBSnapshotIdentifier(const char* value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSnapshotIdentifier(const Aws::String& value) { SetDBSnapshotIdentifier(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSnapshotIdentifier(Aws::String&& value) { SetDBSnapshotIdentifier(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSnapshotIdentifier(const char* value) { SetDBSnapshotIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example
     * db.m4.large. Not all DB instance classes are available in all Amazon Web
     * Services Regions, or for all database engines. For the full list of DB instance
     * classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default: The
     * same DBInstanceClass as the original DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which the database accepts connections.</p> <p>Default:
     * The same port as the original DB instance</p> <p>Constraints: Value must be
     * <code>1150-65535</code> </p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB subnet group to use for the new instance.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of an existing
     * DB subnet group.</p> </li> </ul> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance is a Multi-AZ deployment.</p> <p>This
     * setting doesn't apply to RDS Custom.</p> <p>Constraint: You can't specify the
     * <code>AvailabilityZone</code> parameter if the DB instance is a Multi-AZ
     * deployment.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance is publicly accessible.</p> <p>When the DB
     * instance is publicly accessible, its Domain Name System (DNS) endpoint resolves
     * to the private IP address from within the DB instance's virtual private cloud
     * (VPC). It resolves to the public IP address from outside of the DB instance's
     * VPC. Access to the DB instance is ultimately controlled by the security group it
     * uses. That public access is not permitted if the security group assigned to the
     * DB instance doesn't permit it.</p> <p>When the DB instance isn't publicly
     * accessible, it is an internal DB instance with a DNS name that resolves to a
     * private IP address.</p> <p>For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to automatically apply minor version upgrades to the DB
     * instance during the maintenance window.</p> <p>If you restore an RDS Custom DB
     * instance, you must disable this parameter.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>License model information for the restored DB instance.</p>  <p>License
     * models for RDS for Db2 require additional configuration. The Bring Your Own
     * License (BYOL) model requires a custom parameter group. The Db2 license through
     * Amazon Web Services Marketplace model requires an Amazon Web Services
     * Marketplace subscription. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/db2-licensing.html">RDS
     * for Db2 licensing options</a> in the <i>Amazon RDS User Guide</i>.</p> 
     * <p>This setting doesn't apply to Amazon Aurora or RDS Custom DB instances.</p>
     * <p>Valid Values:</p> <ul> <li> <p>RDS for Db2 - <code>bring-your-own-license |
     * marketplace-license</code> </p> </li> <li> <p>RDS for MariaDB -
     * <code>general-public-license</code> </p> </li> <li> <p>RDS for Microsoft SQL
     * Server - <code>license-included</code> </p> </li> <li> <p>RDS for MySQL -
     * <code>general-public-license</code> </p> </li> <li> <p>RDS for Oracle -
     * <code>bring-your-own-license | license-included</code> </p> </li> <li> <p>RDS
     * for PostgreSQL - <code>postgresql-license</code> </p> </li> </ul> <p>Default:
     * Same as the source.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database for the restored DB instance.</p> <p>This parameter
     * only applies to RDS for Oracle and RDS for SQL Server DB instances. It doesn't
     * apply to the other engines or to RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetDBName() const{ return m_dBName; }
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = std::move(value); }
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBName(Aws::String&& value) { SetDBName(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBName(const char* value) { SetDBName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine to use for the new instance.</p> <p>This setting doesn't
     * apply to RDS Custom.</p> <p>Default: The same as source</p> <p>Constraint: Must
     * be compatible with the engine of the source. For example, you can restore a
     * MariaDB 10.1 DB instance from a MySQL 5.6 snapshot.</p> <p>Valid Values:</p>
     * <ul> <li> <p> <code>db2-ae</code> </p> </li> <li> <p> <code>db2-se</code> </p>
     * </li> <li> <p> <code>mariadb</code> </p> </li> <li> <p> <code>mysql</code> </p>
     * </li> <li> <p> <code>oracle-ee</code> </p> </li> <li> <p>
     * <code>oracle-ee-cdb</code> </p> </li> <li> <p> <code>oracle-se2</code> </p>
     * </li> <li> <p> <code>oracle-se2-cdb</code> </p> </li> <li> <p>
     * <code>postgres</code> </p> </li> <li> <p> <code>sqlserver-ee</code> </p> </li>
     * <li> <p> <code>sqlserver-se</code> </p> </li> <li> <p> <code>sqlserver-ex</code>
     * </p> </li> <li> <p> <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the amount of provisioned IOPS for the DB instance, expressed in
     * I/O operations per second. If this parameter isn't specified, the IOPS value is
     * taken from the backup. If this parameter is set to 0, the new instance is
     * converted to a non-PIOPS instance. The conversion takes additional time, though
     * your DB instance is available for connections before the conversion starts.</p>
     * <p>The provisioned IOPS value must follow the requirements for your database
     * engine. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS storage</a> in the <i>Amazon RDS User Guide.</i> </p>
     * <p>Constraints: Must be an integer greater than 1000.</p>
     */
    inline int GetIops() const{ return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance after it is associated with a DB instance.</p> <p>This
     * setting doesn't apply to RDS Custom.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline RestoreDBInstanceFromDBSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p>
     * <p>Valid Values: <code>gp2 | gp3 | io1 | io2 | standard</code> </p> <p>If you
     * specify <code>io1</code>, <code>io2</code>, or <code>gp3</code>, you must also
     * include a value for the <code>Iops</code> parameter.</p> <p>Default:
     * <code>io1</code> if the <code>Iops</code> parameter is specified, otherwise
     * <code>gp2</code> </p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const{ return m_tdeCredentialArn; }
    inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }
    inline void SetTdeCredentialArn(const Aws::String& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }
    inline void SetTdeCredentialArn(Aws::String&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = std::move(value); }
    inline void SetTdeCredentialArn(const char* value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTdeCredentialArn(const Aws::String& value) { SetTdeCredentialArn(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTdeCredentialArn(Aws::String&& value) { SetTdeCredentialArn(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTdeCredentialArn(const char* value) { SetTdeCredentialArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline const Aws::String& GetTdeCredentialPassword() const{ return m_tdeCredentialPassword; }
    inline bool TdeCredentialPasswordHasBeenSet() const { return m_tdeCredentialPasswordHasBeenSet; }
    inline void SetTdeCredentialPassword(const Aws::String& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = value; }
    inline void SetTdeCredentialPassword(Aws::String&& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = std::move(value); }
    inline void SetTdeCredentialPassword(const char* value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTdeCredentialPassword(const Aws::String& value) { SetTdeCredentialPassword(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTdeCredentialPassword(Aws::String&& value) { SetTdeCredentialPassword(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTdeCredentialPassword(const char* value) { SetTdeCredentialPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    inline RestoreDBInstanceFromDBSnapshotRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline RestoreDBInstanceFromDBSnapshotRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Active Directory directory ID to restore the DB instance in. The domain/
     * must be created prior to this operation. Currently, you can create only Db2,
     * MySQL, Microsoft SQL Server, Oracle, and PostgreSQL DB instances in an Active
     * Directory Domain.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to RDS Custom.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified domain name (FQDN) of an Active Directory domain.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64 characters.</p> </li>
     * </ul> <p>Example: <code>mymanagedADtest.mymanagedAD.mydomain</code> </p>
     */
    inline const Aws::String& GetDomainFqdn() const{ return m_domainFqdn; }
    inline bool DomainFqdnHasBeenSet() const { return m_domainFqdnHasBeenSet; }
    inline void SetDomainFqdn(const Aws::String& value) { m_domainFqdnHasBeenSet = true; m_domainFqdn = value; }
    inline void SetDomainFqdn(Aws::String&& value) { m_domainFqdnHasBeenSet = true; m_domainFqdn = std::move(value); }
    inline void SetDomainFqdn(const char* value) { m_domainFqdnHasBeenSet = true; m_domainFqdn.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomainFqdn(const Aws::String& value) { SetDomainFqdn(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomainFqdn(Aws::String&& value) { SetDomainFqdn(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomainFqdn(const char* value) { SetDomainFqdn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Active Directory organizational unit for your DB instance to join.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the distinguished name format.</p>
     * </li> <li> <p>Can't be longer than 64 characters.</p> </li> </ul> <p>Example:
     * <code>OU=mymanagedADtestOU,DC=mymanagedADtest,DC=mymanagedAD,DC=mydomain</code>
     * </p>
     */
    inline const Aws::String& GetDomainOu() const{ return m_domainOu; }
    inline bool DomainOuHasBeenSet() const { return m_domainOuHasBeenSet; }
    inline void SetDomainOu(const Aws::String& value) { m_domainOuHasBeenSet = true; m_domainOu = value; }
    inline void SetDomainOu(Aws::String&& value) { m_domainOuHasBeenSet = true; m_domainOu = std::move(value); }
    inline void SetDomainOu(const char* value) { m_domainOuHasBeenSet = true; m_domainOu.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomainOu(const Aws::String& value) { SetDomainOu(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomainOu(Aws::String&& value) { SetDomainOu(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomainOu(const char* value) { SetDomainOu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the Secrets Manager secret with the credentials for the user
     * joining the domain.</p> <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64
     * characters.</p> </li> </ul> <p>Example:
     * <code>arn:aws:secretsmanager:region:account-number:secret:myselfmanagedADtestsecret-123456</code>
     * </p>
     */
    inline const Aws::String& GetDomainAuthSecretArn() const{ return m_domainAuthSecretArn; }
    inline bool DomainAuthSecretArnHasBeenSet() const { return m_domainAuthSecretArnHasBeenSet; }
    inline void SetDomainAuthSecretArn(const Aws::String& value) { m_domainAuthSecretArnHasBeenSet = true; m_domainAuthSecretArn = value; }
    inline void SetDomainAuthSecretArn(Aws::String&& value) { m_domainAuthSecretArnHasBeenSet = true; m_domainAuthSecretArn = std::move(value); }
    inline void SetDomainAuthSecretArn(const char* value) { m_domainAuthSecretArnHasBeenSet = true; m_domainAuthSecretArn.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomainAuthSecretArn(const Aws::String& value) { SetDomainAuthSecretArn(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomainAuthSecretArn(Aws::String&& value) { SetDomainAuthSecretArn(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomainAuthSecretArn(const char* value) { SetDomainAuthSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 DNS IP addresses of your primary and secondary Active Directory
     * domain controllers.</p> <p>Constraints:</p> <ul> <li> <p>Two IP addresses must
     * be provided. If there isn't a secondary domain controller, use the IP address of
     * the primary domain controller for both entries in the list.</p> </li> </ul>
     * <p>Example: <code>123.124.125.126,234.235.236.237</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainDnsIps() const{ return m_domainDnsIps; }
    inline bool DomainDnsIpsHasBeenSet() const { return m_domainDnsIpsHasBeenSet; }
    inline void SetDomainDnsIps(const Aws::Vector<Aws::String>& value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps = value; }
    inline void SetDomainDnsIps(Aws::Vector<Aws::String>&& value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps = std::move(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomainDnsIps(const Aws::Vector<Aws::String>& value) { SetDomainDnsIps(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomainDnsIps(Aws::Vector<Aws::String>&& value) { SetDomainDnsIps(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& AddDomainDnsIps(const Aws::String& value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps.push_back(value); return *this; }
    inline RestoreDBInstanceFromDBSnapshotRequest& AddDomainDnsIps(Aws::String&& value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps.push_back(std::move(value)); return *this; }
    inline RestoreDBInstanceFromDBSnapshotRequest& AddDomainDnsIps(const char* value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to copy all tags from the restored DB instance to snapshots
     * of the DB instance.</p> <p>In most cases, tags aren't copied by default.
     * However, when you restore a DB instance from a DB snapshot, RDS checks whether
     * you specify new tags. If yes, the new tags are added to the restored DB
     * instance. If there are no new tags, RDS looks for the tags from the source DB
     * instance for the DB snapshot, and then adds those tags to the restored DB
     * instance.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.html#USER_Tagging.CopyTags">
     * Copying tags to DB instance snapshots</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetDomainIAMRoleName() const{ return m_domainIAMRoleName; }
    inline bool DomainIAMRoleNameHasBeenSet() const { return m_domainIAMRoleNameHasBeenSet; }
    inline void SetDomainIAMRoleName(const Aws::String& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = value; }
    inline void SetDomainIAMRoleName(Aws::String&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::move(value); }
    inline void SetDomainIAMRoleName(const char* value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomainIAMRoleName(const Aws::String& value) { SetDomainIAMRoleName(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomainIAMRoleName(Aws::String&& value) { SetDomainIAMRoleName(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomainIAMRoleName(const char* value) { SetDomainIAMRoleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable mapping of Amazon Web Services Identity and
     * Access Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p> <p>For more information about IAM database authentication, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication for MySQL and PostgreSQL</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of logs for the restored DB instance to export to CloudWatch Logs.
     * The values in the list depend on the DB engine. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }
    inline RestoreDBInstanceFromDBSnapshotRequest& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }
    inline RestoreDBInstanceFromDBSnapshotRequest& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline const Aws::Vector<ProcessorFeature>& GetProcessorFeatures() const{ return m_processorFeatures; }
    inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }
    inline void SetProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = value; }
    inline void SetProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = std::move(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { SetProcessorFeatures(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { SetProcessorFeatures(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& AddProcessorFeatures(const ProcessorFeature& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(value); return *this; }
    inline RestoreDBInstanceFromDBSnapshotRequest& AddProcessorFeatures(ProcessorFeature&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance class of the DB instance uses its default
     * processor features.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline bool GetUseDefaultProcessorFeatures() const{ return m_useDefaultProcessorFeatures; }
    inline bool UseDefaultProcessorFeaturesHasBeenSet() const { return m_useDefaultProcessorFeaturesHasBeenSet; }
    inline void SetUseDefaultProcessorFeatures(bool value) { m_useDefaultProcessorFeaturesHasBeenSet = true; m_useDefaultProcessorFeatures = value; }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithUseDefaultProcessorFeatures(bool value) { SetUseDefaultProcessorFeatures(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB parameter group to associate with this DB instance.</p>
     * <p>If you don't specify a value for <code>DBParameterGroupName</code>, then RDS
     * uses the default <code>DBParameterGroup</code> for the specified DB engine.</p>
     * <p>This setting doesn't apply to RDS Custom.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match the name of an existing DB parameter group.</p> </li>
     * <li> <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable deletion protection for the DB instance. The
     * database can't be deleted when deletion protection is enabled. By default,
     * deletion protection isn't enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
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
    inline bool GetEnableCustomerOwnedIp() const{ return m_enableCustomerOwnedIp; }
    inline bool EnableCustomerOwnedIpHasBeenSet() const { return m_enableCustomerOwnedIpHasBeenSet; }
    inline void SetEnableCustomerOwnedIp(bool value) { m_enableCustomerOwnedIpHasBeenSet = true; m_enableCustomerOwnedIp = value; }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEnableCustomerOwnedIp(bool value) { SetEnableCustomerOwnedIp(value); return *this;}
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
    inline const Aws::String& GetCustomIamInstanceProfile() const{ return m_customIamInstanceProfile; }
    inline bool CustomIamInstanceProfileHasBeenSet() const { return m_customIamInstanceProfileHasBeenSet; }
    inline void SetCustomIamInstanceProfile(const Aws::String& value) { m_customIamInstanceProfileHasBeenSet = true; m_customIamInstanceProfile = value; }
    inline void SetCustomIamInstanceProfile(Aws::String&& value) { m_customIamInstanceProfileHasBeenSet = true; m_customIamInstanceProfile = std::move(value); }
    inline void SetCustomIamInstanceProfile(const char* value) { m_customIamInstanceProfileHasBeenSet = true; m_customIamInstanceProfile.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithCustomIamInstanceProfile(const Aws::String& value) { SetCustomIamInstanceProfile(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithCustomIamInstanceProfile(Aws::String&& value) { SetCustomIamInstanceProfile(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithCustomIamInstanceProfile(const char* value) { SetCustomIamInstanceProfile(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies where automated backups and manual snapshots are stored for the
     * restored DB instance.</p> <p>Possible values are <code>outposts</code> (Amazon
     * Web Services Outposts) and <code>region</code> (Amazon Web Services Region). The
     * default is <code>region</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetBackupTarget() const{ return m_backupTarget; }
    inline bool BackupTargetHasBeenSet() const { return m_backupTargetHasBeenSet; }
    inline void SetBackupTarget(const Aws::String& value) { m_backupTargetHasBeenSet = true; m_backupTarget = value; }
    inline void SetBackupTarget(Aws::String&& value) { m_backupTargetHasBeenSet = true; m_backupTarget = std::move(value); }
    inline void SetBackupTarget(const char* value) { m_backupTargetHasBeenSet = true; m_backupTarget.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithBackupTarget(const Aws::String& value) { SetBackupTarget(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithBackupTarget(Aws::String&& value) { SetBackupTarget(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithBackupTarget(const char* value) { SetBackupTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type of the DB instance.</p> <p>Valid Values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB instance. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p>
     */
    inline const Aws::String& GetNetworkType() const{ return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(const Aws::String& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline void SetNetworkType(Aws::String&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }
    inline void SetNetworkType(const char* value) { m_networkTypeHasBeenSet = true; m_networkType.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithNetworkType(const Aws::String& value) { SetNetworkType(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithNetworkType(Aws::String&& value) { SetNetworkType(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithNetworkType(const char* value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the storage throughput value for the DB instance.</p> <p>This
     * setting doesn't apply to RDS Custom or Amazon Aurora.</p>
     */
    inline int GetStorageThroughput() const{ return m_storageThroughput; }
    inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
    inline void SetStorageThroughput(int value) { m_storageThroughputHasBeenSet = true; m_storageThroughput = value; }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithStorageThroughput(int value) { SetStorageThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the Multi-AZ DB cluster snapshot to restore from.</p>
     * <p>For more information on Multi-AZ DB clusters, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
     * Multi-AZ DB cluster deployments</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * Multi-AZ DB cluster snapshot.</p> </li> <li> <p>Can't be specified when
     * <code>DBSnapshotIdentifier</code> is specified.</p> </li> <li> <p>Must be
     * specified when <code>DBSnapshotIdentifier</code> isn't specified.</p> </li> <li>
     * <p>If you are restoring from a shared manual Multi-AZ DB cluster snapshot, the
     * <code>DBClusterSnapshotIdentifier</code> must be the ARN of the shared
     * snapshot.</p> </li> <li> <p>Can't be the identifier of an Aurora DB cluster
     * snapshot.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterSnapshotIdentifier() const{ return m_dBClusterSnapshotIdentifier; }
    inline bool DBClusterSnapshotIdentifierHasBeenSet() const { return m_dBClusterSnapshotIdentifierHasBeenSet; }
    inline void SetDBClusterSnapshotIdentifier(const Aws::String& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = value; }
    inline void SetDBClusterSnapshotIdentifier(Aws::String&& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = std::move(value); }
    inline void SetDBClusterSnapshotIdentifier(const char* value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBClusterSnapshotIdentifier(const Aws::String& value) { SetDBClusterSnapshotIdentifier(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBClusterSnapshotIdentifier(Aws::String&& value) { SetDBClusterSnapshotIdentifier(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBClusterSnapshotIdentifier(const char* value) { SetDBClusterSnapshotIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage (in gibibytes) to allocate initially for the DB
     * instance. Follow the allocation rules specified in CreateDBInstance.</p> 
     * <p>Be sure to allocate enough storage for your new DB instance so that the
     * restore operation can succeed. You can also allocate additional storage for
     * future growth.</p> 
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable a dedicated log volume (DLV) for the DB
     * instance.</p>
     */
    inline bool GetDedicatedLogVolume() const{ return m_dedicatedLogVolume; }
    inline bool DedicatedLogVolumeHasBeenSet() const { return m_dedicatedLogVolumeHasBeenSet; }
    inline void SetDedicatedLogVolume(bool value) { m_dedicatedLogVolumeHasBeenSet = true; m_dedicatedLogVolume = value; }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDedicatedLogVolume(bool value) { SetDedicatedLogVolume(value); return *this;}
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
    inline const Aws::String& GetCACertificateIdentifier() const{ return m_cACertificateIdentifier; }
    inline bool CACertificateIdentifierHasBeenSet() const { return m_cACertificateIdentifierHasBeenSet; }
    inline void SetCACertificateIdentifier(const Aws::String& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = value; }
    inline void SetCACertificateIdentifier(Aws::String&& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = std::move(value); }
    inline void SetCACertificateIdentifier(const char* value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithCACertificateIdentifier(const Aws::String& value) { SetCACertificateIdentifier(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithCACertificateIdentifier(Aws::String&& value) { SetCACertificateIdentifier(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithCACertificateIdentifier(const char* value) { SetCACertificateIdentifier(value); return *this;}
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
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/extended-support.html">Using
     * Amazon RDS Extended Support</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting applies only to RDS for MySQL and RDS for PostgreSQL. For Amazon Aurora
     * DB instances, the life cycle type is managed by the DB cluster.</p> <p>Valid
     * Values: <code>open-source-rds-extended-support |
     * open-source-rds-extended-support-disabled</code> </p> <p>Default:
     * <code>open-source-rds-extended-support</code> </p>
     */
    inline const Aws::String& GetEngineLifecycleSupport() const{ return m_engineLifecycleSupport; }
    inline bool EngineLifecycleSupportHasBeenSet() const { return m_engineLifecycleSupportHasBeenSet; }
    inline void SetEngineLifecycleSupport(const Aws::String& value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport = value; }
    inline void SetEngineLifecycleSupport(Aws::String&& value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport = std::move(value); }
    inline void SetEngineLifecycleSupport(const char* value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport.assign(value); }
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEngineLifecycleSupport(const Aws::String& value) { SetEngineLifecycleSupport(value); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEngineLifecycleSupport(Aws::String&& value) { SetEngineLifecycleSupport(std::move(value)); return *this;}
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEngineLifecycleSupport(const char* value) { SetEngineLifecycleSupport(value); return *this;}
    ///@}
  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_dBSnapshotIdentifier;
    bool m_dBSnapshotIdentifierHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    Aws::String m_dBName;
    bool m_dBNameHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

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

    Aws::String m_domainFqdn;
    bool m_domainFqdnHasBeenSet = false;

    Aws::String m_domainOu;
    bool m_domainOuHasBeenSet = false;

    Aws::String m_domainAuthSecretArn;
    bool m_domainAuthSecretArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_domainDnsIps;
    bool m_domainDnsIpsHasBeenSet = false;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet = false;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet = false;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet = false;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet = false;

    Aws::Vector<ProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet = false;

    bool m_useDefaultProcessorFeatures;
    bool m_useDefaultProcessorFeaturesHasBeenSet = false;

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    bool m_enableCustomerOwnedIp;
    bool m_enableCustomerOwnedIpHasBeenSet = false;

    Aws::String m_customIamInstanceProfile;
    bool m_customIamInstanceProfileHasBeenSet = false;

    Aws::String m_backupTarget;
    bool m_backupTargetHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;

    int m_storageThroughput;
    bool m_storageThroughputHasBeenSet = false;

    Aws::String m_dBClusterSnapshotIdentifier;
    bool m_dBClusterSnapshotIdentifierHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    bool m_dedicatedLogVolume;
    bool m_dedicatedLogVolumeHasBeenSet = false;

    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet = false;

    Aws::String m_engineLifecycleSupport;
    bool m_engineLifecycleSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
