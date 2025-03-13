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
  class DeleteMultiRegionClusterResult
  {
  public:
    AWS_MEMORYDB_API DeleteMultiRegionClusterResult() = default;
    AWS_MEMORYDB_API DeleteMultiRegionClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API DeleteMultiRegionClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the deleted multi-Region cluster.</p>
     */
    inline const MultiRegionCluster& GetMultiRegionCluster() const { return m_multiRegionCluster; }
    template<typename MultiRegionClusterT = MultiRegionCluster>
    void SetMultiRegionCluster(MultiRegionClusterT&& value) { m_multiRegionClusterHasBeenSet = true; m_multiRegionCluster = std::forward<MultiRegionClusterT>(value); }
    template<typename MultiRegionClusterT = MultiRegionCluster>
    DeleteMultiRegionClusterResult& WithMultiRegionCluster(MultiRegionClusterT&& value) { SetMultiRegionCluster(std::forward<MultiRegionClusterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteMultiRegionClusterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MultiRegionCluster m_multiRegionCluster;
    bool m_multiRegionClusterHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
