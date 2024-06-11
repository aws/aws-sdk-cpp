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
  class DescribeDBClusterAutomatedBackupsRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DescribeDBClusterAutomatedBackupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDBClusterAutomatedBackups"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The resource ID of the DB cluster that is the source of the automated backup.
     * This parameter isn't case-sensitive.</p>
     */
    inline const Aws::String& GetDbClusterResourceId() const{ return m_dbClusterResourceId; }
    inline bool DbClusterResourceIdHasBeenSet() const { return m_dbClusterResourceIdHasBeenSet; }
    inline void SetDbClusterResourceId(const Aws::String& value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId = value; }
    inline void SetDbClusterResourceId(Aws::String&& value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId = std::move(value); }
    inline void SetDbClusterResourceId(const char* value) { m_dbClusterResourceIdHasBeenSet = true; m_dbClusterResourceId.assign(value); }
    inline DescribeDBClusterAutomatedBackupsRequest& WithDbClusterResourceId(const Aws::String& value) { SetDbClusterResourceId(value); return *this;}
    inline DescribeDBClusterAutomatedBackupsRequest& WithDbClusterResourceId(Aws::String&& value) { SetDbClusterResourceId(std::move(value)); return *this;}
    inline DescribeDBClusterAutomatedBackupsRequest& WithDbClusterResourceId(const char* value) { SetDbClusterResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The user-supplied DB cluster identifier. If this parameter is
     * specified, it must match the identifier of an existing DB cluster. It returns
     * information from the specific DB cluster's automated backup. This parameter
     * isn't case-sensitive.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }
    inline DescribeDBClusterAutomatedBackupsRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}
    inline DescribeDBClusterAutomatedBackupsRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}
    inline DescribeDBClusterAutomatedBackupsRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that specifies which resources to return based on status.</p>
     * <p>Supported filters are the following:</p> <ul> <li> <p> <code>status</code>
     * </p> <ul> <li> <p> <code>retained</code> - Automated backups for deleted
     * clusters and after backup replication is stopped.</p> </li> </ul> </li> <li> <p>
     * <code>db-cluster-id</code> - Accepts DB cluster identifiers and Amazon Resource
     * Names (ARNs). The results list includes only information about the DB cluster
     * automated backups identified by these ARNs.</p> </li> <li> <p>
     * <code>db-cluster-resource-id</code> - Accepts DB resource identifiers and Amazon
     * Resource Names (ARNs). The results list includes only information about the DB
     * cluster resources identified by these ARNs.</p> </li> </ul> <p>Returns all
     * resources by default. The status for each resource is specified in the
     * response.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeDBClusterAutomatedBackupsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeDBClusterAutomatedBackupsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeDBClusterAutomatedBackupsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeDBClusterAutomatedBackupsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeDBClusterAutomatedBackupsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token provided in the previous request. If this parameter is
     * specified the response includes only records beyond the marker, up to
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DescribeDBClusterAutomatedBackupsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeDBClusterAutomatedBackupsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeDBClusterAutomatedBackupsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}
  private:

    Aws::String m_dbClusterResourceId;
    bool m_dbClusterResourceIdHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

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
