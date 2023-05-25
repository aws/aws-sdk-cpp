/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Filter.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class DescribeDBProxyTargetsRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DescribeDBProxyTargetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDBProxyTargets"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the <code>DBProxyTarget</code> to describe.</p>
     */
    inline const Aws::String& GetDBProxyName() const{ return m_dBProxyName; }

    /**
     * <p>The identifier of the <code>DBProxyTarget</code> to describe.</p>
     */
    inline bool DBProxyNameHasBeenSet() const { return m_dBProxyNameHasBeenSet; }

    /**
     * <p>The identifier of the <code>DBProxyTarget</code> to describe.</p>
     */
    inline void SetDBProxyName(const Aws::String& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = value; }

    /**
     * <p>The identifier of the <code>DBProxyTarget</code> to describe.</p>
     */
    inline void SetDBProxyName(Aws::String&& value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName = std::move(value); }

    /**
     * <p>The identifier of the <code>DBProxyTarget</code> to describe.</p>
     */
    inline void SetDBProxyName(const char* value) { m_dBProxyNameHasBeenSet = true; m_dBProxyName.assign(value); }

    /**
     * <p>The identifier of the <code>DBProxyTarget</code> to describe.</p>
     */
    inline DescribeDBProxyTargetsRequest& WithDBProxyName(const Aws::String& value) { SetDBProxyName(value); return *this;}

    /**
     * <p>The identifier of the <code>DBProxyTarget</code> to describe.</p>
     */
    inline DescribeDBProxyTargetsRequest& WithDBProxyName(Aws::String&& value) { SetDBProxyName(std::move(value)); return *this;}

    /**
     * <p>The identifier of the <code>DBProxyTarget</code> to describe.</p>
     */
    inline DescribeDBProxyTargetsRequest& WithDBProxyName(const char* value) { SetDBProxyName(value); return *this;}


    /**
     * <p>The identifier of the <code>DBProxyTargetGroup</code> to describe.</p>
     */
    inline const Aws::String& GetTargetGroupName() const{ return m_targetGroupName; }

    /**
     * <p>The identifier of the <code>DBProxyTargetGroup</code> to describe.</p>
     */
    inline bool TargetGroupNameHasBeenSet() const { return m_targetGroupNameHasBeenSet; }

    /**
     * <p>The identifier of the <code>DBProxyTargetGroup</code> to describe.</p>
     */
    inline void SetTargetGroupName(const Aws::String& value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName = value; }

    /**
     * <p>The identifier of the <code>DBProxyTargetGroup</code> to describe.</p>
     */
    inline void SetTargetGroupName(Aws::String&& value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName = std::move(value); }

    /**
     * <p>The identifier of the <code>DBProxyTargetGroup</code> to describe.</p>
     */
    inline void SetTargetGroupName(const char* value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName.assign(value); }

    /**
     * <p>The identifier of the <code>DBProxyTargetGroup</code> to describe.</p>
     */
    inline DescribeDBProxyTargetsRequest& WithTargetGroupName(const Aws::String& value) { SetTargetGroupName(value); return *this;}

    /**
     * <p>The identifier of the <code>DBProxyTargetGroup</code> to describe.</p>
     */
    inline DescribeDBProxyTargetsRequest& WithTargetGroupName(Aws::String&& value) { SetTargetGroupName(std::move(value)); return *this;}

    /**
     * <p>The identifier of the <code>DBProxyTargetGroup</code> to describe.</p>
     */
    inline DescribeDBProxyTargetsRequest& WithTargetGroupName(const char* value) { SetTargetGroupName(value); return *this;}


    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeDBProxyTargetsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeDBProxyTargetsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeDBProxyTargetsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeDBProxyTargetsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBProxyTargetsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBProxyTargetsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBProxyTargetsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline DescribeDBProxyTargetsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}

  private:

    Aws::String m_dBProxyName;
    bool m_dBProxyNameHasBeenSet = false;

    Aws::String m_targetGroupName;
    bool m_targetGroupNameHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
