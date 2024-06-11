﻿/**
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
    AWS_MEMORYDB_API BatchUpdateClusterResult();
    AWS_MEMORYDB_API BatchUpdateClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API BatchUpdateClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of clusters that have been updated.</p>
     */
    inline const Aws::Vector<Cluster>& GetProcessedClusters() const{ return m_processedClusters; }
    inline void SetProcessedClusters(const Aws::Vector<Cluster>& value) { m_processedClusters = value; }
    inline void SetProcessedClusters(Aws::Vector<Cluster>&& value) { m_processedClusters = std::move(value); }
    inline BatchUpdateClusterResult& WithProcessedClusters(const Aws::Vector<Cluster>& value) { SetProcessedClusters(value); return *this;}
    inline BatchUpdateClusterResult& WithProcessedClusters(Aws::Vector<Cluster>&& value) { SetProcessedClusters(std::move(value)); return *this;}
    inline BatchUpdateClusterResult& AddProcessedClusters(const Cluster& value) { m_processedClusters.push_back(value); return *this; }
    inline BatchUpdateClusterResult& AddProcessedClusters(Cluster&& value) { m_processedClusters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of clusters where updates have not been applied.</p>
     */
    inline const Aws::Vector<UnprocessedCluster>& GetUnprocessedClusters() const{ return m_unprocessedClusters; }
    inline void SetUnprocessedClusters(const Aws::Vector<UnprocessedCluster>& value) { m_unprocessedClusters = value; }
    inline void SetUnprocessedClusters(Aws::Vector<UnprocessedCluster>&& value) { m_unprocessedClusters = std::move(value); }
    inline BatchUpdateClusterResult& WithUnprocessedClusters(const Aws::Vector<UnprocessedCluster>& value) { SetUnprocessedClusters(value); return *this;}
    inline BatchUpdateClusterResult& WithUnprocessedClusters(Aws::Vector<UnprocessedCluster>&& value) { SetUnprocessedClusters(std::move(value)); return *this;}
    inline BatchUpdateClusterResult& AddUnprocessedClusters(const UnprocessedCluster& value) { m_unprocessedClusters.push_back(value); return *this; }
    inline BatchUpdateClusterResult& AddUnprocessedClusters(UnprocessedCluster&& value) { m_unprocessedClusters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchUpdateClusterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchUpdateClusterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchUpdateClusterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Cluster> m_processedClusters;

    Aws::Vector<UnprocessedCluster> m_unprocessedClusters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
