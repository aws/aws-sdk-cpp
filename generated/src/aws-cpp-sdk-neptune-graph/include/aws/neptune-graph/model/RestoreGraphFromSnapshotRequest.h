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
    AWS_NEPTUNEGRAPH_API RestoreGraphFromSnapshotRequest();

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

    /**
     * <p>The ID of the snapshot in question.</p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }

    /**
     * <p>The ID of the snapshot in question.</p>
     */
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }

    /**
     * <p>The ID of the snapshot in question.</p>
     */
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }

    /**
     * <p>The ID of the snapshot in question.</p>
     */
    inline void SetSnapshotIdentifier(Aws::String&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::move(value); }

    /**
     * <p>The ID of the snapshot in question.</p>
     */
    inline void SetSnapshotIdentifier(const char* value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier.assign(value); }

    /**
     * <p>The ID of the snapshot in question.</p>
     */
    inline RestoreGraphFromSnapshotRequest& WithSnapshotIdentifier(const Aws::String& value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The ID of the snapshot in question.</p>
     */
    inline RestoreGraphFromSnapshotRequest& WithSnapshotIdentifier(Aws::String&& value) { SetSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot in question.</p>
     */
    inline RestoreGraphFromSnapshotRequest& WithSnapshotIdentifier(const char* value) { SetSnapshotIdentifier(value); return *this;}


    /**
     * <p>A name for the new Neptune Analytics graph to be created from the
     * snapshot.</p> <p>The name must contain from 1 to 63 letters, numbers, or
     * hyphens, and its first character must be a letter. It cannot end with a hyphen
     * or contain two consecutive hyphens. </p>
     */
    inline const Aws::String& GetGraphName() const{ return m_graphName; }

    /**
     * <p>A name for the new Neptune Analytics graph to be created from the
     * snapshot.</p> <p>The name must contain from 1 to 63 letters, numbers, or
     * hyphens, and its first character must be a letter. It cannot end with a hyphen
     * or contain two consecutive hyphens. </p>
     */
    inline bool GraphNameHasBeenSet() const { return m_graphNameHasBeenSet; }

    /**
     * <p>A name for the new Neptune Analytics graph to be created from the
     * snapshot.</p> <p>The name must contain from 1 to 63 letters, numbers, or
     * hyphens, and its first character must be a letter. It cannot end with a hyphen
     * or contain two consecutive hyphens. </p>
     */
    inline void SetGraphName(const Aws::String& value) { m_graphNameHasBeenSet = true; m_graphName = value; }

    /**
     * <p>A name for the new Neptune Analytics graph to be created from the
     * snapshot.</p> <p>The name must contain from 1 to 63 letters, numbers, or
     * hyphens, and its first character must be a letter. It cannot end with a hyphen
     * or contain two consecutive hyphens. </p>
     */
    inline void SetGraphName(Aws::String&& value) { m_graphNameHasBeenSet = true; m_graphName = std::move(value); }

    /**
     * <p>A name for the new Neptune Analytics graph to be created from the
     * snapshot.</p> <p>The name must contain from 1 to 63 letters, numbers, or
     * hyphens, and its first character must be a letter. It cannot end with a hyphen
     * or contain two consecutive hyphens. </p>
     */
    inline void SetGraphName(const char* value) { m_graphNameHasBeenSet = true; m_graphName.assign(value); }

    /**
     * <p>A name for the new Neptune Analytics graph to be created from the
     * snapshot.</p> <p>The name must contain from 1 to 63 letters, numbers, or
     * hyphens, and its first character must be a letter. It cannot end with a hyphen
     * or contain two consecutive hyphens. </p>
     */
    inline RestoreGraphFromSnapshotRequest& WithGraphName(const Aws::String& value) { SetGraphName(value); return *this;}

    /**
     * <p>A name for the new Neptune Analytics graph to be created from the
     * snapshot.</p> <p>The name must contain from 1 to 63 letters, numbers, or
     * hyphens, and its first character must be a letter. It cannot end with a hyphen
     * or contain two consecutive hyphens. </p>
     */
    inline RestoreGraphFromSnapshotRequest& WithGraphName(Aws::String&& value) { SetGraphName(std::move(value)); return *this;}

    /**
     * <p>A name for the new Neptune Analytics graph to be created from the
     * snapshot.</p> <p>The name must contain from 1 to 63 letters, numbers, or
     * hyphens, and its first character must be a letter. It cannot end with a hyphen
     * or contain two consecutive hyphens. </p>
     */
    inline RestoreGraphFromSnapshotRequest& WithGraphName(const char* value) { SetGraphName(value); return *this;}


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
    inline RestoreGraphFromSnapshotRequest& WithProvisionedMemory(int value) { SetProvisionedMemory(value); return *this;}


    /**
     * <p>A value that indicates whether the graph has deletion protection enabled. The
     * graph can't be deleted when deletion protection is enabled.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>A value that indicates whether the graph has deletion protection enabled. The
     * graph can't be deleted when deletion protection is enabled.</p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>A value that indicates whether the graph has deletion protection enabled. The
     * graph can't be deleted when deletion protection is enabled.</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>A value that indicates whether the graph has deletion protection enabled. The
     * graph can't be deleted when deletion protection is enabled.</p>
     */
    inline RestoreGraphFromSnapshotRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p>Adds metadata tags to the snapshot. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Adds metadata tags to the snapshot. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Adds metadata tags to the snapshot. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Adds metadata tags to the snapshot. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Adds metadata tags to the snapshot. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline RestoreGraphFromSnapshotRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Adds metadata tags to the snapshot. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline RestoreGraphFromSnapshotRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Adds metadata tags to the snapshot. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline RestoreGraphFromSnapshotRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Adds metadata tags to the snapshot. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline RestoreGraphFromSnapshotRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Adds metadata tags to the snapshot. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline RestoreGraphFromSnapshotRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Adds metadata tags to the snapshot. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline RestoreGraphFromSnapshotRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Adds metadata tags to the snapshot. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline RestoreGraphFromSnapshotRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Adds metadata tags to the snapshot. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline RestoreGraphFromSnapshotRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Adds metadata tags to the snapshot. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline RestoreGraphFromSnapshotRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The number of replicas in other AZs. Min =0, Max = 2, Default =1</p>
     */
    inline int GetReplicaCount() const{ return m_replicaCount; }

    /**
     * <p>The number of replicas in other AZs. Min =0, Max = 2, Default =1</p>
     */
    inline bool ReplicaCountHasBeenSet() const { return m_replicaCountHasBeenSet; }

    /**
     * <p>The number of replicas in other AZs. Min =0, Max = 2, Default =1</p>
     */
    inline void SetReplicaCount(int value) { m_replicaCountHasBeenSet = true; m_replicaCount = value; }

    /**
     * <p>The number of replicas in other AZs. Min =0, Max = 2, Default =1</p>
     */
    inline RestoreGraphFromSnapshotRequest& WithReplicaCount(int value) { SetReplicaCount(value); return *this;}


    /**
     * <p>Specifies whether or not the graph can be reachable over the internet. All
     * access to graphs is IAM authenticated. (<code>true</code> to enable, or
     * <code>false</code> to disable).</p>
     */
    inline bool GetPublicConnectivity() const{ return m_publicConnectivity; }

    /**
     * <p>Specifies whether or not the graph can be reachable over the internet. All
     * access to graphs is IAM authenticated. (<code>true</code> to enable, or
     * <code>false</code> to disable).</p>
     */
    inline bool PublicConnectivityHasBeenSet() const { return m_publicConnectivityHasBeenSet; }

    /**
     * <p>Specifies whether or not the graph can be reachable over the internet. All
     * access to graphs is IAM authenticated. (<code>true</code> to enable, or
     * <code>false</code> to disable).</p>
     */
    inline void SetPublicConnectivity(bool value) { m_publicConnectivityHasBeenSet = true; m_publicConnectivity = value; }

    /**
     * <p>Specifies whether or not the graph can be reachable over the internet. All
     * access to graphs is IAM authenticated. (<code>true</code> to enable, or
     * <code>false</code> to disable).</p>
     */
    inline RestoreGraphFromSnapshotRequest& WithPublicConnectivity(bool value) { SetPublicConnectivity(value); return *this;}

  private:

    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet = false;

    Aws::String m_graphName;
    bool m_graphNameHasBeenSet = false;

    int m_provisionedMemory;
    bool m_provisionedMemoryHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_replicaCount;
    bool m_replicaCountHasBeenSet = false;

    bool m_publicConnectivity;
    bool m_publicConnectivityHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
