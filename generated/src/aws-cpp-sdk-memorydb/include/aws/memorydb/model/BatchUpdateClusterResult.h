/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_MEMORYDB_API BatchUpdateClusterResult() = default;
    AWS_MEMORYDB_API BatchUpdateClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API BatchUpdateClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of clusters that have been updated.</p>
     */
    inline const Aws::Vector<Cluster>& GetProcessedClusters() const { return m_processedClusters; }
    template<typename ProcessedClustersT = Aws::Vector<Cluster>>
    void SetProcessedClusters(ProcessedClustersT&& value) { m_processedClustersHasBeenSet = true; m_processedClusters = std::forward<ProcessedClustersT>(value); }
    template<typename ProcessedClustersT = Aws::Vector<Cluster>>
    BatchUpdateClusterResult& WithProcessedClusters(ProcessedClustersT&& value) { SetProcessedClusters(std::forward<ProcessedClustersT>(value)); return *this;}
    template<typename ProcessedClustersT = Cluster>
    BatchUpdateClusterResult& AddProcessedClusters(ProcessedClustersT&& value) { m_processedClustersHasBeenSet = true; m_processedClusters.emplace_back(std::forward<ProcessedClustersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of clusters where updates have not been applied.</p>
     */
    inline const Aws::Vector<UnprocessedCluster>& GetUnprocessedClusters() const { return m_unprocessedClusters; }
    template<typename UnprocessedClustersT = Aws::Vector<UnprocessedCluster>>
    void SetUnprocessedClusters(UnprocessedClustersT&& value) { m_unprocessedClustersHasBeenSet = true; m_unprocessedClusters = std::forward<UnprocessedClustersT>(value); }
    template<typename UnprocessedClustersT = Aws::Vector<UnprocessedCluster>>
    BatchUpdateClusterResult& WithUnprocessedClusters(UnprocessedClustersT&& value) { SetUnprocessedClusters(std::forward<UnprocessedClustersT>(value)); return *this;}
    template<typename UnprocessedClustersT = UnprocessedCluster>
    BatchUpdateClusterResult& AddUnprocessedClusters(UnprocessedClustersT&& value) { m_unprocessedClustersHasBeenSet = true; m_unprocessedClusters.emplace_back(std::forward<UnprocessedClustersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchUpdateClusterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Cluster> m_processedClusters;
    bool m_processedClustersHasBeenSet = false;

    Aws::Vector<UnprocessedCluster> m_unprocessedClusters;
    bool m_unprocessedClustersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
