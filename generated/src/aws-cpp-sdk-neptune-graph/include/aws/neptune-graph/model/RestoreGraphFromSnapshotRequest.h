/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/neptune-graph/NeptuneGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

  /**
   */
  class RestoreGraphFromSnapshotRequest : public NeptuneGraphRequest
  {
  public:
    AWS_NEPTUNEGRAPH_API RestoreGraphFromSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreGraphFromSnapshot"; }

    AWS_NEPTUNEGRAPH_API Aws::String SerializePayload() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_NEPTUNEGRAPH_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The ID of the snapshot in question.</p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const { return m_snapshotIdentifier; }
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }
    template<typename SnapshotIdentifierT = Aws::String>
    void SetSnapshotIdentifier(SnapshotIdentifierT&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::forward<SnapshotIdentifierT>(value); }
    template<typename SnapshotIdentifierT = Aws::String>
    RestoreGraphFromSnapshotRequest& WithSnapshotIdentifier(SnapshotIdentifierT&& value) { SetSnapshotIdentifier(std::forward<SnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the new Neptune Analytics graph to be created from the
     * snapshot.</p> <p>The name must contain from 1 to 63 letters, numbers, or
     * hyphens, and its first character must be a letter. It cannot end with a hyphen
     * or contain two consecutive hyphens. Only lowercase letters are allowed.</p>
     */
    inline const Aws::String& GetGraphName() const { return m_graphName; }
    inline bool GraphNameHasBeenSet() const { return m_graphNameHasBeenSet; }
    template<typename GraphNameT = Aws::String>
    void SetGraphName(GraphNameT&& value) { m_graphNameHasBeenSet = true; m_graphName = std::forward<GraphNameT>(value); }
    template<typename GraphNameT = Aws::String>
    RestoreGraphFromSnapshotRequest& WithGraphName(GraphNameT&& value) { SetGraphName(std::forward<GraphNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioned memory-optimized Neptune Capacity Units (m-NCUs) to use for
     * the graph.</p> <p>Min = 16</p>
     */
    inline int GetProvisionedMemory() const { return m_provisionedMemory; }
    inline bool ProvisionedMemoryHasBeenSet() const { return m_provisionedMemoryHasBeenSet; }
    inline void SetProvisionedMemory(int value) { m_provisionedMemoryHasBeenSet = true; m_provisionedMemory = value; }
    inline RestoreGraphFromSnapshotRequest& WithProvisionedMemory(int value) { SetProvisionedMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether the graph has deletion protection enabled. The
     * graph can't be deleted when deletion protection is enabled.</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline RestoreGraphFromSnapshotRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds metadata tags to the snapshot. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    RestoreGraphFromSnapshotRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    RestoreGraphFromSnapshotRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The number of replicas in other AZs. Min =0, Max = 2, Default =1</p>
     *  <p> Additional charges equivalent to the m-NCUs selected for the
     * graph apply for each replica. </p> 
     */
    inline int GetReplicaCount() const { return m_replicaCount; }
    inline bool ReplicaCountHasBeenSet() const { return m_replicaCountHasBeenSet; }
    inline void SetReplicaCount(int value) { m_replicaCountHasBeenSet = true; m_replicaCount = value; }
    inline RestoreGraphFromSnapshotRequest& WithReplicaCount(int value) { SetReplicaCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not the graph can be reachable over the internet. All
     * access to graphs is IAM authenticated. (<code>true</code> to enable, or
     * <code>false</code> to disable).</p>
     */
    inline bool GetPublicConnectivity() const { return m_publicConnectivity; }
    inline bool PublicConnectivityHasBeenSet() const { return m_publicConnectivityHasBeenSet; }
    inline void SetPublicConnectivity(bool value) { m_publicConnectivityHasBeenSet = true; m_publicConnectivity = value; }
    inline RestoreGraphFromSnapshotRequest& WithPublicConnectivity(bool value) { SetPublicConnectivity(value); return *this;}
    ///@}
  private:

    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet = false;

    Aws::String m_graphName;
    bool m_graphNameHasBeenSet = false;

    int m_provisionedMemory{0};
    bool m_provisionedMemoryHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_replicaCount{0};
    bool m_replicaCountHasBeenSet = false;

    bool m_publicConnectivity{false};
    bool m_publicConnectivityHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
