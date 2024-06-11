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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace mgn
{
namespace Model
{

  class ReplicationConfigurationTemplate
  {
  public:
    AWS_MGN_API ReplicationConfigurationTemplate();
    AWS_MGN_API ReplicationConfigurationTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ReplicationConfigurationTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Replication Configuration template ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ReplicationConfigurationTemplate& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ReplicationConfigurationTemplate& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ReplicationConfigurationTemplate& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template associate default Application Migration
     * Service Security group.</p>
     */
    inline bool GetAssociateDefaultSecurityGroup() const{ return m_associateDefaultSecurityGroup; }
    inline bool AssociateDefaultSecurityGroupHasBeenSet() const { return m_associateDefaultSecurityGroupHasBeenSet; }
    inline void SetAssociateDefaultSecurityGroup(bool value) { m_associateDefaultSecurityGroupHasBeenSet = true; m_associateDefaultSecurityGroup = value; }
    inline ReplicationConfigurationTemplate& WithAssociateDefaultSecurityGroup(bool value) { SetAssociateDefaultSecurityGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template bandwidth throttling.</p>
     */
    inline long long GetBandwidthThrottling() const{ return m_bandwidthThrottling; }
    inline bool BandwidthThrottlingHasBeenSet() const { return m_bandwidthThrottlingHasBeenSet; }
    inline void SetBandwidthThrottling(long long value) { m_bandwidthThrottlingHasBeenSet = true; m_bandwidthThrottling = value; }
    inline ReplicationConfigurationTemplate& WithBandwidthThrottling(long long value) { SetBandwidthThrottling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template create Public IP.</p>
     */
    inline bool GetCreatePublicIP() const{ return m_createPublicIP; }
    inline bool CreatePublicIPHasBeenSet() const { return m_createPublicIPHasBeenSet; }
    inline void SetCreatePublicIP(bool value) { m_createPublicIPHasBeenSet = true; m_createPublicIP = value; }
    inline ReplicationConfigurationTemplate& WithCreatePublicIP(bool value) { SetCreatePublicIP(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template data plane routing.</p>
     */
    inline const ReplicationConfigurationDataPlaneRouting& GetDataPlaneRouting() const{ return m_dataPlaneRouting; }
    inline bool DataPlaneRoutingHasBeenSet() const { return m_dataPlaneRoutingHasBeenSet; }
    inline void SetDataPlaneRouting(const ReplicationConfigurationDataPlaneRouting& value) { m_dataPlaneRoutingHasBeenSet = true; m_dataPlaneRouting = value; }
    inline void SetDataPlaneRouting(ReplicationConfigurationDataPlaneRouting&& value) { m_dataPlaneRoutingHasBeenSet = true; m_dataPlaneRouting = std::move(value); }
    inline ReplicationConfigurationTemplate& WithDataPlaneRouting(const ReplicationConfigurationDataPlaneRouting& value) { SetDataPlaneRouting(value); return *this;}
    inline ReplicationConfigurationTemplate& WithDataPlaneRouting(ReplicationConfigurationDataPlaneRouting&& value) { SetDataPlaneRouting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template use default large Staging Disk type.</p>
     */
    inline const ReplicationConfigurationDefaultLargeStagingDiskType& GetDefaultLargeStagingDiskType() const{ return m_defaultLargeStagingDiskType; }
    inline bool DefaultLargeStagingDiskTypeHasBeenSet() const { return m_defaultLargeStagingDiskTypeHasBeenSet; }
    inline void SetDefaultLargeStagingDiskType(const ReplicationConfigurationDefaultLargeStagingDiskType& value) { m_defaultLargeStagingDiskTypeHasBeenSet = true; m_defaultLargeStagingDiskType = value; }
    inline void SetDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType&& value) { m_defaultLargeStagingDiskTypeHasBeenSet = true; m_defaultLargeStagingDiskType = std::move(value); }
    inline ReplicationConfigurationTemplate& WithDefaultLargeStagingDiskType(const ReplicationConfigurationDefaultLargeStagingDiskType& value) { SetDefaultLargeStagingDiskType(value); return *this;}
    inline ReplicationConfigurationTemplate& WithDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType&& value) { SetDefaultLargeStagingDiskType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template EBS encryption.</p>
     */
    inline const ReplicationConfigurationEbsEncryption& GetEbsEncryption() const{ return m_ebsEncryption; }
    inline bool EbsEncryptionHasBeenSet() const { return m_ebsEncryptionHasBeenSet; }
    inline void SetEbsEncryption(const ReplicationConfigurationEbsEncryption& value) { m_ebsEncryptionHasBeenSet = true; m_ebsEncryption = value; }
    inline void SetEbsEncryption(ReplicationConfigurationEbsEncryption&& value) { m_ebsEncryptionHasBeenSet = true; m_ebsEncryption = std::move(value); }
    inline ReplicationConfigurationTemplate& WithEbsEncryption(const ReplicationConfigurationEbsEncryption& value) { SetEbsEncryption(value); return *this;}
    inline ReplicationConfigurationTemplate& WithEbsEncryption(ReplicationConfigurationEbsEncryption&& value) { SetEbsEncryption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template EBS encryption key ARN.</p>
     */
    inline const Aws::String& GetEbsEncryptionKeyArn() const{ return m_ebsEncryptionKeyArn; }
    inline bool EbsEncryptionKeyArnHasBeenSet() const { return m_ebsEncryptionKeyArnHasBeenSet; }
    inline void SetEbsEncryptionKeyArn(const Aws::String& value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn = value; }
    inline void SetEbsEncryptionKeyArn(Aws::String&& value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn = std::move(value); }
    inline void SetEbsEncryptionKeyArn(const char* value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn.assign(value); }
    inline ReplicationConfigurationTemplate& WithEbsEncryptionKeyArn(const Aws::String& value) { SetEbsEncryptionKeyArn(value); return *this;}
    inline ReplicationConfigurationTemplate& WithEbsEncryptionKeyArn(Aws::String&& value) { SetEbsEncryptionKeyArn(std::move(value)); return *this;}
    inline ReplicationConfigurationTemplate& WithEbsEncryptionKeyArn(const char* value) { SetEbsEncryptionKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template ID.</p>
     */
    inline const Aws::String& GetReplicationConfigurationTemplateID() const{ return m_replicationConfigurationTemplateID; }
    inline bool ReplicationConfigurationTemplateIDHasBeenSet() const { return m_replicationConfigurationTemplateIDHasBeenSet; }
    inline void SetReplicationConfigurationTemplateID(const Aws::String& value) { m_replicationConfigurationTemplateIDHasBeenSet = true; m_replicationConfigurationTemplateID = value; }
    inline void SetReplicationConfigurationTemplateID(Aws::String&& value) { m_replicationConfigurationTemplateIDHasBeenSet = true; m_replicationConfigurationTemplateID = std::move(value); }
    inline void SetReplicationConfigurationTemplateID(const char* value) { m_replicationConfigurationTemplateIDHasBeenSet = true; m_replicationConfigurationTemplateID.assign(value); }
    inline ReplicationConfigurationTemplate& WithReplicationConfigurationTemplateID(const Aws::String& value) { SetReplicationConfigurationTemplateID(value); return *this;}
    inline ReplicationConfigurationTemplate& WithReplicationConfigurationTemplateID(Aws::String&& value) { SetReplicationConfigurationTemplateID(std::move(value)); return *this;}
    inline ReplicationConfigurationTemplate& WithReplicationConfigurationTemplateID(const char* value) { SetReplicationConfigurationTemplateID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template server instance type.</p>
     */
    inline const Aws::String& GetReplicationServerInstanceType() const{ return m_replicationServerInstanceType; }
    inline bool ReplicationServerInstanceTypeHasBeenSet() const { return m_replicationServerInstanceTypeHasBeenSet; }
    inline void SetReplicationServerInstanceType(const Aws::String& value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType = value; }
    inline void SetReplicationServerInstanceType(Aws::String&& value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType = std::move(value); }
    inline void SetReplicationServerInstanceType(const char* value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType.assign(value); }
    inline ReplicationConfigurationTemplate& WithReplicationServerInstanceType(const Aws::String& value) { SetReplicationServerInstanceType(value); return *this;}
    inline ReplicationConfigurationTemplate& WithReplicationServerInstanceType(Aws::String&& value) { SetReplicationServerInstanceType(std::move(value)); return *this;}
    inline ReplicationConfigurationTemplate& WithReplicationServerInstanceType(const char* value) { SetReplicationServerInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template server Security Groups IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationServersSecurityGroupsIDs() const{ return m_replicationServersSecurityGroupsIDs; }
    inline bool ReplicationServersSecurityGroupsIDsHasBeenSet() const { return m_replicationServersSecurityGroupsIDsHasBeenSet; }
    inline void SetReplicationServersSecurityGroupsIDs(const Aws::Vector<Aws::String>& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs = value; }
    inline void SetReplicationServersSecurityGroupsIDs(Aws::Vector<Aws::String>&& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs = std::move(value); }
    inline ReplicationConfigurationTemplate& WithReplicationServersSecurityGroupsIDs(const Aws::Vector<Aws::String>& value) { SetReplicationServersSecurityGroupsIDs(value); return *this;}
    inline ReplicationConfigurationTemplate& WithReplicationServersSecurityGroupsIDs(Aws::Vector<Aws::String>&& value) { SetReplicationServersSecurityGroupsIDs(std::move(value)); return *this;}
    inline ReplicationConfigurationTemplate& AddReplicationServersSecurityGroupsIDs(const Aws::String& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.push_back(value); return *this; }
    inline ReplicationConfigurationTemplate& AddReplicationServersSecurityGroupsIDs(Aws::String&& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.push_back(std::move(value)); return *this; }
    inline ReplicationConfigurationTemplate& AddReplicationServersSecurityGroupsIDs(const char* value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template Staging Area subnet ID.</p>
     */
    inline const Aws::String& GetStagingAreaSubnetId() const{ return m_stagingAreaSubnetId; }
    inline bool StagingAreaSubnetIdHasBeenSet() const { return m_stagingAreaSubnetIdHasBeenSet; }
    inline void SetStagingAreaSubnetId(const Aws::String& value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId = value; }
    inline void SetStagingAreaSubnetId(Aws::String&& value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId = std::move(value); }
    inline void SetStagingAreaSubnetId(const char* value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId.assign(value); }
    inline ReplicationConfigurationTemplate& WithStagingAreaSubnetId(const Aws::String& value) { SetStagingAreaSubnetId(value); return *this;}
    inline ReplicationConfigurationTemplate& WithStagingAreaSubnetId(Aws::String&& value) { SetStagingAreaSubnetId(std::move(value)); return *this;}
    inline ReplicationConfigurationTemplate& WithStagingAreaSubnetId(const char* value) { SetStagingAreaSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template Staging Area Tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStagingAreaTags() const{ return m_stagingAreaTags; }
    inline bool StagingAreaTagsHasBeenSet() const { return m_stagingAreaTagsHasBeenSet; }
    inline void SetStagingAreaTags(const Aws::Map<Aws::String, Aws::String>& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags = value; }
    inline void SetStagingAreaTags(Aws::Map<Aws::String, Aws::String>&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags = std::move(value); }
    inline ReplicationConfigurationTemplate& WithStagingAreaTags(const Aws::Map<Aws::String, Aws::String>& value) { SetStagingAreaTags(value); return *this;}
    inline ReplicationConfigurationTemplate& WithStagingAreaTags(Aws::Map<Aws::String, Aws::String>&& value) { SetStagingAreaTags(std::move(value)); return *this;}
    inline ReplicationConfigurationTemplate& AddStagingAreaTags(const Aws::String& key, const Aws::String& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, value); return *this; }
    inline ReplicationConfigurationTemplate& AddStagingAreaTags(Aws::String&& key, const Aws::String& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::move(key), value); return *this; }
    inline ReplicationConfigurationTemplate& AddStagingAreaTags(const Aws::String& key, Aws::String&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, std::move(value)); return *this; }
    inline ReplicationConfigurationTemplate& AddStagingAreaTags(Aws::String&& key, Aws::String&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::move(key), std::move(value)); return *this; }
    inline ReplicationConfigurationTemplate& AddStagingAreaTags(const char* key, Aws::String&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, std::move(value)); return *this; }
    inline ReplicationConfigurationTemplate& AddStagingAreaTags(Aws::String&& key, const char* value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::move(key), value); return *this; }
    inline ReplicationConfigurationTemplate& AddStagingAreaTags(const char* key, const char* value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template Tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ReplicationConfigurationTemplate& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ReplicationConfigurationTemplate& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ReplicationConfigurationTemplate& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ReplicationConfigurationTemplate& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ReplicationConfigurationTemplate& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ReplicationConfigurationTemplate& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ReplicationConfigurationTemplate& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ReplicationConfigurationTemplate& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ReplicationConfigurationTemplate& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template use Dedicated Replication Server.</p>
     */
    inline bool GetUseDedicatedReplicationServer() const{ return m_useDedicatedReplicationServer; }
    inline bool UseDedicatedReplicationServerHasBeenSet() const { return m_useDedicatedReplicationServerHasBeenSet; }
    inline void SetUseDedicatedReplicationServer(bool value) { m_useDedicatedReplicationServerHasBeenSet = true; m_useDedicatedReplicationServer = value; }
    inline ReplicationConfigurationTemplate& WithUseDedicatedReplicationServer(bool value) { SetUseDedicatedReplicationServer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template use Fips Endpoint.</p>
     */
    inline bool GetUseFipsEndpoint() const{ return m_useFipsEndpoint; }
    inline bool UseFipsEndpointHasBeenSet() const { return m_useFipsEndpointHasBeenSet; }
    inline void SetUseFipsEndpoint(bool value) { m_useFipsEndpointHasBeenSet = true; m_useFipsEndpoint = value; }
    inline ReplicationConfigurationTemplate& WithUseFipsEndpoint(bool value) { SetUseFipsEndpoint(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline ReplicationConfigurationTemplate& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ReplicationConfigurationTemplate& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ReplicationConfigurationTemplate& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

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

    bool m_useDedicatedReplicationServer;
    bool m_useDedicatedReplicationServerHasBeenSet = false;

    bool m_useFipsEndpoint;
    bool m_useFipsEndpointHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
