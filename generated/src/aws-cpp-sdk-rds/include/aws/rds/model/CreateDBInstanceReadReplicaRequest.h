/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/DatabaseInsightsMode.h>
#include <aws/rds/model/ReplicaMode.h>
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
   */
  class CreateDBInstanceReadReplicaRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateDBInstanceReadReplicaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBInstanceReadReplica"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The DB instance identifier of the read replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the DB instance that will act as the source for the read
     * replica. Each DB instance can have up to 15 read replicas, with the exception of
     * Oracle and SQL Server, which can have up to five.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be the identifier of an existing Db2, MariaDB, MySQL, Oracle,
     * PostgreSQL, or SQL Server DB instance.</p> </li> <li> <p>Can't be specified if
     * the <code>SourceDBClusterIdentifier</code> parameter is also specified.</p>
     * </li> <li> <p>For the limitations of Oracle read replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.limitations.html#oracle-read-replicas.limitations.versions-and-licenses">Version
     * and licensing considerations for RDS for Oracle replicas</a> in the <i>Amazon
     * RDS User Guide</i>.</p> </li> <li> <p>For the limitations of SQL Server read
     * replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/SQLServer.ReadReplicas.html#SQLServer.ReadReplicas.Limitations">Read
     * replica limitations with SQL Server</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> <li> <p>The specified DB instance must have automatic backups enabled,
     * that is, its backup retention period must be greater than 0.</p> </li> <li>
     * <p>If the source DB instance is in the same Amazon Web Services Region as the
     * read replica, specify a valid DB instance identifier.</p> </li> <li> <p>If the
     * source DB instance is in a different Amazon Web Services Region from the read
     * replica, specify a valid DB instance ARN. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">Constructing
     * an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>. This doesn't
     * apply to SQL Server or RDS Custom, which don't support cross-Region
     * replicas.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceDBInstanceIdentifier() const{ return m_sourceDBInstanceIdentifier; }
    inline bool SourceDBInstanceIdentifierHasBeenSet() const { return m_sourceDBInstanceIdentifierHasBeenSet; }
    inline void SetSourceDBInstanceIdentifier(const Aws::String& value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier = value; }
    inline void SetSourceDBInstanceIdentifier(Aws::String&& value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier = std::move(value); }
    inline void SetSourceDBInstanceIdentifier(const char* value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier.assign(value); }
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBInstanceIdentifier(const Aws::String& value) { SetSourceDBInstanceIdentifier(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBInstanceIdentifier(Aws::String&& value) { SetSourceDBInstanceIdentifier(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBInstanceIdentifier(const char* value) { SetSourceDBInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute and memory capacity of the read replica, for example db.m4.large.
     * Not all DB instance classes are available in all Amazon Web Services Regions, or
     * for all database engines. For the full list of DB instance classes, and
     * availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Default: Inherits
     * the value from the source DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone (AZ) where the read replica will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's Amazon
     * Web Services Region.</p> <p>Example: <code>us-east-1d</code> </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline CreateDBInstanceReadReplicaRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number that the DB instance uses for connections.</p> <p>Valid
     * Values: <code>1150-65535</code> </p> <p>Default: Inherits the value from the
     * source DB instance.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline CreateDBInstanceReadReplicaRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the read replica is in a Multi-AZ deployment.</p> <p>You
     * can create a read replica as a Multi-AZ DB instance. RDS creates a standby of
     * your replica in another Availability Zone for failover support for the replica.
     * Creating your read replica as a Multi-AZ DB instance is independent of whether
     * the source is a Multi-AZ DB instance or a Multi-AZ DB cluster.</p> <p>This
     * setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline CreateDBInstanceReadReplicaRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to automatically apply minor engine upgrades to the read
     * replica during the maintenance window.</p> <p>This setting doesn't apply to RDS
     * Custom DB instances.</p> <p>Default: Inherits the value from the source DB
     * instance.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline CreateDBInstanceReadReplicaRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to
     * initially allocate for the DB instance.</p>
     */
    inline int GetIops() const{ return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline CreateDBInstanceReadReplicaRequest& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option group to associate the DB instance with. If not specified, RDS
     * uses the option group associated with the source DB instance or cluster.</p>
     *  <p>For SQL Server, you must use the option group associated with the
     * source.</p>  <p>This setting doesn't apply to RDS Custom DB
     * instances.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }
    inline CreateDBInstanceReadReplicaRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB parameter group to associate with this read replica DB
     * instance.</p> <p>For Single-AZ or Multi-AZ DB instance read replica instances,
     * if you don't specify a value for <code>DBParameterGroupName</code>, then Amazon
     * RDS uses the <code>DBParameterGroup</code> of the source DB instance for a same
     * Region read replica, or the default <code>DBParameterGroup</code> for the
     * specified DB engine for a cross-Region read replica.</p> <p>For Multi-AZ DB
     * cluster same Region read replica instances, if you don't specify a value for
     * <code>DBParameterGroupName</code>, then Amazon RDS uses the default
     * <code>DBParameterGroup</code>.</p> <p>Specifying a parameter group for this
     * operation is only supported for MySQL DB instances for cross-Region read
     * replicas, for Multi-AZ DB cluster read replica instances, and for Oracle DB
     * instances. It isn't supported for MySQL DB instances for same Region read
     * replicas or for RDS Custom.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to
     * 255 letters, numbers, or hyphens.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }
    inline CreateDBInstanceReadReplicaRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}
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
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline CreateDBInstanceReadReplicaRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDBInstanceReadReplicaRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateDBInstanceReadReplicaRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A DB subnet group for the DB instance. The new DB instance is created in the
     * VPC associated with the DB subnet group. If no DB subnet group is specified,
     * then the new DB instance isn't created in a VPC.</p> <p>Constraints:</p> <ul>
     * <li> <p>If supplied, must match the name of an existing DB subnet group.</p>
     * </li> <li> <p>The specified DB subnet group must be in the same Amazon Web
     * Services Region in which the operation is running.</p> </li> <li> <p>All read
     * replicas in one Amazon Web Services Region that are created from the same source
     * DB instance must either:</p> <ul> <li> <p>Specify DB subnet groups from the same
     * VPC. All these read replicas are created in the same VPC.</p> </li> <li> <p>Not
     * specify a DB subnet group. All these read replicas are created outside of any
     * VPC.</p> </li> </ul> </li> </ul> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }
    inline CreateDBInstanceReadReplicaRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon EC2 VPC security groups to associate with the read
     * replica.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }
    inline CreateDBInstanceReadReplicaRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    inline CreateDBInstanceReadReplicaRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline CreateDBInstanceReadReplicaRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The storage type to associate with the read replica.</p> <p>If you specify
     * <code>io1</code>, <code>io2</code>, or <code>gp3</code>, you must also include a
     * value for the <code>Iops</code> parameter.</p> <p>Valid Values: <code>gp2 | gp3
     * | io1 | io2 | standard</code> </p> <p>Default: <code>io1</code> if the
     * <code>Iops</code> parameter is specified. Otherwise, <code>gp2</code>.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }
    inline CreateDBInstanceReadReplicaRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to copy all tags from the read replica to snapshots of the
     * read replica. By default, tags aren't copied.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }
    inline CreateDBInstanceReadReplicaRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the read replica. To disable collection of Enhanced Monitoring
     * metrics, specify <code>0</code>. The default is <code>0</code>.</p> <p>If
     * <code>MonitoringRoleArn</code> is specified, then you must set
     * <code>MonitoringInterval</code> to a value other than <code>0</code>.</p>
     * <p>This setting doesn't apply to RDS Custom DB instances.</p> <p>Valid Values:
     * <code>0, 1, 5, 10, 15, 30, 60</code> </p> <p>Default: <code>0</code> </p>
     */
    inline int GetMonitoringInterval() const{ return m_monitoringInterval; }
    inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }
    inline CreateDBInstanceReadReplicaRequest& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a> in the <i>Amazon RDS
     * User Guide</i>.</p> <p>If <code>MonitoringInterval</code> is set to a value
     * other than 0, then you must supply a <code>MonitoringRoleArn</code> value.</p>
     * <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const{ return m_monitoringRoleArn; }
    inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }
    inline void SetMonitoringRoleArn(const Aws::String& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }
    inline void SetMonitoringRoleArn(Aws::String&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::move(value); }
    inline void SetMonitoringRoleArn(const char* value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn.assign(value); }
    inline CreateDBInstanceReadReplicaRequest& WithMonitoringRoleArn(const Aws::String& value) { SetMonitoringRoleArn(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithMonitoringRoleArn(Aws::String&& value) { SetMonitoringRoleArn(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted read replica.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key.</p> <p>If you create an encrypted read replica in
     * the same Amazon Web Services Region as the source DB instance or Multi-AZ DB
     * cluster, don't specify a value for this parameter. A read replica in the same
     * Amazon Web Services Region is always encrypted with the same KMS key as the
     * source DB instance or cluster.</p> <p>If you create an encrypted read replica in
     * a different Amazon Web Services Region, then you must specify a KMS key
     * identifier for the destination Amazon Web Services Region. KMS keys are specific
     * to the Amazon Web Services Region that they are created in, and you can't use
     * KMS keys from one Amazon Web Services Region in another Amazon Web Services
     * Region.</p> <p>You can't create an encrypted read replica from an unencrypted DB
     * instance or Multi-AZ DB cluster.</p> <p>This setting doesn't apply to RDS
     * Custom, which uses the same KMS key as the primary replica.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline CreateDBInstanceReadReplicaRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you are creating a read replica from one Amazon Web Services GovCloud
     * (US) Region to another or from one China Amazon Web Services Region to another,
     * the URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API operation in the source Amazon Web
     * Services Region that contains the source DB instance.</p> <p>This setting
     * applies only to Amazon Web Services GovCloud (US) Regions and China Amazon Web
     * Services Regions. It's ignored in other Amazon Web Services Regions.</p> <p>This
     * setting applies only when replicating from a source DB <i>instance</i>. Source
     * DB clusters aren't supported in Amazon Web Services GovCloud (US) Regions and
     * China Amazon Web Services Regions.</p> <p>You must specify this parameter when
     * you create an encrypted read replica from another Amazon Web Services Region by
     * using the Amazon RDS API. Don't specify <code>PreSignedUrl</code> when you are
     * creating an encrypted read replica in the same Amazon Web Services Region.</p>
     * <p>The presigned URL must be a valid request for the
     * <code>CreateDBInstanceReadReplica</code> API operation that can run in the
     * source Amazon Web Services Region that contains the encrypted source DB
     * instance. The presigned URL request must contain the following parameter
     * values:</p> <ul> <li> <p> <code>DestinationRegion</code> - The Amazon Web
     * Services Region that the encrypted read replica is created in. This Amazon Web
     * Services Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> operation is called that contains this
     * presigned URL.</p> <p>For example, if you create an encrypted DB instance in the
     * us-west-1 Amazon Web Services Region, from a source DB instance in the us-east-2
     * Amazon Web Services Region, then you call the
     * <code>CreateDBInstanceReadReplica</code> operation in the us-east-1 Amazon Web
     * Services Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> operation in the us-west-2 Amazon Web
     * Services Region. For this example, the <code>DestinationRegion</code> in the
     * presigned URL must be set to the us-east-1 Amazon Web Services Region.</p> </li>
     * <li> <p> <code>KmsKeyId</code> - The KMS key identifier for the key to use to
     * encrypt the read replica in the destination Amazon Web Services Region. This is
     * the same identifier for both the <code>CreateDBInstanceReadReplica</code>
     * operation that is called in the destination Amazon Web Services Region, and the
     * operation contained in the presigned URL.</p> </li> <li> <p>
     * <code>SourceDBInstanceIdentifier</code> - The DB instance identifier for the
     * encrypted DB instance to be replicated. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source Amazon Web Services Region. For
     * example, if you are creating an encrypted read replica from a DB instance in the
     * us-west-2 Amazon Web Services Region, then your
     * <code>SourceDBInstanceIdentifier</code> looks like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (Amazon Web Services Signature Version 4)</a>
     * and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>.</p>  <p>If you are using an Amazon Web
     * Services SDK tool or the CLI, you can specify <code>SourceRegion</code> (or
     * <code>--source-region</code> for the CLI) instead of specifying
     * <code>PreSignedUrl</code> manually. Specifying <code>SourceRegion</code>
     * autogenerates a presigned URL that is a valid request for the operation that can
     * run in the source Amazon Web Services Region.</p>  <p>This setting
     * doesn't apply to RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }
    inline bool PreSignedUrlHasBeenSet() const { return m_preSignedUrlHasBeenSet; }
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = value; }
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::move(value); }
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl.assign(value); }
    inline CreateDBInstanceReadReplicaRequest& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable mapping of Amazon Web Services Identity and
     * Access Management (IAM) accounts to database accounts. By default, mapping isn't
     * enabled.</p> <p>For more information about IAM database authentication, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication for MySQL and PostgreSQL</a> in the <i>Amazon RDS
     * User Guide</i>.</p> <p>This setting doesn't apply to RDS Custom DB
     * instances.</p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }
    inline CreateDBInstanceReadReplicaRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of Database Insights to enable for the read replica.</p> 
     * <p>Currently, this setting is not supported.</p> 
     */
    inline const DatabaseInsightsMode& GetDatabaseInsightsMode() const{ return m_databaseInsightsMode; }
    inline bool DatabaseInsightsModeHasBeenSet() const { return m_databaseInsightsModeHasBeenSet; }
    inline void SetDatabaseInsightsMode(const DatabaseInsightsMode& value) { m_databaseInsightsModeHasBeenSet = true; m_databaseInsightsMode = value; }
    inline void SetDatabaseInsightsMode(DatabaseInsightsMode&& value) { m_databaseInsightsModeHasBeenSet = true; m_databaseInsightsMode = std::move(value); }
    inline CreateDBInstanceReadReplicaRequest& WithDatabaseInsightsMode(const DatabaseInsightsMode& value) { SetDatabaseInsightsMode(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithDatabaseInsightsMode(DatabaseInsightsMode&& value) { SetDatabaseInsightsMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable Performance Insights for the read replica.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Using
     * Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline bool GetEnablePerformanceInsights() const{ return m_enablePerformanceInsights; }
    inline bool EnablePerformanceInsightsHasBeenSet() const { return m_enablePerformanceInsightsHasBeenSet; }
    inline void SetEnablePerformanceInsights(bool value) { m_enablePerformanceInsightsHasBeenSet = true; m_enablePerformanceInsights = value; }
    inline CreateDBInstanceReadReplicaRequest& WithEnablePerformanceInsights(bool value) { SetEnablePerformanceInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you do not specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>This setting doesn't apply to RDS Custom
     * DB instances.</p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const{ return m_performanceInsightsKMSKeyId; }
    inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }
    inline void SetPerformanceInsightsKMSKeyId(const Aws::String& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = value; }
    inline void SetPerformanceInsightsKMSKeyId(Aws::String&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::move(value); }
    inline void SetPerformanceInsightsKMSKeyId(const char* value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId.assign(value); }
    inline CreateDBInstanceReadReplicaRequest& WithPerformanceInsightsKMSKeyId(const Aws::String& value) { SetPerformanceInsightsKMSKeyId(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithPerformanceInsightsKMSKeyId(Aws::String&& value) { SetPerformanceInsightsKMSKeyId(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithPerformanceInsightsKMSKeyId(const char* value) { SetPerformanceInsightsKMSKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain Performance Insights data.</p> <p>This setting
     * doesn't apply to RDS Custom DB instances.</p> <p>Valid Values:</p> <ul> <li> <p>
     * <code>7</code> </p> </li> <li> <p> <i>month</i> * 31, where <i>month</i> is a
     * number of months from 1-23. Examples: <code>93</code> (3 months * 31),
     * <code>341</code> (11 months * 31), <code>589</code> (19 months * 31)</p> </li>
     * <li> <p> <code>731</code> </p> </li> </ul> <p>Default: <code>7</code> days</p>
     * <p>If you specify a retention period that isn't valid, such as <code>94</code>,
     * Amazon RDS returns an error.</p>
     */
    inline int GetPerformanceInsightsRetentionPeriod() const{ return m_performanceInsightsRetentionPeriod; }
    inline bool PerformanceInsightsRetentionPeriodHasBeenSet() const { return m_performanceInsightsRetentionPeriodHasBeenSet; }
    inline void SetPerformanceInsightsRetentionPeriod(int value) { m_performanceInsightsRetentionPeriodHasBeenSet = true; m_performanceInsightsRetentionPeriod = value; }
    inline CreateDBInstanceReadReplicaRequest& WithPerformanceInsightsRetentionPeriod(int value) { SetPerformanceInsightsRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch Logs.
     * The values in the list depend on the DB engine being used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }
    inline CreateDBInstanceReadReplicaRequest& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }
    inline CreateDBInstanceReadReplicaRequest& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }
    inline CreateDBInstanceReadReplicaRequest& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to RDS
     * Custom DB instances.</p>
     */
    inline const Aws::Vector<ProcessorFeature>& GetProcessorFeatures() const{ return m_processorFeatures; }
    inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }
    inline void SetProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = value; }
    inline void SetProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = std::move(value); }
    inline CreateDBInstanceReadReplicaRequest& WithProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { SetProcessorFeatures(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { SetProcessorFeatures(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& AddProcessorFeatures(const ProcessorFeature& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(value); return *this; }
    inline CreateDBInstanceReadReplicaRequest& AddProcessorFeatures(ProcessorFeature&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance class of the DB instance uses its default
     * processor features.</p> <p>This setting doesn't apply to RDS Custom DB
     * instances.</p>
     */
    inline bool GetUseDefaultProcessorFeatures() const{ return m_useDefaultProcessorFeatures; }
    inline bool UseDefaultProcessorFeaturesHasBeenSet() const { return m_useDefaultProcessorFeaturesHasBeenSet; }
    inline void SetUseDefaultProcessorFeatures(bool value) { m_useDefaultProcessorFeaturesHasBeenSet = true; m_useDefaultProcessorFeatures = value; }
    inline CreateDBInstanceReadReplicaRequest& WithUseDefaultProcessorFeatures(bool value) { SetUseDefaultProcessorFeatures(value); return *this;}
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
    inline CreateDBInstanceReadReplicaRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Active Directory directory ID to create the DB instance in. Currently,
     * only MySQL, Microsoft SQL Server, Oracle, and PostgreSQL DB instances can be
     * created in an Active Directory Domain.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline CreateDBInstanceReadReplicaRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
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
    inline CreateDBInstanceReadReplicaRequest& WithDomainIAMRoleName(const Aws::String& value) { SetDomainIAMRoleName(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithDomainIAMRoleName(Aws::String&& value) { SetDomainIAMRoleName(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithDomainIAMRoleName(const char* value) { SetDomainIAMRoleName(value); return *this;}
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
    inline CreateDBInstanceReadReplicaRequest& WithDomainFqdn(const Aws::String& value) { SetDomainFqdn(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithDomainFqdn(Aws::String&& value) { SetDomainFqdn(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithDomainFqdn(const char* value) { SetDomainFqdn(value); return *this;}
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
    inline CreateDBInstanceReadReplicaRequest& WithDomainOu(const Aws::String& value) { SetDomainOu(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithDomainOu(Aws::String&& value) { SetDomainOu(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithDomainOu(const char* value) { SetDomainOu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the Secrets Manager secret with the credentials for the user
     * joining the domain.</p> <p>Example:
     * <code>arn:aws:secretsmanager:region:account-number:secret:myselfmanagedADtestsecret-123456</code>
     * </p>
     */
    inline const Aws::String& GetDomainAuthSecretArn() const{ return m_domainAuthSecretArn; }
    inline bool DomainAuthSecretArnHasBeenSet() const { return m_domainAuthSecretArnHasBeenSet; }
    inline void SetDomainAuthSecretArn(const Aws::String& value) { m_domainAuthSecretArnHasBeenSet = true; m_domainAuthSecretArn = value; }
    inline void SetDomainAuthSecretArn(Aws::String&& value) { m_domainAuthSecretArnHasBeenSet = true; m_domainAuthSecretArn = std::move(value); }
    inline void SetDomainAuthSecretArn(const char* value) { m_domainAuthSecretArnHasBeenSet = true; m_domainAuthSecretArn.assign(value); }
    inline CreateDBInstanceReadReplicaRequest& WithDomainAuthSecretArn(const Aws::String& value) { SetDomainAuthSecretArn(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithDomainAuthSecretArn(Aws::String&& value) { SetDomainAuthSecretArn(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithDomainAuthSecretArn(const char* value) { SetDomainAuthSecretArn(value); return *this;}
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
    inline CreateDBInstanceReadReplicaRequest& WithDomainDnsIps(const Aws::Vector<Aws::String>& value) { SetDomainDnsIps(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithDomainDnsIps(Aws::Vector<Aws::String>&& value) { SetDomainDnsIps(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& AddDomainDnsIps(const Aws::String& value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps.push_back(value); return *this; }
    inline CreateDBInstanceReadReplicaRequest& AddDomainDnsIps(Aws::String&& value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps.push_back(std::move(value)); return *this; }
    inline CreateDBInstanceReadReplicaRequest& AddDomainDnsIps(const char* value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The open mode of the replica database: mounted or read-only.</p> 
     * <p>This parameter is only supported for Oracle DB instances.</p> 
     * <p>Mounted DB replicas are included in Oracle Database Enterprise Edition. The
     * main use case for mounted replicas is cross-Region disaster recovery. The
     * primary database doesn't use Active Data Guard to transmit information to the
     * mounted replica. Because it doesn't accept user connections, a mounted replica
     * can't serve a read-only workload.</p> <p>You can create a combination of mounted
     * and read-only DB replicas for the same primary DB instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Working
     * with Oracle Read Replicas for Amazon RDS</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For RDS Custom, you must specify this parameter and set it to
     * <code>mounted</code>. The value won't be set by default. After replica creation,
     * you can manage the open mode manually.</p>
     */
    inline const ReplicaMode& GetReplicaMode() const{ return m_replicaMode; }
    inline bool ReplicaModeHasBeenSet() const { return m_replicaModeHasBeenSet; }
    inline void SetReplicaMode(const ReplicaMode& value) { m_replicaModeHasBeenSet = true; m_replicaMode = value; }
    inline void SetReplicaMode(ReplicaMode&& value) { m_replicaModeHasBeenSet = true; m_replicaMode = std::move(value); }
    inline CreateDBInstanceReadReplicaRequest& WithReplicaMode(const ReplicaMode& value) { SetReplicaMode(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithReplicaMode(ReplicaMode&& value) { SetReplicaMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper limit in gibibytes (GiB) to which Amazon RDS can automatically
     * scale the storage of the DB instance.</p> <p>For more information about this
     * setting, including limitations that apply to it, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PIOPS.StorageTypes.html#USER_PIOPS.Autoscaling">
     * Managing capacity automatically with Amazon RDS storage autoscaling</a> in the
     * <i>Amazon RDS User Guide</i>.</p>
     */
    inline int GetMaxAllocatedStorage() const{ return m_maxAllocatedStorage; }
    inline bool MaxAllocatedStorageHasBeenSet() const { return m_maxAllocatedStorageHasBeenSet; }
    inline void SetMaxAllocatedStorage(int value) { m_maxAllocatedStorageHasBeenSet = true; m_maxAllocatedStorage = value; }
    inline CreateDBInstanceReadReplicaRequest& WithMaxAllocatedStorage(int value) { SetMaxAllocatedStorage(value); return *this;}
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
     * setting is required for RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetCustomIamInstanceProfile() const{ return m_customIamInstanceProfile; }
    inline bool CustomIamInstanceProfileHasBeenSet() const { return m_customIamInstanceProfileHasBeenSet; }
    inline void SetCustomIamInstanceProfile(const Aws::String& value) { m_customIamInstanceProfileHasBeenSet = true; m_customIamInstanceProfile = value; }
    inline void SetCustomIamInstanceProfile(Aws::String&& value) { m_customIamInstanceProfileHasBeenSet = true; m_customIamInstanceProfile = std::move(value); }
    inline void SetCustomIamInstanceProfile(const char* value) { m_customIamInstanceProfileHasBeenSet = true; m_customIamInstanceProfile.assign(value); }
    inline CreateDBInstanceReadReplicaRequest& WithCustomIamInstanceProfile(const Aws::String& value) { SetCustomIamInstanceProfile(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithCustomIamInstanceProfile(Aws::String&& value) { SetCustomIamInstanceProfile(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithCustomIamInstanceProfile(const char* value) { SetCustomIamInstanceProfile(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type of the DB instance.</p> <p>Valid Values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for read
     * replica. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or the
     * IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p>
     */
    inline const Aws::String& GetNetworkType() const{ return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(const Aws::String& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline void SetNetworkType(Aws::String&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }
    inline void SetNetworkType(const char* value) { m_networkTypeHasBeenSet = true; m_networkType.assign(value); }
    inline CreateDBInstanceReadReplicaRequest& WithNetworkType(const Aws::String& value) { SetNetworkType(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithNetworkType(Aws::String&& value) { SetNetworkType(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithNetworkType(const char* value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the storage throughput value for the read replica.</p> <p>This
     * setting doesn't apply to RDS Custom or Amazon Aurora DB instances.</p>
     */
    inline int GetStorageThroughput() const{ return m_storageThroughput; }
    inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
    inline void SetStorageThroughput(int value) { m_storageThroughputHasBeenSet = true; m_storageThroughput = value; }
    inline CreateDBInstanceReadReplicaRequest& WithStorageThroughput(int value) { SetStorageThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable a customer-owned IP address (CoIP) for an RDS on
     * Outposts read replica.</p> <p>A <i>CoIP</i> provides local or external
     * connectivity to resources in your Outpost subnets through your on-premises
     * network. For some use cases, a CoIP can provide lower latency for connections to
     * the read replica from outside of its virtual private cloud (VPC) on your local
     * network.</p> <p>For more information about RDS on Outposts, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about CoIPs, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/routing.html#ip-addressing">Customer-owned
     * IP addresses</a> in the <i>Amazon Web Services Outposts User Guide</i>.</p>
     */
    inline bool GetEnableCustomerOwnedIp() const{ return m_enableCustomerOwnedIp; }
    inline bool EnableCustomerOwnedIpHasBeenSet() const { return m_enableCustomerOwnedIpHasBeenSet; }
    inline void SetEnableCustomerOwnedIp(bool value) { m_enableCustomerOwnedIpHasBeenSet = true; m_enableCustomerOwnedIp = value; }
    inline CreateDBInstanceReadReplicaRequest& WithEnableCustomerOwnedIp(bool value) { SetEnableCustomerOwnedIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage (in gibibytes) to allocate initially for the read
     * replica. Follow the allocation rules specified in
     * <code>CreateDBInstance</code>.</p> <p>This setting isn't valid for RDS for SQL
     * Server.</p>  <p>Be sure to allocate enough storage for your read replica
     * so that the create operation can succeed. You can also allocate additional
     * storage for future growth.</p> 
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline CreateDBInstanceReadReplicaRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Multi-AZ DB cluster that will act as the source for the
     * read replica. Each DB cluster can have up to 15 read replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing Multi-AZ
     * DB cluster.</p> </li> <li> <p>Can't be specified if the
     * <code>SourceDBInstanceIdentifier</code> parameter is also specified.</p> </li>
     * <li> <p>The specified DB cluster must have automatic backups enabled, that is,
     * its backup retention period must be greater than 0.</p> </li> <li> <p>The source
     * DB cluster must be in the same Amazon Web Services Region as the read replica.
     * Cross-Region replication isn't supported.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceDBClusterIdentifier() const{ return m_sourceDBClusterIdentifier; }
    inline bool SourceDBClusterIdentifierHasBeenSet() const { return m_sourceDBClusterIdentifierHasBeenSet; }
    inline void SetSourceDBClusterIdentifier(const Aws::String& value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier = value; }
    inline void SetSourceDBClusterIdentifier(Aws::String&& value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier = std::move(value); }
    inline void SetSourceDBClusterIdentifier(const char* value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier.assign(value); }
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBClusterIdentifier(const Aws::String& value) { SetSourceDBClusterIdentifier(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBClusterIdentifier(Aws::String&& value) { SetSourceDBClusterIdentifier(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBClusterIdentifier(const char* value) { SetSourceDBClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB instance has a dedicated log volume (DLV)
     * enabled.</p>
     */
    inline bool GetDedicatedLogVolume() const{ return m_dedicatedLogVolume; }
    inline bool DedicatedLogVolumeHasBeenSet() const { return m_dedicatedLogVolumeHasBeenSet; }
    inline void SetDedicatedLogVolume(bool value) { m_dedicatedLogVolumeHasBeenSet = true; m_dedicatedLogVolume = value; }
    inline CreateDBInstanceReadReplicaRequest& WithDedicatedLogVolume(bool value) { SetDedicatedLogVolume(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to upgrade the storage file system configuration on the read replica.
     * This option migrates the read replica from the old storage file system layout to
     * the preferred layout.</p>
     */
    inline bool GetUpgradeStorageConfig() const{ return m_upgradeStorageConfig; }
    inline bool UpgradeStorageConfigHasBeenSet() const { return m_upgradeStorageConfigHasBeenSet; }
    inline void SetUpgradeStorageConfig(bool value) { m_upgradeStorageConfigHasBeenSet = true; m_upgradeStorageConfig = value; }
    inline CreateDBInstanceReadReplicaRequest& WithUpgradeStorageConfig(bool value) { SetUpgradeStorageConfig(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CA certificate identifier to use for the read replica's server
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
    inline CreateDBInstanceReadReplicaRequest& WithCACertificateIdentifier(const Aws::String& value) { SetCACertificateIdentifier(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithCACertificateIdentifier(Aws::String&& value) { SetCACertificateIdentifier(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithCACertificateIdentifier(const char* value) { SetCACertificateIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }
    inline CreateDBInstanceReadReplicaRequest& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}
    inline CreateDBInstanceReadReplicaRequest& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}
    ///@}
  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_sourceDBInstanceIdentifier;
    bool m_sourceDBInstanceIdentifierHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet = false;

    int m_monitoringInterval;
    bool m_monitoringIntervalHasBeenSet = false;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_preSignedUrl;
    bool m_preSignedUrlHasBeenSet = false;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet = false;

    DatabaseInsightsMode m_databaseInsightsMode;
    bool m_databaseInsightsModeHasBeenSet = false;

    bool m_enablePerformanceInsights;
    bool m_enablePerformanceInsightsHasBeenSet = false;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet = false;

    int m_performanceInsightsRetentionPeriod;
    bool m_performanceInsightsRetentionPeriodHasBeenSet = false;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet = false;

    Aws::Vector<ProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet = false;

    bool m_useDefaultProcessorFeatures;
    bool m_useDefaultProcessorFeaturesHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

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

    ReplicaMode m_replicaMode;
    bool m_replicaModeHasBeenSet = false;

    int m_maxAllocatedStorage;
    bool m_maxAllocatedStorageHasBeenSet = false;

    Aws::String m_customIamInstanceProfile;
    bool m_customIamInstanceProfileHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;

    int m_storageThroughput;
    bool m_storageThroughputHasBeenSet = false;

    bool m_enableCustomerOwnedIp;
    bool m_enableCustomerOwnedIpHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_sourceDBClusterIdentifier;
    bool m_sourceDBClusterIdentifierHasBeenSet = false;

    bool m_dedicatedLogVolume;
    bool m_dedicatedLogVolumeHasBeenSet = false;

    bool m_upgradeStorageConfig;
    bool m_upgradeStorageConfigHasBeenSet = false;

    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
