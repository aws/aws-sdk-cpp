/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/model/ReplicationConfigurationDataPlaneRouting.h>
#include <aws/mgn/model/ReplicationConfigurationDefaultLargeStagingDiskType.h>
#include <aws/mgn/model/ReplicationConfigurationEbsEncryption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class CreateReplicationConfigurationTemplateRequest : public MgnRequest
  {
  public:
    AWS_MGN_API CreateReplicationConfigurationTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReplicationConfigurationTemplate"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline bool GetAssociateDefaultSecurityGroup() const { return m_associateDefaultSecurityGroup; }
    inline bool AssociateDefaultSecurityGroupHasBeenSet() const { return m_associateDefaultSecurityGroupHasBeenSet; }
    inline void SetAssociateDefaultSecurityGroup(bool value) { m_associateDefaultSecurityGroupHasBeenSet = true; m_associateDefaultSecurityGroup = value; }
    inline CreateReplicationConfigurationTemplateRequest& WithAssociateDefaultSecurityGroup(bool value) { SetAssociateDefaultSecurityGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to configure bandwidth throttling during Replication Settings
     * template creation.</p>
     */
    inline long long GetBandwidthThrottling() const { return m_bandwidthThrottling; }
    inline bool BandwidthThrottlingHasBeenSet() const { return m_bandwidthThrottlingHasBeenSet; }
    inline void SetBandwidthThrottling(long long value) { m_bandwidthThrottlingHasBeenSet = true; m_bandwidthThrottling = value; }
    inline CreateReplicationConfigurationTemplateRequest& WithBandwidthThrottling(long long value) { SetBandwidthThrottling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to create Public IP during Replication Settings template
     * creation.</p>
     */
    inline bool GetCreatePublicIP() const { return m_createPublicIP; }
    inline bool CreatePublicIPHasBeenSet() const { return m_createPublicIPHasBeenSet; }
    inline void SetCreatePublicIP(bool value) { m_createPublicIPHasBeenSet = true; m_createPublicIP = value; }
    inline CreateReplicationConfigurationTemplateRequest& WithCreatePublicIP(bool value) { SetCreatePublicIP(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to configure data plane routing during Replication Settings template
     * creation.</p>
     */
    inline ReplicationConfigurationDataPlaneRouting GetDataPlaneRouting() const { return m_dataPlaneRouting; }
    inline bool DataPlaneRoutingHasBeenSet() const { return m_dataPlaneRoutingHasBeenSet; }
    inline void SetDataPlaneRouting(ReplicationConfigurationDataPlaneRouting value) { m_dataPlaneRoutingHasBeenSet = true; m_dataPlaneRouting = value; }
    inline CreateReplicationConfigurationTemplateRequest& WithDataPlaneRouting(ReplicationConfigurationDataPlaneRouting value) { SetDataPlaneRouting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to configure the default large staging disk EBS volume type during
     * Replication Settings template creation.</p>
     */
    inline ReplicationConfigurationDefaultLargeStagingDiskType GetDefaultLargeStagingDiskType() const { return m_defaultLargeStagingDiskType; }
    inline bool DefaultLargeStagingDiskTypeHasBeenSet() const { return m_defaultLargeStagingDiskTypeHasBeenSet; }
    inline void SetDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType value) { m_defaultLargeStagingDiskTypeHasBeenSet = true; m_defaultLargeStagingDiskType = value; }
    inline CreateReplicationConfigurationTemplateRequest& WithDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType value) { SetDefaultLargeStagingDiskType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to configure EBS encryption during Replication Settings template
     * creation.</p>
     */
    inline ReplicationConfigurationEbsEncryption GetEbsEncryption() const { return m_ebsEncryption; }
    inline bool EbsEncryptionHasBeenSet() const { return m_ebsEncryptionHasBeenSet; }
    inline void SetEbsEncryption(ReplicationConfigurationEbsEncryption value) { m_ebsEncryptionHasBeenSet = true; m_ebsEncryption = value; }
    inline CreateReplicationConfigurationTemplateRequest& WithEbsEncryption(ReplicationConfigurationEbsEncryption value) { SetEbsEncryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to configure an EBS encryption key during Replication Settings
     * template creation.</p>
     */
    inline const Aws::String& GetEbsEncryptionKeyArn() const { return m_ebsEncryptionKeyArn; }
    inline bool EbsEncryptionKeyArnHasBeenSet() const { return m_ebsEncryptionKeyArnHasBeenSet; }
    template<typename EbsEncryptionKeyArnT = Aws::String>
    void SetEbsEncryptionKeyArn(EbsEncryptionKeyArnT&& value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn = std::forward<EbsEncryptionKeyArnT>(value); }
    template<typename EbsEncryptionKeyArnT = Aws::String>
    CreateReplicationConfigurationTemplateRequest& WithEbsEncryptionKeyArn(EbsEncryptionKeyArnT&& value) { SetEbsEncryptionKeyArn(std::forward<EbsEncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to configure the Replication Server instance type during Replication
     * Settings template creation.</p>
     */
    inline const Aws::String& GetReplicationServerInstanceType() const { return m_replicationServerInstanceType; }
    inline bool ReplicationServerInstanceTypeHasBeenSet() const { return m_replicationServerInstanceTypeHasBeenSet; }
    template<typename ReplicationServerInstanceTypeT = Aws::String>
    void SetReplicationServerInstanceType(ReplicationServerInstanceTypeT&& value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType = std::forward<ReplicationServerInstanceTypeT>(value); }
    template<typename ReplicationServerInstanceTypeT = Aws::String>
    CreateReplicationConfigurationTemplateRequest& WithReplicationServerInstanceType(ReplicationServerInstanceTypeT&& value) { SetReplicationServerInstanceType(std::forward<ReplicationServerInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to configure the Replication Server Security group ID during
     * Replication Settings template creation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationServersSecurityGroupsIDs() const { return m_replicationServersSecurityGroupsIDs; }
    inline bool ReplicationServersSecurityGroupsIDsHasBeenSet() const { return m_replicationServersSecurityGroupsIDsHasBeenSet; }
    template<typename ReplicationServersSecurityGroupsIDsT = Aws::Vector<Aws::String>>
    void SetReplicationServersSecurityGroupsIDs(ReplicationServersSecurityGroupsIDsT&& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs = std::forward<ReplicationServersSecurityGroupsIDsT>(value); }
    template<typename ReplicationServersSecurityGroupsIDsT = Aws::Vector<Aws::String>>
    CreateReplicationConfigurationTemplateRequest& WithReplicationServersSecurityGroupsIDs(ReplicationServersSecurityGroupsIDsT&& value) { SetReplicationServersSecurityGroupsIDs(std::forward<ReplicationServersSecurityGroupsIDsT>(value)); return *this;}
    template<typename ReplicationServersSecurityGroupsIDsT = Aws::String>
    CreateReplicationConfigurationTemplateRequest& AddReplicationServersSecurityGroupsIDs(ReplicationServersSecurityGroupsIDsT&& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.emplace_back(std::forward<ReplicationServersSecurityGroupsIDsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Request to configure the Staging Area subnet ID during Replication Settings
     * template creation.</p>
     */
    inline const Aws::String& GetStagingAreaSubnetId() const { return m_stagingAreaSubnetId; }
    inline bool StagingAreaSubnetIdHasBeenSet() const { return m_stagingAreaSubnetIdHasBeenSet; }
    template<typename StagingAreaSubnetIdT = Aws::String>
    void SetStagingAreaSubnetId(StagingAreaSubnetIdT&& value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId = std::forward<StagingAreaSubnetIdT>(value); }
    template<typename StagingAreaSubnetIdT = Aws::String>
    CreateReplicationConfigurationTemplateRequest& WithStagingAreaSubnetId(StagingAreaSubnetIdT&& value) { SetStagingAreaSubnetId(std::forward<StagingAreaSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to configure Staging Area tags during Replication Settings template
     * creation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStagingAreaTags() const { return m_stagingAreaTags; }
    inline bool StagingAreaTagsHasBeenSet() const { return m_stagingAreaTagsHasBeenSet; }
    template<typename StagingAreaTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetStagingAreaTags(StagingAreaTagsT&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags = std::forward<StagingAreaTagsT>(value); }
    template<typename StagingAreaTagsT = Aws::Map<Aws::String, Aws::String>>
    CreateReplicationConfigurationTemplateRequest& WithStagingAreaTags(StagingAreaTagsT&& value) { SetStagingAreaTags(std::forward<StagingAreaTagsT>(value)); return *this;}
    template<typename StagingAreaTagsKeyT = Aws::String, typename StagingAreaTagsValueT = Aws::String>
    CreateReplicationConfigurationTemplateRequest& AddStagingAreaTags(StagingAreaTagsKeyT&& key, StagingAreaTagsValueT&& value) {
      m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::forward<StagingAreaTagsKeyT>(key), std::forward<StagingAreaTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Request to configure tags during Replication Settings template creation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateReplicationConfigurationTemplateRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateReplicationConfigurationTemplateRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Request to use Dedicated Replication Servers during Replication Settings
     * template creation.</p>
     */
    inline bool GetUseDedicatedReplicationServer() const { return m_useDedicatedReplicationServer; }
    inline bool UseDedicatedReplicationServerHasBeenSet() const { return m_useDedicatedReplicationServerHasBeenSet; }
    inline void SetUseDedicatedReplicationServer(bool value) { m_useDedicatedReplicationServerHasBeenSet = true; m_useDedicatedReplicationServer = value; }
    inline CreateReplicationConfigurationTemplateRequest& WithUseDedicatedReplicationServer(bool value) { SetUseDedicatedReplicationServer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request to use Fips Endpoint during Replication Settings template
     * creation.</p>
     */
    inline bool GetUseFipsEndpoint() const { return m_useFipsEndpoint; }
    inline bool UseFipsEndpointHasBeenSet() const { return m_useFipsEndpointHasBeenSet; }
    inline void SetUseFipsEndpoint(bool value) { m_useFipsEndpointHasBeenSet = true; m_useFipsEndpoint = value; }
    inline CreateReplicationConfigurationTemplateRequest& WithUseFipsEndpoint(bool value) { SetUseFipsEndpoint(value); return *this;}
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

    Aws::String m_replicationServerInstanceType;
    bool m_replicationServerInstanceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationServersSecurityGroupsIDs;
    bool m_replicationServersSecurityGroupsIDsHasBeenSet = false;

    Aws::String m_stagingAreaSubnetId;
    bool m_stagingAreaSubnetIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_stagingAreaTags;
    bool m_stagingAreaTagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_useDedicatedReplicationServer{false};
    bool m_useDedicatedReplicationServerHasBeenSet = false;

    bool m_useFipsEndpoint{false};
    bool m_useFipsEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
