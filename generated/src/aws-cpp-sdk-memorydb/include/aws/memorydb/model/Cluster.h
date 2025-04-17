/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/memorydb/model/ClusterPendingUpdates.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/AZStatus.h>
#include <aws/memorydb/model/Endpoint.h>
#include <aws/memorydb/model/DataTieringStatus.h>
#include <aws/memorydb/model/NetworkType.h>
#include <aws/memorydb/model/IpDiscovery.h>
#include <aws/memorydb/model/Shard.h>
#include <aws/memorydb/model/SecurityGroupMembership.h>
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
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>Contains all of the attributes of a specific cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/Cluster">AWS
   * API Reference</a></p>
   */
  class Cluster
  {
  public:
    AWS_MEMORYDB_API Cluster() = default;
    AWS_MEMORYDB_API Cluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user-supplied name of the cluster. This identifier is a unique key that
     * identifies a cluster.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Cluster& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the cluster</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Cluster& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the cluster. For example, Available, Updating, Creating.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Cluster& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A group of settings that are currently being applied.</p>
     */
    inline const ClusterPendingUpdates& GetPendingUpdates() const { return m_pendingUpdates; }
    inline bool PendingUpdatesHasBeenSet() const { return m_pendingUpdatesHasBeenSet; }
    template<typename PendingUpdatesT = ClusterPendingUpdates>
    void SetPendingUpdates(PendingUpdatesT&& value) { m_pendingUpdatesHasBeenSet = true; m_pendingUpdates = std::forward<PendingUpdatesT>(value); }
    template<typename PendingUpdatesT = ClusterPendingUpdates>
    Cluster& WithPendingUpdates(PendingUpdatesT&& value) { SetPendingUpdates(std::forward<PendingUpdatesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the multi-Region cluster that this cluster belongs to.</p>
     */
    inline const Aws::String& GetMultiRegionClusterName() const { return m_multiRegionClusterName; }
    inline bool MultiRegionClusterNameHasBeenSet() const { return m_multiRegionClusterNameHasBeenSet; }
    template<typename MultiRegionClusterNameT = Aws::String>
    void SetMultiRegionClusterName(MultiRegionClusterNameT&& value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName = std::forward<MultiRegionClusterNameT>(value); }
    template<typename MultiRegionClusterNameT = Aws::String>
    Cluster& WithMultiRegionClusterName(MultiRegionClusterNameT&& value) { SetMultiRegionClusterName(std::forward<MultiRegionClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of shards in the cluster</p>
     */
    inline int GetNumberOfShards() const { return m_numberOfShards; }
    inline bool NumberOfShardsHasBeenSet() const { return m_numberOfShardsHasBeenSet; }
    inline void SetNumberOfShards(int value) { m_numberOfShardsHasBeenSet = true; m_numberOfShards = value; }
    inline Cluster& WithNumberOfShards(int value) { SetNumberOfShards(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of shards that are members of the cluster.</p>
     */
    inline const Aws::Vector<Shard>& GetShards() const { return m_shards; }
    inline bool ShardsHasBeenSet() const { return m_shardsHasBeenSet; }
    template<typename ShardsT = Aws::Vector<Shard>>
    void SetShards(ShardsT&& value) { m_shardsHasBeenSet = true; m_shards = std::forward<ShardsT>(value); }
    template<typename ShardsT = Aws::Vector<Shard>>
    Cluster& WithShards(ShardsT&& value) { SetShards(std::forward<ShardsT>(value)); return *this;}
    template<typename ShardsT = Shard>
    Cluster& AddShards(ShardsT&& value) { m_shardsHasBeenSet = true; m_shards.emplace_back(std::forward<ShardsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates if the cluster has a Multi-AZ configuration (multiaz) or not
     * (singleaz).</p>
     */
    inline AZStatus GetAvailabilityMode() const { return m_availabilityMode; }
    inline bool AvailabilityModeHasBeenSet() const { return m_availabilityModeHasBeenSet; }
    inline void SetAvailabilityMode(AZStatus value) { m_availabilityModeHasBeenSet = true; m_availabilityMode = value; }
    inline Cluster& WithAvailabilityMode(AZStatus value) { SetAvailabilityMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster's configuration endpoint</p>
     */
    inline const Endpoint& GetClusterEndpoint() const { return m_clusterEndpoint; }
    inline bool ClusterEndpointHasBeenSet() const { return m_clusterEndpointHasBeenSet; }
    template<typename ClusterEndpointT = Endpoint>
    void SetClusterEndpoint(ClusterEndpointT&& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = std::forward<ClusterEndpointT>(value); }
    template<typename ClusterEndpointT = Endpoint>
    Cluster& WithClusterEndpoint(ClusterEndpointT&& value) { SetClusterEndpoint(std::forward<ClusterEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster's node type</p>
     */
    inline const Aws::String& GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    template<typename NodeTypeT = Aws::String>
    void SetNodeType(NodeTypeT&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::forward<NodeTypeT>(value); }
    template<typename NodeTypeT = Aws::String>
    Cluster& WithNodeType(NodeTypeT&& value) { SetNodeType(std::forward<NodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the engine used by the cluster.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    Cluster& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Redis OSS engine version used by the cluster</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    Cluster& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Redis OSS engine patch version used by the cluster</p>
     */
    inline const Aws::String& GetEnginePatchVersion() const { return m_enginePatchVersion; }
    inline bool EnginePatchVersionHasBeenSet() const { return m_enginePatchVersionHasBeenSet; }
    template<typename EnginePatchVersionT = Aws::String>
    void SetEnginePatchVersion(EnginePatchVersionT&& value) { m_enginePatchVersionHasBeenSet = true; m_enginePatchVersion = std::forward<EnginePatchVersionT>(value); }
    template<typename EnginePatchVersionT = Aws::String>
    Cluster& WithEnginePatchVersion(EnginePatchVersionT&& value) { SetEnginePatchVersion(std::forward<EnginePatchVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the parameter group used by the cluster</p>
     */
    inline const Aws::String& GetParameterGroupName() const { return m_parameterGroupName; }
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }
    template<typename ParameterGroupNameT = Aws::String>
    void SetParameterGroupName(ParameterGroupNameT&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::forward<ParameterGroupNameT>(value); }
    template<typename ParameterGroupNameT = Aws::String>
    Cluster& WithParameterGroupName(ParameterGroupNameT&& value) { SetParameterGroupName(std::forward<ParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the parameter group used by the cluster, for example 'active'
     * or 'applying'.</p>
     */
    inline const Aws::String& GetParameterGroupStatus() const { return m_parameterGroupStatus; }
    inline bool ParameterGroupStatusHasBeenSet() const { return m_parameterGroupStatusHasBeenSet; }
    template<typename ParameterGroupStatusT = Aws::String>
    void SetParameterGroupStatus(ParameterGroupStatusT&& value) { m_parameterGroupStatusHasBeenSet = true; m_parameterGroupStatus = std::forward<ParameterGroupStatusT>(value); }
    template<typename ParameterGroupStatusT = Aws::String>
    Cluster& WithParameterGroupStatus(ParameterGroupStatusT&& value) { SetParameterGroupStatus(std::forward<ParameterGroupStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of security groups used by the cluster</p>
     */
    inline const Aws::Vector<SecurityGroupMembership>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<SecurityGroupMembership>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<SecurityGroupMembership>>
    Cluster& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = SecurityGroupMembership>
    Cluster& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the subnet group used by the cluster</p>
     */
    inline const Aws::String& GetSubnetGroupName() const { return m_subnetGroupName; }
    inline bool SubnetGroupNameHasBeenSet() const { return m_subnetGroupNameHasBeenSet; }
    template<typename SubnetGroupNameT = Aws::String>
    void SetSubnetGroupName(SubnetGroupNameT&& value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName = std::forward<SubnetGroupNameT>(value); }
    template<typename SubnetGroupNameT = Aws::String>
    Cluster& WithSubnetGroupName(SubnetGroupNameT&& value) { SetSubnetGroupName(std::forward<SubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag to indicate if In-transit encryption is enabled</p>
     */
    inline bool GetTLSEnabled() const { return m_tLSEnabled; }
    inline bool TLSEnabledHasBeenSet() const { return m_tLSEnabledHasBeenSet; }
    inline void SetTLSEnabled(bool value) { m_tLSEnabledHasBeenSet = true; m_tLSEnabled = value; }
    inline Cluster& WithTLSEnabled(bool value) { SetTLSEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt the cluster</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    Cluster& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    Cluster& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SNS notification topic</p>
     */
    inline const Aws::String& GetSnsTopicArn() const { return m_snsTopicArn; }
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
    template<typename SnsTopicArnT = Aws::String>
    void SetSnsTopicArn(SnsTopicArnT&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::forward<SnsTopicArnT>(value); }
    template<typename SnsTopicArnT = Aws::String>
    Cluster& WithSnsTopicArn(SnsTopicArnT&& value) { SetSnsTopicArn(std::forward<SnsTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SNS topic must be in Active status to receive notifications</p>
     */
    inline const Aws::String& GetSnsTopicStatus() const { return m_snsTopicStatus; }
    inline bool SnsTopicStatusHasBeenSet() const { return m_snsTopicStatusHasBeenSet; }
    template<typename SnsTopicStatusT = Aws::String>
    void SetSnsTopicStatus(SnsTopicStatusT&& value) { m_snsTopicStatusHasBeenSet = true; m_snsTopicStatus = std::forward<SnsTopicStatusT>(value); }
    template<typename SnsTopicStatusT = Aws::String>
    Cluster& WithSnsTopicStatus(SnsTopicStatusT&& value) { SetSnsTopicStatus(std::forward<SnsTopicStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which MemoryDB retains automatic snapshots before
     * deleting them. For example, if you set SnapshotRetentionLimit to 5, a snapshot
     * that was taken today is retained for 5 days before being deleted.</p>
     */
    inline int GetSnapshotRetentionLimit() const { return m_snapshotRetentionLimit; }
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }
    inline Cluster& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period. </p>
     */
    inline const Aws::String& GetMaintenanceWindow() const { return m_maintenanceWindow; }
    inline bool MaintenanceWindowHasBeenSet() const { return m_maintenanceWindowHasBeenSet; }
    template<typename MaintenanceWindowT = Aws::String>
    void SetMaintenanceWindow(MaintenanceWindowT&& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = std::forward<MaintenanceWindowT>(value); }
    template<typename MaintenanceWindowT = Aws::String>
    Cluster& WithMaintenanceWindow(MaintenanceWindowT&& value) { SetMaintenanceWindow(std::forward<MaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time range (in UTC) during which MemoryDB begins taking a daily
     * snapshot of your shard. Example: 05:00-09:00 If you do not specify this
     * parameter, MemoryDB automatically chooses an appropriate time range.</p>
     */
    inline const Aws::String& GetSnapshotWindow() const { return m_snapshotWindow; }
    inline bool SnapshotWindowHasBeenSet() const { return m_snapshotWindowHasBeenSet; }
    template<typename SnapshotWindowT = Aws::String>
    void SetSnapshotWindow(SnapshotWindowT&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = std::forward<SnapshotWindowT>(value); }
    template<typename SnapshotWindowT = Aws::String>
    Cluster& WithSnapshotWindow(SnapshotWindowT&& value) { SetSnapshotWindow(std::forward<SnapshotWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Access Control List associated with this cluster.</p>
     */
    inline const Aws::String& GetACLName() const { return m_aCLName; }
    inline bool ACLNameHasBeenSet() const { return m_aCLNameHasBeenSet; }
    template<typename ACLNameT = Aws::String>
    void SetACLName(ACLNameT&& value) { m_aCLNameHasBeenSet = true; m_aCLName = std::forward<ACLNameT>(value); }
    template<typename ACLNameT = Aws::String>
    Cluster& WithACLName(ACLNameT&& value) { SetACLName(std::forward<ACLNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to true, the cluster will automatically receive minor engine version
     * upgrades after launch.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline Cluster& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables data tiering. Data tiering is only supported for clusters using the
     * r6gd node type. This parameter must be set when using r6gd nodes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline DataTieringStatus GetDataTiering() const { return m_dataTiering; }
    inline bool DataTieringHasBeenSet() const { return m_dataTieringHasBeenSet; }
    inline void SetDataTiering(DataTieringStatus value) { m_dataTieringHasBeenSet = true; m_dataTiering = value; }
    inline Cluster& WithDataTiering(DataTieringStatus value) { SetDataTiering(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type for the cluster. Returns 'ipv4' for IPv4 only, 'ipv6' for
     * IPv6 only, or 'dual-stack' if the cluster supports both IPv4 and IPv6
     * addressing.</p>
     */
    inline NetworkType GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(NetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline Cluster& WithNetworkType(NetworkType value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mechanism that the cluster uses to discover IP addresses. Returns 'ipv4'
     * when DNS endpoints resolve to IPv4 addresses, or 'ipv6' when DNS endpoints
     * resolve to IPv6 addresses.</p>
     */
    inline IpDiscovery GetIpDiscovery() const { return m_ipDiscovery; }
    inline bool IpDiscoveryHasBeenSet() const { return m_ipDiscoveryHasBeenSet; }
    inline void SetIpDiscovery(IpDiscovery value) { m_ipDiscoveryHasBeenSet = true; m_ipDiscovery = value; }
    inline Cluster& WithIpDiscovery(IpDiscovery value) { SetIpDiscovery(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    ClusterPendingUpdates m_pendingUpdates;
    bool m_pendingUpdatesHasBeenSet = false;

    Aws::String m_multiRegionClusterName;
    bool m_multiRegionClusterNameHasBeenSet = false;

    int m_numberOfShards{0};
    bool m_numberOfShardsHasBeenSet = false;

    Aws::Vector<Shard> m_shards;
    bool m_shardsHasBeenSet = false;

    AZStatus m_availabilityMode{AZStatus::NOT_SET};
    bool m_availabilityModeHasBeenSet = false;

    Endpoint m_clusterEndpoint;
    bool m_clusterEndpointHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_enginePatchVersion;
    bool m_enginePatchVersionHasBeenSet = false;

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet = false;

    Aws::String m_parameterGroupStatus;
    bool m_parameterGroupStatusHasBeenSet = false;

    Aws::Vector<SecurityGroupMembership> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::String m_subnetGroupName;
    bool m_subnetGroupNameHasBeenSet = false;

    bool m_tLSEnabled{false};
    bool m_tLSEnabledHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    Aws::String m_snsTopicStatus;
    bool m_snsTopicStatusHasBeenSet = false;

    int m_snapshotRetentionLimit{0};
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::String m_maintenanceWindow;
    bool m_maintenanceWindowHasBeenSet = false;

    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet = false;

    Aws::String m_aCLName;
    bool m_aCLNameHasBeenSet = false;

    bool m_autoMinorVersionUpgrade{false};
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    DataTieringStatus m_dataTiering{DataTieringStatus::NOT_SET};
    bool m_dataTieringHasBeenSet = false;

    NetworkType m_networkType{NetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;

    IpDiscovery m_ipDiscovery{IpDiscovery::NOT_SET};
    bool m_ipDiscoveryHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
