/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class DeleteClusterRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API DeleteClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCluster"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the cluster to be deleted</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    DeleteClusterRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the multi-Region cluster to be deleted.</p>
     */
    inline const Aws::String& GetMultiRegionClusterName() const { return m_multiRegionClusterName; }
    inline bool MultiRegionClusterNameHasBeenSet() const { return m_multiRegionClusterNameHasBeenSet; }
    template<typename MultiRegionClusterNameT = Aws::String>
    void SetMultiRegionClusterName(MultiRegionClusterNameT&& value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName = std::forward<MultiRegionClusterNameT>(value); }
    template<typename MultiRegionClusterNameT = Aws::String>
    DeleteClusterRequest& WithMultiRegionClusterName(MultiRegionClusterNameT&& value) { SetMultiRegionClusterName(std::forward<MultiRegionClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-supplied name of a final cluster snapshot. This is the unique name
     * that identifies the snapshot. MemoryDB creates the snapshot, and then deletes
     * the cluster immediately afterward.</p>
     */
    inline const Aws::String& GetFinalSnapshotName() const { return m_finalSnapshotName; }
    inline bool FinalSnapshotNameHasBeenSet() const { return m_finalSnapshotNameHasBeenSet; }
    template<typename FinalSnapshotNameT = Aws::String>
    void SetFinalSnapshotName(FinalSnapshotNameT&& value) { m_finalSnapshotNameHasBeenSet = true; m_finalSnapshotName = std::forward<FinalSnapshotNameT>(value); }
    template<typename FinalSnapshotNameT = Aws::String>
    DeleteClusterRequest& WithFinalSnapshotName(FinalSnapshotNameT&& value) { SetFinalSnapshotName(std::forward<FinalSnapshotNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_multiRegionClusterName;
    bool m_multiRegionClusterNameHasBeenSet = false;

    Aws::String m_finalSnapshotName;
    bool m_finalSnapshotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
