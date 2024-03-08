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
    AWS_NEPTUNEGRAPH_API CreateGraphRequest();

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

    /**
     * <p>A name for the new Neptune Analytics graph to be created.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens. </p>
     */
    inline const Aws::String& GetGraphName() const{ return m_graphName; }

    /**
     * <p>A name for the new Neptune Analytics graph to be created.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens. </p>
     */
    inline bool GraphNameHasBeenSet() const { return m_graphNameHasBeenSet; }

    /**
     * <p>A name for the new Neptune Analytics graph to be created.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens. </p>
     */
    inline void SetGraphName(const Aws::String& value) { m_graphNameHasBeenSet = true; m_graphName = value; }

    /**
     * <p>A name for the new Neptune Analytics graph to be created.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens. </p>
     */
    inline void SetGraphName(Aws::String&& value) { m_graphNameHasBeenSet = true; m_graphName = std::move(value); }

    /**
     * <p>A name for the new Neptune Analytics graph to be created.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens. </p>
     */
    inline void SetGraphName(const char* value) { m_graphNameHasBeenSet = true; m_graphName.assign(value); }

    /**
     * <p>A name for the new Neptune Analytics graph to be created.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens. </p>
     */
    inline CreateGraphRequest& WithGraphName(const Aws::String& value) { SetGraphName(value); return *this;}

    /**
     * <p>A name for the new Neptune Analytics graph to be created.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens. </p>
     */
    inline CreateGraphRequest& WithGraphName(Aws::String&& value) { SetGraphName(std::move(value)); return *this;}

    /**
     * <p>A name for the new Neptune Analytics graph to be created.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens. </p>
     */
    inline CreateGraphRequest& WithGraphName(const char* value) { SetGraphName(value); return *this;}


    /**
     * <p>Adds metadata tags to the new graph. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Adds metadata tags to the new graph. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Adds metadata tags to the new graph. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Adds metadata tags to the new graph. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Adds metadata tags to the new graph. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline CreateGraphRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Adds metadata tags to the new graph. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline CreateGraphRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Adds metadata tags to the new graph. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline CreateGraphRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Adds metadata tags to the new graph. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline CreateGraphRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Adds metadata tags to the new graph. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline CreateGraphRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Adds metadata tags to the new graph. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline CreateGraphRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Adds metadata tags to the new graph. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline CreateGraphRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Adds metadata tags to the new graph. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline CreateGraphRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Adds metadata tags to the new graph. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline CreateGraphRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Specifies whether or not the graph can be reachable over the internet. All
     * access to graphs is IAM authenticated. (<code>true</code> to enable, or
     * <code>false</code> to disable.</p>
     */
    inline bool GetPublicConnectivity() const{ return m_publicConnectivity; }

    /**
     * <p>Specifies whether or not the graph can be reachable over the internet. All
     * access to graphs is IAM authenticated. (<code>true</code> to enable, or
     * <code>false</code> to disable.</p>
     */
    inline bool PublicConnectivityHasBeenSet() const { return m_publicConnectivityHasBeenSet; }

    /**
     * <p>Specifies whether or not the graph can be reachable over the internet. All
     * access to graphs is IAM authenticated. (<code>true</code> to enable, or
     * <code>false</code> to disable.</p>
     */
    inline void SetPublicConnectivity(bool value) { m_publicConnectivityHasBeenSet = true; m_publicConnectivity = value; }

    /**
     * <p>Specifies whether or not the graph can be reachable over the internet. All
     * access to graphs is IAM authenticated. (<code>true</code> to enable, or
     * <code>false</code> to disable.</p>
     */
    inline CreateGraphRequest& WithPublicConnectivity(bool value) { SetPublicConnectivity(value); return *this;}


    /**
     * <p>Specifies a KMS key to use to encrypt data in the new graph.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const{ return m_kmsKeyIdentifier; }

    /**
     * <p>Specifies a KMS key to use to encrypt data in the new graph.</p>
     */
    inline bool KmsKeyIdentifierHasBeenSet() const { return m_kmsKeyIdentifierHasBeenSet; }

    /**
     * <p>Specifies a KMS key to use to encrypt data in the new graph.</p>
     */
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = value; }

    /**
     * <p>Specifies a KMS key to use to encrypt data in the new graph.</p>
     */
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::move(value); }

    /**
     * <p>Specifies a KMS key to use to encrypt data in the new graph.</p>
     */
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier.assign(value); }

    /**
     * <p>Specifies a KMS key to use to encrypt data in the new graph.</p>
     */
    inline CreateGraphRequest& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}

    /**
     * <p>Specifies a KMS key to use to encrypt data in the new graph.</p>
     */
    inline CreateGraphRequest& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies a KMS key to use to encrypt data in the new graph.</p>
     */
    inline CreateGraphRequest& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}


    /**
     * <p>Specifies the number of dimensions for vector embeddings that will be loaded
     * into the graph. The value is specified as <code>dimension=</code>value. Max =
     * 65,535</p>
     */
    inline const VectorSearchConfiguration& GetVectorSearchConfiguration() const{ return m_vectorSearchConfiguration; }

    /**
     * <p>Specifies the number of dimensions for vector embeddings that will be loaded
     * into the graph. The value is specified as <code>dimension=</code>value. Max =
     * 65,535</p>
     */
    inline bool VectorSearchConfigurationHasBeenSet() const { return m_vectorSearchConfigurationHasBeenSet; }

    /**
     * <p>Specifies the number of dimensions for vector embeddings that will be loaded
     * into the graph. The value is specified as <code>dimension=</code>value. Max =
     * 65,535</p>
     */
    inline void SetVectorSearchConfiguration(const VectorSearchConfiguration& value) { m_vectorSearchConfigurationHasBeenSet = true; m_vectorSearchConfiguration = value; }

    /**
     * <p>Specifies the number of dimensions for vector embeddings that will be loaded
     * into the graph. The value is specified as <code>dimension=</code>value. Max =
     * 65,535</p>
     */
    inline void SetVectorSearchConfiguration(VectorSearchConfiguration&& value) { m_vectorSearchConfigurationHasBeenSet = true; m_vectorSearchConfiguration = std::move(value); }

    /**
     * <p>Specifies the number of dimensions for vector embeddings that will be loaded
     * into the graph. The value is specified as <code>dimension=</code>value. Max =
     * 65,535</p>
     */
    inline CreateGraphRequest& WithVectorSearchConfiguration(const VectorSearchConfiguration& value) { SetVectorSearchConfiguration(value); return *this;}

    /**
     * <p>Specifies the number of dimensions for vector embeddings that will be loaded
     * into the graph. The value is specified as <code>dimension=</code>value. Max =
     * 65,535</p>
     */
    inline CreateGraphRequest& WithVectorSearchConfiguration(VectorSearchConfiguration&& value) { SetVectorSearchConfiguration(std::move(value)); return *this;}


    /**
     * <p>The number of replicas in other AZs. Min =0, Max = 2, Default = 1.</p>
     */
    inline int GetReplicaCount() const{ return m_replicaCount; }

    /**
     * <p>The number of replicas in other AZs. Min =0, Max = 2, Default = 1.</p>
     */
    inline bool ReplicaCountHasBeenSet() const { return m_replicaCountHasBeenSet; }

    /**
     * <p>The number of replicas in other AZs. Min =0, Max = 2, Default = 1.</p>
     */
    inline void SetReplicaCount(int value) { m_replicaCountHasBeenSet = true; m_replicaCount = value; }

    /**
     * <p>The number of replicas in other AZs. Min =0, Max = 2, Default = 1.</p>
     */
    inline CreateGraphRequest& WithReplicaCount(int value) { SetReplicaCount(value); return *this;}


    /**
     * <p>Indicates whether or not to enable deletion protection on the graph. The
     * graph can’t be deleted when deletion protection is enabled. (<code>true</code>
     * or <code>false</code>).</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>Indicates whether or not to enable deletion protection on the graph. The
     * graph can’t be deleted when deletion protection is enabled. (<code>true</code>
     * or <code>false</code>).</p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>Indicates whether or not to enable deletion protection on the graph. The
     * graph can’t be deleted when deletion protection is enabled. (<code>true</code>
     * or <code>false</code>).</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>Indicates whether or not to enable deletion protection on the graph. The
     * graph can’t be deleted when deletion protection is enabled. (<code>true</code>
     * or <code>false</code>).</p>
     */
    inline CreateGraphRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p>The provisioned memory-optimized Neptune Capacity Units (m-NCUs) to use for
     * the graph. Min = 128</p>
     */
    inline int GetProvisionedMemory() const{ return m_provisionedMemory; }

    /**
     * <p>The provisioned memory-optimized Neptune Capacity Units (m-NCUs) to use for
     * the graph. Min = 128</p>
     */
    inline bool ProvisionedMemoryHasBeenSet() const { return m_provisionedMemoryHasBeenSet; }

    /**
     * <p>The provisioned memory-optimized Neptune Capacity Units (m-NCUs) to use for
     * the graph. Min = 128</p>
     */
    inline void SetProvisionedMemory(int value) { m_provisionedMemoryHasBeenSet = true; m_provisionedMemory = value; }

    /**
     * <p>The provisioned memory-optimized Neptune Capacity Units (m-NCUs) to use for
     * the graph. Min = 128</p>
     */
    inline CreateGraphRequest& WithProvisionedMemory(int value) { SetProvisionedMemory(value); return *this;}

  private:

    Aws::String m_graphName;
    bool m_graphNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_publicConnectivity;
    bool m_publicConnectivityHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;

    VectorSearchConfiguration m_vectorSearchConfiguration;
    bool m_vectorSearchConfigurationHasBeenSet = false;

    int m_replicaCount;
    bool m_replicaCountHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    int m_provisionedMemory;
    bool m_provisionedMemoryHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
