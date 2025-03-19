/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/ReplicationConfigurationDataPlaneRouting.h>
#include <aws/mgn/model/ReplicationConfigurationDefaultLargeStagingDiskType.h>
#include <aws/mgn/model/ReplicationConfigurationEbsEncryption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateReplicationConfigurationTemplateResult
  {
  public:
    AWS_MGN_API CreateReplicationConfigurationTemplateResult() = default;
    AWS_MGN_API CreateReplicationConfigurationTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API CreateReplicationConfigurationTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Replication Configuration template ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateReplicationConfigurationTemplateResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template associate default Application Migration
     * Service Security group.</p>
     */
    inline bool GetAssociateDefaultSecurityGroup() const { return m_associateDefaultSecurityGroup; }
    inline void SetAssociateDefaultSecurityGroup(bool value) { m_associateDefaultSecurityGroupHasBeenSet = true; m_associateDefaultSecurityGroup = value; }
    inline CreateReplicationConfigurationTemplateResult& WithAssociateDefaultSecurityGroup(bool value) { SetAssociateDefaultSecurityGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template bandwidth throttling.</p>
     */
    inline long long GetBandwidthThrottling() const { return m_bandwidthThrottling; }
    inline void SetBandwidthThrottling(long long value) { m_bandwidthThrottlingHasBeenSet = true; m_bandwidthThrottling = value; }
    inline CreateReplicationConfigurationTemplateResult& WithBandwidthThrottling(long long value) { SetBandwidthThrottling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template create Public IP.</p>
     */
    inline bool GetCreatePublicIP() const { return m_createPublicIP; }
    inline void SetCreatePublicIP(bool value) { m_createPublicIPHasBeenSet = true; m_createPublicIP = value; }
    inline CreateReplicationConfigurationTemplateResult& WithCreatePublicIP(bool value) { SetCreatePublicIP(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template data plane routing.</p>
     */
    inline ReplicationConfigurationDataPlaneRouting GetDataPlaneRouting() const { return m_dataPlaneRouting; }
    inline void SetDataPlaneRouting(ReplicationConfigurationDataPlaneRouting value) { m_dataPlaneRoutingHasBeenSet = true; m_dataPlaneRouting = value; }
    inline CreateReplicationConfigurationTemplateResult& WithDataPlaneRouting(ReplicationConfigurationDataPlaneRouting value) { SetDataPlaneRouting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template use default large Staging Disk type.</p>
     */
    inline ReplicationConfigurationDefaultLargeStagingDiskType GetDefaultLargeStagingDiskType() const { return m_defaultLargeStagingDiskType; }
    inline void SetDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType value) { m_defaultLargeStagingDiskTypeHasBeenSet = true; m_defaultLargeStagingDiskType = value; }
    inline CreateReplicationConfigurationTemplateResult& WithDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType value) { SetDefaultLargeStagingDiskType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template EBS encryption.</p>
     */
    inline ReplicationConfigurationEbsEncryption GetEbsEncryption() const { return m_ebsEncryption; }
    inline void SetEbsEncryption(ReplicationConfigurationEbsEncryption value) { m_ebsEncryptionHasBeenSet = true; m_ebsEncryption = value; }
    inline CreateReplicationConfigurationTemplateResult& WithEbsEncryption(ReplicationConfigurationEbsEncryption value) { SetEbsEncryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template EBS encryption key ARN.</p>
     */
    inline const Aws::String& GetEbsEncryptionKeyArn() const { return m_ebsEncryptionKeyArn; }
    template<typename EbsEncryptionKeyArnT = Aws::String>
    void SetEbsEncryptionKeyArn(EbsEncryptionKeyArnT&& value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn = std::forward<EbsEncryptionKeyArnT>(value); }
    template<typename EbsEncryptionKeyArnT = Aws::String>
    CreateReplicationConfigurationTemplateResult& WithEbsEncryptionKeyArn(EbsEncryptionKeyArnT&& value) { SetEbsEncryptionKeyArn(std::forward<EbsEncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template ID.</p>
     */
    inline const Aws::String& GetReplicationConfigurationTemplateID() const { return m_replicationConfigurationTemplateID; }
    template<typename ReplicationConfigurationTemplateIDT = Aws::String>
    void SetReplicationConfigurationTemplateID(ReplicationConfigurationTemplateIDT&& value) { m_replicationConfigurationTemplateIDHasBeenSet = true; m_replicationConfigurationTemplateID = std::forward<ReplicationConfigurationTemplateIDT>(value); }
    template<typename ReplicationConfigurationTemplateIDT = Aws::String>
    CreateReplicationConfigurationTemplateResult& WithReplicationConfigurationTemplateID(ReplicationConfigurationTemplateIDT&& value) { SetReplicationConfigurationTemplateID(std::forward<ReplicationConfigurationTemplateIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template server instance type.</p>
     */
    inline const Aws::String& GetReplicationServerInstanceType() const { return m_replicationServerInstanceType; }
    template<typename ReplicationServerInstanceTypeT = Aws::String>
    void SetReplicationServerInstanceType(ReplicationServerInstanceTypeT&& value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType = std::forward<ReplicationServerInstanceTypeT>(value); }
    template<typename ReplicationServerInstanceTypeT = Aws::String>
    CreateReplicationConfigurationTemplateResult& WithReplicationServerInstanceType(ReplicationServerInstanceTypeT&& value) { SetReplicationServerInstanceType(std::forward<ReplicationServerInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template server Security Groups IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationServersSecurityGroupsIDs() const { return m_replicationServersSecurityGroupsIDs; }
    template<typename ReplicationServersSecurityGroupsIDsT = Aws::Vector<Aws::String>>
    void SetReplicationServersSecurityGroupsIDs(ReplicationServersSecurityGroupsIDsT&& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs = std::forward<ReplicationServersSecurityGroupsIDsT>(value); }
    template<typename ReplicationServersSecurityGroupsIDsT = Aws::Vector<Aws::String>>
    CreateReplicationConfigurationTemplateResult& WithReplicationServersSecurityGroupsIDs(ReplicationServersSecurityGroupsIDsT&& value) { SetReplicationServersSecurityGroupsIDs(std::forward<ReplicationServersSecurityGroupsIDsT>(value)); return *this;}
    template<typename ReplicationServersSecurityGroupsIDsT = Aws::String>
    CreateReplicationConfigurationTemplateResult& AddReplicationServersSecurityGroupsIDs(ReplicationServersSecurityGroupsIDsT&& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.emplace_back(std::forward<ReplicationServersSecurityGroupsIDsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template Staging Area subnet ID.</p>
     */
    inline const Aws::String& GetStagingAreaSubnetId() const { return m_stagingAreaSubnetId; }
    template<typename StagingAreaSubnetIdT = Aws::String>
    void SetStagingAreaSubnetId(StagingAreaSubnetIdT&& value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId = std::forward<StagingAreaSubnetIdT>(value); }
    template<typename StagingAreaSubnetIdT = Aws::String>
    CreateReplicationConfigurationTemplateResult& WithStagingAreaSubnetId(StagingAreaSubnetIdT&& value) { SetStagingAreaSubnetId(std::forward<StagingAreaSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template Staging Area Tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStagingAreaTags() const { return m_stagingAreaTags; }
    template<typename StagingAreaTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetStagingAreaTags(StagingAreaTagsT&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags = std::forward<StagingAreaTagsT>(value); }
    template<typename StagingAreaTagsT = Aws::Map<Aws::String, Aws::String>>
    CreateReplicationConfigurationTemplateResult& WithStagingAreaTags(StagingAreaTagsT&& value) { SetStagingAreaTags(std::forward<StagingAreaTagsT>(value)); return *this;}
    template<typename StagingAreaTagsKeyT = Aws::String, typename StagingAreaTagsValueT = Aws::String>
    CreateReplicationConfigurationTemplateResult& AddStagingAreaTags(StagingAreaTagsKeyT&& key, StagingAreaTagsValueT&& value) {
      m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::forward<StagingAreaTagsKeyT>(key), std::forward<StagingAreaTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template Tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateReplicationConfigurationTemplateResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateReplicationConfigurationTemplateResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template use Dedicated Replication Server.</p>
     */
    inline bool GetUseDedicatedReplicationServer() const { return m_useDedicatedReplicationServer; }
    inline void SetUseDedicatedReplicationServer(bool value) { m_useDedicatedReplicationServerHasBeenSet = true; m_useDedicatedReplicationServer = value; }
    inline CreateReplicationConfigurationTemplateResult& WithUseDedicatedReplicationServer(bool value) { SetUseDedicatedReplicationServer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template use Fips Endpoint.</p>
     */
    inline bool GetUseFipsEndpoint() const { return m_useFipsEndpoint; }
    inline void SetUseFipsEndpoint(bool value) { m_useFipsEndpointHasBeenSet = true; m_useFipsEndpoint = value; }
    inline CreateReplicationConfigurationTemplateResult& WithUseFipsEndpoint(bool value) { SetUseFipsEndpoint(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateReplicationConfigurationTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

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

    Aws::String m_replicationConfigurationTemplateID;
    bool m_replicationConfigurationTemplateIDHasBeenSet = false;

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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
