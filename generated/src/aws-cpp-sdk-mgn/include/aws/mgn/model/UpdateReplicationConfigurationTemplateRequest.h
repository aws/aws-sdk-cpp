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
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class UpdateReplicationConfigurationTemplateRequest : public MgnRequest
  {
  public:
    AWS_MGN_API UpdateReplicationConfigurationTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReplicationConfigurationTemplate"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Update replication configuration template ARN request.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Update replication configuration template ARN request.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Update replication configuration template ARN request.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Update replication configuration template ARN request.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Update replication configuration template ARN request.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Update replication configuration template ARN request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Update replication configuration template ARN request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Update replication configuration template ARN request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Update replication configuration template associate default Application
     * Migration Service Security group request.</p>
     */
    inline bool GetAssociateDefaultSecurityGroup() const{ return m_associateDefaultSecurityGroup; }

    /**
     * <p>Update replication configuration template associate default Application
     * Migration Service Security group request.</p>
     */
    inline bool AssociateDefaultSecurityGroupHasBeenSet() const { return m_associateDefaultSecurityGroupHasBeenSet; }

    /**
     * <p>Update replication configuration template associate default Application
     * Migration Service Security group request.</p>
     */
    inline void SetAssociateDefaultSecurityGroup(bool value) { m_associateDefaultSecurityGroupHasBeenSet = true; m_associateDefaultSecurityGroup = value; }

    /**
     * <p>Update replication configuration template associate default Application
     * Migration Service Security group request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithAssociateDefaultSecurityGroup(bool value) { SetAssociateDefaultSecurityGroup(value); return *this;}


    /**
     * <p>Update replication configuration template bandwidth throttling request.</p>
     */
    inline long long GetBandwidthThrottling() const{ return m_bandwidthThrottling; }

    /**
     * <p>Update replication configuration template bandwidth throttling request.</p>
     */
    inline bool BandwidthThrottlingHasBeenSet() const { return m_bandwidthThrottlingHasBeenSet; }

    /**
     * <p>Update replication configuration template bandwidth throttling request.</p>
     */
    inline void SetBandwidthThrottling(long long value) { m_bandwidthThrottlingHasBeenSet = true; m_bandwidthThrottling = value; }

    /**
     * <p>Update replication configuration template bandwidth throttling request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithBandwidthThrottling(long long value) { SetBandwidthThrottling(value); return *this;}


    /**
     * <p>Update replication configuration template create Public IP request.</p>
     */
    inline bool GetCreatePublicIP() const{ return m_createPublicIP; }

    /**
     * <p>Update replication configuration template create Public IP request.</p>
     */
    inline bool CreatePublicIPHasBeenSet() const { return m_createPublicIPHasBeenSet; }

    /**
     * <p>Update replication configuration template create Public IP request.</p>
     */
    inline void SetCreatePublicIP(bool value) { m_createPublicIPHasBeenSet = true; m_createPublicIP = value; }

    /**
     * <p>Update replication configuration template create Public IP request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithCreatePublicIP(bool value) { SetCreatePublicIP(value); return *this;}


    /**
     * <p>Update replication configuration template data plane routing request.</p>
     */
    inline const ReplicationConfigurationDataPlaneRouting& GetDataPlaneRouting() const{ return m_dataPlaneRouting; }

    /**
     * <p>Update replication configuration template data plane routing request.</p>
     */
    inline bool DataPlaneRoutingHasBeenSet() const { return m_dataPlaneRoutingHasBeenSet; }

    /**
     * <p>Update replication configuration template data plane routing request.</p>
     */
    inline void SetDataPlaneRouting(const ReplicationConfigurationDataPlaneRouting& value) { m_dataPlaneRoutingHasBeenSet = true; m_dataPlaneRouting = value; }

    /**
     * <p>Update replication configuration template data plane routing request.</p>
     */
    inline void SetDataPlaneRouting(ReplicationConfigurationDataPlaneRouting&& value) { m_dataPlaneRoutingHasBeenSet = true; m_dataPlaneRouting = std::move(value); }

    /**
     * <p>Update replication configuration template data plane routing request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithDataPlaneRouting(const ReplicationConfigurationDataPlaneRouting& value) { SetDataPlaneRouting(value); return *this;}

    /**
     * <p>Update replication configuration template data plane routing request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithDataPlaneRouting(ReplicationConfigurationDataPlaneRouting&& value) { SetDataPlaneRouting(std::move(value)); return *this;}


    /**
     * <p>Update replication configuration template use default large Staging Disk type
     * request.</p>
     */
    inline const ReplicationConfigurationDefaultLargeStagingDiskType& GetDefaultLargeStagingDiskType() const{ return m_defaultLargeStagingDiskType; }

    /**
     * <p>Update replication configuration template use default large Staging Disk type
     * request.</p>
     */
    inline bool DefaultLargeStagingDiskTypeHasBeenSet() const { return m_defaultLargeStagingDiskTypeHasBeenSet; }

    /**
     * <p>Update replication configuration template use default large Staging Disk type
     * request.</p>
     */
    inline void SetDefaultLargeStagingDiskType(const ReplicationConfigurationDefaultLargeStagingDiskType& value) { m_defaultLargeStagingDiskTypeHasBeenSet = true; m_defaultLargeStagingDiskType = value; }

    /**
     * <p>Update replication configuration template use default large Staging Disk type
     * request.</p>
     */
    inline void SetDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType&& value) { m_defaultLargeStagingDiskTypeHasBeenSet = true; m_defaultLargeStagingDiskType = std::move(value); }

    /**
     * <p>Update replication configuration template use default large Staging Disk type
     * request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithDefaultLargeStagingDiskType(const ReplicationConfigurationDefaultLargeStagingDiskType& value) { SetDefaultLargeStagingDiskType(value); return *this;}

    /**
     * <p>Update replication configuration template use default large Staging Disk type
     * request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType&& value) { SetDefaultLargeStagingDiskType(std::move(value)); return *this;}


    /**
     * <p>Update replication configuration template EBS encryption request.</p>
     */
    inline const ReplicationConfigurationEbsEncryption& GetEbsEncryption() const{ return m_ebsEncryption; }

    /**
     * <p>Update replication configuration template EBS encryption request.</p>
     */
    inline bool EbsEncryptionHasBeenSet() const { return m_ebsEncryptionHasBeenSet; }

    /**
     * <p>Update replication configuration template EBS encryption request.</p>
     */
    inline void SetEbsEncryption(const ReplicationConfigurationEbsEncryption& value) { m_ebsEncryptionHasBeenSet = true; m_ebsEncryption = value; }

    /**
     * <p>Update replication configuration template EBS encryption request.</p>
     */
    inline void SetEbsEncryption(ReplicationConfigurationEbsEncryption&& value) { m_ebsEncryptionHasBeenSet = true; m_ebsEncryption = std::move(value); }

    /**
     * <p>Update replication configuration template EBS encryption request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithEbsEncryption(const ReplicationConfigurationEbsEncryption& value) { SetEbsEncryption(value); return *this;}

    /**
     * <p>Update replication configuration template EBS encryption request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithEbsEncryption(ReplicationConfigurationEbsEncryption&& value) { SetEbsEncryption(std::move(value)); return *this;}


    /**
     * <p>Update replication configuration template EBS encryption key ARN request.</p>
     */
    inline const Aws::String& GetEbsEncryptionKeyArn() const{ return m_ebsEncryptionKeyArn; }

    /**
     * <p>Update replication configuration template EBS encryption key ARN request.</p>
     */
    inline bool EbsEncryptionKeyArnHasBeenSet() const { return m_ebsEncryptionKeyArnHasBeenSet; }

    /**
     * <p>Update replication configuration template EBS encryption key ARN request.</p>
     */
    inline void SetEbsEncryptionKeyArn(const Aws::String& value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn = value; }

    /**
     * <p>Update replication configuration template EBS encryption key ARN request.</p>
     */
    inline void SetEbsEncryptionKeyArn(Aws::String&& value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn = std::move(value); }

    /**
     * <p>Update replication configuration template EBS encryption key ARN request.</p>
     */
    inline void SetEbsEncryptionKeyArn(const char* value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn.assign(value); }

    /**
     * <p>Update replication configuration template EBS encryption key ARN request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithEbsEncryptionKeyArn(const Aws::String& value) { SetEbsEncryptionKeyArn(value); return *this;}

    /**
     * <p>Update replication configuration template EBS encryption key ARN request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithEbsEncryptionKeyArn(Aws::String&& value) { SetEbsEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>Update replication configuration template EBS encryption key ARN request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithEbsEncryptionKeyArn(const char* value) { SetEbsEncryptionKeyArn(value); return *this;}


    /**
     * <p>Update replication configuration template template ID request.</p>
     */
    inline const Aws::String& GetReplicationConfigurationTemplateID() const{ return m_replicationConfigurationTemplateID; }

    /**
     * <p>Update replication configuration template template ID request.</p>
     */
    inline bool ReplicationConfigurationTemplateIDHasBeenSet() const { return m_replicationConfigurationTemplateIDHasBeenSet; }

    /**
     * <p>Update replication configuration template template ID request.</p>
     */
    inline void SetReplicationConfigurationTemplateID(const Aws::String& value) { m_replicationConfigurationTemplateIDHasBeenSet = true; m_replicationConfigurationTemplateID = value; }

    /**
     * <p>Update replication configuration template template ID request.</p>
     */
    inline void SetReplicationConfigurationTemplateID(Aws::String&& value) { m_replicationConfigurationTemplateIDHasBeenSet = true; m_replicationConfigurationTemplateID = std::move(value); }

    /**
     * <p>Update replication configuration template template ID request.</p>
     */
    inline void SetReplicationConfigurationTemplateID(const char* value) { m_replicationConfigurationTemplateIDHasBeenSet = true; m_replicationConfigurationTemplateID.assign(value); }

    /**
     * <p>Update replication configuration template template ID request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithReplicationConfigurationTemplateID(const Aws::String& value) { SetReplicationConfigurationTemplateID(value); return *this;}

    /**
     * <p>Update replication configuration template template ID request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithReplicationConfigurationTemplateID(Aws::String&& value) { SetReplicationConfigurationTemplateID(std::move(value)); return *this;}

    /**
     * <p>Update replication configuration template template ID request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithReplicationConfigurationTemplateID(const char* value) { SetReplicationConfigurationTemplateID(value); return *this;}


    /**
     * <p>Update replication configuration template Replication Server instance type
     * request.</p>
     */
    inline const Aws::String& GetReplicationServerInstanceType() const{ return m_replicationServerInstanceType; }

    /**
     * <p>Update replication configuration template Replication Server instance type
     * request.</p>
     */
    inline bool ReplicationServerInstanceTypeHasBeenSet() const { return m_replicationServerInstanceTypeHasBeenSet; }

    /**
     * <p>Update replication configuration template Replication Server instance type
     * request.</p>
     */
    inline void SetReplicationServerInstanceType(const Aws::String& value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType = value; }

    /**
     * <p>Update replication configuration template Replication Server instance type
     * request.</p>
     */
    inline void SetReplicationServerInstanceType(Aws::String&& value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType = std::move(value); }

    /**
     * <p>Update replication configuration template Replication Server instance type
     * request.</p>
     */
    inline void SetReplicationServerInstanceType(const char* value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType.assign(value); }

    /**
     * <p>Update replication configuration template Replication Server instance type
     * request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithReplicationServerInstanceType(const Aws::String& value) { SetReplicationServerInstanceType(value); return *this;}

    /**
     * <p>Update replication configuration template Replication Server instance type
     * request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithReplicationServerInstanceType(Aws::String&& value) { SetReplicationServerInstanceType(std::move(value)); return *this;}

    /**
     * <p>Update replication configuration template Replication Server instance type
     * request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithReplicationServerInstanceType(const char* value) { SetReplicationServerInstanceType(value); return *this;}


    /**
     * <p>Update replication configuration template Replication Server Security groups
     * IDs request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationServersSecurityGroupsIDs() const{ return m_replicationServersSecurityGroupsIDs; }

    /**
     * <p>Update replication configuration template Replication Server Security groups
     * IDs request.</p>
     */
    inline bool ReplicationServersSecurityGroupsIDsHasBeenSet() const { return m_replicationServersSecurityGroupsIDsHasBeenSet; }

    /**
     * <p>Update replication configuration template Replication Server Security groups
     * IDs request.</p>
     */
    inline void SetReplicationServersSecurityGroupsIDs(const Aws::Vector<Aws::String>& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs = value; }

    /**
     * <p>Update replication configuration template Replication Server Security groups
     * IDs request.</p>
     */
    inline void SetReplicationServersSecurityGroupsIDs(Aws::Vector<Aws::String>&& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs = std::move(value); }

    /**
     * <p>Update replication configuration template Replication Server Security groups
     * IDs request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithReplicationServersSecurityGroupsIDs(const Aws::Vector<Aws::String>& value) { SetReplicationServersSecurityGroupsIDs(value); return *this;}

    /**
     * <p>Update replication configuration template Replication Server Security groups
     * IDs request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithReplicationServersSecurityGroupsIDs(Aws::Vector<Aws::String>&& value) { SetReplicationServersSecurityGroupsIDs(std::move(value)); return *this;}

    /**
     * <p>Update replication configuration template Replication Server Security groups
     * IDs request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddReplicationServersSecurityGroupsIDs(const Aws::String& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.push_back(value); return *this; }

    /**
     * <p>Update replication configuration template Replication Server Security groups
     * IDs request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddReplicationServersSecurityGroupsIDs(Aws::String&& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>Update replication configuration template Replication Server Security groups
     * IDs request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddReplicationServersSecurityGroupsIDs(const char* value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.push_back(value); return *this; }


    /**
     * <p>Update replication configuration template Staging Area subnet ID request.</p>
     */
    inline const Aws::String& GetStagingAreaSubnetId() const{ return m_stagingAreaSubnetId; }

    /**
     * <p>Update replication configuration template Staging Area subnet ID request.</p>
     */
    inline bool StagingAreaSubnetIdHasBeenSet() const { return m_stagingAreaSubnetIdHasBeenSet; }

    /**
     * <p>Update replication configuration template Staging Area subnet ID request.</p>
     */
    inline void SetStagingAreaSubnetId(const Aws::String& value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId = value; }

    /**
     * <p>Update replication configuration template Staging Area subnet ID request.</p>
     */
    inline void SetStagingAreaSubnetId(Aws::String&& value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId = std::move(value); }

    /**
     * <p>Update replication configuration template Staging Area subnet ID request.</p>
     */
    inline void SetStagingAreaSubnetId(const char* value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId.assign(value); }

    /**
     * <p>Update replication configuration template Staging Area subnet ID request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithStagingAreaSubnetId(const Aws::String& value) { SetStagingAreaSubnetId(value); return *this;}

    /**
     * <p>Update replication configuration template Staging Area subnet ID request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithStagingAreaSubnetId(Aws::String&& value) { SetStagingAreaSubnetId(std::move(value)); return *this;}

    /**
     * <p>Update replication configuration template Staging Area subnet ID request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithStagingAreaSubnetId(const char* value) { SetStagingAreaSubnetId(value); return *this;}


    /**
     * <p>Update replication configuration template Staging Area Tags request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStagingAreaTags() const{ return m_stagingAreaTags; }

    /**
     * <p>Update replication configuration template Staging Area Tags request.</p>
     */
    inline bool StagingAreaTagsHasBeenSet() const { return m_stagingAreaTagsHasBeenSet; }

    /**
     * <p>Update replication configuration template Staging Area Tags request.</p>
     */
    inline void SetStagingAreaTags(const Aws::Map<Aws::String, Aws::String>& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags = value; }

    /**
     * <p>Update replication configuration template Staging Area Tags request.</p>
     */
    inline void SetStagingAreaTags(Aws::Map<Aws::String, Aws::String>&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags = std::move(value); }

    /**
     * <p>Update replication configuration template Staging Area Tags request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithStagingAreaTags(const Aws::Map<Aws::String, Aws::String>& value) { SetStagingAreaTags(value); return *this;}

    /**
     * <p>Update replication configuration template Staging Area Tags request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithStagingAreaTags(Aws::Map<Aws::String, Aws::String>&& value) { SetStagingAreaTags(std::move(value)); return *this;}

    /**
     * <p>Update replication configuration template Staging Area Tags request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddStagingAreaTags(const Aws::String& key, const Aws::String& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, value); return *this; }

    /**
     * <p>Update replication configuration template Staging Area Tags request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddStagingAreaTags(Aws::String&& key, const Aws::String& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Update replication configuration template Staging Area Tags request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddStagingAreaTags(const Aws::String& key, Aws::String&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Update replication configuration template Staging Area Tags request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddStagingAreaTags(Aws::String&& key, Aws::String&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Update replication configuration template Staging Area Tags request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddStagingAreaTags(const char* key, Aws::String&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Update replication configuration template Staging Area Tags request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddStagingAreaTags(Aws::String&& key, const char* value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Update replication configuration template Staging Area Tags request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& AddStagingAreaTags(const char* key, const char* value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, value); return *this; }


    /**
     * <p>Update replication configuration template use dedicated Replication Server
     * request.</p>
     */
    inline bool GetUseDedicatedReplicationServer() const{ return m_useDedicatedReplicationServer; }

    /**
     * <p>Update replication configuration template use dedicated Replication Server
     * request.</p>
     */
    inline bool UseDedicatedReplicationServerHasBeenSet() const { return m_useDedicatedReplicationServerHasBeenSet; }

    /**
     * <p>Update replication configuration template use dedicated Replication Server
     * request.</p>
     */
    inline void SetUseDedicatedReplicationServer(bool value) { m_useDedicatedReplicationServerHasBeenSet = true; m_useDedicatedReplicationServer = value; }

    /**
     * <p>Update replication configuration template use dedicated Replication Server
     * request.</p>
     */
    inline UpdateReplicationConfigurationTemplateRequest& WithUseDedicatedReplicationServer(bool value) { SetUseDedicatedReplicationServer(value); return *this;}

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

    bool m_useDedicatedReplicationServer;
    bool m_useDedicatedReplicationServerHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
