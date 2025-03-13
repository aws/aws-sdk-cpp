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
    AWS_MEMORYDB_API DescribeReservedNodesOfferingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReservedNodesOfferings"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The offering identifier filter value. Use this parameter to show only the
     * available offering that matches the specified reservation identifier.</p>
     */
    inline const Aws::String& GetReservedNodesOfferingId() const { return m_reservedNodesOfferingId; }
    inline bool ReservedNodesOfferingIdHasBeenSet() const { return m_reservedNodesOfferingIdHasBeenSet; }
    template<typename ReservedNodesOfferingIdT = Aws::String>
    void SetReservedNodesOfferingId(ReservedNodesOfferingIdT&& value) { m_reservedNodesOfferingIdHasBeenSet = true; m_reservedNodesOfferingId = std::forward<ReservedNodesOfferingIdT>(value); }
    template<typename ReservedNodesOfferingIdT = Aws::String>
    DescribeReservedNodesOfferingsRequest& WithReservedNodesOfferingId(ReservedNodesOfferingIdT&& value) { SetReservedNodesOfferingId(std::forward<ReservedNodesOfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type for the reserved nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/nodes.reserved.html#reserved-nodes-supported">Supported
     * node types</a>.</p>
     */
    inline const Aws::String& GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    template<typename NodeTypeT = Aws::String>
    void SetNodeType(NodeTypeT&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::forward<NodeTypeT>(value); }
    template<typename NodeTypeT = Aws::String>
    DescribeReservedNodesOfferingsRequest& WithNodeType(NodeTypeT&& value) { SetNodeType(std::forward<NodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration filter value, specified in years or seconds. Use this parameter to
     * show only reservations for a given duration.</p>
     */
    inline const Aws::String& GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    template<typename DurationT = Aws::String>
    void SetDuration(DurationT&& value) { m_durationHasBeenSet = true; m_duration = std::forward<DurationT>(value); }
    template<typename DurationT = Aws::String>
    DescribeReservedNodesOfferingsRequest& WithDuration(DurationT&& value) { SetDuration(std::forward<DurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offering type filter value. Use this parameter to show only the available
     * offerings matching the specified offering type. Valid values: "All
     * Upfront"|"Partial Upfront"| "No Upfront"</p>
     */
    inline const Aws::String& GetOfferingType() const { return m_offeringType; }
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }
    template<typename OfferingTypeT = Aws::String>
    void SetOfferingType(OfferingTypeT&& value) { m_offeringTypeHasBeenSet = true; m_offeringType = std::forward<OfferingTypeT>(value); }
    template<typename OfferingTypeT = Aws::String>
    DescribeReservedNodesOfferingsRequest& WithOfferingType(OfferingTypeT&& value) { SetOfferingType(std::forward<OfferingTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified MaxRecords value, a marker is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeReservedNodesOfferingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * MaxRecords.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeReservedNodesOfferingsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reservedNodesOfferingId;
    bool m_reservedNodesOfferingIdHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    Aws::String m_duration;
    bool m_durationHasBeenSet = false;

    Aws::String m_offeringType;
    bool m_offeringTypeHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
