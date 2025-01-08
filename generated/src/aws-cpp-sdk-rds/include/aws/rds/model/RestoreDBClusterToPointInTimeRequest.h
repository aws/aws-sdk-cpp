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
#include <aws/rds/model/ScalingConfiguration.h>
#include <aws/rds/model/ServerlessV2ScalingConfiguration.h>
#include <aws/rds/model/RdsCustomClusterConfiguration.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBClusterToPointInTimeMessage">AWS
   * API Reference</a></p>
   */
  class RestoreDBClusterToPointInTimeRequest : public RDSRequest
  {
  public:
    AWS_RDS_API RestoreDBClusterToPointInTimeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreDBClusterToPointInTime"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the new DB cluster to be created.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of restore to be performed. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>full-copy</code> - The new DB cluster is
     * restored as a full copy of the source DB cluster.</p> </li> <li> <p>
     * <code>copy-on-write</code> - The new DB cluster is restored as a clone of the
     * source DB cluster.</p> </li> </ul> <p>If you don't specify a
     * <code>RestoreType</code> value, then the new DB cluster is restored as a full
     * copy of the source DB cluster.</p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline const Aws::String& GetRestoreType() const{ return m_restoreType; }
    inline bool RestoreTypeHasBeenSet() const { return m_restoreTypeHasBeenSet; }
    inline void SetRestoreType(const Aws::String& value) { m_restoreTypeHasBeenSet = true; m_restoreType = value; }
    inline void SetRestoreType(Aws::String&& value) { m_restoreTypeHasBeenSet = true; m_restoreType = std::move(value); }
    inline void SetRestoreType(const char* value) { m_restoreTypeHasBeenSet = true; m_restoreType.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithRestoreType(const Aws::String& value) { SetRestoreType(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithRestoreType(Aws::String&& value) { SetRestoreType(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithRestoreType(const char* value) { SetRestoreType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the source DB cluster from which to restore.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * DBCluster.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline const Aws::String& GetSourceDBClusterIdentifier() const{ return m_sourceDBClusterIdentifier; }
    inline bool SourceDBClusterIdentifierHasBeenSet() const { return m_sourceDBClusterIdentifierHasBeenSet; }
    inline void SetSourceDBClusterIdentifier(const Aws::String& value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier = value; }
    inline void SetSourceDBClusterIdentifier(Aws::String&& value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier = std::move(value); }
    inline void SetSourceDBClusterIdentifier(const char* value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithSourceDBClusterIdentifier(const Aws::String& value) { SetSourceDBClusterIdentifier(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithSourceDBClusterIdentifier(Aws::String&& value) { SetSourceDBClusterIdentifier(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithSourceDBClusterIdentifier(const char* value) { SetSourceDBClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time to restore the DB cluster to.</p> <p>Valid Values: Value
     * must be a time in Universal Coordinated Time (UTC) format</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be before the latest restorable time for
     * the DB instance</p> </li> <li> <p>Must be specified if
     * <code>UseLatestRestorableTime</code> parameter isn't provided</p> </li> <li>
     * <p>Can't be specified if the <code>UseLatestRestorableTime</code> parameter is
     * enabled</p> </li> <li> <p>Can't be specified if the <code>RestoreType</code>
     * parameter is <code>copy-on-write</code> </p> </li> </ul> <p>Example:
     * <code>2015-03-07T23:45:00Z</code> </p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline const Aws::Utils::DateTime& GetRestoreToTime() const{ return m_restoreToTime; }
    inline bool RestoreToTimeHasBeenSet() const { return m_restoreToTimeHasBeenSet; }
    inline void SetRestoreToTime(const Aws::Utils::DateTime& value) { m_restoreToTimeHasBeenSet = true; m_restoreToTime = value; }
    inline void SetRestoreToTime(Aws::Utils::DateTime&& value) { m_restoreToTimeHasBeenSet = true; m_restoreToTime = std::move(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithRestoreToTime(const Aws::Utils::DateTime& value) { SetRestoreToTime(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithRestoreToTime(Aws::Utils::DateTime&& value) { SetRestoreToTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to restore the DB cluster to the latest restorable backup
     * time. By default, the DB cluster isn't restored to the latest restorable backup
     * time.</p> <p>Constraints: Can't be specified if <code>RestoreToTime</code>
     * parameter is provided.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline bool GetUseLatestRestorableTime() const{ return m_useLatestRestorableTime; }
    inline bool UseLatestRestorableTimeHasBeenSet() const { return m_useLatestRestorableTimeHasBeenSet; }
    inline void SetUseLatestRestorableTime(bool value) { m_useLatestRestorableTimeHasBeenSet = true; m_useLatestRestorableTime = value; }
    inline RestoreDBClusterToPointInTimeRequest& WithUseLatestRestorableTime(bool value) { SetUseLatestRestorableTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which the new DB cluster accepts connections.</p>
     * <p>Constraints: A value from <code>1150-65535</code>.</p> <p>Default: The
     * default port for the engine.</p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline RestoreDBClusterToPointInTimeRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB subnet group name to use for the new DB cluster.</p> <p>Constraints:
     * If supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mydbsubnetgroup</code> </p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the option group for the new DB cluster.</p> <p>DB clusters are
     * associated with a default option group that can't be modified.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of VPC security groups that the new DB cluster belongs to.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    inline RestoreDBClusterToPointInTimeRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline RestoreDBClusterToPointInTimeRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline RestoreDBClusterToPointInTimeRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier to use when restoring an encrypted
     * DB cluster from an encrypted DB cluster.</p> <p>The Amazon Web Services KMS key
     * identifier is the key ARN, key ID, alias ARN, or alias name for the KMS key. To
     * use a KMS key in a different Amazon Web Services account, specify the key ARN or
     * alias ARN.</p> <p>You can restore to a new DB cluster and encrypt the new DB
     * cluster with a KMS key that is different from the KMS key used to encrypt the
     * source DB cluster. The new DB cluster is encrypted with the KMS key identified
     * by the <code>KmsKeyId</code> parameter.</p> <p>If you don't specify a value for
     * the <code>KmsKeyId</code> parameter, then the following occurs:</p> <ul> <li>
     * <p>If the DB cluster is encrypted, then the restored DB cluster is encrypted
     * using the KMS key that was used to encrypt the source DB cluster.</p> </li> <li>
     * <p>If the DB cluster isn't encrypted, then the restored DB cluster isn't
     * encrypted.</p> </li> </ul> <p>If <code>DBClusterIdentifier</code> refers to a DB
     * cluster that isn't encrypted, then the restore request is rejected.</p> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable mapping of Amazon Web Services Identity and
     * Access Management (IAM) accounts to database accounts. By default, mapping isn't
     * enabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication</a> in the <i>Amazon Aurora User Guide</i> or <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM database authentication for MariaDB, MySQL, and PostgreSQL</a> in the
     * <i>Amazon RDS User Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ
     * DB clusters</p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }
    inline RestoreDBClusterToPointInTimeRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p> <p>Default: 0</p> <p>Constraints:</p> <ul> <li> <p>If specified,
     * this value must be set to a number from 0 to 259,200 (72 hours).</p> </li> </ul>
     * <p>Valid for: Aurora MySQL DB clusters only</p>
     */
    inline long long GetBacktrackWindow() const{ return m_backtrackWindow; }
    inline bool BacktrackWindowHasBeenSet() const { return m_backtrackWindowHasBeenSet; }
    inline void SetBacktrackWindow(long long value) { m_backtrackWindowHasBeenSet = true; m_backtrackWindow = value; }
    inline RestoreDBClusterToPointInTimeRequest& WithBacktrackWindow(long long value) { SetBacktrackWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of logs that the restored DB cluster is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used.</p> <p> <b>RDS
     * for MySQL</b> </p> <p>Possible values are <code>error</code>,
     * <code>general</code>, and <code>slowquery</code>.</p> <p> <b>RDS for
     * PostgreSQL</b> </p> <p>Possible values are <code>postgresql</code> and
     * <code>upgrade</code>.</p> <p> <b>Aurora MySQL</b> </p> <p>Possible values are
     * <code>audit</code>, <code>error</code>, <code>general</code>, and
     * <code>slowquery</code>.</p> <p> <b>Aurora PostgreSQL</b> </p> <p>Possible value
     * is <code>postgresql</code>.</p> <p>For more information about exporting
     * CloudWatch Logs for Amazon RDS, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about exporting CloudWatch Logs for
     * Amazon Aurora, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }
    inline RestoreDBClusterToPointInTimeRequest& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }
    inline RestoreDBClusterToPointInTimeRequest& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the custom DB cluster parameter group to associate with this DB
     * cluster.</p> <p>If the <code>DBClusterParameterGroupName</code> parameter is
     * omitted, the default DB cluster parameter group for the specified engine is
     * used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of
     * an existing DB cluster parameter group.</p> </li> <li> <p>Must be 1 to 255
     * letters, numbers, or hyphens.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens.</p> </li> </ul> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::move(value); }
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable deletion protection for the DB cluster. The
     * database can't be deleted when deletion protection is enabled. By default,
     * deletion protection isn't enabled.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline RestoreDBClusterToPointInTimeRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to copy all tags from the restored DB cluster to snapshots
     * of the restored DB cluster. The default is not to copy them.</p> <p>Valid for:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }
    inline RestoreDBClusterToPointInTimeRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Active Directory directory ID to restore the DB cluster in. The domain
     * must be created prior to this operation.</p> <p>For Amazon Aurora DB clusters,
     * Amazon RDS can use Kerberos Authentication to authenticate users that connect to
     * the DB cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for:
     * Aurora DB clusters only</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role to be used when making API calls to the Directory
     * Service.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline const Aws::String& GetDomainIAMRoleName() const{ return m_domainIAMRoleName; }
    inline bool DomainIAMRoleNameHasBeenSet() const { return m_domainIAMRoleNameHasBeenSet; }
    inline void SetDomainIAMRoleName(const Aws::String& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = value; }
    inline void SetDomainIAMRoleName(Aws::String&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::move(value); }
    inline void SetDomainIAMRoleName(const char* value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithDomainIAMRoleName(const Aws::String& value) { SetDomainIAMRoleName(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithDomainIAMRoleName(Aws::String&& value) { SetDomainIAMRoleName(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithDomainIAMRoleName(const char* value) { SetDomainIAMRoleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For DB clusters in <code>serverless</code> DB engine mode, the scaling
     * properties of the DB cluster.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline const ScalingConfiguration& GetScalingConfiguration() const{ return m_scalingConfiguration; }
    inline bool ScalingConfigurationHasBeenSet() const { return m_scalingConfigurationHasBeenSet; }
    inline void SetScalingConfiguration(const ScalingConfiguration& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = value; }
    inline void SetScalingConfiguration(ScalingConfiguration&& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = std::move(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithScalingConfiguration(const ScalingConfiguration& value) { SetScalingConfiguration(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithScalingConfiguration(ScalingConfiguration&& value) { SetScalingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine mode of the new cluster. Specify <code>provisioned</code> or
     * <code>serverless</code>, depending on the type of the cluster you are creating.
     * You can create an Aurora Serverless v1 clone from a provisioned cluster, or a
     * provisioned clone from an Aurora Serverless v1 cluster. To create a clone that
     * is an Aurora Serverless v1 cluster, the original cluster must be an Aurora
     * Serverless v1 cluster or an encrypted provisioned cluster. To create a full copy
     * that is an Aurora Serverless v1 cluster, specify the engine mode
     * <code>serverless</code>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline const Aws::String& GetEngineMode() const{ return m_engineMode; }
    inline bool EngineModeHasBeenSet() const { return m_engineModeHasBeenSet; }
    inline void SetEngineMode(const Aws::String& value) { m_engineModeHasBeenSet = true; m_engineMode = value; }
    inline void SetEngineMode(Aws::String&& value) { m_engineModeHasBeenSet = true; m_engineMode = std::move(value); }
    inline void SetEngineMode(const char* value) { m_engineModeHasBeenSet = true; m_engineMode.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithEngineMode(const Aws::String& value) { SetEngineMode(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithEngineMode(Aws::String&& value) { SetEngineMode(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithEngineMode(const char* value) { SetEngineMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute and memory capacity of the each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * instance class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline const Aws::String& GetDBClusterInstanceClass() const{ return m_dBClusterInstanceClass; }
    inline bool DBClusterInstanceClassHasBeenSet() const { return m_dBClusterInstanceClassHasBeenSet; }
    inline void SetDBClusterInstanceClass(const Aws::String& value) { m_dBClusterInstanceClassHasBeenSet = true; m_dBClusterInstanceClass = value; }
    inline void SetDBClusterInstanceClass(Aws::String&& value) { m_dBClusterInstanceClassHasBeenSet = true; m_dBClusterInstanceClass = std::move(value); }
    inline void SetDBClusterInstanceClass(const char* value) { m_dBClusterInstanceClassHasBeenSet = true; m_dBClusterInstanceClass.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithDBClusterInstanceClass(const Aws::String& value) { SetDBClusterInstanceClass(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithDBClusterInstanceClass(Aws::String&& value) { SetDBClusterInstanceClass(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithDBClusterInstanceClass(const char* value) { SetDBClusterInstanceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the storage type to be associated with the DB cluster.</p> <p>When
     * specified for a Multi-AZ DB cluster, a value for the <code>Iops</code> parameter
     * is required.</p> <p>Valid Values: <code>aurora</code>, <code>aurora-iopt1</code>
     * (Aurora DB clusters); <code>io1</code> (Multi-AZ DB clusters)</p> <p>Default:
     * <code>aurora</code> (Aurora DB clusters); <code>io1</code> (Multi-AZ DB
     * clusters)</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB cluster is publicly accessible.</p> <p>When the DB
     * cluster is publicly accessible, its Domain Name System (DNS) endpoint resolves
     * to the private IP address from within the DB cluster's virtual private cloud
     * (VPC). It resolves to the public IP address from outside of the DB cluster's
     * VPC. Access to the DB cluster is ultimately controlled by the security group it
     * uses. That public access is not permitted if the security group assigned to the
     * DB cluster doesn't permit it.</p> <p>When the DB cluster isn't publicly
     * accessible, it is an internal DB cluster with a DNS name that resolves to a
     * private IP address.</p> <p>Default: The default behavior varies depending on
     * whether <code>DBSubnetGroupName</code> is specified.</p> <p>If
     * <code>DBSubnetGroupName</code> isn't specified, and
     * <code>PubliclyAccessible</code> isn't specified, the following applies:</p> <ul>
     * <li> <p>If the default VPC in the target Region doesn’t have an internet gateway
     * attached to it, the DB cluster is private.</p> </li> <li> <p>If the default VPC
     * in the target Region has an internet gateway attached to it, the DB cluster is
     * public.</p> </li> </ul> <p>If <code>DBSubnetGroupName</code> is specified, and
     * <code>PubliclyAccessible</code> isn't specified, the following applies:</p> <ul>
     * <li> <p>If the subnets are part of a VPC that doesn’t have an internet gateway
     * attached to it, the DB cluster is private.</p> </li> <li> <p>If the subnets are
     * part of a VPC that has an internet gateway attached to it, the DB cluster is
     * public.</p> </li> </ul> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline RestoreDBClusterToPointInTimeRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for each DB instance in the Multi-AZ DB cluster.</p> <p>For
     * information about valid IOPS values, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS storage</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Constraints: Must be a multiple between .5 and 50 of the storage amount for
     * the DB instance.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline int GetIops() const{ return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline RestoreDBClusterToPointInTimeRequest& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    
    inline const ServerlessV2ScalingConfiguration& GetServerlessV2ScalingConfiguration() const{ return m_serverlessV2ScalingConfiguration; }
    inline bool ServerlessV2ScalingConfigurationHasBeenSet() const { return m_serverlessV2ScalingConfigurationHasBeenSet; }
    inline void SetServerlessV2ScalingConfiguration(const ServerlessV2ScalingConfiguration& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = value; }
    inline void SetServerlessV2ScalingConfiguration(ServerlessV2ScalingConfiguration&& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = std::move(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithServerlessV2ScalingConfiguration(const ServerlessV2ScalingConfiguration& value) { SetServerlessV2ScalingConfiguration(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithServerlessV2ScalingConfiguration(ServerlessV2ScalingConfiguration&& value) { SetServerlessV2ScalingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type of the DB cluster.</p> <p>Valid Values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB cluster. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline const Aws::String& GetNetworkType() const{ return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(const Aws::String& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline void SetNetworkType(Aws::String&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }
    inline void SetNetworkType(const char* value) { m_networkTypeHasBeenSet = true; m_networkType.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithNetworkType(const Aws::String& value) { SetNetworkType(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithNetworkType(Aws::String&& value) { SetNetworkType(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithNetworkType(const char* value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID of the source DB cluster from which to restore.</p>
     */
    inline const Aws::String& GetSourceDbClusterResourceId() const{ return m_sourceDbClusterResourceId; }
    inline bool SourceDbClusterResourceIdHasBeenSet() const { return m_sourceDbClusterResourceIdHasBeenSet; }
    inline void SetSourceDbClusterResourceId(const Aws::String& value) { m_sourceDbClusterResourceIdHasBeenSet = true; m_sourceDbClusterResourceId = value; }
    inline void SetSourceDbClusterResourceId(Aws::String&& value) { m_sourceDbClusterResourceIdHasBeenSet = true; m_sourceDbClusterResourceId = std::move(value); }
    inline void SetSourceDbClusterResourceId(const char* value) { m_sourceDbClusterResourceIdHasBeenSet = true; m_sourceDbClusterResourceId.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithSourceDbClusterResourceId(const Aws::String& value) { SetSourceDbClusterResourceId(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithSourceDbClusterResourceId(Aws::String&& value) { SetSourceDbClusterResourceId(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithSourceDbClusterResourceId(const char* value) { SetSourceDbClusterResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const RdsCustomClusterConfiguration& GetRdsCustomClusterConfiguration() const{ return m_rdsCustomClusterConfiguration; }
    inline bool RdsCustomClusterConfigurationHasBeenSet() const { return m_rdsCustomClusterConfigurationHasBeenSet; }
    inline void SetRdsCustomClusterConfiguration(const RdsCustomClusterConfiguration& value) { m_rdsCustomClusterConfigurationHasBeenSet = true; m_rdsCustomClusterConfiguration = value; }
    inline void SetRdsCustomClusterConfiguration(RdsCustomClusterConfiguration&& value) { m_rdsCustomClusterConfigurationHasBeenSet = true; m_rdsCustomClusterConfiguration = std::move(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithRdsCustomClusterConfiguration(const RdsCustomClusterConfiguration& value) { SetRdsCustomClusterConfiguration(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithRdsCustomClusterConfiguration(RdsCustomClusterConfiguration&& value) { SetRdsCustomClusterConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB cluster. To turn off collecting Enhanced Monitoring
     * metrics, specify <code>0</code>.</p> <p>If <code>MonitoringRoleArn</code> is
     * specified, also set <code>MonitoringInterval</code> to a value other than
     * <code>0</code>.</p> <p>Valid Values: <code>0 | 1 | 5 | 10 | 15 | 30 | 60</code>
     * </p> <p>Default: <code>0</code> </p>
     */
    inline int GetMonitoringInterval() const{ return m_monitoringInterval; }
    inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }
    inline RestoreDBClusterToPointInTimeRequest& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that permits RDS to send
     * Enhanced Monitoring metrics to Amazon CloudWatch Logs. An example is
     * <code>arn:aws:iam:123456789012:role/emaccess</code>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than <code>0</code>,
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const{ return m_monitoringRoleArn; }
    inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }
    inline void SetMonitoringRoleArn(const Aws::String& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }
    inline void SetMonitoringRoleArn(Aws::String&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::move(value); }
    inline void SetMonitoringRoleArn(const char* value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithMonitoringRoleArn(const Aws::String& value) { SetMonitoringRoleArn(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithMonitoringRoleArn(Aws::String&& value) { SetMonitoringRoleArn(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to turn on Performance Insights for the DB cluster.</p>
     */
    inline bool GetEnablePerformanceInsights() const{ return m_enablePerformanceInsights; }
    inline bool EnablePerformanceInsightsHasBeenSet() const { return m_enablePerformanceInsightsHasBeenSet; }
    inline void SetEnablePerformanceInsights(bool value) { m_enablePerformanceInsightsHasBeenSet = true; m_enablePerformanceInsights = value; }
    inline RestoreDBClusterToPointInTimeRequest& WithEnablePerformanceInsights(bool value) { SetEnablePerformanceInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you don't specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const{ return m_performanceInsightsKMSKeyId; }
    inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }
    inline void SetPerformanceInsightsKMSKeyId(const Aws::String& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = value; }
    inline void SetPerformanceInsightsKMSKeyId(Aws::String&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::move(value); }
    inline void SetPerformanceInsightsKMSKeyId(const char* value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithPerformanceInsightsKMSKeyId(const Aws::String& value) { SetPerformanceInsightsKMSKeyId(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithPerformanceInsightsKMSKeyId(Aws::String&& value) { SetPerformanceInsightsKMSKeyId(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithPerformanceInsightsKMSKeyId(const char* value) { SetPerformanceInsightsKMSKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain Performance Insights data.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>7</code> </p> </li> <li> <p> <i>month</i> * 31,
     * where <i>month</i> is a number of months from 1-23. Examples: <code>93</code> (3
     * months * 31), <code>341</code> (11 months * 31), <code>589</code> (19 months *
     * 31)</p> </li> <li> <p> <code>731</code> </p> </li> </ul> <p>Default:
     * <code>7</code> days</p> <p>If you specify a retention period that isn't valid,
     * such as <code>94</code>, Amazon RDS issues an error.</p>
     */
    inline int GetPerformanceInsightsRetentionPeriod() const{ return m_performanceInsightsRetentionPeriod; }
    inline bool PerformanceInsightsRetentionPeriodHasBeenSet() const { return m_performanceInsightsRetentionPeriodHasBeenSet; }
    inline void SetPerformanceInsightsRetentionPeriod(int value) { m_performanceInsightsRetentionPeriodHasBeenSet = true; m_performanceInsightsRetentionPeriod = value; }
    inline RestoreDBClusterToPointInTimeRequest& WithPerformanceInsightsRetentionPeriod(int value) { SetPerformanceInsightsRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle type for this DB cluster.</p>  <p>By default, this value
     * is set to <code>open-source-rds-extended-support</code>, which enrolls your DB
     * cluster into Amazon RDS Extended Support. At the end of standard support, you
     * can avoid charges for Extended Support by setting the value to
     * <code>open-source-rds-extended-support-disabled</code>. In this case, RDS
     * automatically upgrades your restored DB cluster to a higher engine version, if
     * the major engine version is past its end of standard support date.</p> 
     * <p>You can use this setting to enroll your DB cluster into Amazon RDS Extended
     * Support. With RDS Extended Support, you can run the selected major engine
     * version on your DB cluster past the end of standard support for that engine
     * version. For more information, see the following sections:</p> <ul> <li>
     * <p>Amazon Aurora - <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/extended-support.html">Using
     * Amazon RDS Extended Support</a> in the <i>Amazon Aurora User Guide</i> </p>
     * </li> <li> <p>Amazon RDS - <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/extended-support.html">Using
     * Amazon RDS Extended Support</a> in the <i>Amazon RDS User Guide</i> </p> </li>
     * </ul> <p>Valid for Cluster Type: Aurora DB clusters and Multi-AZ DB clusters</p>
     * <p>Valid Values: <code>open-source-rds-extended-support |
     * open-source-rds-extended-support-disabled</code> </p> <p>Default:
     * <code>open-source-rds-extended-support</code> </p>
     */
    inline const Aws::String& GetEngineLifecycleSupport() const{ return m_engineLifecycleSupport; }
    inline bool EngineLifecycleSupportHasBeenSet() const { return m_engineLifecycleSupportHasBeenSet; }
    inline void SetEngineLifecycleSupport(const Aws::String& value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport = value; }
    inline void SetEngineLifecycleSupport(Aws::String&& value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport = std::move(value); }
    inline void SetEngineLifecycleSupport(const char* value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport.assign(value); }
    inline RestoreDBClusterToPointInTimeRequest& WithEngineLifecycleSupport(const Aws::String& value) { SetEngineLifecycleSupport(value); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithEngineLifecycleSupport(Aws::String&& value) { SetEngineLifecycleSupport(std::move(value)); return *this;}
    inline RestoreDBClusterToPointInTimeRequest& WithEngineLifecycleSupport(const char* value) { SetEngineLifecycleSupport(value); return *this;}
    ///@}
  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_restoreType;
    bool m_restoreTypeHasBeenSet = false;

    Aws::String m_sourceDBClusterIdentifier;
    bool m_sourceDBClusterIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_restoreToTime;
    bool m_restoreToTimeHasBeenSet = false;

    bool m_useLatestRestorableTime;
    bool m_useLatestRestorableTimeHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet = false;

    long long m_backtrackWindow;
    bool m_backtrackWindowHasBeenSet = false;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet = false;

    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet = false;

    ScalingConfiguration m_scalingConfiguration;
    bool m_scalingConfigurationHasBeenSet = false;

    Aws::String m_engineMode;
    bool m_engineModeHasBeenSet = false;

    Aws::String m_dBClusterInstanceClass;
    bool m_dBClusterInstanceClassHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    ServerlessV2ScalingConfiguration m_serverlessV2ScalingConfiguration;
    bool m_serverlessV2ScalingConfigurationHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;

    Aws::String m_sourceDbClusterResourceId;
    bool m_sourceDbClusterResourceIdHasBeenSet = false;

    RdsCustomClusterConfiguration m_rdsCustomClusterConfiguration;
    bool m_rdsCustomClusterConfigurationHasBeenSet = false;

    int m_monitoringInterval;
    bool m_monitoringIntervalHasBeenSet = false;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet = false;

    bool m_enablePerformanceInsights;
    bool m_enablePerformanceInsightsHasBeenSet = false;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet = false;

    int m_performanceInsightsRetentionPeriod;
    bool m_performanceInsightsRetentionPeriodHasBeenSet = false;

    Aws::String m_engineLifecycleSupport;
    bool m_engineLifecycleSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
