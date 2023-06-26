/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class DescribeReservedNodesOfferingsRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API DescribeReservedNodesOfferingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReservedNodesOfferings"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The offering identifier filter value. Use this parameter to show only the
     * available offering that matches the specified reservation identifier.</p>
     */
    inline const Aws::String& GetReservedNodesOfferingId() const{ return m_reservedNodesOfferingId; }

    /**
     * <p>The offering identifier filter value. Use this parameter to show only the
     * available offering that matches the specified reservation identifier.</p>
     */
    inline bool ReservedNodesOfferingIdHasBeenSet() const { return m_reservedNodesOfferingIdHasBeenSet; }

    /**
     * <p>The offering identifier filter value. Use this parameter to show only the
     * available offering that matches the specified reservation identifier.</p>
     */
    inline void SetReservedNodesOfferingId(const Aws::String& value) { m_reservedNodesOfferingIdHasBeenSet = true; m_reservedNodesOfferingId = value; }

    /**
     * <p>The offering identifier filter value. Use this parameter to show only the
     * available offering that matches the specified reservation identifier.</p>
     */
    inline void SetReservedNodesOfferingId(Aws::String&& value) { m_reservedNodesOfferingIdHasBeenSet = true; m_reservedNodesOfferingId = std::move(value); }

    /**
     * <p>The offering identifier filter value. Use this parameter to show only the
     * available offering that matches the specified reservation identifier.</p>
     */
    inline void SetReservedNodesOfferingId(const char* value) { m_reservedNodesOfferingIdHasBeenSet = true; m_reservedNodesOfferingId.assign(value); }

    /**
     * <p>The offering identifier filter value. Use this parameter to show only the
     * available offering that matches the specified reservation identifier.</p>
     */
    inline DescribeReservedNodesOfferingsRequest& WithReservedNodesOfferingId(const Aws::String& value) { SetReservedNodesOfferingId(value); return *this;}

    /**
     * <p>The offering identifier filter value. Use this parameter to show only the
     * available offering that matches the specified reservation identifier.</p>
     */
    inline DescribeReservedNodesOfferingsRequest& WithReservedNodesOfferingId(Aws::String&& value) { SetReservedNodesOfferingId(std::move(value)); return *this;}

    /**
     * <p>The offering identifier filter value. Use this parameter to show only the
     * available offering that matches the specified reservation identifier.</p>
     */
    inline DescribeReservedNodesOfferingsRequest& WithReservedNodesOfferingId(const char* value) { SetReservedNodesOfferingId(value); return *this;}


    /**
     * <p>The node type for the reserved nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/nodes.reserved.html#reserved-nodes-supported">Supported
     * node types</a>.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>The node type for the reserved nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/nodes.reserved.html#reserved-nodes-supported">Supported
     * node types</a>.</p>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>The node type for the reserved nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/nodes.reserved.html#reserved-nodes-supported">Supported
     * node types</a>.</p>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The node type for the reserved nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/nodes.reserved.html#reserved-nodes-supported">Supported
     * node types</a>.</p>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>The node type for the reserved nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/nodes.reserved.html#reserved-nodes-supported">Supported
     * node types</a>.</p>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>The node type for the reserved nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/nodes.reserved.html#reserved-nodes-supported">Supported
     * node types</a>.</p>
     */
    inline DescribeReservedNodesOfferingsRequest& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>The node type for the reserved nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/nodes.reserved.html#reserved-nodes-supported">Supported
     * node types</a>.</p>
     */
    inline DescribeReservedNodesOfferingsRequest& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}

    /**
     * <p>The node type for the reserved nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/nodes.reserved.html#reserved-nodes-supported">Supported
     * node types</a>.</p>
     */
    inline DescribeReservedNodesOfferingsRequest& WithNodeType(const char* value) { SetNodeType(value); return *this;}


    /**
     * <p>Duration filter value, specified in years or seconds. Use this parameter to
     * show only reservations for a given duration.</p>
     */
    inline const Aws::String& GetDuration() const{ return m_duration; }

    /**
     * <p>Duration filter value, specified in years or seconds. Use this parameter to
     * show only reservations for a given duration.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>Duration filter value, specified in years or seconds. Use this parameter to
     * show only reservations for a given duration.</p>
     */
    inline void SetDuration(const Aws::String& value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>Duration filter value, specified in years or seconds. Use this parameter to
     * show only reservations for a given duration.</p>
     */
    inline void SetDuration(Aws::String&& value) { m_durationHasBeenSet = true; m_duration = std::move(value); }

    /**
     * <p>Duration filter value, specified in years or seconds. Use this parameter to
     * show only reservations for a given duration.</p>
     */
    inline void SetDuration(const char* value) { m_durationHasBeenSet = true; m_duration.assign(value); }

    /**
     * <p>Duration filter value, specified in years or seconds. Use this parameter to
     * show only reservations for a given duration.</p>
     */
    inline DescribeReservedNodesOfferingsRequest& WithDuration(const Aws::String& value) { SetDuration(value); return *this;}

    /**
     * <p>Duration filter value, specified in years or seconds. Use this parameter to
     * show only reservations for a given duration.</p>
     */
    inline DescribeReservedNodesOfferingsRequest& WithDuration(Aws::String&& value) { SetDuration(std::move(value)); return *this;}

    /**
     * <p>Duration filter value, specified in years or seconds. Use this parameter to
     * show only reservations for a given duration.</p>
     */
    inline DescribeReservedNodesOfferingsRequest& WithDuration(const char* value) { SetDuration(value); return *this;}


    /**
     * <p>The offering type filter value. Use this parameter to show only the available
     * offerings matching the specified offering type. Valid values: "All
     * Upfront"|"Partial Upfront"| "No Upfront"</p>
     */
    inline const Aws::String& GetOfferingType() const{ return m_offeringType; }

    /**
     * <p>The offering type filter value. Use this parameter to show only the available
     * offerings matching the specified offering type. Valid values: "All
     * Upfront"|"Partial Upfront"| "No Upfront"</p>
     */
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }

    /**
     * <p>The offering type filter value. Use this parameter to show only the available
     * offerings matching the specified offering type. Valid values: "All
     * Upfront"|"Partial Upfront"| "No Upfront"</p>
     */
    inline void SetOfferingType(const Aws::String& value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }

    /**
     * <p>The offering type filter value. Use this parameter to show only the available
     * offerings matching the specified offering type. Valid values: "All
     * Upfront"|"Partial Upfront"| "No Upfront"</p>
     */
    inline void SetOfferingType(Aws::String&& value) { m_offeringTypeHasBeenSet = true; m_offeringType = std::move(value); }

    /**
     * <p>The offering type filter value. Use this parameter to show only the available
     * offerings matching the specified offering type. Valid values: "All
     * Upfront"|"Partial Upfront"| "No Upfront"</p>
     */
    inline void SetOfferingType(const char* value) { m_offeringTypeHasBeenSet = true; m_offeringType.assign(value); }

    /**
     * <p>The offering type filter value. Use this parameter to show only the available
     * offerings matching the specified offering type. Valid values: "All
     * Upfront"|"Partial Upfront"| "No Upfront"</p>
     */
    inline DescribeReservedNodesOfferingsRequest& WithOfferingType(const Aws::String& value) { SetOfferingType(value); return *this;}

    /**
     * <p>The offering type filter value. Use this parameter to show only the available
     * offerings matching the specified offering type. Valid values: "All
     * Upfront"|"Partial Upfront"| "No Upfront"</p>
     */
    inline DescribeReservedNodesOfferingsRequest& WithOfferingType(Aws::String&& value) { SetOfferingType(std::move(value)); return *this;}

    /**
     * <p>The offering type filter value. Use this parameter to show only the available
     * offerings matching the specified offering type. Valid values: "All
     * Upfront"|"Partial Upfront"| "No Upfront"</p>
     */
    inline DescribeReservedNodesOfferingsRequest& WithOfferingType(const char* value) { SetOfferingType(value); return *this;}


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified MaxRecords value, a marker is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified MaxRecords value, a marker is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified MaxRecords value, a marker is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified MaxRecords value, a marker is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline DescribeReservedNodesOfferingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords.</p>
     */
    inline DescribeReservedNodesOfferingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords.</p>
     */
    inline DescribeReservedNodesOfferingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords.</p>
     */
    inline DescribeReservedNodesOfferingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_reservedNodesOfferingId;
    bool m_reservedNodesOfferingIdHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    Aws::String m_duration;
    bool m_durationHasBeenSet = false;

    Aws::String m_offeringType;
    bool m_offeringTypeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
