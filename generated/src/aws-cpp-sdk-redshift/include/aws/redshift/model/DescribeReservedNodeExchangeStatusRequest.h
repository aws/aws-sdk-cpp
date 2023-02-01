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
    AWS_REDSHIFT_API DescribeReservedNodeExchangeStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReservedNodeExchangeStatus"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the source reserved node in a reserved-node exchange
     * request.</p>
     */
    inline const Aws::String& GetReservedNodeId() const{ return m_reservedNodeId; }

    /**
     * <p>The identifier of the source reserved node in a reserved-node exchange
     * request.</p>
     */
    inline bool ReservedNodeIdHasBeenSet() const { return m_reservedNodeIdHasBeenSet; }

    /**
     * <p>The identifier of the source reserved node in a reserved-node exchange
     * request.</p>
     */
    inline void SetReservedNodeId(const Aws::String& value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId = value; }

    /**
     * <p>The identifier of the source reserved node in a reserved-node exchange
     * request.</p>
     */
    inline void SetReservedNodeId(Aws::String&& value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId = std::move(value); }

    /**
     * <p>The identifier of the source reserved node in a reserved-node exchange
     * request.</p>
     */
    inline void SetReservedNodeId(const char* value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId.assign(value); }

    /**
     * <p>The identifier of the source reserved node in a reserved-node exchange
     * request.</p>
     */
    inline DescribeReservedNodeExchangeStatusRequest& WithReservedNodeId(const Aws::String& value) { SetReservedNodeId(value); return *this;}

    /**
     * <p>The identifier of the source reserved node in a reserved-node exchange
     * request.</p>
     */
    inline DescribeReservedNodeExchangeStatusRequest& WithReservedNodeId(Aws::String&& value) { SetReservedNodeId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the source reserved node in a reserved-node exchange
     * request.</p>
     */
    inline DescribeReservedNodeExchangeStatusRequest& WithReservedNodeId(const char* value) { SetReservedNodeId(value); return *this;}


    /**
     * <p>The identifier of the reserved-node exchange request.</p>
     */
    inline const Aws::String& GetReservedNodeExchangeRequestId() const{ return m_reservedNodeExchangeRequestId; }

    /**
     * <p>The identifier of the reserved-node exchange request.</p>
     */
    inline bool ReservedNodeExchangeRequestIdHasBeenSet() const { return m_reservedNodeExchangeRequestIdHasBeenSet; }

    /**
     * <p>The identifier of the reserved-node exchange request.</p>
     */
    inline void SetReservedNodeExchangeRequestId(const Aws::String& value) { m_reservedNodeExchangeRequestIdHasBeenSet = true; m_reservedNodeExchangeRequestId = value; }

    /**
     * <p>The identifier of the reserved-node exchange request.</p>
     */
    inline void SetReservedNodeExchangeRequestId(Aws::String&& value) { m_reservedNodeExchangeRequestIdHasBeenSet = true; m_reservedNodeExchangeRequestId = std::move(value); }

    /**
     * <p>The identifier of the reserved-node exchange request.</p>
     */
    inline void SetReservedNodeExchangeRequestId(const char* value) { m_reservedNodeExchangeRequestIdHasBeenSet = true; m_reservedNodeExchangeRequestId.assign(value); }

    /**
     * <p>The identifier of the reserved-node exchange request.</p>
     */
    inline DescribeReservedNodeExchangeStatusRequest& WithReservedNodeExchangeRequestId(const Aws::String& value) { SetReservedNodeExchangeRequestId(value); return *this;}

    /**
     * <p>The identifier of the reserved-node exchange request.</p>
     */
    inline DescribeReservedNodeExchangeStatusRequest& WithReservedNodeExchangeRequestId(Aws::String&& value) { SetReservedNodeExchangeRequestId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the reserved-node exchange request.</p>
     */
    inline DescribeReservedNodeExchangeStatusRequest& WithReservedNodeExchangeRequestId(const char* value) { SetReservedNodeExchangeRequestId(value); return *this;}


    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>Marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>Marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>Marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>Marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value.</p>
     */
    inline DescribeReservedNodeExchangeStatusRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeReservedNodeExchangeStatus</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter. You can retrieve the next
     * set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeReservedNodeExchangeStatus</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter. You can retrieve the next
     * set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeReservedNodeExchangeStatus</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter. You can retrieve the next
     * set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeReservedNodeExchangeStatus</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter. You can retrieve the next
     * set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeReservedNodeExchangeStatus</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter. You can retrieve the next
     * set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeReservedNodeExchangeStatus</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter. You can retrieve the next
     * set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request.</p>
     */
    inline DescribeReservedNodeExchangeStatusRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeReservedNodeExchangeStatus</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter. You can retrieve the next
     * set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request.</p>
     */
    inline DescribeReservedNodeExchangeStatusRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeReservedNodeExchangeStatus</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter. You can retrieve the next
     * set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request.</p>
     */
    inline DescribeReservedNodeExchangeStatusRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_reservedNodeId;
    bool m_reservedNodeIdHasBeenSet = false;

    Aws::String m_reservedNodeExchangeRequestId;
    bool m_reservedNodeExchangeRequestIdHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
