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
  class ResetGraphResult
  {
  public:
    AWS_NEPTUNEGRAPH_API ResetGraphResult() = default;
    AWS_NEPTUNEGRAPH_API ResetGraphResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API ResetGraphResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the graph.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ResetGraphResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the graph.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ResetGraphResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN associated with the graph.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ResetGraphResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the graph.</p>
     */
    inline GraphStatus GetStatus() const { return m_status; }
    inline void SetStatus(GraphStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ResetGraphResult& WithStatus(GraphStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the graph has this status.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    ResetGraphResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the graph was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    ResetGraphResult& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of memory-optimized Neptune Capacity Units (m-NCUs) allocated to
     * the graph.</p>
     */
    inline int GetProvisionedMemory() const { return m_provisionedMemory; }
    inline void SetProvisionedMemory(int value) { m_provisionedMemoryHasBeenSet = true; m_provisionedMemory = value; }
    inline ResetGraphResult& WithProvisionedMemory(int value) { SetProvisionedMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The graph endpoint.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    ResetGraphResult& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, the graph has a public endpoint, otherwise not.</p>
     */
    inline bool GetPublicConnectivity() const { return m_publicConnectivity; }
    inline void SetPublicConnectivity(bool value) { m_publicConnectivityHasBeenSet = true; m_publicConnectivity = value; }
    inline ResetGraphResult& WithPublicConnectivity(bool value) { SetPublicConnectivity(value); return *this;}
    ///@}

    ///@{
    
    inline const VectorSearchConfiguration& GetVectorSearchConfiguration() const { return m_vectorSearchConfiguration; }
    template<typename VectorSearchConfigurationT = VectorSearchConfiguration>
    void SetVectorSearchConfiguration(VectorSearchConfigurationT&& value) { m_vectorSearchConfigurationHasBeenSet = true; m_vectorSearchConfiguration = std::forward<VectorSearchConfigurationT>(value); }
    template<typename VectorSearchConfigurationT = VectorSearchConfiguration>
    ResetGraphResult& WithVectorSearchConfiguration(VectorSearchConfigurationT&& value) { SetVectorSearchConfiguration(std::forward<VectorSearchConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of replicas for the graph.</p>
     */
    inline int GetReplicaCount() const { return m_replicaCount; }
    inline void SetReplicaCount(int value) { m_replicaCountHasBeenSet = true; m_replicaCount = value; }
    inline ResetGraphResult& WithReplicaCount(int value) { SetReplicaCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt and decrypt graph data.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const { return m_kmsKeyIdentifier; }
    template<typename KmsKeyIdentifierT = Aws::String>
    void SetKmsKeyIdentifier(KmsKeyIdentifierT&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::forward<KmsKeyIdentifierT>(value); }
    template<typename KmsKeyIdentifierT = Aws::String>
    ResetGraphResult& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) { SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the snapshot from which the graph was created, if any.</p>
     */
    inline const Aws::String& GetSourceSnapshotId() const { return m_sourceSnapshotId; }
    template<typename SourceSnapshotIdT = Aws::String>
    void SetSourceSnapshotId(SourceSnapshotIdT&& value) { m_sourceSnapshotIdHasBeenSet = true; m_sourceSnapshotId = std::forward<SourceSnapshotIdT>(value); }
    template<typename SourceSnapshotIdT = Aws::String>
    ResetGraphResult& WithSourceSnapshotId(SourceSnapshotIdT&& value) { SetSourceSnapshotId(std::forward<SourceSnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, deletion protection is enabled for the graph.</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline ResetGraphResult& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The build number of the graph.</p>
     */
    inline const Aws::String& GetBuildNumber() const { return m_buildNumber; }
    template<typename BuildNumberT = Aws::String>
    void SetBuildNumber(BuildNumberT&& value) { m_buildNumberHasBeenSet = true; m_buildNumber = std::forward<BuildNumberT>(value); }
    template<typename BuildNumberT = Aws::String>
    ResetGraphResult& WithBuildNumber(BuildNumberT&& value) { SetBuildNumber(std::forward<BuildNumberT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ResetGraphResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    GraphStatus m_status{GraphStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    int m_provisionedMemory{0};
    bool m_provisionedMemoryHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    bool m_publicConnectivity{false};
    bool m_publicConnectivityHasBeenSet = false;

    VectorSearchConfiguration m_vectorSearchConfiguration;
    bool m_vectorSearchConfigurationHasBeenSet = false;

    int m_replicaCount{0};
    bool m_replicaCountHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;

    Aws::String m_sourceSnapshotId;
    bool m_sourceSnapshotIdHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;

    Aws::String m_buildNumber;
    bool m_buildNumberHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
