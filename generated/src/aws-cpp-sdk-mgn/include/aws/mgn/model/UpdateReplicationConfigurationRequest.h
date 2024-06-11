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
    AWS_MGN_API UpdateReplicationConfigurationRequest();

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
    inline const Aws::String& GetAccountID() const{ return m_accountID; }
    inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }
    inline void SetAccountID(const Aws::String& value) { m_accountIDHasBeenSet = true; m_accountID = value; }
    inline void SetAccountID(Aws::String&& value) { m_accountIDHasBeenSet = true; m_accountID = std::move(value); }
    inline void SetAccountID(const char* value) { m_accountIDHasBeenSet = true; m_accountID.assign(value); }
    inline UpdateReplicationConfigurationRequest& WithAccountID(const Aws::String& value) { SetAccountID(value); return *this;}
    inline UpdateReplicationConfigurationRequest& WithAccountID(Aws::String&& value) { SetAccountID(std::move(value)); return *this;}
    inline UpdateReplicationConfigurationRequest& WithAccountID(const char* value) { SetAccountID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration associate default Application Migration
     * Service Security group request.</p>
     */
    inline bool GetAssociateDefaultSecurityGroup() const{ return m_associateDefaultSecurityGroup; }
    inline bool AssociateDefaultSecurityGroupHasBeenSet() const { return m_associateDefaultSecurityGroupHasBeenSet; }
    inline void SetAssociateDefaultSecurityGroup(bool value) { m_associateDefaultSecurityGroupHasBeenSet = true; m_associateDefaultSecurityGroup = value; }
    inline UpdateReplicationConfigurationRequest& WithAssociateDefaultSecurityGroup(bool value) { SetAssociateDefaultSecurityGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration bandwidth throttling request.</p>
     */
    inline long long GetBandwidthThrottling() const{ return m_bandwidthThrottling; }
    inline bool BandwidthThrottlingHasBeenSet() const { return m_bandwidthThrottlingHasBeenSet; }
    inline void SetBandwidthThrottling(long long value) { m_bandwidthThrottlingHasBeenSet = true; m_bandwidthThrottling = value; }
    inline UpdateReplicationConfigurationRequest& WithBandwidthThrottling(long long value) { SetBandwidthThrottling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration create Public IP request.</p>
     */
    inline bool GetCreatePublicIP() const{ return m_createPublicIP; }
    inline bool CreatePublicIPHasBeenSet() const { return m_createPublicIPHasBeenSet; }
    inline void SetCreatePublicIP(bool value) { m_createPublicIPHasBeenSet = true; m_createPublicIP = value; }
    inline UpdateReplicationConfigurationRequest& WithCreatePublicIP(bool value) { SetCreatePublicIP(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration data plane routing request.</p>
     */
    inline const ReplicationConfigurationDataPlaneRouting& GetDataPlaneRouting() const{ return m_dataPlaneRouting; }
    inline bool DataPlaneRoutingHasBeenSet() const { return m_dataPlaneRoutingHasBeenSet; }
    inline void SetDataPlaneRouting(const ReplicationConfigurationDataPlaneRouting& value) { m_dataPlaneRoutingHasBeenSet = true; m_dataPlaneRouting = value; }
    inline void SetDataPlaneRouting(ReplicationConfigurationDataPlaneRouting&& value) { m_dataPlaneRoutingHasBeenSet = true; m_dataPlaneRouting = std::move(value); }
    inline UpdateReplicationConfigurationRequest& WithDataPlaneRouting(const ReplicationConfigurationDataPlaneRouting& value) { SetDataPlaneRouting(value); return *this;}
    inline UpdateReplicationConfigurationRequest& WithDataPlaneRouting(ReplicationConfigurationDataPlaneRouting&& value) { SetDataPlaneRouting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration use default large Staging Disk type
     * request.</p>
     */
    inline const ReplicationConfigurationDefaultLargeStagingDiskType& GetDefaultLargeStagingDiskType() const{ return m_defaultLargeStagingDiskType; }
    inline bool DefaultLargeStagingDiskTypeHasBeenSet() const { return m_defaultLargeStagingDiskTypeHasBeenSet; }
    inline void SetDefaultLargeStagingDiskType(const ReplicationConfigurationDefaultLargeStagingDiskType& value) { m_defaultLargeStagingDiskTypeHasBeenSet = true; m_defaultLargeStagingDiskType = value; }
    inline void SetDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType&& value) { m_defaultLargeStagingDiskTypeHasBeenSet = true; m_defaultLargeStagingDiskType = std::move(value); }
    inline UpdateReplicationConfigurationRequest& WithDefaultLargeStagingDiskType(const ReplicationConfigurationDefaultLargeStagingDiskType& value) { SetDefaultLargeStagingDiskType(value); return *this;}
    inline UpdateReplicationConfigurationRequest& WithDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType&& value) { SetDefaultLargeStagingDiskType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration EBS encryption request.</p>
     */
    inline const ReplicationConfigurationEbsEncryption& GetEbsEncryption() const{ return m_ebsEncryption; }
    inline bool EbsEncryptionHasBeenSet() const { return m_ebsEncryptionHasBeenSet; }
    inline void SetEbsEncryption(const ReplicationConfigurationEbsEncryption& value) { m_ebsEncryptionHasBeenSet = true; m_ebsEncryption = value; }
    inline void SetEbsEncryption(ReplicationConfigurationEbsEncryption&& value) { m_ebsEncryptionHasBeenSet = true; m_ebsEncryption = std::move(value); }
    inline UpdateReplicationConfigurationRequest& WithEbsEncryption(const ReplicationConfigurationEbsEncryption& value) { SetEbsEncryption(value); return *this;}
    inline UpdateReplicationConfigurationRequest& WithEbsEncryption(ReplicationConfigurationEbsEncryption&& value) { SetEbsEncryption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration EBS encryption key ARN request.</p>
     */
    inline const Aws::String& GetEbsEncryptionKeyArn() const{ return m_ebsEncryptionKeyArn; }
    inline bool EbsEncryptionKeyArnHasBeenSet() const { return m_ebsEncryptionKeyArnHasBeenSet; }
    inline void SetEbsEncryptionKeyArn(const Aws::String& value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn = value; }
    inline void SetEbsEncryptionKeyArn(Aws::String&& value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn = std::move(value); }
    inline void SetEbsEncryptionKeyArn(const char* value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn.assign(value); }
    inline UpdateReplicationConfigurationRequest& WithEbsEncryptionKeyArn(const Aws::String& value) { SetEbsEncryptionKeyArn(value); return *this;}
    inline UpdateReplicationConfigurationRequest& WithEbsEncryptionKeyArn(Aws::String&& value) { SetEbsEncryptionKeyArn(std::move(value)); return *this;}
    inline UpdateReplicationConfigurationRequest& WithEbsEncryptionKeyArn(const char* value) { SetEbsEncryptionKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration name request.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateReplicationConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateReplicationConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateReplicationConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration replicated disks request.</p>
     */
    inline const Aws::Vector<ReplicationConfigurationReplicatedDisk>& GetReplicatedDisks() const{ return m_replicatedDisks; }
    inline bool ReplicatedDisksHasBeenSet() const { return m_replicatedDisksHasBeenSet; }
    inline void SetReplicatedDisks(const Aws::Vector<ReplicationConfigurationReplicatedDisk>& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks = value; }
    inline void SetReplicatedDisks(Aws::Vector<ReplicationConfigurationReplicatedDisk>&& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks = std::move(value); }
    inline UpdateReplicationConfigurationRequest& WithReplicatedDisks(const Aws::Vector<ReplicationConfigurationReplicatedDisk>& value) { SetReplicatedDisks(value); return *this;}
    inline UpdateReplicationConfigurationRequest& WithReplicatedDisks(Aws::Vector<ReplicationConfigurationReplicatedDisk>&& value) { SetReplicatedDisks(std::move(value)); return *this;}
    inline UpdateReplicationConfigurationRequest& AddReplicatedDisks(const ReplicationConfigurationReplicatedDisk& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks.push_back(value); return *this; }
    inline UpdateReplicationConfigurationRequest& AddReplicatedDisks(ReplicationConfigurationReplicatedDisk&& value) { m_replicatedDisksHasBeenSet = true; m_replicatedDisks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Update replication configuration Replication Server instance type
     * request.</p>
     */
    inline const Aws::String& GetReplicationServerInstanceType() const{ return m_replicationServerInstanceType; }
    inline bool ReplicationServerInstanceTypeHasBeenSet() const { return m_replicationServerInstanceTypeHasBeenSet; }
    inline void SetReplicationServerInstanceType(const Aws::String& value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType = value; }
    inline void SetReplicationServerInstanceType(Aws::String&& value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType = std::move(value); }
    inline void SetReplicationServerInstanceType(const char* value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType.assign(value); }
    inline UpdateReplicationConfigurationRequest& WithReplicationServerInstanceType(const Aws::String& value) { SetReplicationServerInstanceType(value); return *this;}
    inline UpdateReplicationConfigurationRequest& WithReplicationServerInstanceType(Aws::String&& value) { SetReplicationServerInstanceType(std::move(value)); return *this;}
    inline UpdateReplicationConfigurationRequest& WithReplicationServerInstanceType(const char* value) { SetReplicationServerInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration Replication Server Security Groups IDs
     * request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationServersSecurityGroupsIDs() const{ return m_replicationServersSecurityGroupsIDs; }
    inline bool ReplicationServersSecurityGroupsIDsHasBeenSet() const { return m_replicationServersSecurityGroupsIDsHasBeenSet; }
    inline void SetReplicationServersSecurityGroupsIDs(const Aws::Vector<Aws::String>& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs = value; }
    inline void SetReplicationServersSecurityGroupsIDs(Aws::Vector<Aws::String>&& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs = std::move(value); }
    inline UpdateReplicationConfigurationRequest& WithReplicationServersSecurityGroupsIDs(const Aws::Vector<Aws::String>& value) { SetReplicationServersSecurityGroupsIDs(value); return *this;}
    inline UpdateReplicationConfigurationRequest& WithReplicationServersSecurityGroupsIDs(Aws::Vector<Aws::String>&& value) { SetReplicationServersSecurityGroupsIDs(std::move(value)); return *this;}
    inline UpdateReplicationConfigurationRequest& AddReplicationServersSecurityGroupsIDs(const Aws::String& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.push_back(value); return *this; }
    inline UpdateReplicationConfigurationRequest& AddReplicationServersSecurityGroupsIDs(Aws::String&& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.push_back(std::move(value)); return *this; }
    inline UpdateReplicationConfigurationRequest& AddReplicationServersSecurityGroupsIDs(const char* value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Update replication configuration Source Server ID request.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }
    inline UpdateReplicationConfigurationRequest& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}
    inline UpdateReplicationConfigurationRequest& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}
    inline UpdateReplicationConfigurationRequest& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration Staging Area subnet request.</p>
     */
    inline const Aws::String& GetStagingAreaSubnetId() const{ return m_stagingAreaSubnetId; }
    inline bool StagingAreaSubnetIdHasBeenSet() const { return m_stagingAreaSubnetIdHasBeenSet; }
    inline void SetStagingAreaSubnetId(const Aws::String& value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId = value; }
    inline void SetStagingAreaSubnetId(Aws::String&& value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId = std::move(value); }
    inline void SetStagingAreaSubnetId(const char* value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId.assign(value); }
    inline UpdateReplicationConfigurationRequest& WithStagingAreaSubnetId(const Aws::String& value) { SetStagingAreaSubnetId(value); return *this;}
    inline UpdateReplicationConfigurationRequest& WithStagingAreaSubnetId(Aws::String&& value) { SetStagingAreaSubnetId(std::move(value)); return *this;}
    inline UpdateReplicationConfigurationRequest& WithStagingAreaSubnetId(const char* value) { SetStagingAreaSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration Staging Area Tags request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStagingAreaTags() const{ return m_stagingAreaTags; }
    inline bool StagingAreaTagsHasBeenSet() const { return m_stagingAreaTagsHasBeenSet; }
    inline void SetStagingAreaTags(const Aws::Map<Aws::String, Aws::String>& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags = value; }
    inline void SetStagingAreaTags(Aws::Map<Aws::String, Aws::String>&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags = std::move(value); }
    inline UpdateReplicationConfigurationRequest& WithStagingAreaTags(const Aws::Map<Aws::String, Aws::String>& value) { SetStagingAreaTags(value); return *this;}
    inline UpdateReplicationConfigurationRequest& WithStagingAreaTags(Aws::Map<Aws::String, Aws::String>&& value) { SetStagingAreaTags(std::move(value)); return *this;}
    inline UpdateReplicationConfigurationRequest& AddStagingAreaTags(const Aws::String& key, const Aws::String& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, value); return *this; }
    inline UpdateReplicationConfigurationRequest& AddStagingAreaTags(Aws::String&& key, const Aws::String& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::move(key), value); return *this; }
    inline UpdateReplicationConfigurationRequest& AddStagingAreaTags(const Aws::String& key, Aws::String&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, std::move(value)); return *this; }
    inline UpdateReplicationConfigurationRequest& AddStagingAreaTags(Aws::String&& key, Aws::String&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateReplicationConfigurationRequest& AddStagingAreaTags(const char* key, Aws::String&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, std::move(value)); return *this; }
    inline UpdateReplicationConfigurationRequest& AddStagingAreaTags(Aws::String&& key, const char* value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::move(key), value); return *this; }
    inline UpdateReplicationConfigurationRequest& AddStagingAreaTags(const char* key, const char* value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Update replication configuration use dedicated Replication Server
     * request.</p>
     */
    inline bool GetUseDedicatedReplicationServer() const{ return m_useDedicatedReplicationServer; }
    inline bool UseDedicatedReplicationServerHasBeenSet() const { return m_useDedicatedReplicationServerHasBeenSet; }
    inline void SetUseDedicatedReplicationServer(bool value) { m_useDedicatedReplicationServerHasBeenSet = true; m_useDedicatedReplicationServer = value; }
    inline UpdateReplicationConfigurationRequest& WithUseDedicatedReplicationServer(bool value) { SetUseDedicatedReplicationServer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update replication configuration use Fips Endpoint.</p>
     */
    inline bool GetUseFipsEndpoint() const{ return m_useFipsEndpoint; }
    inline bool UseFipsEndpointHasBeenSet() const { return m_useFipsEndpointHasBeenSet; }
    inline void SetUseFipsEndpoint(bool value) { m_useFipsEndpointHasBeenSet = true; m_useFipsEndpoint = value; }
    inline UpdateReplicationConfigurationRequest& WithUseFipsEndpoint(bool value) { SetUseFipsEndpoint(value); return *this;}
    ///@}
  private:

    Aws::String m_accountID;
    bool m_accountIDHasBeenSet = false;

    bool m_associateDefaultSecurityGroup;
    bool m_associateDefaultSecurityGroupHasBeenSet = false;

    long long m_bandwidthThrottling;
    bool m_bandwidthThrottlingHasBeenSet = false;

    bool m_createPublicIP;
    bool m_createPublicIPHasBeenSet = false;

    ReplicationConfigurationDataPlaneRouting m_dataPlaneRouting;
    bool m_dataPlaneRoutingHasBeenSet = false;

    ReplicationConfigurationDefaultLargeStagingDiskType m_defaultLargeStagingDiskType;
    bool m_defaultLargeStagingDiskTypeHasBeenSet = false;

    ReplicationConfigurationEbsEncryption m_ebsEncryption;
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

    bool m_useDedicatedReplicationServer;
    bool m_useDedicatedReplicationServerHasBeenSet = false;

    bool m_useFipsEndpoint;
    bool m_useFipsEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
