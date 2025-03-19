/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class DescribeReservedNodeExchangeStatusRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DescribeReservedNodeExchangeStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReservedNodeExchangeStatus"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the source reserved node in a reserved-node exchange
     * request.</p>
     */
    inline const Aws::String& GetReservedNodeId() const { return m_reservedNodeId; }
    inline bool ReservedNodeIdHasBeenSet() const { return m_reservedNodeIdHasBeenSet; }
    template<typename ReservedNodeIdT = Aws::String>
    void SetReservedNodeId(ReservedNodeIdT&& value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId = std::forward<ReservedNodeIdT>(value); }
    template<typename ReservedNodeIdT = Aws::String>
    DescribeReservedNodeExchangeStatusRequest& WithReservedNodeId(ReservedNodeIdT&& value) { SetReservedNodeId(std::forward<ReservedNodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the reserved-node exchange request.</p>
     */
    inline const Aws::String& GetReservedNodeExchangeRequestId() const { return m_reservedNodeExchangeRequestId; }
    inline bool ReservedNodeExchangeRequestIdHasBeenSet() const { return m_reservedNodeExchangeRequestIdHasBeenSet; }
    template<typename ReservedNodeExchangeRequestIdT = Aws::String>
    void SetReservedNodeExchangeRequestId(ReservedNodeExchangeRequestIdT&& value) { m_reservedNodeExchangeRequestIdHasBeenSet = true; m_reservedNodeExchangeRequestId = std::forward<ReservedNodeExchangeRequestIdT>(value); }
    template<typename ReservedNodeExchangeRequestIdT = Aws::String>
    DescribeReservedNodeExchangeStatusRequest& WithReservedNodeExchangeRequestId(ReservedNodeExchangeRequestIdT&& value) { SetReservedNodeExchangeRequestId(std::forward<ReservedNodeExchangeRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>Marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value.</p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeReservedNodeExchangeStatusRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeReservedNodeExchangeStatus</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter. You can retrieve the next
     * set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeReservedNodeExchangeStatusRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reservedNodeId;
    bool m_reservedNodeIdHasBeenSet = false;

    Aws::String m_reservedNodeExchangeRequestId;
    bool m_reservedNodeExchangeRequestIdHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
