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
    AWS_MEMORYDB_API DeleteClusterRequest();

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
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline DeleteClusterRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline DeleteClusterRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline DeleteClusterRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the multi-Region cluster to be deleted.</p>
     */
    inline const Aws::String& GetMultiRegionClusterName() const{ return m_multiRegionClusterName; }
    inline bool MultiRegionClusterNameHasBeenSet() const { return m_multiRegionClusterNameHasBeenSet; }
    inline void SetMultiRegionClusterName(const Aws::String& value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName = value; }
    inline void SetMultiRegionClusterName(Aws::String&& value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName = std::move(value); }
    inline void SetMultiRegionClusterName(const char* value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName.assign(value); }
    inline DeleteClusterRequest& WithMultiRegionClusterName(const Aws::String& value) { SetMultiRegionClusterName(value); return *this;}
    inline DeleteClusterRequest& WithMultiRegionClusterName(Aws::String&& value) { SetMultiRegionClusterName(std::move(value)); return *this;}
    inline DeleteClusterRequest& WithMultiRegionClusterName(const char* value) { SetMultiRegionClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-supplied name of a final cluster snapshot. This is the unique name
     * that identifies the snapshot. MemoryDB creates the snapshot, and then deletes
     * the cluster immediately afterward.</p>
     */
    inline const Aws::String& GetFinalSnapshotName() const{ return m_finalSnapshotName; }
    inline bool FinalSnapshotNameHasBeenSet() const { return m_finalSnapshotNameHasBeenSet; }
    inline void SetFinalSnapshotName(const Aws::String& value) { m_finalSnapshotNameHasBeenSet = true; m_finalSnapshotName = value; }
    inline void SetFinalSnapshotName(Aws::String&& value) { m_finalSnapshotNameHasBeenSet = true; m_finalSnapshotName = std::move(value); }
    inline void SetFinalSnapshotName(const char* value) { m_finalSnapshotNameHasBeenSet = true; m_finalSnapshotName.assign(value); }
    inline DeleteClusterRequest& WithFinalSnapshotName(const Aws::String& value) { SetFinalSnapshotName(value); return *this;}
    inline DeleteClusterRequest& WithFinalSnapshotName(Aws::String&& value) { SetFinalSnapshotName(std::move(value)); return *this;}
    inline DeleteClusterRequest& WithFinalSnapshotName(const char* value) { SetFinalSnapshotName(value); return *this;}
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
