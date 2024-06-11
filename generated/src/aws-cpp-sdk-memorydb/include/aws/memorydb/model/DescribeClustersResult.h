﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeClustersResult
  {
  public:
    AWS_MEMORYDB_API DescribeClustersResult();
    AWS_MEMORYDB_API DescribeClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API DescribeClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeClustersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeClustersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeClustersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of clusters</p>
     */
    inline const Aws::Vector<Cluster>& GetClusters() const{ return m_clusters; }
    inline void SetClusters(const Aws::Vector<Cluster>& value) { m_clusters = value; }
    inline void SetClusters(Aws::Vector<Cluster>&& value) { m_clusters = std::move(value); }
    inline DescribeClustersResult& WithClusters(const Aws::Vector<Cluster>& value) { SetClusters(value); return *this;}
    inline DescribeClustersResult& WithClusters(Aws::Vector<Cluster>&& value) { SetClusters(std::move(value)); return *this;}
    inline DescribeClustersResult& AddClusters(const Cluster& value) { m_clusters.push_back(value); return *this; }
    inline DescribeClustersResult& AddClusters(Cluster&& value) { m_clusters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeClustersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeClustersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeClustersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Cluster> m_clusters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
