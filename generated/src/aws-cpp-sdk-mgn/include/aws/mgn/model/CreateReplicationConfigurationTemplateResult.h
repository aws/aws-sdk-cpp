﻿/**
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
    AWS_MGN_API CreateReplicationConfigurationTemplateResult();
    AWS_MGN_API CreateReplicationConfigurationTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API CreateReplicationConfigurationTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Replication Configuration template ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateReplicationConfigurationTemplateResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateReplicationConfigurationTemplateResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateReplicationConfigurationTemplateResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template associate default Application Migration
     * Service Security group.</p>
     */
    inline bool GetAssociateDefaultSecurityGroup() const{ return m_associateDefaultSecurityGroup; }
    inline void SetAssociateDefaultSecurityGroup(bool value) { m_associateDefaultSecurityGroup = value; }
    inline CreateReplicationConfigurationTemplateResult& WithAssociateDefaultSecurityGroup(bool value) { SetAssociateDefaultSecurityGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template bandwidth throttling.</p>
     */
    inline long long GetBandwidthThrottling() const{ return m_bandwidthThrottling; }
    inline void SetBandwidthThrottling(long long value) { m_bandwidthThrottling = value; }
    inline CreateReplicationConfigurationTemplateResult& WithBandwidthThrottling(long long value) { SetBandwidthThrottling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template create Public IP.</p>
     */
    inline bool GetCreatePublicIP() const{ return m_createPublicIP; }
    inline void SetCreatePublicIP(bool value) { m_createPublicIP = value; }
    inline CreateReplicationConfigurationTemplateResult& WithCreatePublicIP(bool value) { SetCreatePublicIP(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template data plane routing.</p>
     */
    inline const ReplicationConfigurationDataPlaneRouting& GetDataPlaneRouting() const{ return m_dataPlaneRouting; }
    inline void SetDataPlaneRouting(const ReplicationConfigurationDataPlaneRouting& value) { m_dataPlaneRouting = value; }
    inline void SetDataPlaneRouting(ReplicationConfigurationDataPlaneRouting&& value) { m_dataPlaneRouting = std::move(value); }
    inline CreateReplicationConfigurationTemplateResult& WithDataPlaneRouting(const ReplicationConfigurationDataPlaneRouting& value) { SetDataPlaneRouting(value); return *this;}
    inline CreateReplicationConfigurationTemplateResult& WithDataPlaneRouting(ReplicationConfigurationDataPlaneRouting&& value) { SetDataPlaneRouting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template use default large Staging Disk type.</p>
     */
    inline const ReplicationConfigurationDefaultLargeStagingDiskType& GetDefaultLargeStagingDiskType() const{ return m_defaultLargeStagingDiskType; }
    inline void SetDefaultLargeStagingDiskType(const ReplicationConfigurationDefaultLargeStagingDiskType& value) { m_defaultLargeStagingDiskType = value; }
    inline void SetDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType&& value) { m_defaultLargeStagingDiskType = std::move(value); }
    inline CreateReplicationConfigurationTemplateResult& WithDefaultLargeStagingDiskType(const ReplicationConfigurationDefaultLargeStagingDiskType& value) { SetDefaultLargeStagingDiskType(value); return *this;}
    inline CreateReplicationConfigurationTemplateResult& WithDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType&& value) { SetDefaultLargeStagingDiskType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template EBS encryption.</p>
     */
    inline const ReplicationConfigurationEbsEncryption& GetEbsEncryption() const{ return m_ebsEncryption; }
    inline void SetEbsEncryption(const ReplicationConfigurationEbsEncryption& value) { m_ebsEncryption = value; }
    inline void SetEbsEncryption(ReplicationConfigurationEbsEncryption&& value) { m_ebsEncryption = std::move(value); }
    inline CreateReplicationConfigurationTemplateResult& WithEbsEncryption(const ReplicationConfigurationEbsEncryption& value) { SetEbsEncryption(value); return *this;}
    inline CreateReplicationConfigurationTemplateResult& WithEbsEncryption(ReplicationConfigurationEbsEncryption&& value) { SetEbsEncryption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template EBS encryption key ARN.</p>
     */
    inline const Aws::String& GetEbsEncryptionKeyArn() const{ return m_ebsEncryptionKeyArn; }
    inline void SetEbsEncryptionKeyArn(const Aws::String& value) { m_ebsEncryptionKeyArn = value; }
    inline void SetEbsEncryptionKeyArn(Aws::String&& value) { m_ebsEncryptionKeyArn = std::move(value); }
    inline void SetEbsEncryptionKeyArn(const char* value) { m_ebsEncryptionKeyArn.assign(value); }
    inline CreateReplicationConfigurationTemplateResult& WithEbsEncryptionKeyArn(const Aws::String& value) { SetEbsEncryptionKeyArn(value); return *this;}
    inline CreateReplicationConfigurationTemplateResult& WithEbsEncryptionKeyArn(Aws::String&& value) { SetEbsEncryptionKeyArn(std::move(value)); return *this;}
    inline CreateReplicationConfigurationTemplateResult& WithEbsEncryptionKeyArn(const char* value) { SetEbsEncryptionKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template ID.</p>
     */
    inline const Aws::String& GetReplicationConfigurationTemplateID() const{ return m_replicationConfigurationTemplateID; }
    inline void SetReplicationConfigurationTemplateID(const Aws::String& value) { m_replicationConfigurationTemplateID = value; }
    inline void SetReplicationConfigurationTemplateID(Aws::String&& value) { m_replicationConfigurationTemplateID = std::move(value); }
    inline void SetReplicationConfigurationTemplateID(const char* value) { m_replicationConfigurationTemplateID.assign(value); }
    inline CreateReplicationConfigurationTemplateResult& WithReplicationConfigurationTemplateID(const Aws::String& value) { SetReplicationConfigurationTemplateID(value); return *this;}
    inline CreateReplicationConfigurationTemplateResult& WithReplicationConfigurationTemplateID(Aws::String&& value) { SetReplicationConfigurationTemplateID(std::move(value)); return *this;}
    inline CreateReplicationConfigurationTemplateResult& WithReplicationConfigurationTemplateID(const char* value) { SetReplicationConfigurationTemplateID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template server instance type.</p>
     */
    inline const Aws::String& GetReplicationServerInstanceType() const{ return m_replicationServerInstanceType; }
    inline void SetReplicationServerInstanceType(const Aws::String& value) { m_replicationServerInstanceType = value; }
    inline void SetReplicationServerInstanceType(Aws::String&& value) { m_replicationServerInstanceType = std::move(value); }
    inline void SetReplicationServerInstanceType(const char* value) { m_replicationServerInstanceType.assign(value); }
    inline CreateReplicationConfigurationTemplateResult& WithReplicationServerInstanceType(const Aws::String& value) { SetReplicationServerInstanceType(value); return *this;}
    inline CreateReplicationConfigurationTemplateResult& WithReplicationServerInstanceType(Aws::String&& value) { SetReplicationServerInstanceType(std::move(value)); return *this;}
    inline CreateReplicationConfigurationTemplateResult& WithReplicationServerInstanceType(const char* value) { SetReplicationServerInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template server Security Groups IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationServersSecurityGroupsIDs() const{ return m_replicationServersSecurityGroupsIDs; }
    inline void SetReplicationServersSecurityGroupsIDs(const Aws::Vector<Aws::String>& value) { m_replicationServersSecurityGroupsIDs = value; }
    inline void SetReplicationServersSecurityGroupsIDs(Aws::Vector<Aws::String>&& value) { m_replicationServersSecurityGroupsIDs = std::move(value); }
    inline CreateReplicationConfigurationTemplateResult& WithReplicationServersSecurityGroupsIDs(const Aws::Vector<Aws::String>& value) { SetReplicationServersSecurityGroupsIDs(value); return *this;}
    inline CreateReplicationConfigurationTemplateResult& WithReplicationServersSecurityGroupsIDs(Aws::Vector<Aws::String>&& value) { SetReplicationServersSecurityGroupsIDs(std::move(value)); return *this;}
    inline CreateReplicationConfigurationTemplateResult& AddReplicationServersSecurityGroupsIDs(const Aws::String& value) { m_replicationServersSecurityGroupsIDs.push_back(value); return *this; }
    inline CreateReplicationConfigurationTemplateResult& AddReplicationServersSecurityGroupsIDs(Aws::String&& value) { m_replicationServersSecurityGroupsIDs.push_back(std::move(value)); return *this; }
    inline CreateReplicationConfigurationTemplateResult& AddReplicationServersSecurityGroupsIDs(const char* value) { m_replicationServersSecurityGroupsIDs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template Staging Area subnet ID.</p>
     */
    inline const Aws::String& GetStagingAreaSubnetId() const{ return m_stagingAreaSubnetId; }
    inline void SetStagingAreaSubnetId(const Aws::String& value) { m_stagingAreaSubnetId = value; }
    inline void SetStagingAreaSubnetId(Aws::String&& value) { m_stagingAreaSubnetId = std::move(value); }
    inline void SetStagingAreaSubnetId(const char* value) { m_stagingAreaSubnetId.assign(value); }
    inline CreateReplicationConfigurationTemplateResult& WithStagingAreaSubnetId(const Aws::String& value) { SetStagingAreaSubnetId(value); return *this;}
    inline CreateReplicationConfigurationTemplateResult& WithStagingAreaSubnetId(Aws::String&& value) { SetStagingAreaSubnetId(std::move(value)); return *this;}
    inline CreateReplicationConfigurationTemplateResult& WithStagingAreaSubnetId(const char* value) { SetStagingAreaSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template Staging Area Tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStagingAreaTags() const{ return m_stagingAreaTags; }
    inline void SetStagingAreaTags(const Aws::Map<Aws::String, Aws::String>& value) { m_stagingAreaTags = value; }
    inline void SetStagingAreaTags(Aws::Map<Aws::String, Aws::String>&& value) { m_stagingAreaTags = std::move(value); }
    inline CreateReplicationConfigurationTemplateResult& WithStagingAreaTags(const Aws::Map<Aws::String, Aws::String>& value) { SetStagingAreaTags(value); return *this;}
    inline CreateReplicationConfigurationTemplateResult& WithStagingAreaTags(Aws::Map<Aws::String, Aws::String>&& value) { SetStagingAreaTags(std::move(value)); return *this;}
    inline CreateReplicationConfigurationTemplateResult& AddStagingAreaTags(const Aws::String& key, const Aws::String& value) { m_stagingAreaTags.emplace(key, value); return *this; }
    inline CreateReplicationConfigurationTemplateResult& AddStagingAreaTags(Aws::String&& key, const Aws::String& value) { m_stagingAreaTags.emplace(std::move(key), value); return *this; }
    inline CreateReplicationConfigurationTemplateResult& AddStagingAreaTags(const Aws::String& key, Aws::String&& value) { m_stagingAreaTags.emplace(key, std::move(value)); return *this; }
    inline CreateReplicationConfigurationTemplateResult& AddStagingAreaTags(Aws::String&& key, Aws::String&& value) { m_stagingAreaTags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateReplicationConfigurationTemplateResult& AddStagingAreaTags(const char* key, Aws::String&& value) { m_stagingAreaTags.emplace(key, std::move(value)); return *this; }
    inline CreateReplicationConfigurationTemplateResult& AddStagingAreaTags(Aws::String&& key, const char* value) { m_stagingAreaTags.emplace(std::move(key), value); return *this; }
    inline CreateReplicationConfigurationTemplateResult& AddStagingAreaTags(const char* key, const char* value) { m_stagingAreaTags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template Tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreateReplicationConfigurationTemplateResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateReplicationConfigurationTemplateResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateReplicationConfigurationTemplateResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreateReplicationConfigurationTemplateResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateReplicationConfigurationTemplateResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateReplicationConfigurationTemplateResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateReplicationConfigurationTemplateResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateReplicationConfigurationTemplateResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateReplicationConfigurationTemplateResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template use Dedicated Replication Server.</p>
     */
    inline bool GetUseDedicatedReplicationServer() const{ return m_useDedicatedReplicationServer; }
    inline void SetUseDedicatedReplicationServer(bool value) { m_useDedicatedReplicationServer = value; }
    inline CreateReplicationConfigurationTemplateResult& WithUseDedicatedReplicationServer(bool value) { SetUseDedicatedReplicationServer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication Configuration template use Fips Endpoint.</p>
     */
    inline bool GetUseFipsEndpoint() const{ return m_useFipsEndpoint; }
    inline void SetUseFipsEndpoint(bool value) { m_useFipsEndpoint = value; }
    inline CreateReplicationConfigurationTemplateResult& WithUseFipsEndpoint(bool value) { SetUseFipsEndpoint(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateReplicationConfigurationTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateReplicationConfigurationTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateReplicationConfigurationTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    bool m_associateDefaultSecurityGroup;

    long long m_bandwidthThrottling;

    bool m_createPublicIP;

    ReplicationConfigurationDataPlaneRouting m_dataPlaneRouting;

    ReplicationConfigurationDefaultLargeStagingDiskType m_defaultLargeStagingDiskType;

    ReplicationConfigurationEbsEncryption m_ebsEncryption;

    Aws::String m_ebsEncryptionKeyArn;

    Aws::String m_replicationConfigurationTemplateID;

    Aws::String m_replicationServerInstanceType;

    Aws::Vector<Aws::String> m_replicationServersSecurityGroupsIDs;

    Aws::String m_stagingAreaSubnetId;

    Aws::Map<Aws::String, Aws::String> m_stagingAreaTags;

    Aws::Map<Aws::String, Aws::String> m_tags;

    bool m_useDedicatedReplicationServer;

    bool m_useFipsEndpoint;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
