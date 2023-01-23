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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBInstancesMessage">AWS
   * API Reference</a></p>
   */
  class DescribeDBInstancesRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DescribeDBInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDBInstances"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The user-supplied instance identifier or the Amazon Resource Name (ARN) of
     * the DB instance. If this parameter is specified, information from only the
     * specific DB instance is returned. This parameter isn't case-sensitive.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The user-supplied instance identifier or the Amazon Resource Name (ARN) of
     * the DB instance. If this parameter is specified, information from only the
     * specific DB instance is returned. This parameter isn't case-sensitive.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The user-supplied instance identifier or the Amazon Resource Name (ARN) of
     * the DB instance. If this parameter is specified, information from only the
     * specific DB instance is returned. This parameter isn't case-sensitive.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The user-supplied instance identifier or the Amazon Resource Name (ARN) of
     * the DB instance. If this parameter is specified, information from only the
     * specific DB instance is returned. This parameter isn't case-sensitive.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The user-supplied instance identifier or the Amazon Resource Name (ARN) of
     * the DB instance. If this parameter is specified, information from only the
     * specific DB instance is returned. This parameter isn't case-sensitive.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The user-supplied instance identifier or the Amazon Resource Name (ARN) of
     * the DB instance. If this parameter is specified, information from only the
     * specific DB instance is returned. This parameter isn't case-sensitive.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline DescribeDBInstancesRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The user-supplied instance identifier or the Amazon Resource Name (ARN) of
     * the DB instance. If this parameter is specified, information from only the
     * specific DB instance is returned. This parameter isn't case-sensitive.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline DescribeDBInstancesRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The user-supplied instance identifier or the Amazon Resource Name (ARN) of
     * the DB instance. If this parameter is specified, information from only the
     * specific DB instance is returned. This parameter isn't case-sensitive.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match the identifier of an
     * existing DBInstance.</p> </li> </ul>
     */
    inline DescribeDBInstancesRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>A filter that specifies one or more DB instances to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB
     * cluster identifiers and DB cluster Amazon Resource Names (ARNs). The results
     * list only includes information about the DB instances associated with the DB
     * clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list only includes information about
     * the DB instances identified by these ARNs.</p> </li> <li> <p>
     * <code>dbi-resource-id</code> - Accepts DB instance resource identifiers. The
     * results list will only include information about the DB instances identified by
     * these DB instance resource identifiers.</p> </li> <li> <p> <code>domain</code> -
     * Accepts Active Directory directory IDs. The results list only includes
     * information about the DB instances associated with these domains.</p> </li> <li>
     * <p> <code>engine</code> - Accepts engine names. The results list only includes
     * information about the DB instances for these engines.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A filter that specifies one or more DB instances to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB
     * cluster identifiers and DB cluster Amazon Resource Names (ARNs). The results
     * list only includes information about the DB instances associated with the DB
     * clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list only includes information about
     * the DB instances identified by these ARNs.</p> </li> <li> <p>
     * <code>dbi-resource-id</code> - Accepts DB instance resource identifiers. The
     * results list will only include information about the DB instances identified by
     * these DB instance resource identifiers.</p> </li> <li> <p> <code>domain</code> -
     * Accepts Active Directory directory IDs. The results list only includes
     * information about the DB instances associated with these domains.</p> </li> <li>
     * <p> <code>engine</code> - Accepts engine names. The results list only includes
     * information about the DB instances for these engines.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A filter that specifies one or more DB instances to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB
     * cluster identifiers and DB cluster Amazon Resource Names (ARNs). The results
     * list only includes information about the DB instances associated with the DB
     * clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list only includes information about
     * the DB instances identified by these ARNs.</p> </li> <li> <p>
     * <code>dbi-resource-id</code> - Accepts DB instance resource identifiers. The
     * results list will only include information about the DB instances identified by
     * these DB instance resource identifiers.</p> </li> <li> <p> <code>domain</code> -
     * Accepts Active Directory directory IDs. The results list only includes
     * information about the DB instances associated with these domains.</p> </li> <li>
     * <p> <code>engine</code> - Accepts engine names. The results list only includes
     * information about the DB instances for these engines.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A filter that specifies one or more DB instances to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB
     * cluster identifiers and DB cluster Amazon Resource Names (ARNs). The results
     * list only includes information about the DB instances associated with the DB
     * clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list only includes information about
     * the DB instances identified by these ARNs.</p> </li> <li> <p>
     * <code>dbi-resource-id</code> - Accepts DB instance resource identifiers. The
     * results list will only include information about the DB instances identified by
     * these DB instance resource identifiers.</p> </li> <li> <p> <code>domain</code> -
     * Accepts Active Directory directory IDs. The results list only includes
     * information about the DB instances associated with these domains.</p> </li> <li>
     * <p> <code>engine</code> - Accepts engine names. The results list only includes
     * information about the DB instances for these engines.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A filter that specifies one or more DB instances to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB
     * cluster identifiers and DB cluster Amazon Resource Names (ARNs). The results
     * list only includes information about the DB instances associated with the DB
     * clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list only includes information about
     * the DB instances identified by these ARNs.</p> </li> <li> <p>
     * <code>dbi-resource-id</code> - Accepts DB instance resource identifiers. The
     * results list will only include information about the DB instances identified by
     * these DB instance resource identifiers.</p> </li> <li> <p> <code>domain</code> -
     * Accepts Active Directory directory IDs. The results list only includes
     * information about the DB instances associated with these domains.</p> </li> <li>
     * <p> <code>engine</code> - Accepts engine names. The results list only includes
     * information about the DB instances for these engines.</p> </li> </ul>
     */
    inline DescribeDBInstancesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A filter that specifies one or more DB instances to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB
     * cluster identifiers and DB cluster Amazon Resource Names (ARNs). The results
     * list only includes information about the DB instances associated with the DB
     * clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list only includes information about
     * the DB instances identified by these ARNs.</p> </li> <li> <p>
     * <code>dbi-resource-id</code> - Accepts DB instance resource identifiers. The
     * results list will only include information about the DB instances identified by
     * these DB instance resource identifiers.</p> </li> <li> <p> <code>domain</code> -
     * Accepts Active Directory directory IDs. The results list only includes
     * information about the DB instances associated with these domains.</p> </li> <li>
     * <p> <code>engine</code> - Accepts engine names. The results list only includes
     * information about the DB instances for these engines.</p> </li> </ul>
     */
    inline DescribeDBInstancesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A filter that specifies one or more DB instances to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB
     * cluster identifiers and DB cluster Amazon Resource Names (ARNs). The results
     * list only includes information about the DB instances associated with the DB
     * clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list only includes information about
     * the DB instances identified by these ARNs.</p> </li> <li> <p>
     * <code>dbi-resource-id</code> - Accepts DB instance resource identifiers. The
     * results list will only include information about the DB instances identified by
     * these DB instance resource identifiers.</p> </li> <li> <p> <code>domain</code> -
     * Accepts Active Directory directory IDs. The results list only includes
     * information about the DB instances associated with these domains.</p> </li> <li>
     * <p> <code>engine</code> - Accepts engine names. The results list only includes
     * information about the DB instances for these engines.</p> </li> </ul>
     */
    inline DescribeDBInstancesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A filter that specifies one or more DB instances to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>db-cluster-id</code> - Accepts DB
     * cluster identifiers and DB cluster Amazon Resource Names (ARNs). The results
     * list only includes information about the DB instances associated with the DB
     * clusters identified by these ARNs.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs). The results list only includes information about
     * the DB instances identified by these ARNs.</p> </li> <li> <p>
     * <code>dbi-resource-id</code> - Accepts DB instance resource identifiers. The
     * results list will only include information about the DB instances identified by
     * these DB instance resource identifiers.</p> </li> <li> <p> <code>domain</code> -
     * Accepts Active Directory directory IDs. The results list only includes
     * information about the DB instances associated with these domains.</p> </li> <li>
     * <p> <code>engine</code> - Accepts engine names. The results list only includes
     * information about the DB instances for these engines.</p> </li> </ul>
     */
    inline DescribeDBInstancesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum
     * 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum
     * 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum
     * 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum
     * 100.</p>
     */
    inline DescribeDBInstancesRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBInstances</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBInstances</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBInstances</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBInstances</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBInstances</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBInstances</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeDBInstancesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBInstances</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeDBInstancesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBInstances</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeDBInstancesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
