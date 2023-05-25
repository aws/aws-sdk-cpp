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
  class ListAllowedNodeTypeUpdatesRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API ListAllowedNodeTypeUpdatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAllowedNodeTypeUpdates"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the cluster you want to scale. MemoryDB uses the cluster name to
     * identify the current node type being used by this cluster, and from that to
     * create a list of node types you can scale up to.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the cluster you want to scale. MemoryDB uses the cluster name to
     * identify the current node type being used by this cluster, and from that to
     * create a list of node types you can scale up to.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the cluster you want to scale. MemoryDB uses the cluster name to
     * identify the current node type being used by this cluster, and from that to
     * create a list of node types you can scale up to.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the cluster you want to scale. MemoryDB uses the cluster name to
     * identify the current node type being used by this cluster, and from that to
     * create a list of node types you can scale up to.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the cluster you want to scale. MemoryDB uses the cluster name to
     * identify the current node type being used by this cluster, and from that to
     * create a list of node types you can scale up to.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the cluster you want to scale. MemoryDB uses the cluster name to
     * identify the current node type being used by this cluster, and from that to
     * create a list of node types you can scale up to.</p>
     */
    inline ListAllowedNodeTypeUpdatesRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the cluster you want to scale. MemoryDB uses the cluster name to
     * identify the current node type being used by this cluster, and from that to
     * create a list of node types you can scale up to.</p>
     */
    inline ListAllowedNodeTypeUpdatesRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster you want to scale. MemoryDB uses the cluster name to
     * identify the current node type being used by this cluster, and from that to
     * create a list of node types you can scale up to.</p>
     */
    inline ListAllowedNodeTypeUpdatesRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
