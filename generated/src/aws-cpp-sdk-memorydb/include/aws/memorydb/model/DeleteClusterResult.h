/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/Cluster.h>
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
namespace MemoryDB
{
namespace Model
{
  class DeleteClusterResult
  {
  public:
    AWS_MEMORYDB_API DeleteClusterResult();
    AWS_MEMORYDB_API DeleteClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API DeleteClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The cluster object that has been deleted</p>
     */
    inline const Cluster& GetCluster() const{ return m_cluster; }

    /**
     * <p>The cluster object that has been deleted</p>
     */
    inline void SetCluster(const Cluster& value) { m_cluster = value; }

    /**
     * <p>The cluster object that has been deleted</p>
     */
    inline void SetCluster(Cluster&& value) { m_cluster = std::move(value); }

    /**
     * <p>The cluster object that has been deleted</p>
     */
    inline DeleteClusterResult& WithCluster(const Cluster& value) { SetCluster(value); return *this;}

    /**
     * <p>The cluster object that has been deleted</p>
     */
    inline DeleteClusterResult& WithCluster(Cluster&& value) { SetCluster(std::move(value)); return *this;}

  private:

    Cluster m_cluster;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
