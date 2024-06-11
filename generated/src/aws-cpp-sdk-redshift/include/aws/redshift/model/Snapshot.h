﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/AccountWithRestoreAccess.h>
#include <aws/redshift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/Snapshot">AWS
   * API Reference</a></p>
   */
  class Snapshot
  {
  public:
    AWS_REDSHIFT_API Snapshot();
    AWS_REDSHIFT_API Snapshot(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API Snapshot& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The snapshot identifier that is provided in the request.</p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }
    inline void SetSnapshotIdentifier(Aws::String&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::move(value); }
    inline void SetSnapshotIdentifier(const char* value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier.assign(value); }
    inline Snapshot& WithSnapshotIdentifier(const Aws::String& value) { SetSnapshotIdentifier(value); return *this;}
    inline Snapshot& WithSnapshotIdentifier(Aws::String&& value) { SetSnapshotIdentifier(std::move(value)); return *this;}
    inline Snapshot& WithSnapshotIdentifier(const char* value) { SetSnapshotIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the cluster for which the snapshot was taken.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline Snapshot& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline Snapshot& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline Snapshot& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time (in UTC format) when Amazon Redshift began the snapshot. A snapshot
     * contains a copy of the cluster data as of this exact time.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreateTime() const{ return m_snapshotCreateTime; }
    inline bool SnapshotCreateTimeHasBeenSet() const { return m_snapshotCreateTimeHasBeenSet; }
    inline void SetSnapshotCreateTime(const Aws::Utils::DateTime& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = value; }
    inline void SetSnapshotCreateTime(Aws::Utils::DateTime&& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = std::move(value); }
    inline Snapshot& WithSnapshotCreateTime(const Aws::Utils::DateTime& value) { SetSnapshotCreateTime(value); return *this;}
    inline Snapshot& WithSnapshotCreateTime(Aws::Utils::DateTime&& value) { SetSnapshotCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot status. The value of the status depends on the API operation
     * used: </p> <ul> <li> <p> <a>CreateClusterSnapshot</a> and
     * <a>CopyClusterSnapshot</a> returns status as "creating". </p> </li> <li> <p>
     * <a>DescribeClusterSnapshots</a> returns status as "creating", "available",
     * "final snapshot", or "failed".</p> </li> <li> <p> <a>DeleteClusterSnapshot</a>
     * returns status as "deleted".</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline Snapshot& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline Snapshot& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline Snapshot& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port that the cluster is listening on.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline Snapshot& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which the cluster was created.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline Snapshot& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline Snapshot& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline Snapshot& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time (UTC) when the cluster was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetClusterCreateTime() const{ return m_clusterCreateTime; }
    inline bool ClusterCreateTimeHasBeenSet() const { return m_clusterCreateTimeHasBeenSet; }
    inline void SetClusterCreateTime(const Aws::Utils::DateTime& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = value; }
    inline void SetClusterCreateTime(Aws::Utils::DateTime&& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = std::move(value); }
    inline Snapshot& WithClusterCreateTime(const Aws::Utils::DateTime& value) { SetClusterCreateTime(value); return *this;}
    inline Snapshot& WithClusterCreateTime(Aws::Utils::DateTime&& value) { SetClusterCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The admin user name for the cluster.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }
    inline Snapshot& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}
    inline Snapshot& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}
    inline Snapshot& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID of the Amazon Redshift engine that is running on the
     * cluster.</p>
     */
    inline const Aws::String& GetClusterVersion() const{ return m_clusterVersion; }
    inline bool ClusterVersionHasBeenSet() const { return m_clusterVersionHasBeenSet; }
    inline void SetClusterVersion(const Aws::String& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = value; }
    inline void SetClusterVersion(Aws::String&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = std::move(value); }
    inline void SetClusterVersion(const char* value) { m_clusterVersionHasBeenSet = true; m_clusterVersion.assign(value); }
    inline Snapshot& WithClusterVersion(const Aws::String& value) { SetClusterVersion(value); return *this;}
    inline Snapshot& WithClusterVersion(Aws::String&& value) { SetClusterVersion(std::move(value)); return *this;}
    inline Snapshot& WithClusterVersion(const char* value) { SetClusterVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster version of the cluster used to create the snapshot. For example,
     * 1.0.15503. </p>
     */
    inline const Aws::String& GetEngineFullVersion() const{ return m_engineFullVersion; }
    inline bool EngineFullVersionHasBeenSet() const { return m_engineFullVersionHasBeenSet; }
    inline void SetEngineFullVersion(const Aws::String& value) { m_engineFullVersionHasBeenSet = true; m_engineFullVersion = value; }
    inline void SetEngineFullVersion(Aws::String&& value) { m_engineFullVersionHasBeenSet = true; m_engineFullVersion = std::move(value); }
    inline void SetEngineFullVersion(const char* value) { m_engineFullVersionHasBeenSet = true; m_engineFullVersion.assign(value); }
    inline Snapshot& WithEngineFullVersion(const Aws::String& value) { SetEngineFullVersion(value); return *this;}
    inline Snapshot& WithEngineFullVersion(Aws::String&& value) { SetEngineFullVersion(std::move(value)); return *this;}
    inline Snapshot& WithEngineFullVersion(const char* value) { SetEngineFullVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot type. Snapshots created using <a>CreateClusterSnapshot</a> and
     * <a>CopyClusterSnapshot</a> are of type "manual". </p>
     */
    inline const Aws::String& GetSnapshotType() const{ return m_snapshotType; }
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }
    inline void SetSnapshotType(const Aws::String& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::move(value); }
    inline void SetSnapshotType(const char* value) { m_snapshotTypeHasBeenSet = true; m_snapshotType.assign(value); }
    inline Snapshot& WithSnapshotType(const Aws::String& value) { SetSnapshotType(value); return *this;}
    inline Snapshot& WithSnapshotType(Aws::String&& value) { SetSnapshotType(std::move(value)); return *this;}
    inline Snapshot& WithSnapshotType(const char* value) { SetSnapshotType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type of the nodes in the cluster.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }
    inline Snapshot& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}
    inline Snapshot& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}
    inline Snapshot& WithNodeType(const char* value) { SetNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of nodes in the cluster.</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }
    inline Snapshot& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database that was created when the cluster was created.</p>
     */
    inline const Aws::String& GetDBName() const{ return m_dBName; }
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = std::move(value); }
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }
    inline Snapshot& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}
    inline Snapshot& WithDBName(Aws::String&& value) { SetDBName(std::move(value)); return *this;}
    inline Snapshot& WithDBName(const char* value) { SetDBName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC identifier of the cluster if the snapshot is from a cluster in a VPC.
     * Otherwise, this field is not in the output.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline Snapshot& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline Snapshot& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline Snapshot& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, the data in the snapshot is encrypted at rest.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline Snapshot& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service (KMS) key ID of the encryption key that was used
     * to encrypt data in the cluster from which the snapshot was taken.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline Snapshot& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline Snapshot& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline Snapshot& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean that indicates whether the snapshot data is encrypted using the HSM
     * keys of the source cluster. <code>true</code> indicates that the data is
     * encrypted using HSM keys.</p>
     */
    inline bool GetEncryptedWithHSM() const{ return m_encryptedWithHSM; }
    inline bool EncryptedWithHSMHasBeenSet() const { return m_encryptedWithHSMHasBeenSet; }
    inline void SetEncryptedWithHSM(bool value) { m_encryptedWithHSMHasBeenSet = true; m_encryptedWithHSM = value; }
    inline Snapshot& WithEncryptedWithHSM(bool value) { SetEncryptedWithHSM(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the Amazon Web Services accounts authorized to restore the
     * snapshot. Returns <code>null</code> if no accounts are authorized. Visible only
     * to the snapshot owner. </p>
     */
    inline const Aws::Vector<AccountWithRestoreAccess>& GetAccountsWithRestoreAccess() const{ return m_accountsWithRestoreAccess; }
    inline bool AccountsWithRestoreAccessHasBeenSet() const { return m_accountsWithRestoreAccessHasBeenSet; }
    inline void SetAccountsWithRestoreAccess(const Aws::Vector<AccountWithRestoreAccess>& value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess = value; }
    inline void SetAccountsWithRestoreAccess(Aws::Vector<AccountWithRestoreAccess>&& value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess = std::move(value); }
    inline Snapshot& WithAccountsWithRestoreAccess(const Aws::Vector<AccountWithRestoreAccess>& value) { SetAccountsWithRestoreAccess(value); return *this;}
    inline Snapshot& WithAccountsWithRestoreAccess(Aws::Vector<AccountWithRestoreAccess>&& value) { SetAccountsWithRestoreAccess(std::move(value)); return *this;}
    inline Snapshot& AddAccountsWithRestoreAccess(const AccountWithRestoreAccess& value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess.push_back(value); return *this; }
    inline Snapshot& AddAccountsWithRestoreAccess(AccountWithRestoreAccess&& value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For manual snapshots, the Amazon Web Services account used to create or copy
     * the snapshot. For automatic snapshots, the owner of the cluster. The owner can
     * perform all snapshot actions, such as sharing a manual snapshot.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }
    inline Snapshot& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}
    inline Snapshot& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}
    inline Snapshot& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the complete set of backup data that would be used to restore the
     * cluster.</p>
     */
    inline double GetTotalBackupSizeInMegaBytes() const{ return m_totalBackupSizeInMegaBytes; }
    inline bool TotalBackupSizeInMegaBytesHasBeenSet() const { return m_totalBackupSizeInMegaBytesHasBeenSet; }
    inline void SetTotalBackupSizeInMegaBytes(double value) { m_totalBackupSizeInMegaBytesHasBeenSet = true; m_totalBackupSizeInMegaBytes = value; }
    inline Snapshot& WithTotalBackupSizeInMegaBytes(double value) { SetTotalBackupSizeInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the incremental backup.</p>
     */
    inline double GetActualIncrementalBackupSizeInMegaBytes() const{ return m_actualIncrementalBackupSizeInMegaBytes; }
    inline bool ActualIncrementalBackupSizeInMegaBytesHasBeenSet() const { return m_actualIncrementalBackupSizeInMegaBytesHasBeenSet; }
    inline void SetActualIncrementalBackupSizeInMegaBytes(double value) { m_actualIncrementalBackupSizeInMegaBytesHasBeenSet = true; m_actualIncrementalBackupSizeInMegaBytes = value; }
    inline Snapshot& WithActualIncrementalBackupSizeInMegaBytes(double value) { SetActualIncrementalBackupSizeInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of megabytes that have been transferred to the snapshot
     * backup.</p>
     */
    inline double GetBackupProgressInMegaBytes() const{ return m_backupProgressInMegaBytes; }
    inline bool BackupProgressInMegaBytesHasBeenSet() const { return m_backupProgressInMegaBytesHasBeenSet; }
    inline void SetBackupProgressInMegaBytes(double value) { m_backupProgressInMegaBytesHasBeenSet = true; m_backupProgressInMegaBytes = value; }
    inline Snapshot& WithBackupProgressInMegaBytes(double value) { SetBackupProgressInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of megabytes per second being transferred to the snapshot backup.
     * Returns <code>0</code> for a completed backup. </p>
     */
    inline double GetCurrentBackupRateInMegaBytesPerSecond() const{ return m_currentBackupRateInMegaBytesPerSecond; }
    inline bool CurrentBackupRateInMegaBytesPerSecondHasBeenSet() const { return m_currentBackupRateInMegaBytesPerSecondHasBeenSet; }
    inline void SetCurrentBackupRateInMegaBytesPerSecond(double value) { m_currentBackupRateInMegaBytesPerSecondHasBeenSet = true; m_currentBackupRateInMegaBytesPerSecond = value; }
    inline Snapshot& WithCurrentBackupRateInMegaBytesPerSecond(double value) { SetCurrentBackupRateInMegaBytesPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimate of the time remaining before the snapshot backup will complete.
     * Returns <code>0</code> for a completed backup. </p>
     */
    inline long long GetEstimatedSecondsToCompletion() const{ return m_estimatedSecondsToCompletion; }
    inline bool EstimatedSecondsToCompletionHasBeenSet() const { return m_estimatedSecondsToCompletionHasBeenSet; }
    inline void SetEstimatedSecondsToCompletion(long long value) { m_estimatedSecondsToCompletionHasBeenSet = true; m_estimatedSecondsToCompletion = value; }
    inline Snapshot& WithEstimatedSecondsToCompletion(long long value) { SetEstimatedSecondsToCompletion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time an in-progress snapshot backup has been running, or the
     * amount of time it took a completed backup to finish.</p>
     */
    inline long long GetElapsedTimeInSeconds() const{ return m_elapsedTimeInSeconds; }
    inline bool ElapsedTimeInSecondsHasBeenSet() const { return m_elapsedTimeInSecondsHasBeenSet; }
    inline void SetElapsedTimeInSeconds(long long value) { m_elapsedTimeInSecondsHasBeenSet = true; m_elapsedTimeInSeconds = value; }
    inline Snapshot& WithElapsedTimeInSeconds(long long value) { SetElapsedTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source region from which the snapshot was copied.</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }
    inline Snapshot& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}
    inline Snapshot& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}
    inline Snapshot& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags for the cluster snapshot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Snapshot& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Snapshot& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Snapshot& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Snapshot& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of node types that this cluster snapshot is able to restore
     * into.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRestorableNodeTypes() const{ return m_restorableNodeTypes; }
    inline bool RestorableNodeTypesHasBeenSet() const { return m_restorableNodeTypesHasBeenSet; }
    inline void SetRestorableNodeTypes(const Aws::Vector<Aws::String>& value) { m_restorableNodeTypesHasBeenSet = true; m_restorableNodeTypes = value; }
    inline void SetRestorableNodeTypes(Aws::Vector<Aws::String>&& value) { m_restorableNodeTypesHasBeenSet = true; m_restorableNodeTypes = std::move(value); }
    inline Snapshot& WithRestorableNodeTypes(const Aws::Vector<Aws::String>& value) { SetRestorableNodeTypes(value); return *this;}
    inline Snapshot& WithRestorableNodeTypes(Aws::Vector<Aws::String>&& value) { SetRestorableNodeTypes(std::move(value)); return *this;}
    inline Snapshot& AddRestorableNodeTypes(const Aws::String& value) { m_restorableNodeTypesHasBeenSet = true; m_restorableNodeTypes.push_back(value); return *this; }
    inline Snapshot& AddRestorableNodeTypes(Aws::String&& value) { m_restorableNodeTypesHasBeenSet = true; m_restorableNodeTypes.push_back(std::move(value)); return *this; }
    inline Snapshot& AddRestorableNodeTypes(const char* value) { m_restorableNodeTypesHasBeenSet = true; m_restorableNodeTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An option that specifies whether to create the cluster with enhanced VPC
     * routing enabled. To create a cluster that uses enhanced VPC routing, the cluster
     * must be in a VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/enhanced-vpc-routing.html">Enhanced
     * VPC Routing</a> in the Amazon Redshift Cluster Management Guide.</p> <p>If this
     * option is <code>true</code>, enhanced VPC routing is enabled. </p> <p>Default:
     * false</p>
     */
    inline bool GetEnhancedVpcRouting() const{ return m_enhancedVpcRouting; }
    inline bool EnhancedVpcRoutingHasBeenSet() const { return m_enhancedVpcRoutingHasBeenSet; }
    inline void SetEnhancedVpcRouting(bool value) { m_enhancedVpcRoutingHasBeenSet = true; m_enhancedVpcRouting = value; }
    inline Snapshot& WithEnhancedVpcRouting(bool value) { SetEnhancedVpcRouting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the maintenance track for the snapshot.</p>
     */
    inline const Aws::String& GetMaintenanceTrackName() const{ return m_maintenanceTrackName; }
    inline bool MaintenanceTrackNameHasBeenSet() const { return m_maintenanceTrackNameHasBeenSet; }
    inline void SetMaintenanceTrackName(const Aws::String& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = value; }
    inline void SetMaintenanceTrackName(Aws::String&& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = std::move(value); }
    inline void SetMaintenanceTrackName(const char* value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName.assign(value); }
    inline Snapshot& WithMaintenanceTrackName(const Aws::String& value) { SetMaintenanceTrackName(value); return *this;}
    inline Snapshot& WithMaintenanceTrackName(Aws::String&& value) { SetMaintenanceTrackName(std::move(value)); return *this;}
    inline Snapshot& WithMaintenanceTrackName(const char* value) { SetMaintenanceTrackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days that a manual snapshot is retained. If the value is -1,
     * the manual snapshot is retained indefinitely. </p> <p>The value must be either
     * -1 or an integer between 1 and 3,653.</p>
     */
    inline int GetManualSnapshotRetentionPeriod() const{ return m_manualSnapshotRetentionPeriod; }
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }
    inline Snapshot& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days until a manual snapshot will pass its retention
     * period.</p>
     */
    inline int GetManualSnapshotRemainingDays() const{ return m_manualSnapshotRemainingDays; }
    inline bool ManualSnapshotRemainingDaysHasBeenSet() const { return m_manualSnapshotRemainingDaysHasBeenSet; }
    inline void SetManualSnapshotRemainingDays(int value) { m_manualSnapshotRemainingDaysHasBeenSet = true; m_manualSnapshotRemainingDays = value; }
    inline Snapshot& WithManualSnapshotRemainingDays(int value) { SetManualSnapshotRemainingDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp representing the start of the retention period for the
     * snapshot.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotRetentionStartTime() const{ return m_snapshotRetentionStartTime; }
    inline bool SnapshotRetentionStartTimeHasBeenSet() const { return m_snapshotRetentionStartTimeHasBeenSet; }
    inline void SetSnapshotRetentionStartTime(const Aws::Utils::DateTime& value) { m_snapshotRetentionStartTimeHasBeenSet = true; m_snapshotRetentionStartTime = value; }
    inline void SetSnapshotRetentionStartTime(Aws::Utils::DateTime&& value) { m_snapshotRetentionStartTimeHasBeenSet = true; m_snapshotRetentionStartTime = std::move(value); }
    inline Snapshot& WithSnapshotRetentionStartTime(const Aws::Utils::DateTime& value) { SetSnapshotRetentionStartTime(value); return *this;}
    inline Snapshot& WithSnapshotRetentionStartTime(Aws::Utils::DateTime&& value) { SetSnapshotRetentionStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the cluster's admin user credentials
     * secret.</p>
     */
    inline const Aws::String& GetMasterPasswordSecretArn() const{ return m_masterPasswordSecretArn; }
    inline bool MasterPasswordSecretArnHasBeenSet() const { return m_masterPasswordSecretArnHasBeenSet; }
    inline void SetMasterPasswordSecretArn(const Aws::String& value) { m_masterPasswordSecretArnHasBeenSet = true; m_masterPasswordSecretArn = value; }
    inline void SetMasterPasswordSecretArn(Aws::String&& value) { m_masterPasswordSecretArnHasBeenSet = true; m_masterPasswordSecretArn = std::move(value); }
    inline void SetMasterPasswordSecretArn(const char* value) { m_masterPasswordSecretArnHasBeenSet = true; m_masterPasswordSecretArn.assign(value); }
    inline Snapshot& WithMasterPasswordSecretArn(const Aws::String& value) { SetMasterPasswordSecretArn(value); return *this;}
    inline Snapshot& WithMasterPasswordSecretArn(Aws::String&& value) { SetMasterPasswordSecretArn(std::move(value)); return *this;}
    inline Snapshot& WithMasterPasswordSecretArn(const char* value) { SetMasterPasswordSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Key Management Service (KMS) key used to encrypt and store the
     * cluster's admin credentials secret.</p>
     */
    inline const Aws::String& GetMasterPasswordSecretKmsKeyId() const{ return m_masterPasswordSecretKmsKeyId; }
    inline bool MasterPasswordSecretKmsKeyIdHasBeenSet() const { return m_masterPasswordSecretKmsKeyIdHasBeenSet; }
    inline void SetMasterPasswordSecretKmsKeyId(const Aws::String& value) { m_masterPasswordSecretKmsKeyIdHasBeenSet = true; m_masterPasswordSecretKmsKeyId = value; }
    inline void SetMasterPasswordSecretKmsKeyId(Aws::String&& value) { m_masterPasswordSecretKmsKeyIdHasBeenSet = true; m_masterPasswordSecretKmsKeyId = std::move(value); }
    inline void SetMasterPasswordSecretKmsKeyId(const char* value) { m_masterPasswordSecretKmsKeyIdHasBeenSet = true; m_masterPasswordSecretKmsKeyId.assign(value); }
    inline Snapshot& WithMasterPasswordSecretKmsKeyId(const Aws::String& value) { SetMasterPasswordSecretKmsKeyId(value); return *this;}
    inline Snapshot& WithMasterPasswordSecretKmsKeyId(Aws::String&& value) { SetMasterPasswordSecretKmsKeyId(std::move(value)); return *this;}
    inline Snapshot& WithMasterPasswordSecretKmsKeyId(const char* value) { SetMasterPasswordSecretKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotArn() const{ return m_snapshotArn; }
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }
    inline void SetSnapshotArn(const Aws::String& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = value; }
    inline void SetSnapshotArn(Aws::String&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::move(value); }
    inline void SetSnapshotArn(const char* value) { m_snapshotArnHasBeenSet = true; m_snapshotArn.assign(value); }
    inline Snapshot& WithSnapshotArn(const Aws::String& value) { SetSnapshotArn(value); return *this;}
    inline Snapshot& WithSnapshotArn(Aws::String&& value) { SetSnapshotArn(std::move(value)); return *this;}
    inline Snapshot& WithSnapshotArn(const char* value) { SetSnapshotArn(value); return *this;}
    ///@}
  private:

    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_snapshotCreateTime;
    bool m_snapshotCreateTimeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Utils::DateTime m_clusterCreateTime;
    bool m_clusterCreateTimeHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_clusterVersion;
    bool m_clusterVersionHasBeenSet = false;

    Aws::String m_engineFullVersion;
    bool m_engineFullVersionHasBeenSet = false;

    Aws::String m_snapshotType;
    bool m_snapshotTypeHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    int m_numberOfNodes;
    bool m_numberOfNodesHasBeenSet = false;

    Aws::String m_dBName;
    bool m_dBNameHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_encryptedWithHSM;
    bool m_encryptedWithHSMHasBeenSet = false;

    Aws::Vector<AccountWithRestoreAccess> m_accountsWithRestoreAccess;
    bool m_accountsWithRestoreAccessHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    double m_totalBackupSizeInMegaBytes;
    bool m_totalBackupSizeInMegaBytesHasBeenSet = false;

    double m_actualIncrementalBackupSizeInMegaBytes;
    bool m_actualIncrementalBackupSizeInMegaBytesHasBeenSet = false;

    double m_backupProgressInMegaBytes;
    bool m_backupProgressInMegaBytesHasBeenSet = false;

    double m_currentBackupRateInMegaBytesPerSecond;
    bool m_currentBackupRateInMegaBytesPerSecondHasBeenSet = false;

    long long m_estimatedSecondsToCompletion;
    bool m_estimatedSecondsToCompletionHasBeenSet = false;

    long long m_elapsedTimeInSeconds;
    bool m_elapsedTimeInSecondsHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_restorableNodeTypes;
    bool m_restorableNodeTypesHasBeenSet = false;

    bool m_enhancedVpcRouting;
    bool m_enhancedVpcRoutingHasBeenSet = false;

    Aws::String m_maintenanceTrackName;
    bool m_maintenanceTrackNameHasBeenSet = false;

    int m_manualSnapshotRetentionPeriod;
    bool m_manualSnapshotRetentionPeriodHasBeenSet = false;

    int m_manualSnapshotRemainingDays;
    bool m_manualSnapshotRemainingDaysHasBeenSet = false;

    Aws::Utils::DateTime m_snapshotRetentionStartTime;
    bool m_snapshotRetentionStartTimeHasBeenSet = false;

    Aws::String m_masterPasswordSecretArn;
    bool m_masterPasswordSecretArnHasBeenSet = false;

    Aws::String m_masterPasswordSecretKmsKeyId;
    bool m_masterPasswordSecretKmsKeyIdHasBeenSet = false;

    Aws::String m_snapshotArn;
    bool m_snapshotArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
