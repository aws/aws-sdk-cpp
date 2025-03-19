/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/ReplicationConfigurationDataPlaneRouting.h>
#include <aws/mgn/model/ReplicationConfigurationDefaultLargeStagingDiskType.h>
#include <aws/mgn/model/ReplicationConfigurationEbsEncryption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mgn/model/ReplicationConfigurationReplicatedDisk.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class UpdateReplicationConfigurationRequest : public MgnRequest
  {
  public:
    AWS_MGN_API UpdateReplicationConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReplicationConfiguration"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Update replication configuration Account ID request.</p>
     */
    inline const Aws::String& GetAccountID() const { return m_accountID; }
    inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }
    template<typename AccountIDT = Aws::String>
    void SetAccountID(AccountIDT&& value) { m_accountIDHasBeenSet = true; m_accountID = std::forward<AccountIDT>(value); }
    template<typename AccountIDT = Aws::String>
    UpdateReplicationConfigurationRequest& WithAccountID(AccountIDT&& value) { SetAccountID(std::forward<AccountIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration associate default Application Migration
     * Service Security group request.</p>
     */
    inline bool GetAssociateDefaultSecurityGroup() const { return m_associateDefaultSecurityGroup; }
    inline bool AssociateDefaultSecurityGroupHasBeenSet() const { return m_associateDefaultSecurityGroupHasBeenSet; }
    inline void SetAssociateDefaultSecurityGroup(bool value) { m_associateDefaultSecurityGroupHasBeenSet = true; m_associateDefaultSecurityGroup = value; }
    inline UpdateReplicationConfigurationRequest& WithAssociateDefaultSecurityGroup(bool value) { SetAssociateDefaultSecurityGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration bandwidth throttling request.</p>
     */
    inline long long GetBandwidthThrottling() const { return m_bandwidthThrottling; }
    inline bool BandwidthThrottlingHasBeenSet() const { return m_bandwidthThrottlingHasBeenSet; }
    inline void SetBandwidthThrottling(long long value) { m_bandwidthThrottlingHasBeenSet = true; m_bandwidthThrottling = value; }
    inline UpdateReplicationConfigurationRequest& WithBandwidthThrottling(long long value) { SetBandwidthThrottling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration create Public IP request.</p>
     */
    inline bool GetCreatePublicIP() const { return m_createPublicIP; }
    inline bool CreatePublicIPHasBeenSet() const { return m_createPublicIPHasBeenSet; }
    inline void SetCreatePublicIP(bool value) { m_createPublicIPHasBeenSet = true; m_createPublicIP = value; }
    inline UpdateReplicationConfigurationRequest& WithCreatePublicIP(bool value) { SetCreatePublicIP(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration data plane routing request.</p>
     */
    inline ReplicationConfigurationDataPlaneRouting GetDataPlaneRouting() const { return m_dataPlaneRouting; }
    inline bool DataPlaneRoutingHasBeenSet() const { return m_dataPlaneRoutingHasBeenSet; }
    inline void SetDataPlaneRouting(ReplicationConfigurationDataPlaneRouting value) { m_dataPlaneRoutingHasBeenSet = true; m_dataPlaneRouting = value; }
    inline UpdateReplicationConfigurationRequest& WithDataPlaneRouting(ReplicationConfigurationDataPlaneRouting value) { SetDataPlaneRouting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration use default large Staging Disk type
     * request.</p>
     */
    inline ReplicationConfigurationDefaultLargeStagingDiskType GetDefaultLargeStagingDiskType() const { return m_defaultLargeStagingDiskType; }
    inline bool DefaultLargeStagingDiskTypeHasBeenSet() const { return m_defaultLargeStagingDiskTypeHasBeenSet; }
    inline void SetDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType value) { m_defaultLargeStagingDiskTypeHasBeenSet = true; m_defaultLargeStagingDiskType = value; }
    inline UpdateReplicationConfigurationRequest& WithDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType value) { SetDefaultLargeStagingDiskType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration EBS encryption request.</p>
     */
    inline ReplicationConfigurationEbsEncryption GetEbsEncryption() const { return m_ebsEncryption; }
    inline bool EbsEncryptionHasBeenSet() const { return m_ebsEncryptionHasBeenSet; }
    inline void SetEbsEncryption(ReplicationConfigurationEbsEncryption value) { m_ebsEncryptionHasBeenSet = true; m_ebsEncryption = value; }
    inline UpdateReplicationConfigurationRequest& WithEbsEncryption(ReplicationConfigurationEbsEncryption value) { SetEbsEncryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration EBS encryption key ARN request.</p>
     */
    inline const Aws::String& GetEbsEncryptionKeyArn() const { return m_ebsEncryptionKeyArn; }
    inline bool EbsEncryptionKeyArnHasBeenSet() const { return m_ebsEncryptionKeyArnHasBeenSet; }
    template<typename EbsEncryptionKeyArnT = Aws::String>
    void SetEbsEncryptionKeyArn(EbsEncryptionKeyArnT&& value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn = std::forward<EbsEncryptionKeyArnT>(value); }
    template<typename EbsEncryptionKeyArnT = Aws::String>
    UpdateReplicationConfigurationRequest& WithEbsEncryptionKeyArn(EbsEncryptionKeyArnT&& value) { SetEbsEncryptionKeyArn(std::forward<EbsEncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration name request.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateReplicationConfigurationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration replicated disks request.</p>
     */
    inline const Aws::Vector<ReplicationConfigurationReplicatedDisk>& GetReplicatedDisks() const { return m_replicatedDisks; }
    inline bool ReplicatedDisksHasBeenSet() const { return m_replicatedDisksHasBeenSet; }
    template<typename ReplicatedDisksT = Aws::Vector<ReplicationConfigurationReplicatedDisk>>
    void SetReplicatedDisks(ReplicatedDisksT&& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks = std::forward<ReplicatedDisksT>(value); }
    template<typename ReplicatedDisksT = Aws::Vector<ReplicationConfigurationReplicatedDisk>>
    UpdateReplicationConfigurationRequest& WithReplicatedDisks(ReplicatedDisksT&& value) { SetReplicatedDisks(std::forward<ReplicatedDisksT>(value)); return *this;}
    template<typename ReplicatedDisksT = ReplicationConfigurationReplicatedDisk>
    UpdateReplicationConfigurationRequest& AddReplicatedDisks(ReplicatedDisksT&& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks.emplace_back(std::forward<ReplicatedDisksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Update replication configuration Replication Server instance type
     * request.</p>
     */
    inline const Aws::String& GetReplicationServerInstanceType() const { return m_replicationServerInstanceType; }
    inline bool ReplicationServerInstanceTypeHasBeenSet() const { return m_replicationServerInstanceTypeHasBeenSet; }
    template<typename ReplicationServerInstanceTypeT = Aws::String>
    void SetReplicationServerInstanceType(ReplicationServerInstanceTypeT&& value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType = std::forward<ReplicationServerInstanceTypeT>(value); }
    template<typename ReplicationServerInstanceTypeT = Aws::String>
    UpdateReplicationConfigurationRequest& WithReplicationServerInstanceType(ReplicationServerInstanceTypeT&& value) { SetReplicationServerInstanceType(std::forward<ReplicationServerInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration Replication Server Security Groups IDs
     * request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationServersSecurityGroupsIDs() const { return m_replicationServersSecurityGroupsIDs; }
    inline bool ReplicationServersSecurityGroupsIDsHasBeenSet() const { return m_replicationServersSecurityGroupsIDsHasBeenSet; }
    template<typename ReplicationServersSecurityGroupsIDsT = Aws::Vector<Aws::String>>
    void SetReplicationServersSecurityGroupsIDs(ReplicationServersSecurityGroupsIDsT&& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs = std::forward<ReplicationServersSecurityGroupsIDsT>(value); }
    template<typename ReplicationServersSecurityGroupsIDsT = Aws::Vector<Aws::String>>
    UpdateReplicationConfigurationRequest& WithReplicationServersSecurityGroupsIDs(ReplicationServersSecurityGroupsIDsT&& value) { SetReplicationServersSecurityGroupsIDs(std::forward<ReplicationServersSecurityGroupsIDsT>(value)); return *this;}
    template<typename ReplicationServersSecurityGroupsIDsT = Aws::String>
    UpdateReplicationConfigurationRequest& AddReplicationServersSecurityGroupsIDs(ReplicationServersSecurityGroupsIDsT&& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.emplace_back(std::forward<ReplicationServersSecurityGroupsIDsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Update replication configuration Source Server ID request.</p>
     */
    inline const Aws::String& GetSourceServerID() const { return m_sourceServerID; }
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
    template<typename SourceServerIDT = Aws::String>
    void SetSourceServerID(SourceServerIDT&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::forward<SourceServerIDT>(value); }
    template<typename SourceServerIDT = Aws::String>
    UpdateReplicationConfigurationRequest& WithSourceServerID(SourceServerIDT&& value) { SetSourceServerID(std::forward<SourceServerIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration Staging Area subnet request.</p>
     */
    inline const Aws::String& GetStagingAreaSubnetId() const { return m_stagingAreaSubnetId; }
    inline bool StagingAreaSubnetIdHasBeenSet() const { return m_stagingAreaSubnetIdHasBeenSet; }
    template<typename StagingAreaSubnetIdT = Aws::String>
    void SetStagingAreaSubnetId(StagingAreaSubnetIdT&& value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId = std::forward<StagingAreaSubnetIdT>(value); }
    template<typename StagingAreaSubnetIdT = Aws::String>
    UpdateReplicationConfigurationRequest& WithStagingAreaSubnetId(StagingAreaSubnetIdT&& value) { SetStagingAreaSubnetId(std::forward<StagingAreaSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration Staging Area Tags request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStagingAreaTags() const { return m_stagingAreaTags; }
    inline bool StagingAreaTagsHasBeenSet() const { return m_stagingAreaTagsHasBeenSet; }
    template<typename StagingAreaTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetStagingAreaTags(StagingAreaTagsT&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags = std::forward<StagingAreaTagsT>(value); }
    template<typename StagingAreaTagsT = Aws::Map<Aws::String, Aws::String>>
    UpdateReplicationConfigurationRequest& WithStagingAreaTags(StagingAreaTagsT&& value) { SetStagingAreaTags(std::forward<StagingAreaTagsT>(value)); return *this;}
    template<typename StagingAreaTagsKeyT = Aws::String, typename StagingAreaTagsValueT = Aws::String>
    UpdateReplicationConfigurationRequest& AddStagingAreaTags(StagingAreaTagsKeyT&& key, StagingAreaTagsValueT&& value) {
      m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::forward<StagingAreaTagsKeyT>(key), std::forward<StagingAreaTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Update replication configuration use dedicated Replication Server
     * request.</p>
     */
    inline bool GetUseDedicatedReplicationServer() const { return m_useDedicatedReplicationServer; }
    inline bool UseDedicatedReplicationServerHasBeenSet() const { return m_useDedicatedReplicationServerHasBeenSet; }
    inline void SetUseDedicatedReplicationServer(bool value) { m_useDedicatedReplicationServerHasBeenSet = true; m_useDedicatedReplicationServer = value; }
    inline UpdateReplicationConfigurationRequest& WithUseDedicatedReplicationServer(bool value) { SetUseDedicatedReplicationServer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration use Fips Endpoint.</p>
     */
    inline bool GetUseFipsEndpoint() const { return m_useFipsEndpoint; }
    inline bool UseFipsEndpointHasBeenSet() const { return m_useFipsEndpointHasBeenSet; }
    inline void SetUseFipsEndpoint(bool value) { m_useFipsEndpointHasBeenSet = true; m_useFipsEndpoint = value; }
    inline UpdateReplicationConfigurationRequest& WithUseFipsEndpoint(bool value) { SetUseFipsEndpoint(value); return *this;}
    ///@}
  private:

    Aws::String m_accountID;
    bool m_accountIDHasBeenSet = false;

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
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
