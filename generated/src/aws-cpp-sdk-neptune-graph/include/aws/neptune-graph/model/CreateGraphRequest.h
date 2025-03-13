/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/neptune-graph/NeptuneGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/neptune-graph/model/VectorSearchConfiguration.h>
#include <utility>

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

  /**
   */
  class CreateGraphRequest : public NeptuneGraphRequest
  {
  public:
    AWS_NEPTUNEGRAPH_API CreateGraphRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGraph"; }

    AWS_NEPTUNEGRAPH_API Aws::String SerializePayload() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_NEPTUNEGRAPH_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>A name for the new Neptune Analytics graph to be created.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens. Only lowercase letters are allowed.</p>
     */
    inline const Aws::String& GetGraphName() const { return m_graphName; }
    inline bool GraphNameHasBeenSet() const { return m_graphNameHasBeenSet; }
    template<typename GraphNameT = Aws::String>
    void SetGraphName(GraphNameT&& value) { m_graphNameHasBeenSet = true; m_graphName = std::forward<GraphNameT>(value); }
    template<typename GraphNameT = Aws::String>
    CreateGraphRequest& WithGraphName(GraphNameT&& value) { SetGraphName(std::forward<GraphNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds metadata tags to the new graph. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateGraphRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateGraphRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not the graph can be reachable over the internet. All
     * access to graphs is IAM authenticated. (<code>true</code> to enable, or
     * <code>false</code> to disable.</p>
     */
    inline bool GetPublicConnectivity() const { return m_publicConnectivity; }
    inline bool PublicConnectivityHasBeenSet() const { return m_publicConnectivityHasBeenSet; }
    inline void SetPublicConnectivity(bool value) { m_publicConnectivityHasBeenSet = true; m_publicConnectivity = value; }
    inline CreateGraphRequest& WithPublicConnectivity(bool value) { SetPublicConnectivity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a KMS key to use to encrypt data in the new graph.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const { return m_kmsKeyIdentifier; }
    inline bool KmsKeyIdentifierHasBeenSet() const { return m_kmsKeyIdentifierHasBeenSet; }
    template<typename KmsKeyIdentifierT = Aws::String>
    void SetKmsKeyIdentifier(KmsKeyIdentifierT&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::forward<KmsKeyIdentifierT>(value); }
    template<typename KmsKeyIdentifierT = Aws::String>
    CreateGraphRequest& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) { SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of dimensions for vector embeddings that will be loaded
     * into the graph. The value is specified as <code>dimension=</code>value. Max =
     * 65,535</p>
     */
    inline const VectorSearchConfiguration& GetVectorSearchConfiguration() const { return m_vectorSearchConfiguration; }
    inline bool VectorSearchConfigurationHasBeenSet() const { return m_vectorSearchConfigurationHasBeenSet; }
    template<typename VectorSearchConfigurationT = VectorSearchConfiguration>
    void SetVectorSearchConfiguration(VectorSearchConfigurationT&& value) { m_vectorSearchConfigurationHasBeenSet = true; m_vectorSearchConfiguration = std::forward<VectorSearchConfigurationT>(value); }
    template<typename VectorSearchConfigurationT = VectorSearchConfiguration>
    CreateGraphRequest& WithVectorSearchConfiguration(VectorSearchConfigurationT&& value) { SetVectorSearchConfiguration(std::forward<VectorSearchConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of replicas in other AZs. Min =0, Max = 2, Default = 1.</p>
     *  <p> Additional charges equivalent to the m-NCUs selected for the
     * graph apply for each replica. </p> 
     */
    inline int GetReplicaCount() const { return m_replicaCount; }
    inline bool ReplicaCountHasBeenSet() const { return m_replicaCountHasBeenSet; }
    inline void SetReplicaCount(int value) { m_replicaCountHasBeenSet = true; m_replicaCount = value; }
    inline CreateGraphRequest& WithReplicaCount(int value) { SetReplicaCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not to enable deletion protection on the graph. The
     * graph can’t be deleted when deletion protection is enabled. (<code>true</code>
     * or <code>false</code>).</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline CreateGraphRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioned memory-optimized Neptune Capacity Units (m-NCUs) to use for
     * the graph. Min = 16</p>
     */
    inline int GetProvisionedMemory() const { return m_provisionedMemory; }
    inline bool ProvisionedMemoryHasBeenSet() const { return m_provisionedMemoryHasBeenSet; }
    inline void SetProvisionedMemory(int value) { m_provisionedMemoryHasBeenSet = true; m_provisionedMemory = value; }
    inline CreateGraphRequest& WithProvisionedMemory(int value) { SetProvisionedMemory(value); return *this;}
    ///@}
  private:

    Aws::String m_graphName;
    bool m_graphNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_publicConnectivity{false};
    bool m_publicConnectivityHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;

    VectorSearchConfiguration m_vectorSearchConfiguration;
    bool m_vectorSearchConfigurationHasBeenSet = false;

    int m_replicaCount{0};
    bool m_replicaCountHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;

    int m_provisionedMemory{0};
    bool m_provisionedMemoryHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
