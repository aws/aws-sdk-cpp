/**
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
  class CreateGraphResult
  {
  public:
    AWS_NEPTUNEGRAPH_API CreateGraphResult();
    AWS_NEPTUNEGRAPH_API CreateGraphResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API CreateGraphResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the graph.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the graph.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the graph.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the graph.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the graph.</p>
     */
    inline CreateGraphResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the graph.</p>
     */
    inline CreateGraphResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the graph.</p>
     */
    inline CreateGraphResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The graph name. For example: <code>my-graph-1</code>.</p> <p>The name must
     * contain from 1 to 63 letters, numbers, or hyphens, and its first character must
     * be a letter. It cannot end with a hyphen or contain two consecutive hyphens.
     * </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The graph name. For example: <code>my-graph-1</code>.</p> <p>The name must
     * contain from 1 to 63 letters, numbers, or hyphens, and its first character must
     * be a letter. It cannot end with a hyphen or contain two consecutive hyphens.
     * </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The graph name. For example: <code>my-graph-1</code>.</p> <p>The name must
     * contain from 1 to 63 letters, numbers, or hyphens, and its first character must
     * be a letter. It cannot end with a hyphen or contain two consecutive hyphens.
     * </p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The graph name. For example: <code>my-graph-1</code>.</p> <p>The name must
     * contain from 1 to 63 letters, numbers, or hyphens, and its first character must
     * be a letter. It cannot end with a hyphen or contain two consecutive hyphens.
     * </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The graph name. For example: <code>my-graph-1</code>.</p> <p>The name must
     * contain from 1 to 63 letters, numbers, or hyphens, and its first character must
     * be a letter. It cannot end with a hyphen or contain two consecutive hyphens.
     * </p>
     */
    inline CreateGraphResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The graph name. For example: <code>my-graph-1</code>.</p> <p>The name must
     * contain from 1 to 63 letters, numbers, or hyphens, and its first character must
     * be a letter. It cannot end with a hyphen or contain two consecutive hyphens.
     * </p>
     */
    inline CreateGraphResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The graph name. For example: <code>my-graph-1</code>.</p> <p>The name must
     * contain from 1 to 63 letters, numbers, or hyphens, and its first character must
     * be a letter. It cannot end with a hyphen or contain two consecutive hyphens.
     * </p>
     */
    inline CreateGraphResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the graph.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the graph.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the graph.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the graph.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the graph.</p>
     */
    inline CreateGraphResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the graph.</p>
     */
    inline CreateGraphResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the graph.</p>
     */
    inline CreateGraphResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The current status of the graph.</p>
     */
    inline const GraphStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the graph.</p>
     */
    inline void SetStatus(const GraphStatus& value) { m_status = value; }

    /**
     * <p>The current status of the graph.</p>
     */
    inline void SetStatus(GraphStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the graph.</p>
     */
    inline CreateGraphResult& WithStatus(const GraphStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the graph.</p>
     */
    inline CreateGraphResult& WithStatus(GraphStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason the status was given.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason the status was given.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }

    /**
     * <p>The reason the status was given.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }

    /**
     * <p>The reason the status was given.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }

    /**
     * <p>The reason the status was given.</p>
     */
    inline CreateGraphResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason the status was given.</p>
     */
    inline CreateGraphResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason the status was given.</p>
     */
    inline CreateGraphResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The time when the graph was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time when the graph was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The time when the graph was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The time when the graph was created.</p>
     */
    inline CreateGraphResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time when the graph was created.</p>
     */
    inline CreateGraphResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The provisioned memory-optimized Neptune Capacity Units (m-NCUs) to use for
     * the graph. Min = 128</p>
     */
    inline int GetProvisionedMemory() const{ return m_provisionedMemory; }

    /**
     * <p>The provisioned memory-optimized Neptune Capacity Units (m-NCUs) to use for
     * the graph. Min = 128</p>
     */
    inline void SetProvisionedMemory(int value) { m_provisionedMemory = value; }

    /**
     * <p>The provisioned memory-optimized Neptune Capacity Units (m-NCUs) to use for
     * the graph. Min = 128</p>
     */
    inline CreateGraphResult& WithProvisionedMemory(int value) { SetProvisionedMemory(value); return *this;}


    /**
     * <p>The graph endpoint.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The graph endpoint.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpoint = value; }

    /**
     * <p>The graph endpoint.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpoint = std::move(value); }

    /**
     * <p>The graph endpoint.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpoint.assign(value); }

    /**
     * <p>The graph endpoint.</p>
     */
    inline CreateGraphResult& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The graph endpoint.</p>
     */
    inline CreateGraphResult& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The graph endpoint.</p>
     */
    inline CreateGraphResult& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>Specifies whether or not the graph can be reachable over the internet. All
     * access to graphs is IAM authenticated.</p>
     */
    inline bool GetPublicConnectivity() const{ return m_publicConnectivity; }

    /**
     * <p>Specifies whether or not the graph can be reachable over the internet. All
     * access to graphs is IAM authenticated.</p>
     */
    inline void SetPublicConnectivity(bool value) { m_publicConnectivity = value; }

    /**
     * <p>Specifies whether or not the graph can be reachable over the internet. All
     * access to graphs is IAM authenticated.</p>
     */
    inline CreateGraphResult& WithPublicConnectivity(bool value) { SetPublicConnectivity(value); return *this;}


    /**
     * <p>The vector-search configuration for the graph, which specifies the vector
     * dimension to use in the vector index, if any.</p>
     */
    inline const VectorSearchConfiguration& GetVectorSearchConfiguration() const{ return m_vectorSearchConfiguration; }

    /**
     * <p>The vector-search configuration for the graph, which specifies the vector
     * dimension to use in the vector index, if any.</p>
     */
    inline void SetVectorSearchConfiguration(const VectorSearchConfiguration& value) { m_vectorSearchConfiguration = value; }

    /**
     * <p>The vector-search configuration for the graph, which specifies the vector
     * dimension to use in the vector index, if any.</p>
     */
    inline void SetVectorSearchConfiguration(VectorSearchConfiguration&& value) { m_vectorSearchConfiguration = std::move(value); }

    /**
     * <p>The vector-search configuration for the graph, which specifies the vector
     * dimension to use in the vector index, if any.</p>
     */
    inline CreateGraphResult& WithVectorSearchConfiguration(const VectorSearchConfiguration& value) { SetVectorSearchConfiguration(value); return *this;}

    /**
     * <p>The vector-search configuration for the graph, which specifies the vector
     * dimension to use in the vector index, if any.</p>
     */
    inline CreateGraphResult& WithVectorSearchConfiguration(VectorSearchConfiguration&& value) { SetVectorSearchConfiguration(std::move(value)); return *this;}


    /**
     * <p>The number of replicas in other AZs.</p>
     */
    inline int GetReplicaCount() const{ return m_replicaCount; }

    /**
     * <p>The number of replicas in other AZs.</p>
     */
    inline void SetReplicaCount(int value) { m_replicaCount = value; }

    /**
     * <p>The number of replicas in other AZs.</p>
     */
    inline CreateGraphResult& WithReplicaCount(int value) { SetReplicaCount(value); return *this;}


    /**
     * <p>Specifies the KMS key used to encrypt data in the new graph.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const{ return m_kmsKeyIdentifier; }

    /**
     * <p>Specifies the KMS key used to encrypt data in the new graph.</p>
     */
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifier = value; }

    /**
     * <p>Specifies the KMS key used to encrypt data in the new graph.</p>
     */
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifier = std::move(value); }

    /**
     * <p>Specifies the KMS key used to encrypt data in the new graph.</p>
     */
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifier.assign(value); }

    /**
     * <p>Specifies the KMS key used to encrypt data in the new graph.</p>
     */
    inline CreateGraphResult& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}

    /**
     * <p>Specifies the KMS key used to encrypt data in the new graph.</p>
     */
    inline CreateGraphResult& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies the KMS key used to encrypt data in the new graph.</p>
     */
    inline CreateGraphResult& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}


    /**
     * <p>The ID of the source graph.</p>
     */
    inline const Aws::String& GetSourceSnapshotId() const{ return m_sourceSnapshotId; }

    /**
     * <p>The ID of the source graph.</p>
     */
    inline void SetSourceSnapshotId(const Aws::String& value) { m_sourceSnapshotId = value; }

    /**
     * <p>The ID of the source graph.</p>
     */
    inline void SetSourceSnapshotId(Aws::String&& value) { m_sourceSnapshotId = std::move(value); }

    /**
     * <p>The ID of the source graph.</p>
     */
    inline void SetSourceSnapshotId(const char* value) { m_sourceSnapshotId.assign(value); }

    /**
     * <p>The ID of the source graph.</p>
     */
    inline CreateGraphResult& WithSourceSnapshotId(const Aws::String& value) { SetSourceSnapshotId(value); return *this;}

    /**
     * <p>The ID of the source graph.</p>
     */
    inline CreateGraphResult& WithSourceSnapshotId(Aws::String&& value) { SetSourceSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the source graph.</p>
     */
    inline CreateGraphResult& WithSourceSnapshotId(const char* value) { SetSourceSnapshotId(value); return *this;}


    /**
     * <p>A value that indicates whether the graph has deletion protection enabled. The
     * graph can't be deleted when deletion protection is enabled.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>A value that indicates whether the graph has deletion protection enabled. The
     * graph can't be deleted when deletion protection is enabled.</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtection = value; }

    /**
     * <p>A value that indicates whether the graph has deletion protection enabled. The
     * graph can't be deleted when deletion protection is enabled.</p>
     */
    inline CreateGraphResult& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p>The build number of the graph software.</p>
     */
    inline const Aws::String& GetBuildNumber() const{ return m_buildNumber; }

    /**
     * <p>The build number of the graph software.</p>
     */
    inline void SetBuildNumber(const Aws::String& value) { m_buildNumber = value; }

    /**
     * <p>The build number of the graph software.</p>
     */
    inline void SetBuildNumber(Aws::String&& value) { m_buildNumber = std::move(value); }

    /**
     * <p>The build number of the graph software.</p>
     */
    inline void SetBuildNumber(const char* value) { m_buildNumber.assign(value); }

    /**
     * <p>The build number of the graph software.</p>
     */
    inline CreateGraphResult& WithBuildNumber(const Aws::String& value) { SetBuildNumber(value); return *this;}

    /**
     * <p>The build number of the graph software.</p>
     */
    inline CreateGraphResult& WithBuildNumber(Aws::String&& value) { SetBuildNumber(std::move(value)); return *this;}

    /**
     * <p>The build number of the graph software.</p>
     */
    inline CreateGraphResult& WithBuildNumber(const char* value) { SetBuildNumber(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateGraphResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateGraphResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateGraphResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
