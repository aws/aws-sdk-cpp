/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/ReservedNode.h>
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
  class DescribeReservedNodesResult
  {
  public:
    AWS_MEMORYDB_API DescribeReservedNodesResult() = default;
    AWS_MEMORYDB_API DescribeReservedNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API DescribeReservedNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeReservedNodesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns information about reserved nodes for this account, or about a
     * specified reserved node.</p>
     */
    inline const Aws::Vector<ReservedNode>& GetReservedNodes() const { return m_reservedNodes; }
    template<typename ReservedNodesT = Aws::Vector<ReservedNode>>
    void SetReservedNodes(ReservedNodesT&& value) { m_reservedNodesHasBeenSet = true; m_reservedNodes = std::forward<ReservedNodesT>(value); }
    template<typename ReservedNodesT = Aws::Vector<ReservedNode>>
    DescribeReservedNodesResult& WithReservedNodes(ReservedNodesT&& value) { SetReservedNodes(std::forward<ReservedNodesT>(value)); return *this;}
    template<typename ReservedNodesT = ReservedNode>
    DescribeReservedNodesResult& AddReservedNodes(ReservedNodesT&& value) { m_reservedNodesHasBeenSet = true; m_reservedNodes.emplace_back(std::forward<ReservedNodesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReservedNodesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ReservedNode> m_reservedNodes;
    bool m_reservedNodesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
