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
    AWS_MEMORYDB_API DescribeReservedNodesResult();
    AWS_MEMORYDB_API DescribeReservedNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API DescribeReservedNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords.</p>
     */
    inline DescribeReservedNodesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords.</p>
     */
    inline DescribeReservedNodesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords.</p>
     */
    inline DescribeReservedNodesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Returns information about reserved nodes for this account, or about a
     * specified reserved node.</p>
     */
    inline const Aws::Vector<ReservedNode>& GetReservedNodes() const{ return m_reservedNodes; }

    /**
     * <p>Returns information about reserved nodes for this account, or about a
     * specified reserved node.</p>
     */
    inline void SetReservedNodes(const Aws::Vector<ReservedNode>& value) { m_reservedNodes = value; }

    /**
     * <p>Returns information about reserved nodes for this account, or about a
     * specified reserved node.</p>
     */
    inline void SetReservedNodes(Aws::Vector<ReservedNode>&& value) { m_reservedNodes = std::move(value); }

    /**
     * <p>Returns information about reserved nodes for this account, or about a
     * specified reserved node.</p>
     */
    inline DescribeReservedNodesResult& WithReservedNodes(const Aws::Vector<ReservedNode>& value) { SetReservedNodes(value); return *this;}

    /**
     * <p>Returns information about reserved nodes for this account, or about a
     * specified reserved node.</p>
     */
    inline DescribeReservedNodesResult& WithReservedNodes(Aws::Vector<ReservedNode>&& value) { SetReservedNodes(std::move(value)); return *this;}

    /**
     * <p>Returns information about reserved nodes for this account, or about a
     * specified reserved node.</p>
     */
    inline DescribeReservedNodesResult& AddReservedNodes(const ReservedNode& value) { m_reservedNodes.push_back(value); return *this; }

    /**
     * <p>Returns information about reserved nodes for this account, or about a
     * specified reserved node.</p>
     */
    inline DescribeReservedNodesResult& AddReservedNodes(ReservedNode&& value) { m_reservedNodes.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeReservedNodesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeReservedNodesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeReservedNodesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ReservedNode> m_reservedNodes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
