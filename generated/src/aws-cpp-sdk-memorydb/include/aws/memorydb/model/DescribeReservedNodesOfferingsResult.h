/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/ReservedNodesOffering.h>
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
  class DescribeReservedNodesOfferingsResult
  {
  public:
    AWS_MEMORYDB_API DescribeReservedNodesOfferingsResult();
    AWS_MEMORYDB_API DescribeReservedNodesOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API DescribeReservedNodesOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribeReservedNodesOfferingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords.</p>
     */
    inline DescribeReservedNodesOfferingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords.</p>
     */
    inline DescribeReservedNodesOfferingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Lists available reserved node offerings.</p>
     */
    inline const Aws::Vector<ReservedNodesOffering>& GetReservedNodesOfferings() const{ return m_reservedNodesOfferings; }

    /**
     * <p>Lists available reserved node offerings.</p>
     */
    inline void SetReservedNodesOfferings(const Aws::Vector<ReservedNodesOffering>& value) { m_reservedNodesOfferings = value; }

    /**
     * <p>Lists available reserved node offerings.</p>
     */
    inline void SetReservedNodesOfferings(Aws::Vector<ReservedNodesOffering>&& value) { m_reservedNodesOfferings = std::move(value); }

    /**
     * <p>Lists available reserved node offerings.</p>
     */
    inline DescribeReservedNodesOfferingsResult& WithReservedNodesOfferings(const Aws::Vector<ReservedNodesOffering>& value) { SetReservedNodesOfferings(value); return *this;}

    /**
     * <p>Lists available reserved node offerings.</p>
     */
    inline DescribeReservedNodesOfferingsResult& WithReservedNodesOfferings(Aws::Vector<ReservedNodesOffering>&& value) { SetReservedNodesOfferings(std::move(value)); return *this;}

    /**
     * <p>Lists available reserved node offerings.</p>
     */
    inline DescribeReservedNodesOfferingsResult& AddReservedNodesOfferings(const ReservedNodesOffering& value) { m_reservedNodesOfferings.push_back(value); return *this; }

    /**
     * <p>Lists available reserved node offerings.</p>
     */
    inline DescribeReservedNodesOfferingsResult& AddReservedNodesOfferings(ReservedNodesOffering&& value) { m_reservedNodesOfferings.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeReservedNodesOfferingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeReservedNodesOfferingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeReservedNodesOfferingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ReservedNodesOffering> m_reservedNodesOfferings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
