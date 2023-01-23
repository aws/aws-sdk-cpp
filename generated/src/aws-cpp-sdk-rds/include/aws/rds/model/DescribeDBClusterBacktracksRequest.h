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
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBClusterBacktracksMessage">AWS
   * API Reference</a></p>
   */
  class DescribeDBClusterBacktracksRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DescribeDBClusterBacktracksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDBClusterBacktracks"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The DB cluster identifier of the DB cluster to be described. This parameter
     * is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Example: <code>my-cluster1</code>
     * </p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The DB cluster identifier of the DB cluster to be described. This parameter
     * is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Example: <code>my-cluster1</code>
     * </p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The DB cluster identifier of the DB cluster to be described. This parameter
     * is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Example: <code>my-cluster1</code>
     * </p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The DB cluster identifier of the DB cluster to be described. This parameter
     * is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Example: <code>my-cluster1</code>
     * </p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The DB cluster identifier of the DB cluster to be described. This parameter
     * is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Example: <code>my-cluster1</code>
     * </p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The DB cluster identifier of the DB cluster to be described. This parameter
     * is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Example: <code>my-cluster1</code>
     * </p>
     */
    inline DescribeDBClusterBacktracksRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The DB cluster identifier of the DB cluster to be described. This parameter
     * is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Example: <code>my-cluster1</code>
     * </p>
     */
    inline DescribeDBClusterBacktracksRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB cluster identifier of the DB cluster to be described. This parameter
     * is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Example: <code>my-cluster1</code>
     * </p>
     */
    inline DescribeDBClusterBacktracksRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>If specified, this value is the backtrack identifier of the backtrack to be
     * described.</p> <p>Constraints:</p> <ul> <li> <p>Must contain a valid universally
     * unique identifier (UUID). For more information about UUIDs, see <a
     * href="http://www.ietf.org/rfc/rfc4122.txt">A Universally Unique Identifier
     * (UUID) URN Namespace</a>.</p> </li> </ul> <p>Example:
     * <code>123e4567-e89b-12d3-a456-426655440000</code> </p>
     */
    inline const Aws::String& GetBacktrackIdentifier() const{ return m_backtrackIdentifier; }

    /**
     * <p>If specified, this value is the backtrack identifier of the backtrack to be
     * described.</p> <p>Constraints:</p> <ul> <li> <p>Must contain a valid universally
     * unique identifier (UUID). For more information about UUIDs, see <a
     * href="http://www.ietf.org/rfc/rfc4122.txt">A Universally Unique Identifier
     * (UUID) URN Namespace</a>.</p> </li> </ul> <p>Example:
     * <code>123e4567-e89b-12d3-a456-426655440000</code> </p>
     */
    inline bool BacktrackIdentifierHasBeenSet() const { return m_backtrackIdentifierHasBeenSet; }

    /**
     * <p>If specified, this value is the backtrack identifier of the backtrack to be
     * described.</p> <p>Constraints:</p> <ul> <li> <p>Must contain a valid universally
     * unique identifier (UUID). For more information about UUIDs, see <a
     * href="http://www.ietf.org/rfc/rfc4122.txt">A Universally Unique Identifier
     * (UUID) URN Namespace</a>.</p> </li> </ul> <p>Example:
     * <code>123e4567-e89b-12d3-a456-426655440000</code> </p>
     */
    inline void SetBacktrackIdentifier(const Aws::String& value) { m_backtrackIdentifierHasBeenSet = true; m_backtrackIdentifier = value; }

    /**
     * <p>If specified, this value is the backtrack identifier of the backtrack to be
     * described.</p> <p>Constraints:</p> <ul> <li> <p>Must contain a valid universally
     * unique identifier (UUID). For more information about UUIDs, see <a
     * href="http://www.ietf.org/rfc/rfc4122.txt">A Universally Unique Identifier
     * (UUID) URN Namespace</a>.</p> </li> </ul> <p>Example:
     * <code>123e4567-e89b-12d3-a456-426655440000</code> </p>
     */
    inline void SetBacktrackIdentifier(Aws::String&& value) { m_backtrackIdentifierHasBeenSet = true; m_backtrackIdentifier = std::move(value); }

    /**
     * <p>If specified, this value is the backtrack identifier of the backtrack to be
     * described.</p> <p>Constraints:</p> <ul> <li> <p>Must contain a valid universally
     * unique identifier (UUID). For more information about UUIDs, see <a
     * href="http://www.ietf.org/rfc/rfc4122.txt">A Universally Unique Identifier
     * (UUID) URN Namespace</a>.</p> </li> </ul> <p>Example:
     * <code>123e4567-e89b-12d3-a456-426655440000</code> </p>
     */
    inline void SetBacktrackIdentifier(const char* value) { m_backtrackIdentifierHasBeenSet = true; m_backtrackIdentifier.assign(value); }

    /**
     * <p>If specified, this value is the backtrack identifier of the backtrack to be
     * described.</p> <p>Constraints:</p> <ul> <li> <p>Must contain a valid universally
     * unique identifier (UUID). For more information about UUIDs, see <a
     * href="http://www.ietf.org/rfc/rfc4122.txt">A Universally Unique Identifier
     * (UUID) URN Namespace</a>.</p> </li> </ul> <p>Example:
     * <code>123e4567-e89b-12d3-a456-426655440000</code> </p>
     */
    inline DescribeDBClusterBacktracksRequest& WithBacktrackIdentifier(const Aws::String& value) { SetBacktrackIdentifier(value); return *this;}

    /**
     * <p>If specified, this value is the backtrack identifier of the backtrack to be
     * described.</p> <p>Constraints:</p> <ul> <li> <p>Must contain a valid universally
     * unique identifier (UUID). For more information about UUIDs, see <a
     * href="http://www.ietf.org/rfc/rfc4122.txt">A Universally Unique Identifier
     * (UUID) URN Namespace</a>.</p> </li> </ul> <p>Example:
     * <code>123e4567-e89b-12d3-a456-426655440000</code> </p>
     */
    inline DescribeDBClusterBacktracksRequest& WithBacktrackIdentifier(Aws::String&& value) { SetBacktrackIdentifier(std::move(value)); return *this;}

    /**
     * <p>If specified, this value is the backtrack identifier of the backtrack to be
     * described.</p> <p>Constraints:</p> <ul> <li> <p>Must contain a valid universally
     * unique identifier (UUID). For more information about UUIDs, see <a
     * href="http://www.ietf.org/rfc/rfc4122.txt">A Universally Unique Identifier
     * (UUID) URN Namespace</a>.</p> </li> </ul> <p>Example:
     * <code>123e4567-e89b-12d3-a456-426655440000</code> </p>
     */
    inline DescribeDBClusterBacktracksRequest& WithBacktrackIdentifier(const char* value) { SetBacktrackIdentifier(value); return *this;}


    /**
     * <p>A filter that specifies one or more DB clusters to describe. Supported
     * filters include the following:</p> <ul> <li> <p>
     * <code>db-cluster-backtrack-id</code> - Accepts backtrack identifiers. The
     * results list includes information about only the backtracks identified by these
     * identifiers.</p> </li> <li> <p> <code>db-cluster-backtrack-status</code> -
     * Accepts any of the following backtrack status values:</p> <ul> <li> <p>
     * <code>applying</code> </p> </li> <li> <p> <code>completed</code> </p> </li> <li>
     * <p> <code>failed</code> </p> </li> <li> <p> <code>pending</code> </p> </li>
     * </ul> <p>The results list includes information about only the backtracks
     * identified by these values.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A filter that specifies one or more DB clusters to describe. Supported
     * filters include the following:</p> <ul> <li> <p>
     * <code>db-cluster-backtrack-id</code> - Accepts backtrack identifiers. The
     * results list includes information about only the backtracks identified by these
     * identifiers.</p> </li> <li> <p> <code>db-cluster-backtrack-status</code> -
     * Accepts any of the following backtrack status values:</p> <ul> <li> <p>
     * <code>applying</code> </p> </li> <li> <p> <code>completed</code> </p> </li> <li>
     * <p> <code>failed</code> </p> </li> <li> <p> <code>pending</code> </p> </li>
     * </ul> <p>The results list includes information about only the backtracks
     * identified by these values.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A filter that specifies one or more DB clusters to describe. Supported
     * filters include the following:</p> <ul> <li> <p>
     * <code>db-cluster-backtrack-id</code> - Accepts backtrack identifiers. The
     * results list includes information about only the backtracks identified by these
     * identifiers.</p> </li> <li> <p> <code>db-cluster-backtrack-status</code> -
     * Accepts any of the following backtrack status values:</p> <ul> <li> <p>
     * <code>applying</code> </p> </li> <li> <p> <code>completed</code> </p> </li> <li>
     * <p> <code>failed</code> </p> </li> <li> <p> <code>pending</code> </p> </li>
     * </ul> <p>The results list includes information about only the backtracks
     * identified by these values.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A filter that specifies one or more DB clusters to describe. Supported
     * filters include the following:</p> <ul> <li> <p>
     * <code>db-cluster-backtrack-id</code> - Accepts backtrack identifiers. The
     * results list includes information about only the backtracks identified by these
     * identifiers.</p> </li> <li> <p> <code>db-cluster-backtrack-status</code> -
     * Accepts any of the following backtrack status values:</p> <ul> <li> <p>
     * <code>applying</code> </p> </li> <li> <p> <code>completed</code> </p> </li> <li>
     * <p> <code>failed</code> </p> </li> <li> <p> <code>pending</code> </p> </li>
     * </ul> <p>The results list includes information about only the backtracks
     * identified by these values.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A filter that specifies one or more DB clusters to describe. Supported
     * filters include the following:</p> <ul> <li> <p>
     * <code>db-cluster-backtrack-id</code> - Accepts backtrack identifiers. The
     * results list includes information about only the backtracks identified by these
     * identifiers.</p> </li> <li> <p> <code>db-cluster-backtrack-status</code> -
     * Accepts any of the following backtrack status values:</p> <ul> <li> <p>
     * <code>applying</code> </p> </li> <li> <p> <code>completed</code> </p> </li> <li>
     * <p> <code>failed</code> </p> </li> <li> <p> <code>pending</code> </p> </li>
     * </ul> <p>The results list includes information about only the backtracks
     * identified by these values.</p> </li> </ul>
     */
    inline DescribeDBClusterBacktracksRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A filter that specifies one or more DB clusters to describe. Supported
     * filters include the following:</p> <ul> <li> <p>
     * <code>db-cluster-backtrack-id</code> - Accepts backtrack identifiers. The
     * results list includes information about only the backtracks identified by these
     * identifiers.</p> </li> <li> <p> <code>db-cluster-backtrack-status</code> -
     * Accepts any of the following backtrack status values:</p> <ul> <li> <p>
     * <code>applying</code> </p> </li> <li> <p> <code>completed</code> </p> </li> <li>
     * <p> <code>failed</code> </p> </li> <li> <p> <code>pending</code> </p> </li>
     * </ul> <p>The results list includes information about only the backtracks
     * identified by these values.</p> </li> </ul>
     */
    inline DescribeDBClusterBacktracksRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A filter that specifies one or more DB clusters to describe. Supported
     * filters include the following:</p> <ul> <li> <p>
     * <code>db-cluster-backtrack-id</code> - Accepts backtrack identifiers. The
     * results list includes information about only the backtracks identified by these
     * identifiers.</p> </li> <li> <p> <code>db-cluster-backtrack-status</code> -
     * Accepts any of the following backtrack status values:</p> <ul> <li> <p>
     * <code>applying</code> </p> </li> <li> <p> <code>completed</code> </p> </li> <li>
     * <p> <code>failed</code> </p> </li> <li> <p> <code>pending</code> </p> </li>
     * </ul> <p>The results list includes information about only the backtracks
     * identified by these values.</p> </li> </ul>
     */
    inline DescribeDBClusterBacktracksRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A filter that specifies one or more DB clusters to describe. Supported
     * filters include the following:</p> <ul> <li> <p>
     * <code>db-cluster-backtrack-id</code> - Accepts backtrack identifiers. The
     * results list includes information about only the backtracks identified by these
     * identifiers.</p> </li> <li> <p> <code>db-cluster-backtrack-status</code> -
     * Accepts any of the following backtrack status values:</p> <ul> <li> <p>
     * <code>applying</code> </p> </li> <li> <p> <code>completed</code> </p> </li> <li>
     * <p> <code>failed</code> </p> </li> <li> <p> <code>pending</code> </p> </li>
     * </ul> <p>The results list includes information about only the backtracks
     * identified by these values.</p> </li> </ul>
     */
    inline DescribeDBClusterBacktracksRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so you can retrieve the remaining
     * results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so you can retrieve the remaining
     * results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so you can retrieve the remaining
     * results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so you can retrieve the remaining
     * results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline DescribeDBClusterBacktracksRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBClusterBacktracks</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBClusterBacktracks</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBClusterBacktracks</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBClusterBacktracks</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBClusterBacktracks</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBClusterBacktracks</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBClusterBacktracksRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBClusterBacktracks</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBClusterBacktracksRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBClusterBacktracks</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBClusterBacktracksRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_backtrackIdentifier;
    bool m_backtrackIdentifierHasBeenSet = false;

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
