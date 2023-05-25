/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/Cluster.h>
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
  class UpdateClusterResult
  {
  public:
    AWS_MEMORYDB_API UpdateClusterResult();
    AWS_MEMORYDB_API UpdateClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API UpdateClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated cluster</p>
     */
    inline const Cluster& GetCluster() const{ return m_cluster; }

    /**
     * <p>The updated cluster</p>
     */
    inline void SetCluster(const Cluster& value) { m_cluster = value; }

    /**
     * <p>The updated cluster</p>
     */
    inline void SetCluster(Cluster&& value) { m_cluster = std::move(value); }

    /**
     * <p>The updated cluster</p>
     */
    inline UpdateClusterResult& WithCluster(const Cluster& value) { SetCluster(value); return *this;}

    /**
     * <p>The updated cluster</p>
     */
    inline UpdateClusterResult& WithCluster(Cluster&& value) { SetCluster(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateClusterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateClusterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateClusterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Cluster m_cluster;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
