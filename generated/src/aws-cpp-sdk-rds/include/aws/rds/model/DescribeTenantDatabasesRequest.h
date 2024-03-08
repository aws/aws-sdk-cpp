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
  class DescribeTenantDatabasesRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DescribeTenantDatabasesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTenantDatabases"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The user-supplied DB instance identifier, which must match the identifier of
     * an existing instance owned by the Amazon Web Services account. This parameter
     * isn't case-sensitive.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The user-supplied DB instance identifier, which must match the identifier of
     * an existing instance owned by the Amazon Web Services account. This parameter
     * isn't case-sensitive.</p>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The user-supplied DB instance identifier, which must match the identifier of
     * an existing instance owned by the Amazon Web Services account. This parameter
     * isn't case-sensitive.</p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The user-supplied DB instance identifier, which must match the identifier of
     * an existing instance owned by the Amazon Web Services account. This parameter
     * isn't case-sensitive.</p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The user-supplied DB instance identifier, which must match the identifier of
     * an existing instance owned by the Amazon Web Services account. This parameter
     * isn't case-sensitive.</p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The user-supplied DB instance identifier, which must match the identifier of
     * an existing instance owned by the Amazon Web Services account. This parameter
     * isn't case-sensitive.</p>
     */
    inline DescribeTenantDatabasesRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The user-supplied DB instance identifier, which must match the identifier of
     * an existing instance owned by the Amazon Web Services account. This parameter
     * isn't case-sensitive.</p>
     */
    inline DescribeTenantDatabasesRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The user-supplied DB instance identifier, which must match the identifier of
     * an existing instance owned by the Amazon Web Services account. This parameter
     * isn't case-sensitive.</p>
     */
    inline DescribeTenantDatabasesRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The user-supplied tenant database name, which must match the name of an
     * existing tenant database on the specified DB instance owned by your Amazon Web
     * Services account. This parameter isn’t case-sensitive.</p>
     */
    inline const Aws::String& GetTenantDBName() const{ return m_tenantDBName; }

    /**
     * <p>The user-supplied tenant database name, which must match the name of an
     * existing tenant database on the specified DB instance owned by your Amazon Web
     * Services account. This parameter isn’t case-sensitive.</p>
     */
    inline bool TenantDBNameHasBeenSet() const { return m_tenantDBNameHasBeenSet; }

    /**
     * <p>The user-supplied tenant database name, which must match the name of an
     * existing tenant database on the specified DB instance owned by your Amazon Web
     * Services account. This parameter isn’t case-sensitive.</p>
     */
    inline void SetTenantDBName(const Aws::String& value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName = value; }

    /**
     * <p>The user-supplied tenant database name, which must match the name of an
     * existing tenant database on the specified DB instance owned by your Amazon Web
     * Services account. This parameter isn’t case-sensitive.</p>
     */
    inline void SetTenantDBName(Aws::String&& value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName = std::move(value); }

    /**
     * <p>The user-supplied tenant database name, which must match the name of an
     * existing tenant database on the specified DB instance owned by your Amazon Web
     * Services account. This parameter isn’t case-sensitive.</p>
     */
    inline void SetTenantDBName(const char* value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName.assign(value); }

    /**
     * <p>The user-supplied tenant database name, which must match the name of an
     * existing tenant database on the specified DB instance owned by your Amazon Web
     * Services account. This parameter isn’t case-sensitive.</p>
     */
    inline DescribeTenantDatabasesRequest& WithTenantDBName(const Aws::String& value) { SetTenantDBName(value); return *this;}

    /**
     * <p>The user-supplied tenant database name, which must match the name of an
     * existing tenant database on the specified DB instance owned by your Amazon Web
     * Services account. This parameter isn’t case-sensitive.</p>
     */
    inline DescribeTenantDatabasesRequest& WithTenantDBName(Aws::String&& value) { SetTenantDBName(std::move(value)); return *this;}

    /**
     * <p>The user-supplied tenant database name, which must match the name of an
     * existing tenant database on the specified DB instance owned by your Amazon Web
     * Services account. This parameter isn’t case-sensitive.</p>
     */
    inline DescribeTenantDatabasesRequest& WithTenantDBName(const char* value) { SetTenantDBName(value); return *this;}


    /**
     * <p>A filter that specifies one or more database tenants to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>tenant-db-name</code> - Tenant
     * database names. The results list only includes information about the tenant
     * databases that match these tenant DB names.</p> </li> <li> <p>
     * <code>tenant-database-resource-id</code> - Tenant database resource
     * identifiers.</p> </li> <li> <p> <code>dbi-resource-id</code> - DB instance
     * resource identifiers. The results list only includes information about the
     * tenants contained within the DB instances identified by these resource
     * identifiers.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A filter that specifies one or more database tenants to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>tenant-db-name</code> - Tenant
     * database names. The results list only includes information about the tenant
     * databases that match these tenant DB names.</p> </li> <li> <p>
     * <code>tenant-database-resource-id</code> - Tenant database resource
     * identifiers.</p> </li> <li> <p> <code>dbi-resource-id</code> - DB instance
     * resource identifiers. The results list only includes information about the
     * tenants contained within the DB instances identified by these resource
     * identifiers.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A filter that specifies one or more database tenants to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>tenant-db-name</code> - Tenant
     * database names. The results list only includes information about the tenant
     * databases that match these tenant DB names.</p> </li> <li> <p>
     * <code>tenant-database-resource-id</code> - Tenant database resource
     * identifiers.</p> </li> <li> <p> <code>dbi-resource-id</code> - DB instance
     * resource identifiers. The results list only includes information about the
     * tenants contained within the DB instances identified by these resource
     * identifiers.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A filter that specifies one or more database tenants to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>tenant-db-name</code> - Tenant
     * database names. The results list only includes information about the tenant
     * databases that match these tenant DB names.</p> </li> <li> <p>
     * <code>tenant-database-resource-id</code> - Tenant database resource
     * identifiers.</p> </li> <li> <p> <code>dbi-resource-id</code> - DB instance
     * resource identifiers. The results list only includes information about the
     * tenants contained within the DB instances identified by these resource
     * identifiers.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A filter that specifies one or more database tenants to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>tenant-db-name</code> - Tenant
     * database names. The results list only includes information about the tenant
     * databases that match these tenant DB names.</p> </li> <li> <p>
     * <code>tenant-database-resource-id</code> - Tenant database resource
     * identifiers.</p> </li> <li> <p> <code>dbi-resource-id</code> - DB instance
     * resource identifiers. The results list only includes information about the
     * tenants contained within the DB instances identified by these resource
     * identifiers.</p> </li> </ul>
     */
    inline DescribeTenantDatabasesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A filter that specifies one or more database tenants to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>tenant-db-name</code> - Tenant
     * database names. The results list only includes information about the tenant
     * databases that match these tenant DB names.</p> </li> <li> <p>
     * <code>tenant-database-resource-id</code> - Tenant database resource
     * identifiers.</p> </li> <li> <p> <code>dbi-resource-id</code> - DB instance
     * resource identifiers. The results list only includes information about the
     * tenants contained within the DB instances identified by these resource
     * identifiers.</p> </li> </ul>
     */
    inline DescribeTenantDatabasesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A filter that specifies one or more database tenants to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>tenant-db-name</code> - Tenant
     * database names. The results list only includes information about the tenant
     * databases that match these tenant DB names.</p> </li> <li> <p>
     * <code>tenant-database-resource-id</code> - Tenant database resource
     * identifiers.</p> </li> <li> <p> <code>dbi-resource-id</code> - DB instance
     * resource identifiers. The results list only includes information about the
     * tenants contained within the DB instances identified by these resource
     * identifiers.</p> </li> </ul>
     */
    inline DescribeTenantDatabasesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A filter that specifies one or more database tenants to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>tenant-db-name</code> - Tenant
     * database names. The results list only includes information about the tenant
     * databases that match these tenant DB names.</p> </li> <li> <p>
     * <code>tenant-database-resource-id</code> - Tenant database resource
     * identifiers.</p> </li> <li> <p> <code>dbi-resource-id</code> - DB instance
     * resource identifiers. The results list only includes information about the
     * tenants contained within the DB instances identified by these resource
     * identifiers.</p> </li> </ul>
     */
    inline DescribeTenantDatabasesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTenantDatabases</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTenantDatabases</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTenantDatabases</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTenantDatabases</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTenantDatabases</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTenantDatabases</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>.</p>
     */
    inline DescribeTenantDatabasesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTenantDatabases</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>.</p>
     */
    inline DescribeTenantDatabasesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTenantDatabases</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>.</p>
     */
    inline DescribeTenantDatabasesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p>
     */
    inline DescribeTenantDatabasesRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_tenantDBName;
    bool m_tenantDBNameHasBeenSet = false;

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
