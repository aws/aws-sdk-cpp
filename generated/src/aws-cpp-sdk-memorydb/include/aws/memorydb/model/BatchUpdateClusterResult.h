/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/Cluster.h>
#include <aws/memorydb/model/UnprocessedCluster.h>
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
  class BatchUpdateClusterResult
  {
  public:
    AWS_MEMORYDB_API BatchUpdateClusterResult();
    AWS_MEMORYDB_API BatchUpdateClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API BatchUpdateClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of clusters that have been updated.</p>
     */
    inline const Aws::Vector<Cluster>& GetProcessedClusters() const{ return m_processedClusters; }

    /**
     * <p>The list of clusters that have been updated.</p>
     */
    inline void SetProcessedClusters(const Aws::Vector<Cluster>& value) { m_processedClusters = value; }

    /**
     * <p>The list of clusters that have been updated.</p>
     */
    inline void SetProcessedClusters(Aws::Vector<Cluster>&& value) { m_processedClusters = std::move(value); }

    /**
     * <p>The list of clusters that have been updated.</p>
     */
    inline BatchUpdateClusterResult& WithProcessedClusters(const Aws::Vector<Cluster>& value) { SetProcessedClusters(value); return *this;}

    /**
     * <p>The list of clusters that have been updated.</p>
     */
    inline BatchUpdateClusterResult& WithProcessedClusters(Aws::Vector<Cluster>&& value) { SetProcessedClusters(std::move(value)); return *this;}

    /**
     * <p>The list of clusters that have been updated.</p>
     */
    inline BatchUpdateClusterResult& AddProcessedClusters(const Cluster& value) { m_processedClusters.push_back(value); return *this; }

    /**
     * <p>The list of clusters that have been updated.</p>
     */
    inline BatchUpdateClusterResult& AddProcessedClusters(Cluster&& value) { m_processedClusters.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of clusters where updates have not been applied.</p>
     */
    inline const Aws::Vector<UnprocessedCluster>& GetUnprocessedClusters() const{ return m_unprocessedClusters; }

    /**
     * <p>The list of clusters where updates have not been applied.</p>
     */
    inline void SetUnprocessedClusters(const Aws::Vector<UnprocessedCluster>& value) { m_unprocessedClusters = value; }

    /**
     * <p>The list of clusters where updates have not been applied.</p>
     */
    inline void SetUnprocessedClusters(Aws::Vector<UnprocessedCluster>&& value) { m_unprocessedClusters = std::move(value); }

    /**
     * <p>The list of clusters where updates have not been applied.</p>
     */
    inline BatchUpdateClusterResult& WithUnprocessedClusters(const Aws::Vector<UnprocessedCluster>& value) { SetUnprocessedClusters(value); return *this;}

    /**
     * <p>The list of clusters where updates have not been applied.</p>
     */
    inline BatchUpdateClusterResult& WithUnprocessedClusters(Aws::Vector<UnprocessedCluster>&& value) { SetUnprocessedClusters(std::move(value)); return *this;}

    /**
     * <p>The list of clusters where updates have not been applied.</p>
     */
    inline BatchUpdateClusterResult& AddUnprocessedClusters(const UnprocessedCluster& value) { m_unprocessedClusters.push_back(value); return *this; }

    /**
     * <p>The list of clusters where updates have not been applied.</p>
     */
    inline BatchUpdateClusterResult& AddUnprocessedClusters(UnprocessedCluster&& value) { m_unprocessedClusters.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Cluster> m_processedClusters;

    Aws::Vector<UnprocessedCluster> m_unprocessedClusters;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
