/**
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
    AWS_REDSHIFT_API Snapshot() = default;
    AWS_REDSHIFT_API Snapshot(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API Snapshot& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The snapshot identifier that is provided in the request.</p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const { return m_snapshotIdentifier; }
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }
    template<typename SnapshotIdentifierT = Aws::String>
    void SetSnapshotIdentifier(SnapshotIdentifierT&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::forward<SnapshotIdentifierT>(value); }
    template<typename SnapshotIdentifierT = Aws::String>
    Snapshot& WithSnapshotIdentifier(SnapshotIdentifierT&& value) { SetSnapshotIdentifier(std::forward<SnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the cluster for which the snapshot was taken.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    Snapshot& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time (in UTC format) when Amazon Redshift began the snapshot. A snapshot
     * contains a copy of the cluster data as of this exact time.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreateTime() const { return m_snapshotCreateTime; }
    inline bool SnapshotCreateTimeHasBeenSet() const { return m_snapshotCreateTimeHasBeenSet; }
    template<typename SnapshotCreateTimeT = Aws::Utils::DateTime>
    void SetSnapshotCreateTime(SnapshotCreateTimeT&& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = std::forward<SnapshotCreateTimeT>(value); }
    template<typename SnapshotCreateTimeT = Aws::Utils::DateTime>
    Snapshot& WithSnapshotCreateTime(SnapshotCreateTimeT&& value) { SetSnapshotCreateTime(std::forward<SnapshotCreateTimeT>(value)); return *this;}
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
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Snapshot& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port that the cluster is listening on.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline Snapshot& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which the cluster was created.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    Snapshot& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time (UTC) when the cluster was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetClusterCreateTime() const { return m_clusterCreateTime; }
    inline bool ClusterCreateTimeHasBeenSet() const { return m_clusterCreateTimeHasBeenSet; }
    template<typename ClusterCreateTimeT = Aws::Utils::DateTime>
    void SetClusterCreateTime(ClusterCreateTimeT&& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = std::forward<ClusterCreateTimeT>(value); }
    template<typename ClusterCreateTimeT = Aws::Utils::DateTime>
    Snapshot& WithClusterCreateTime(ClusterCreateTimeT&& value) { SetClusterCreateTime(std::forward<ClusterCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The admin user name for the cluster.</p>
     */
    inline const Aws::String& GetMasterUsername() const { return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    template<typename MasterUsernameT = Aws::String>
    void SetMasterUsername(MasterUsernameT&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::forward<MasterUsernameT>(value); }
    template<typename MasterUsernameT = Aws::String>
    Snapshot& WithMasterUsername(MasterUsernameT&& value) { SetMasterUsername(std::forward<MasterUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID of the Amazon Redshift engine that is running on the
     * cluster.</p>
     */
    inline const Aws::String& GetClusterVersion() const { return m_clusterVersion; }
    inline bool ClusterVersionHasBeenSet() const { return m_clusterVersionHasBeenSet; }
    template<typename ClusterVersionT = Aws::String>
    void SetClusterVersion(ClusterVersionT&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = std::forward<ClusterVersionT>(value); }
    template<typename ClusterVersionT = Aws::String>
    Snapshot& WithClusterVersion(ClusterVersionT&& value) { SetClusterVersion(std::forward<ClusterVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster version of the cluster used to create the snapshot. For example,
     * 1.0.15503. </p>
     */
    inline const Aws::String& GetEngineFullVersion() const { return m_engineFullVersion; }
    inline bool EngineFullVersionHasBeenSet() const { return m_engineFullVersionHasBeenSet; }
    template<typename EngineFullVersionT = Aws::String>
    void SetEngineFullVersion(EngineFullVersionT&& value) { m_engineFullVersionHasBeenSet = true; m_engineFullVersion = std::forward<EngineFullVersionT>(value); }
    template<typename EngineFullVersionT = Aws::String>
    Snapshot& WithEngineFullVersion(EngineFullVersionT&& value) { SetEngineFullVersion(std::forward<EngineFullVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot type. Snapshots created using <a>CreateClusterSnapshot</a> and
     * <a>CopyClusterSnapshot</a> are of type "manual". </p>
     */
    inline const Aws::String& GetSnapshotType() const { return m_snapshotType; }
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }
    template<typename SnapshotTypeT = Aws::String>
    void SetSnapshotType(SnapshotTypeT&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::forward<SnapshotTypeT>(value); }
    template<typename SnapshotTypeT = Aws::String>
    Snapshot& WithSnapshotType(SnapshotTypeT&& value) { SetSnapshotType(std::forward<SnapshotTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type of the nodes in the cluster.</p>
     */
    inline const Aws::String& GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    template<typename NodeTypeT = Aws::String>
    void SetNodeType(NodeTypeT&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::forward<NodeTypeT>(value); }
    template<typename NodeTypeT = Aws::String>
    Snapshot& WithNodeType(NodeTypeT&& value) { SetNodeType(std::forward<NodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of nodes in the cluster.</p>
     */
    inline int GetNumberOfNodes() const { return m_numberOfNodes; }
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }
    inline Snapshot& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database that was created when the cluster was created.</p>
     */
    inline const Aws::String& GetDBName() const { return m_dBName; }
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }
    template<typename DBNameT = Aws::String>
    void SetDBName(DBNameT&& value) { m_dBNameHasBeenSet = true; m_dBName = std::forward<DBNameT>(value); }
    template<typename DBNameT = Aws::String>
    Snapshot& WithDBName(DBNameT&& value) { SetDBName(std::forward<DBNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC identifier of the cluster if the snapshot is from a cluster in a VPC.
     * Otherwise, this field is not in the output.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    Snapshot& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, the data in the snapshot is encrypted at rest.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline Snapshot& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service (KMS) key ID of the encryption key that was used
     * to encrypt data in the cluster from which the snapshot was taken.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    Snapshot& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean that indicates whether the snapshot data is encrypted using the HSM
     * keys of the source cluster. <code>true</code> indicates that the data is
     * encrypted using HSM keys.</p>
     */
    inline bool GetEncryptedWithHSM() const { return m_encryptedWithHSM; }
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
    inline const Aws::Vector<AccountWithRestoreAccess>& GetAccountsWithRestoreAccess() const { return m_accountsWithRestoreAccess; }
    inline bool AccountsWithRestoreAccessHasBeenSet() const { return m_accountsWithRestoreAccessHasBeenSet; }
    template<typename AccountsWithRestoreAccessT = Aws::Vector<AccountWithRestoreAccess>>
    void SetAccountsWithRestoreAccess(AccountsWithRestoreAccessT&& value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess = std::forward<AccountsWithRestoreAccessT>(value); }
    template<typename AccountsWithRestoreAccessT = Aws::Vector<AccountWithRestoreAccess>>
    Snapshot& WithAccountsWithRestoreAccess(AccountsWithRestoreAccessT&& value) { SetAccountsWithRestoreAccess(std::forward<AccountsWithRestoreAccessT>(value)); return *this;}
    template<typename AccountsWithRestoreAccessT = AccountWithRestoreAccess>
    Snapshot& AddAccountsWithRestoreAccess(AccountsWithRestoreAccessT&& value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess.emplace_back(std::forward<AccountsWithRestoreAccessT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For manual snapshots, the Amazon Web Services account used to create or copy
     * the snapshot. For automatic snapshots, the owner of the cluster. The owner can
     * perform all snapshot actions, such as sharing a manual snapshot.</p>
     */
    inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    template<typename OwnerAccountT = Aws::String>
    void SetOwnerAccount(OwnerAccountT&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::forward<OwnerAccountT>(value); }
    template<typename OwnerAccountT = Aws::String>
    Snapshot& WithOwnerAccount(OwnerAccountT&& value) { SetOwnerAccount(std::forward<OwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the complete set of backup data that would be used to restore the
     * cluster.</p>
     */
    inline double GetTotalBackupSizeInMegaBytes() const { return m_totalBackupSizeInMegaBytes; }
    inline bool TotalBackupSizeInMegaBytesHasBeenSet() const { return m_totalBackupSizeInMegaBytesHasBeenSet; }
    inline void SetTotalBackupSizeInMegaBytes(double value) { m_totalBackupSizeInMegaBytesHasBeenSet = true; m_totalBackupSizeInMegaBytes = value; }
    inline Snapshot& WithTotalBackupSizeInMegaBytes(double value) { SetTotalBackupSizeInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the incremental backup.</p>
     */
    inline double GetActualIncrementalBackupSizeInMegaBytes() const { return m_actualIncrementalBackupSizeInMegaBytes; }
    inline bool ActualIncrementalBackupSizeInMegaBytesHasBeenSet() const { return m_actualIncrementalBackupSizeInMegaBytesHasBeenSet; }
    inline void SetActualIncrementalBackupSizeInMegaBytes(double value) { m_actualIncrementalBackupSizeInMegaBytesHasBeenSet = true; m_actualIncrementalBackupSizeInMegaBytes = value; }
    inline Snapshot& WithActualIncrementalBackupSizeInMegaBytes(double value) { SetActualIncrementalBackupSizeInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of megabytes that have been transferred to the snapshot
     * backup.</p>
     */
    inline double GetBackupProgressInMegaBytes() const { return m_backupProgressInMegaBytes; }
    inline bool BackupProgressInMegaBytesHasBeenSet() const { return m_backupProgressInMegaBytesHasBeenSet; }
    inline void SetBackupProgressInMegaBytes(double value) { m_backupProgressInMegaBytesHasBeenSet = true; m_backupProgressInMegaBytes = value; }
    inline Snapshot& WithBackupProgressInMegaBytes(double value) { SetBackupProgressInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of megabytes per second being transferred to the snapshot backup.
     * Returns <code>0</code> for a completed backup. </p>
     */
    inline double GetCurrentBackupRateInMegaBytesPerSecond() const { return m_currentBackupRateInMegaBytesPerSecond; }
    inline bool CurrentBackupRateInMegaBytesPerSecondHasBeenSet() const { return m_currentBackupRateInMegaBytesPerSecondHasBeenSet; }
    inline void SetCurrentBackupRateInMegaBytesPerSecond(double value) { m_currentBackupRateInMegaBytesPerSecondHasBeenSet = true; m_currentBackupRateInMegaBytesPerSecond = value; }
    inline Snapshot& WithCurrentBackupRateInMegaBytesPerSecond(double value) { SetCurrentBackupRateInMegaBytesPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimate of the time remaining before the snapshot backup will complete.
     * Returns <code>0</code> for a completed backup. </p>
     */
    inline long long GetEstimatedSecondsToCompletion() const { return m_estimatedSecondsToCompletion; }
    inline bool EstimatedSecondsToCompletionHasBeenSet() const { return m_estimatedSecondsToCompletionHasBeenSet; }
    inline void SetEstimatedSecondsToCompletion(long long value) { m_estimatedSecondsToCompletionHasBeenSet = true; m_estimatedSecondsToCompletion = value; }
    inline Snapshot& WithEstimatedSecondsToCompletion(long long value) { SetEstimatedSecondsToCompletion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time an in-progress snapshot backup has been running, or the
     * amount of time it took a completed backup to finish.</p>
     */
    inline long long GetElapsedTimeInSeconds() const { return m_elapsedTimeInSeconds; }
    inline bool ElapsedTimeInSecondsHasBeenSet() const { return m_elapsedTimeInSecondsHasBeenSet; }
    inline void SetElapsedTimeInSeconds(long long value) { m_elapsedTimeInSecondsHasBeenSet = true; m_elapsedTimeInSeconds = value; }
    inline Snapshot& WithElapsedTimeInSeconds(long long value) { SetElapsedTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source region from which the snapshot was copied.</p>
     */
    inline const Aws::String& GetSourceRegion() const { return m_sourceRegion; }
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
    template<typename SourceRegionT = Aws::String>
    void SetSourceRegion(SourceRegionT&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::forward<SourceRegionT>(value); }
    template<typename SourceRegionT = Aws::String>
    Snapshot& WithSourceRegion(SourceRegionT&& value) { SetSourceRegion(std::forward<SourceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags for the cluster snapshot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Snapshot& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Snapshot& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of node types that this cluster snapshot is able to restore
     * into.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRestorableNodeTypes() const { return m_restorableNodeTypes; }
    inline bool RestorableNodeTypesHasBeenSet() const { return m_restorableNodeTypesHasBeenSet; }
    template<typename RestorableNodeTypesT = Aws::Vector<Aws::String>>
    void SetRestorableNodeTypes(RestorableNodeTypesT&& value) { m_restorableNodeTypesHasBeenSet = true; m_restorableNodeTypes = std::forward<RestorableNodeTypesT>(value); }
    template<typename RestorableNodeTypesT = Aws::Vector<Aws::String>>
    Snapshot& WithRestorableNodeTypes(RestorableNodeTypesT&& value) { SetRestorableNodeTypes(std::forward<RestorableNodeTypesT>(value)); return *this;}
    template<typename RestorableNodeTypesT = Aws::String>
    Snapshot& AddRestorableNodeTypes(RestorableNodeTypesT&& value) { m_restorableNodeTypesHasBeenSet = true; m_restorableNodeTypes.emplace_back(std::forward<RestorableNodeTypesT>(value)); return *this; }
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
    inline bool GetEnhancedVpcRouting() const { return m_enhancedVpcRouting; }
    inline bool EnhancedVpcRoutingHasBeenSet() const { return m_enhancedVpcRoutingHasBeenSet; }
    inline void SetEnhancedVpcRouting(bool value) { m_enhancedVpcRoutingHasBeenSet = true; m_enhancedVpcRouting = value; }
    inline Snapshot& WithEnhancedVpcRouting(bool value) { SetEnhancedVpcRouting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the maintenance track for the snapshot.</p>
     */
    inline const Aws::String& GetMaintenanceTrackName() const { return m_maintenanceTrackName; }
    inline bool MaintenanceTrackNameHasBeenSet() const { return m_maintenanceTrackNameHasBeenSet; }
    template<typename MaintenanceTrackNameT = Aws::String>
    void SetMaintenanceTrackName(MaintenanceTrackNameT&& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = std::forward<MaintenanceTrackNameT>(value); }
    template<typename MaintenanceTrackNameT = Aws::String>
    Snapshot& WithMaintenanceTrackName(MaintenanceTrackNameT&& value) { SetMaintenanceTrackName(std::forward<MaintenanceTrackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days that a manual snapshot is retained. If the value is -1,
     * the manual snapshot is retained indefinitely. </p> <p>The value must be either
     * -1 or an integer between 1 and 3,653.</p>
     */
    inline int GetManualSnapshotRetentionPeriod() const { return m_manualSnapshotRetentionPeriod; }
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }
    inline Snapshot& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days until a manual snapshot will pass its retention
     * period.</p>
     */
    inline int GetManualSnapshotRemainingDays() const { return m_manualSnapshotRemainingDays; }
    inline bool ManualSnapshotRemainingDaysHasBeenSet() const { return m_manualSnapshotRemainingDaysHasBeenSet; }
    inline void SetManualSnapshotRemainingDays(int value) { m_manualSnapshotRemainingDaysHasBeenSet = true; m_manualSnapshotRemainingDays = value; }
    inline Snapshot& WithManualSnapshotRemainingDays(int value) { SetManualSnapshotRemainingDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp representing the start of the retention period for the
     * snapshot.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotRetentionStartTime() const { return m_snapshotRetentionStartTime; }
    inline bool SnapshotRetentionStartTimeHasBeenSet() const { return m_snapshotRetentionStartTimeHasBeenSet; }
    template<typename SnapshotRetentionStartTimeT = Aws::Utils::DateTime>
    void SetSnapshotRetentionStartTime(SnapshotRetentionStartTimeT&& value) { m_snapshotRetentionStartTimeHasBeenSet = true; m_snapshotRetentionStartTime = std::forward<SnapshotRetentionStartTimeT>(value); }
    template<typename SnapshotRetentionStartTimeT = Aws::Utils::DateTime>
    Snapshot& WithSnapshotRetentionStartTime(SnapshotRetentionStartTimeT&& value) { SetSnapshotRetentionStartTime(std::forward<SnapshotRetentionStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the cluster's admin user credentials
     * secret.</p>
     */
    inline const Aws::String& GetMasterPasswordSecretArn() const { return m_masterPasswordSecretArn; }
    inline bool MasterPasswordSecretArnHasBeenSet() const { return m_masterPasswordSecretArnHasBeenSet; }
    template<typename MasterPasswordSecretArnT = Aws::String>
    void SetMasterPasswordSecretArn(MasterPasswordSecretArnT&& value) { m_masterPasswordSecretArnHasBeenSet = true; m_masterPasswordSecretArn = std::forward<MasterPasswordSecretArnT>(value); }
    template<typename MasterPasswordSecretArnT = Aws::String>
    Snapshot& WithMasterPasswordSecretArn(MasterPasswordSecretArnT&& value) { SetMasterPasswordSecretArn(std::forward<MasterPasswordSecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Key Management Service (KMS) key used to encrypt and store the
     * cluster's admin credentials secret.</p>
     */
    inline const Aws::String& GetMasterPasswordSecretKmsKeyId() const { return m_masterPasswordSecretKmsKeyId; }
    inline bool MasterPasswordSecretKmsKeyIdHasBeenSet() const { return m_masterPasswordSecretKmsKeyIdHasBeenSet; }
    template<typename MasterPasswordSecretKmsKeyIdT = Aws::String>
    void SetMasterPasswordSecretKmsKeyId(MasterPasswordSecretKmsKeyIdT&& value) { m_masterPasswordSecretKmsKeyIdHasBeenSet = true; m_masterPasswordSecretKmsKeyId = std::forward<MasterPasswordSecretKmsKeyIdT>(value); }
    template<typename MasterPasswordSecretKmsKeyIdT = Aws::String>
    Snapshot& WithMasterPasswordSecretKmsKeyId(MasterPasswordSecretKmsKeyIdT&& value) { SetMasterPasswordSecretKmsKeyId(std::forward<MasterPasswordSecretKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotArn() const { return m_snapshotArn; }
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }
    template<typename SnapshotArnT = Aws::String>
    void SetSnapshotArn(SnapshotArnT&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::forward<SnapshotArnT>(value); }
    template<typename SnapshotArnT = Aws::String>
    Snapshot& WithSnapshotArn(SnapshotArnT&& value) { SetSnapshotArn(std::forward<SnapshotArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_snapshotCreateTime{};
    bool m_snapshotCreateTimeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Utils::DateTime m_clusterCreateTime{};
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

    int m_numberOfNodes{0};
    bool m_numberOfNodesHasBeenSet = false;

    Aws::String m_dBName;
    bool m_dBNameHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_encryptedWithHSM{false};
    bool m_encryptedWithHSMHasBeenSet = false;

    Aws::Vector<AccountWithRestoreAccess> m_accountsWithRestoreAccess;
    bool m_accountsWithRestoreAccessHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    double m_totalBackupSizeInMegaBytes{0.0};
    bool m_totalBackupSizeInMegaBytesHasBeenSet = false;

    double m_actualIncrementalBackupSizeInMegaBytes{0.0};
    bool m_actualIncrementalBackupSizeInMegaBytesHasBeenSet = false;

    double m_backupProgressInMegaBytes{0.0};
    bool m_backupProgressInMegaBytesHasBeenSet = false;

    double m_currentBackupRateInMegaBytesPerSecond{0.0};
    bool m_currentBackupRateInMegaBytesPerSecondHasBeenSet = false;

    long long m_estimatedSecondsToCompletion{0};
    bool m_estimatedSecondsToCompletionHasBeenSet = false;

    long long m_elapsedTimeInSeconds{0};
    bool m_elapsedTimeInSecondsHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_restorableNodeTypes;
    bool m_restorableNodeTypesHasBeenSet = false;

    bool m_enhancedVpcRouting{false};
    bool m_enhancedVpcRoutingHasBeenSet = false;

    Aws::String m_maintenanceTrackName;
    bool m_maintenanceTrackNameHasBeenSet = false;

    int m_manualSnapshotRetentionPeriod{0};
    bool m_manualSnapshotRetentionPeriodHasBeenSet = false;

    int m_manualSnapshotRemainingDays{0};
    bool m_manualSnapshotRemainingDaysHasBeenSet = false;

    Aws::Utils::DateTime m_snapshotRetentionStartTime{};
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
