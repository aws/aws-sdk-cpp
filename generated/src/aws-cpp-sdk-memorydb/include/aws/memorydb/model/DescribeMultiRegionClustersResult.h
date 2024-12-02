/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/MultiRegionCluster.h>
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
  class DescribeMultiRegionClustersResult
  {
  public:
    AWS_MEMORYDB_API DescribeMultiRegionClustersResult();
    AWS_MEMORYDB_API DescribeMultiRegionClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API DescribeMultiRegionClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeMultiRegionClustersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeMultiRegionClustersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeMultiRegionClustersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of multi-Region clusters.</p>
     */
    inline const Aws::Vector<MultiRegionCluster>& GetMultiRegionClusters() const{ return m_multiRegionClusters; }
    inline void SetMultiRegionClusters(const Aws::Vector<MultiRegionCluster>& value) { m_multiRegionClusters = value; }
    inline void SetMultiRegionClusters(Aws::Vector<MultiRegionCluster>&& value) { m_multiRegionClusters = std::move(value); }
    inline DescribeMultiRegionClustersResult& WithMultiRegionClusters(const Aws::Vector<MultiRegionCluster>& value) { SetMultiRegionClusters(value); return *this;}
    inline DescribeMultiRegionClustersResult& WithMultiRegionClusters(Aws::Vector<MultiRegionCluster>&& value) { SetMultiRegionClusters(std::move(value)); return *this;}
    inline DescribeMultiRegionClustersResult& AddMultiRegionClusters(const MultiRegionCluster& value) { m_multiRegionClusters.push_back(value); return *this; }
    inline DescribeMultiRegionClustersResult& AddMultiRegionClusters(MultiRegionCluster&& value) { m_multiRegionClusters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeMultiRegionClustersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeMultiRegionClustersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeMultiRegionClustersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<MultiRegionCluster> m_multiRegionClusters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
