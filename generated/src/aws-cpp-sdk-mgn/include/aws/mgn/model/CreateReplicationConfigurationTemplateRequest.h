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
    AWS_MGN_API CreateReplicationConfigurationTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReplicationConfigurationTemplate"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline bool GetAssociateDefaultSecurityGroup() const{ return m_associateDefaultSecurityGroup; }

    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline bool AssociateDefaultSecurityGroupHasBeenSet() const { return m_associateDefaultSecurityGroupHasBeenSet; }

    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline void SetAssociateDefaultSecurityGroup(bool value) { m_associateDefaultSecurityGroupHasBeenSet = true; m_associateDefaultSecurityGroup = value; }

    /**
     * <p>Request to associate the default Application Migration Service Security group
     * with the Replication Settings template.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithAssociateDefaultSecurityGroup(bool value) { SetAssociateDefaultSecurityGroup(value); return *this;}


    /**
     * <p>Request to configure bandwidth throttling during Replication Settings
     * template creation.</p>
     */
    inline long long GetBandwidthThrottling() const{ return m_bandwidthThrottling; }

    /**
     * <p>Request to configure bandwidth throttling during Replication Settings
     * template creation.</p>
     */
    inline bool BandwidthThrottlingHasBeenSet() const { return m_bandwidthThrottlingHasBeenSet; }

    /**
     * <p>Request to configure bandwidth throttling during Replication Settings
     * template creation.</p>
     */
    inline void SetBandwidthThrottling(long long value) { m_bandwidthThrottlingHasBeenSet = true; m_bandwidthThrottling = value; }

    /**
     * <p>Request to configure bandwidth throttling during Replication Settings
     * template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithBandwidthThrottling(long long value) { SetBandwidthThrottling(value); return *this;}


    /**
     * <p>Request to create Public IP during Replication Settings template
     * creation.</p>
     */
    inline bool GetCreatePublicIP() const{ return m_createPublicIP; }

    /**
     * <p>Request to create Public IP during Replication Settings template
     * creation.</p>
     */
    inline bool CreatePublicIPHasBeenSet() const { return m_createPublicIPHasBeenSet; }

    /**
     * <p>Request to create Public IP during Replication Settings template
     * creation.</p>
     */
    inline void SetCreatePublicIP(bool value) { m_createPublicIPHasBeenSet = true; m_createPublicIP = value; }

    /**
     * <p>Request to create Public IP during Replication Settings template
     * creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithCreatePublicIP(bool value) { SetCreatePublicIP(value); return *this;}


    /**
     * <p>Request to configure data plane routing during Replication Settings template
     * creation.</p>
     */
    inline const ReplicationConfigurationDataPlaneRouting& GetDataPlaneRouting() const{ return m_dataPlaneRouting; }

    /**
     * <p>Request to configure data plane routing during Replication Settings template
     * creation.</p>
     */
    inline bool DataPlaneRoutingHasBeenSet() const { return m_dataPlaneRoutingHasBeenSet; }

    /**
     * <p>Request to configure data plane routing during Replication Settings template
     * creation.</p>
     */
    inline void SetDataPlaneRouting(const ReplicationConfigurationDataPlaneRouting& value) { m_dataPlaneRoutingHasBeenSet = true; m_dataPlaneRouting = value; }

    /**
     * <p>Request to configure data plane routing during Replication Settings template
     * creation.</p>
     */
    inline void SetDataPlaneRouting(ReplicationConfigurationDataPlaneRouting&& value) { m_dataPlaneRoutingHasBeenSet = true; m_dataPlaneRouting = std::move(value); }

    /**
     * <p>Request to configure data plane routing during Replication Settings template
     * creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithDataPlaneRouting(const ReplicationConfigurationDataPlaneRouting& value) { SetDataPlaneRouting(value); return *this;}

    /**
     * <p>Request to configure data plane routing during Replication Settings template
     * creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithDataPlaneRouting(ReplicationConfigurationDataPlaneRouting&& value) { SetDataPlaneRouting(std::move(value)); return *this;}


    /**
     * <p>Request to configure the default large staging disk EBS volume type during
     * Replication Settings template creation.</p>
     */
    inline const ReplicationConfigurationDefaultLargeStagingDiskType& GetDefaultLargeStagingDiskType() const{ return m_defaultLargeStagingDiskType; }

    /**
     * <p>Request to configure the default large staging disk EBS volume type during
     * Replication Settings template creation.</p>
     */
    inline bool DefaultLargeStagingDiskTypeHasBeenSet() const { return m_defaultLargeStagingDiskTypeHasBeenSet; }

    /**
     * <p>Request to configure the default large staging disk EBS volume type during
     * Replication Settings template creation.</p>
     */
    inline void SetDefaultLargeStagingDiskType(const ReplicationConfigurationDefaultLargeStagingDiskType& value) { m_defaultLargeStagingDiskTypeHasBeenSet = true; m_defaultLargeStagingDiskType = value; }

    /**
     * <p>Request to configure the default large staging disk EBS volume type during
     * Replication Settings template creation.</p>
     */
    inline void SetDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType&& value) { m_defaultLargeStagingDiskTypeHasBeenSet = true; m_defaultLargeStagingDiskType = std::move(value); }

    /**
     * <p>Request to configure the default large staging disk EBS volume type during
     * Replication Settings template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithDefaultLargeStagingDiskType(const ReplicationConfigurationDefaultLargeStagingDiskType& value) { SetDefaultLargeStagingDiskType(value); return *this;}

    /**
     * <p>Request to configure the default large staging disk EBS volume type during
     * Replication Settings template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType&& value) { SetDefaultLargeStagingDiskType(std::move(value)); return *this;}


    /**
     * <p>Request to configure EBS encryption during Replication Settings template
     * creation.</p>
     */
    inline const ReplicationConfigurationEbsEncryption& GetEbsEncryption() const{ return m_ebsEncryption; }

    /**
     * <p>Request to configure EBS encryption during Replication Settings template
     * creation.</p>
     */
    inline bool EbsEncryptionHasBeenSet() const { return m_ebsEncryptionHasBeenSet; }

    /**
     * <p>Request to configure EBS encryption during Replication Settings template
     * creation.</p>
     */
    inline void SetEbsEncryption(const ReplicationConfigurationEbsEncryption& value) { m_ebsEncryptionHasBeenSet = true; m_ebsEncryption = value; }

    /**
     * <p>Request to configure EBS encryption during Replication Settings template
     * creation.</p>
     */
    inline void SetEbsEncryption(ReplicationConfigurationEbsEncryption&& value) { m_ebsEncryptionHasBeenSet = true; m_ebsEncryption = std::move(value); }

    /**
     * <p>Request to configure EBS encryption during Replication Settings template
     * creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithEbsEncryption(const ReplicationConfigurationEbsEncryption& value) { SetEbsEncryption(value); return *this;}

    /**
     * <p>Request to configure EBS encryption during Replication Settings template
     * creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithEbsEncryption(ReplicationConfigurationEbsEncryption&& value) { SetEbsEncryption(std::move(value)); return *this;}


    /**
     * <p>Request to configure an EBS encryption key during Replication Settings
     * template creation.</p>
     */
    inline const Aws::String& GetEbsEncryptionKeyArn() const{ return m_ebsEncryptionKeyArn; }

    /**
     * <p>Request to configure an EBS encryption key during Replication Settings
     * template creation.</p>
     */
    inline bool EbsEncryptionKeyArnHasBeenSet() const { return m_ebsEncryptionKeyArnHasBeenSet; }

    /**
     * <p>Request to configure an EBS encryption key during Replication Settings
     * template creation.</p>
     */
    inline void SetEbsEncryptionKeyArn(const Aws::String& value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn = value; }

    /**
     * <p>Request to configure an EBS encryption key during Replication Settings
     * template creation.</p>
     */
    inline void SetEbsEncryptionKeyArn(Aws::String&& value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn = std::move(value); }

    /**
     * <p>Request to configure an EBS encryption key during Replication Settings
     * template creation.</p>
     */
    inline void SetEbsEncryptionKeyArn(const char* value) { m_ebsEncryptionKeyArnHasBeenSet = true; m_ebsEncryptionKeyArn.assign(value); }

    /**
     * <p>Request to configure an EBS encryption key during Replication Settings
     * template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithEbsEncryptionKeyArn(const Aws::String& value) { SetEbsEncryptionKeyArn(value); return *this;}

    /**
     * <p>Request to configure an EBS encryption key during Replication Settings
     * template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithEbsEncryptionKeyArn(Aws::String&& value) { SetEbsEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>Request to configure an EBS encryption key during Replication Settings
     * template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithEbsEncryptionKeyArn(const char* value) { SetEbsEncryptionKeyArn(value); return *this;}


    /**
     * <p>Request to configure the Replication Server instance type during Replication
     * Settings template creation.</p>
     */
    inline const Aws::String& GetReplicationServerInstanceType() const{ return m_replicationServerInstanceType; }

    /**
     * <p>Request to configure the Replication Server instance type during Replication
     * Settings template creation.</p>
     */
    inline bool ReplicationServerInstanceTypeHasBeenSet() const { return m_replicationServerInstanceTypeHasBeenSet; }

    /**
     * <p>Request to configure the Replication Server instance type during Replication
     * Settings template creation.</p>
     */
    inline void SetReplicationServerInstanceType(const Aws::String& value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType = value; }

    /**
     * <p>Request to configure the Replication Server instance type during Replication
     * Settings template creation.</p>
     */
    inline void SetReplicationServerInstanceType(Aws::String&& value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType = std::move(value); }

    /**
     * <p>Request to configure the Replication Server instance type during Replication
     * Settings template creation.</p>
     */
    inline void SetReplicationServerInstanceType(const char* value) { m_replicationServerInstanceTypeHasBeenSet = true; m_replicationServerInstanceType.assign(value); }

    /**
     * <p>Request to configure the Replication Server instance type during Replication
     * Settings template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithReplicationServerInstanceType(const Aws::String& value) { SetReplicationServerInstanceType(value); return *this;}

    /**
     * <p>Request to configure the Replication Server instance type during Replication
     * Settings template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithReplicationServerInstanceType(Aws::String&& value) { SetReplicationServerInstanceType(std::move(value)); return *this;}

    /**
     * <p>Request to configure the Replication Server instance type during Replication
     * Settings template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithReplicationServerInstanceType(const char* value) { SetReplicationServerInstanceType(value); return *this;}


    /**
     * <p>Request to configure the Replication Server Security group ID during
     * Replication Settings template creation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationServersSecurityGroupsIDs() const{ return m_replicationServersSecurityGroupsIDs; }

    /**
     * <p>Request to configure the Replication Server Security group ID during
     * Replication Settings template creation.</p>
     */
    inline bool ReplicationServersSecurityGroupsIDsHasBeenSet() const { return m_replicationServersSecurityGroupsIDsHasBeenSet; }

    /**
     * <p>Request to configure the Replication Server Security group ID during
     * Replication Settings template creation.</p>
     */
    inline void SetReplicationServersSecurityGroupsIDs(const Aws::Vector<Aws::String>& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs = value; }

    /**
     * <p>Request to configure the Replication Server Security group ID during
     * Replication Settings template creation.</p>
     */
    inline void SetReplicationServersSecurityGroupsIDs(Aws::Vector<Aws::String>&& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs = std::move(value); }

    /**
     * <p>Request to configure the Replication Server Security group ID during
     * Replication Settings template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithReplicationServersSecurityGroupsIDs(const Aws::Vector<Aws::String>& value) { SetReplicationServersSecurityGroupsIDs(value); return *this;}

    /**
     * <p>Request to configure the Replication Server Security group ID during
     * Replication Settings template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithReplicationServersSecurityGroupsIDs(Aws::Vector<Aws::String>&& value) { SetReplicationServersSecurityGroupsIDs(std::move(value)); return *this;}

    /**
     * <p>Request to configure the Replication Server Security group ID during
     * Replication Settings template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& AddReplicationServersSecurityGroupsIDs(const Aws::String& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.push_back(value); return *this; }

    /**
     * <p>Request to configure the Replication Server Security group ID during
     * Replication Settings template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& AddReplicationServersSecurityGroupsIDs(Aws::String&& value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>Request to configure the Replication Server Security group ID during
     * Replication Settings template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& AddReplicationServersSecurityGroupsIDs(const char* value) { m_replicationServersSecurityGroupsIDsHasBeenSet = true; m_replicationServersSecurityGroupsIDs.push_back(value); return *this; }


    /**
     * <p>Request to configure the Staging Area subnet ID during Replication Settings
     * template creation.</p>
     */
    inline const Aws::String& GetStagingAreaSubnetId() const{ return m_stagingAreaSubnetId; }

    /**
     * <p>Request to configure the Staging Area subnet ID during Replication Settings
     * template creation.</p>
     */
    inline bool StagingAreaSubnetIdHasBeenSet() const { return m_stagingAreaSubnetIdHasBeenSet; }

    /**
     * <p>Request to configure the Staging Area subnet ID during Replication Settings
     * template creation.</p>
     */
    inline void SetStagingAreaSubnetId(const Aws::String& value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId = value; }

    /**
     * <p>Request to configure the Staging Area subnet ID during Replication Settings
     * template creation.</p>
     */
    inline void SetStagingAreaSubnetId(Aws::String&& value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId = std::move(value); }

    /**
     * <p>Request to configure the Staging Area subnet ID during Replication Settings
     * template creation.</p>
     */
    inline void SetStagingAreaSubnetId(const char* value) { m_stagingAreaSubnetIdHasBeenSet = true; m_stagingAreaSubnetId.assign(value); }

    /**
     * <p>Request to configure the Staging Area subnet ID during Replication Settings
     * template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithStagingAreaSubnetId(const Aws::String& value) { SetStagingAreaSubnetId(value); return *this;}

    /**
     * <p>Request to configure the Staging Area subnet ID during Replication Settings
     * template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithStagingAreaSubnetId(Aws::String&& value) { SetStagingAreaSubnetId(std::move(value)); return *this;}

    /**
     * <p>Request to configure the Staging Area subnet ID during Replication Settings
     * template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithStagingAreaSubnetId(const char* value) { SetStagingAreaSubnetId(value); return *this;}


    /**
     * <p>Request to configure Staging Area tags during Replication Settings template
     * creation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStagingAreaTags() const{ return m_stagingAreaTags; }

    /**
     * <p>Request to configure Staging Area tags during Replication Settings template
     * creation.</p>
     */
    inline bool StagingAreaTagsHasBeenSet() const { return m_stagingAreaTagsHasBeenSet; }

    /**
     * <p>Request to configure Staging Area tags during Replication Settings template
     * creation.</p>
     */
    inline void SetStagingAreaTags(const Aws::Map<Aws::String, Aws::String>& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags = value; }

    /**
     * <p>Request to configure Staging Area tags during Replication Settings template
     * creation.</p>
     */
    inline void SetStagingAreaTags(Aws::Map<Aws::String, Aws::String>&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags = std::move(value); }

    /**
     * <p>Request to configure Staging Area tags during Replication Settings template
     * creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithStagingAreaTags(const Aws::Map<Aws::String, Aws::String>& value) { SetStagingAreaTags(value); return *this;}

    /**
     * <p>Request to configure Staging Area tags during Replication Settings template
     * creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithStagingAreaTags(Aws::Map<Aws::String, Aws::String>&& value) { SetStagingAreaTags(std::move(value)); return *this;}

    /**
     * <p>Request to configure Staging Area tags during Replication Settings template
     * creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& AddStagingAreaTags(const Aws::String& key, const Aws::String& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, value); return *this; }

    /**
     * <p>Request to configure Staging Area tags during Replication Settings template
     * creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& AddStagingAreaTags(Aws::String&& key, const Aws::String& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Request to configure Staging Area tags during Replication Settings template
     * creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& AddStagingAreaTags(const Aws::String& key, Aws::String&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Request to configure Staging Area tags during Replication Settings template
     * creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& AddStagingAreaTags(Aws::String&& key, Aws::String&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Request to configure Staging Area tags during Replication Settings template
     * creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& AddStagingAreaTags(const char* key, Aws::String&& value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Request to configure Staging Area tags during Replication Settings template
     * creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& AddStagingAreaTags(Aws::String&& key, const char* value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Request to configure Staging Area tags during Replication Settings template
     * creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& AddStagingAreaTags(const char* key, const char* value) { m_stagingAreaTagsHasBeenSet = true; m_stagingAreaTags.emplace(key, value); return *this; }


    /**
     * <p>Request to configure tags during Replication Settings template creation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Request to configure tags during Replication Settings template creation.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Request to configure tags during Replication Settings template creation.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Request to configure tags during Replication Settings template creation.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Request to configure tags during Replication Settings template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Request to configure tags during Replication Settings template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Request to configure tags during Replication Settings template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Request to configure tags during Replication Settings template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Request to configure tags during Replication Settings template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Request to configure tags during Replication Settings template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Request to configure tags during Replication Settings template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Request to configure tags during Replication Settings template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Request to configure tags during Replication Settings template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Request to use Dedicated Replication Servers during Replication Settings
     * template creation.</p>
     */
    inline bool GetUseDedicatedReplicationServer() const{ return m_useDedicatedReplicationServer; }

    /**
     * <p>Request to use Dedicated Replication Servers during Replication Settings
     * template creation.</p>
     */
    inline bool UseDedicatedReplicationServerHasBeenSet() const { return m_useDedicatedReplicationServerHasBeenSet; }

    /**
     * <p>Request to use Dedicated Replication Servers during Replication Settings
     * template creation.</p>
     */
    inline void SetUseDedicatedReplicationServer(bool value) { m_useDedicatedReplicationServerHasBeenSet = true; m_useDedicatedReplicationServer = value; }

    /**
     * <p>Request to use Dedicated Replication Servers during Replication Settings
     * template creation.</p>
     */
    inline CreateReplicationConfigurationTemplateRequest& WithUseDedicatedReplicationServer(bool value) { SetUseDedicatedReplicationServer(value); return *this;}

  private:

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
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
