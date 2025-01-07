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
  class FailoverShardRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API FailoverShardRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "FailoverShard"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The cluster being failed over.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline FailoverShardRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline FailoverShardRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline FailoverShardRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the shard.</p>
     */
    inline const Aws::String& GetShardName() const{ return m_shardName; }
    inline bool ShardNameHasBeenSet() const { return m_shardNameHasBeenSet; }
    inline void SetShardName(const Aws::String& value) { m_shardNameHasBeenSet = true; m_shardName = value; }
    inline void SetShardName(Aws::String&& value) { m_shardNameHasBeenSet = true; m_shardName = std::move(value); }
    inline void SetShardName(const char* value) { m_shardNameHasBeenSet = true; m_shardName.assign(value); }
    inline FailoverShardRequest& WithShardName(const Aws::String& value) { SetShardName(value); return *this;}
    inline FailoverShardRequest& WithShardName(Aws::String&& value) { SetShardName(std::move(value)); return *this;}
    inline FailoverShardRequest& WithShardName(const char* value) { SetShardName(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_shardName;
    bool m_shardNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
