/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/MultiRegionCluster.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateMultiRegionClusterResult
  {
  public:
    AWS_MEMORYDB_API CreateMultiRegionClusterResult();
    AWS_MEMORYDB_API CreateMultiRegionClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API CreateMultiRegionClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the newly created multi-Region cluster.</p>
     */
    inline const MultiRegionCluster& GetMultiRegionCluster() const{ return m_multiRegionCluster; }
    inline void SetMultiRegionCluster(const MultiRegionCluster& value) { m_multiRegionCluster = value; }
    inline void SetMultiRegionCluster(MultiRegionCluster&& value) { m_multiRegionCluster = std::move(value); }
    inline CreateMultiRegionClusterResult& WithMultiRegionCluster(const MultiRegionCluster& value) { SetMultiRegionCluster(value); return *this;}
    inline CreateMultiRegionClusterResult& WithMultiRegionCluster(MultiRegionCluster&& value) { SetMultiRegionCluster(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateMultiRegionClusterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMultiRegionClusterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMultiRegionClusterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    MultiRegionCluster m_multiRegionCluster;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
