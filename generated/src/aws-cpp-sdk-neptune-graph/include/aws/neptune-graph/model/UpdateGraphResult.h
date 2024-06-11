﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/model/GraphStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/neptune-graph/model/VectorSearchConfiguration.h>
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
namespace NeptuneGraph
{
namespace Model
{
  class UpdateGraphResult
  {
  public:
    AWS_NEPTUNEGRAPH_API UpdateGraphResult();
    AWS_NEPTUNEGRAPH_API UpdateGraphResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API UpdateGraphResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the graph.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateGraphResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateGraphResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateGraphResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the graph.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateGraphResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateGraphResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateGraphResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN associated with the graph.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateGraphResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateGraphResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateGraphResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the graph.</p>
     */
    inline const GraphStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const GraphStatus& value) { m_status = value; }
    inline void SetStatus(GraphStatus&& value) { m_status = std::move(value); }
    inline UpdateGraphResult& WithStatus(const GraphStatus& value) { SetStatus(value); return *this;}
    inline UpdateGraphResult& WithStatus(GraphStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the graph has this status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline UpdateGraphResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline UpdateGraphResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline UpdateGraphResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the graph was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }
    inline UpdateGraphResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline UpdateGraphResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of memory-optimized Neptune Capacity Units (m-NCUs) allocated to
     * the graph.</p>
     */
    inline int GetProvisionedMemory() const{ return m_provisionedMemory; }
    inline void SetProvisionedMemory(int value) { m_provisionedMemory = value; }
    inline UpdateGraphResult& WithProvisionedMemory(int value) { SetProvisionedMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The graph endpoint.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline void SetEndpoint(const Aws::String& value) { m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpoint.assign(value); }
    inline UpdateGraphResult& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline UpdateGraphResult& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline UpdateGraphResult& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, the graph has a public endpoint, otherwise not.</p>
     */
    inline bool GetPublicConnectivity() const{ return m_publicConnectivity; }
    inline void SetPublicConnectivity(bool value) { m_publicConnectivity = value; }
    inline UpdateGraphResult& WithPublicConnectivity(bool value) { SetPublicConnectivity(value); return *this;}
    ///@}

    ///@{
    
    inline const VectorSearchConfiguration& GetVectorSearchConfiguration() const{ return m_vectorSearchConfiguration; }
    inline void SetVectorSearchConfiguration(const VectorSearchConfiguration& value) { m_vectorSearchConfiguration = value; }
    inline void SetVectorSearchConfiguration(VectorSearchConfiguration&& value) { m_vectorSearchConfiguration = std::move(value); }
    inline UpdateGraphResult& WithVectorSearchConfiguration(const VectorSearchConfiguration& value) { SetVectorSearchConfiguration(value); return *this;}
    inline UpdateGraphResult& WithVectorSearchConfiguration(VectorSearchConfiguration&& value) { SetVectorSearchConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of replicas for the graph.</p>
     */
    inline int GetReplicaCount() const{ return m_replicaCount; }
    inline void SetReplicaCount(int value) { m_replicaCount = value; }
    inline UpdateGraphResult& WithReplicaCount(int value) { SetReplicaCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt and decrypt graph data.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const{ return m_kmsKeyIdentifier; }
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifier = value; }
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifier = std::move(value); }
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifier.assign(value); }
    inline UpdateGraphResult& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}
    inline UpdateGraphResult& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}
    inline UpdateGraphResult& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the snapshot from which the graph was created, if any.</p>
     */
    inline const Aws::String& GetSourceSnapshotId() const{ return m_sourceSnapshotId; }
    inline void SetSourceSnapshotId(const Aws::String& value) { m_sourceSnapshotId = value; }
    inline void SetSourceSnapshotId(Aws::String&& value) { m_sourceSnapshotId = std::move(value); }
    inline void SetSourceSnapshotId(const char* value) { m_sourceSnapshotId.assign(value); }
    inline UpdateGraphResult& WithSourceSnapshotId(const Aws::String& value) { SetSourceSnapshotId(value); return *this;}
    inline UpdateGraphResult& WithSourceSnapshotId(Aws::String&& value) { SetSourceSnapshotId(std::move(value)); return *this;}
    inline UpdateGraphResult& WithSourceSnapshotId(const char* value) { SetSourceSnapshotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, deletion protection is enabled for the graph.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }
    inline void SetDeletionProtection(bool value) { m_deletionProtection = value; }
    inline UpdateGraphResult& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The build number of the graph.</p>
     */
    inline const Aws::String& GetBuildNumber() const{ return m_buildNumber; }
    inline void SetBuildNumber(const Aws::String& value) { m_buildNumber = value; }
    inline void SetBuildNumber(Aws::String&& value) { m_buildNumber = std::move(value); }
    inline void SetBuildNumber(const char* value) { m_buildNumber.assign(value); }
    inline UpdateGraphResult& WithBuildNumber(const Aws::String& value) { SetBuildNumber(value); return *this;}
    inline UpdateGraphResult& WithBuildNumber(Aws::String&& value) { SetBuildNumber(std::move(value)); return *this;}
    inline UpdateGraphResult& WithBuildNumber(const char* value) { SetBuildNumber(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateGraphResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateGraphResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateGraphResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_arn;

    GraphStatus m_status;

    Aws::String m_statusReason;

    Aws::Utils::DateTime m_createTime;

    int m_provisionedMemory;

    Aws::String m_endpoint;

    bool m_publicConnectivity;

    VectorSearchConfiguration m_vectorSearchConfiguration;

    int m_replicaCount;

    Aws::String m_kmsKeyIdentifier;

    Aws::String m_sourceSnapshotId;

    bool m_deletionProtection;

    Aws::String m_buildNumber;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
