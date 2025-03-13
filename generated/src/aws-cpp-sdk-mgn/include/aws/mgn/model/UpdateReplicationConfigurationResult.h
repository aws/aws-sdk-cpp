/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/ReplicationConfigurationDataPlaneRouting.h>
#include <aws/mgn/model/ReplicationConfigurationDefaultLargeStagingDiskType.h>
#include <aws/mgn/model/ReplicationConfigurationEbsEncryption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mgn/model/ReplicationConfigurationReplicatedDisk.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace mgn
{
namespace Model
{
  class UpdateReplicationConfigurationResult
  {
  public:
    AWS_MGN_API UpdateReplicationConfigurationResult() = default;
    AWS_MGN_API UpdateReplicationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API UpdateReplicationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Replication Configuration associate default Application Migration Service
     * Security Group.</p>
     */
    inline bool GetAssociateDefaultSecurityGroup() const { return m_associateDefaultSecurityGroup; }
    inline void SetAssociateDefaultSecurityGroup(bool value) { m_associateDefaultSecurityGroupHasBeenSet = true; m_associateDefaultSecurityGroup = value; }
    inline UpdateReplicationConfigurationResult& WithAssociateDefaultSecurityGroup(bool value) { SetAssociateDefaultSecurityGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration set bandwidth throttling.</p>
     */
    inline long long GetBandwidthThrottling() const { return m_bandwidthThrottling; }
    inline void SetBandwidthThrottling(long long value) { m_bandwidthThrottlingHasBeenSet = true; m_bandwidthThrottling = value; }
    inline UpdateReplicationConfigurationResult& WithBandwidthThrottling(long long value) { SetBandwidthThrottling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration create Public IP.</p>
     */
    inline bool GetCreatePublicIP() const { return m_createPublicIP; }
    inline void SetCreatePublicIP(bool value) { m_createPublicIPHasBeenSet = true; m_createPublicIP = value; }
    inline UpdateReplicationConfigurationResult& WithCreatePublicIP(bool value) { SetCreatePublicIP(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration data plane routing.</p>
     */
    inline ReplicationConfigurationDataPlaneRouting GetDataPlaneRouting() const { return m_dataPlaneRouting; }
    inline void SetDataPlaneRouting(ReplicationConfigurationDataPlaneRouting value) { m_dataPlaneRoutingHasBeenSet = true; m_dataPlaneRouting = value; }
    inline UpdateReplicationConfigurationResult& WithDataPlaneRouting(ReplicationConfigurationDataPlaneRouting value) { SetDataPlaneRouting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration use default large Staging Disks.</p>
     */
    inline ReplicationConfigurationDefaultLargeStagingDiskType GetDefaultLargeStagingDiskType() const { return m_defaultLargeStagingDiskType; }
    inline void SetDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType value) { m_defaultLargeStagingDiskTypeHasBeenSet = true; m_defaultLargeStagingDiskType = value; }
    inline UpdateReplicationConfigurationResult& WithDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType value) { SetDefaultLargeStagingDiskType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration EBS encryption.</p>
     */
    inline ReplicationConfigurationEbsEncryption GetEbsEncryption() const { return m_ebsEncryption; }
    inline void SetEbsEncryption(ReplicationConfigurationEbsEncryption value) { m_ebsEncryptionHasBeenSet = true; m_ebsEncryption = value; }
    inline UpdateReplicationConfigurationResult& WithEbsEncryption(ReplicationConfigurationEbsEncryption value) { SetEbsEncryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration EBS encryption key ARN.</p>
     */
    inline const Aws::String& GetEbsEncryptionKeyArn() const { return m_ebsEncryptionKeyArn; }
    template<typename EbsEncryptionKeyArnT = Aws::String>
    void SetEbsEncryptionKeyArn(EbsEncryptionKeyArnT&& value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn = std::forward<EbsEncryptionKeyArnT>(value); }
    template<typename EbsEncryptionKeyArnT = Aws::String>
    UpdateReplicationConfigurationResult& WithEbsEncryptionKeyArn(EbsEncryptionKeyArnT&& value) { SetEbsEncryptionKeyArn(std::forward<EbsEncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateReplicationConfigurationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration replicated disks.</p>
     */
    inline const Aws::Vector<ReplicationConfigurationReplicatedDisk>& GetReplicatedDisks() const { return m_replicatedDisks; }
    template<typename ReplicatedDisksT = Aws::Vector<ReplicationConfigurationReplicatedDisk>>
    void SetReplicatedDisks(ReplicatedDisksT&& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks = std::forward<ReplicatedDisksT>(value); }
    template<typename ReplicatedDisksT = Aws::Vector<ReplicationConfigurationReplicatedDisk>>
    UpdateReplicationConfigurationResult& WithReplicatedDisks(ReplicatedDisksT&& value) { SetReplicatedDisks(std::forward<ReplicatedDisksT>(value)); return *this;}
    template<typename ReplicatedDisksT = ReplicationConfigurationReplicatedDisk>
    UpdateReplicationConfigurationResult& AddReplicatedDisks(ReplicatedDisksT&& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks.emplace_back(std::forward<ReplicatedDisksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Replication Configuration Replication Server instance type.</p>
     */
    inline const Aws::String& GetReplicationServerInstanceType() const { return m_replicationServerInstanceType; }
    template<typename ReplicationServerInstanceTypeT = Aws::String>
    void SetReplicationServerInstanceType(ReplicationServerInstanceTypeT&& value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType = std::forward<ReplicationServerInstanceTypeT>(value); }
    template<typename ReplicationServerInstanceTypeT = Aws::String>
    UpdateReplicationConfigurationResult& WithReplicationServerInstanceType(ReplicationServerInstanceTypeT&& value) { SetReplicationServerInstanceType(std::forward<ReplicationServerInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration Replication Server Security Group IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationServersSecurityGroupsIDs() const { return m_replicationServersSecurityGroupsIDs; }
    template<typename ReplicationServersSecurityGroupsIDsT = Aws::Vector<Aws::String>>
    void SetReplicationServersSecurityGroupsIDs(ReplicationServersSecurityGroupsIDsT&& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs = std::forward<ReplicationServersSecurityGroupsIDsT>(value); }
    template<typename ReplicationServersSecurityGroupsIDsT = Aws::Vector<Aws::String>>
    UpdateReplicationConfigurationResult& WithReplicationServersSecurityGroupsIDs(ReplicationServersSecurityGroupsIDsT&& value) { SetReplicationServersSecurityGroupsIDs(std::forward<ReplicationServersSecurityGroupsIDsT>(value)); return *this;}
    template<typename ReplicationServersSecurityGroupsIDsT = Aws::String>
    UpdateReplicationConfigurationResult& AddReplicationServersSecurityGroupsIDs(ReplicationServersSecurityGroupsIDsT&& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.emplace_back(std::forward<ReplicationServersSecurityGroupsIDsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Replication Configuration Source Server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const { return m_sourceServerID; }
    template<typename SourceServerIDT = Aws::String>
    void SetSourceServerID(SourceServerIDT&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::forward<SourceServerIDT>(value); }
    template<typename SourceServerIDT = Aws::String>
    UpdateReplicationConfigurationResult& WithSourceServerID(SourceServerIDT&& value) { SetSourceServerID(std::forward<SourceServerIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration Staging Area subnet ID.</p>
     */
    inline const Aws::String& GetStagingAreaSubnetId() const { return m_stagingAreaSubnetId; }
    template<typename StagingAreaSubnetIdT = Aws::String>
    void SetStagingAreaSubnetId(StagingAreaSubnetIdT&& value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId = std::forward<StagingAreaSubnetIdT>(value); }
    template<typename StagingAreaSubnetIdT = Aws::String>
    UpdateReplicationConfigurationResult& WithStagingAreaSubnetId(StagingAreaSubnetIdT&& value) { SetStagingAreaSubnetId(std::forward<StagingAreaSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration Staging Area tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStagingAreaTags() const { return m_stagingAreaTags; }
    template<typename StagingAreaTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetStagingAreaTags(StagingAreaTagsT&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags = std::forward<StagingAreaTagsT>(value); }
    template<typename StagingAreaTagsT = Aws::Map<Aws::String, Aws::String>>
    UpdateReplicationConfigurationResult& WithStagingAreaTags(StagingAreaTagsT&& value) { SetStagingAreaTags(std::forward<StagingAreaTagsT>(value)); return *this;}
    template<typename StagingAreaTagsKeyT = Aws::String, typename StagingAreaTagsValueT = Aws::String>
    UpdateReplicationConfigurationResult& AddStagingAreaTags(StagingAreaTagsKeyT&& key, StagingAreaTagsValueT&& value) {
      m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::forward<StagingAreaTagsKeyT>(key), std::forward<StagingAreaTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Replication Configuration use Dedicated Replication Server.</p>
     */
    inline bool GetUseDedicatedReplicationServer() const { return m_useDedicatedReplicationServer; }
    inline void SetUseDedicatedReplicationServer(bool value) { m_useDedicatedReplicationServerHasBeenSet = true; m_useDedicatedReplicationServer = value; }
    inline UpdateReplicationConfigurationResult& WithUseDedicatedReplicationServer(bool value) { SetUseDedicatedReplicationServer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration use Fips Endpoint.</p>
     */
    inline bool GetUseFipsEndpoint() const { return m_useFipsEndpoint; }
    inline void SetUseFipsEndpoint(bool value) { m_useFipsEndpointHasBeenSet = true; m_useFipsEndpoint = value; }
    inline UpdateReplicationConfigurationResult& WithUseFipsEndpoint(bool value) { SetUseFipsEndpoint(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateReplicationConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_associateDefaultSecurityGroup{false};
    bool m_associateDefaultSecurityGroupHasBeenSet = false;

    long long m_bandwidthThrottling{0};
    bool m_bandwidthThrottlingHasBeenSet = false;

    bool m_createPublicIP{false};
    bool m_createPublicIPHasBeenSet = false;

    ReplicationConfigurationDataPlaneRouting m_dataPlaneRouting{ReplicationConfigurationDataPlaneRouting::NOT_SET};
    bool m_dataPlaneRoutingHasBeenSet = false;

    ReplicationConfigurationDefaultLargeStagingDiskType m_defaultLargeStagingDiskType{ReplicationConfigurationDefaultLargeStagingDiskType::NOT_SET};
    bool m_defaultLargeStagingDiskTypeHasBeenSet = false;

    ReplicationConfigurationEbsEncryption m_ebsEncryption{ReplicationConfigurationEbsEncryption::NOT_SET};
    bool m_ebsEncryptionHasBeenSet = false;

    Aws::String m_ebsEncryptionKeyArn;
    bool m_ebsEncryptionKeyArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<ReplicationConfigurationReplicatedDisk> m_replicatedDisks;
    bool m_replicatedDisksHasBeenSet = false;

    Aws::String m_replicationServerInstanceType;
    bool m_replicationServerInstanceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationServersSecurityGroupsIDs;
    bool m_replicationServersSecurityGroupsIDsHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;

    Aws::String m_stagingAreaSubnetId;
    bool m_stagingAreaSubnetIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_stagingAreaTags;
    bool m_stagingAreaTagsHasBeenSet = false;

    bool m_useDedicatedReplicationServer{false};
    bool m_useDedicatedReplicationServerHasBeenSet = false;

    bool m_useFipsEndpoint{false};
    bool m_useFipsEndpointHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
