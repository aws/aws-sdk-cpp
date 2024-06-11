﻿/**
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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeTableRestoreStatusMessage">AWS
   * API Reference</a></p>
   */
  class DescribeTableRestoreStatusRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DescribeTableRestoreStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTableRestoreStatus"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Redshift cluster that the table is being restored to.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline DescribeTableRestoreStatusRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline DescribeTableRestoreStatusRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline DescribeTableRestoreStatusRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the table restore request to return status for. If you
     * don't specify a <code>TableRestoreRequestId</code> value, then
     * <code>DescribeTableRestoreStatus</code> returns the status of all in-progress
     * table restore requests.</p>
     */
    inline const Aws::String& GetTableRestoreRequestId() const{ return m_tableRestoreRequestId; }
    inline bool TableRestoreRequestIdHasBeenSet() const { return m_tableRestoreRequestIdHasBeenSet; }
    inline void SetTableRestoreRequestId(const Aws::String& value) { m_tableRestoreRequestIdHasBeenSet = true; m_tableRestoreRequestId = value; }
    inline void SetTableRestoreRequestId(Aws::String&& value) { m_tableRestoreRequestIdHasBeenSet = true; m_tableRestoreRequestId = std::move(value); }
    inline void SetTableRestoreRequestId(const char* value) { m_tableRestoreRequestIdHasBeenSet = true; m_tableRestoreRequestId.assign(value); }
    inline DescribeTableRestoreStatusRequest& WithTableRestoreRequestId(const Aws::String& value) { SetTableRestoreRequestId(value); return *this;}
    inline DescribeTableRestoreStatusRequest& WithTableRestoreRequestId(Aws::String&& value) { SetTableRestoreRequestId(std::move(value)); return *this;}
    inline DescribeTableRestoreStatusRequest& WithTableRestoreRequestId(const char* value) { SetTableRestoreRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeTableRestoreStatusRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTableRestoreStatus</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by the <code>MaxRecords</code> parameter.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DescribeTableRestoreStatusRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeTableRestoreStatusRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeTableRestoreStatusRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_tableRestoreRequestId;
    bool m_tableRestoreRequestIdHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
