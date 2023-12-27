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
  class DescribeDBSnapshotTenantDatabasesRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DescribeDBSnapshotTenantDatabasesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDBSnapshotTenantDatabases"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the DB instance used to create the DB snapshots. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the identifier of an existing <code>DBInstance</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The ID of the DB instance used to create the DB snapshots. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the identifier of an existing <code>DBInstance</code>.</p> </li> </ul>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The ID of the DB instance used to create the DB snapshots. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the identifier of an existing <code>DBInstance</code>.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The ID of the DB instance used to create the DB snapshots. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the identifier of an existing <code>DBInstance</code>.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The ID of the DB instance used to create the DB snapshots. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the identifier of an existing <code>DBInstance</code>.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The ID of the DB instance used to create the DB snapshots. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the identifier of an existing <code>DBInstance</code>.</p> </li> </ul>
     */
    inline DescribeDBSnapshotTenantDatabasesRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The ID of the DB instance used to create the DB snapshots. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the identifier of an existing <code>DBInstance</code>.</p> </li> </ul>
     */
    inline DescribeDBSnapshotTenantDatabasesRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the DB instance used to create the DB snapshots. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the identifier of an existing <code>DBInstance</code>.</p> </li> </ul>
     */
    inline DescribeDBSnapshotTenantDatabasesRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The ID of a DB snapshot that contains the tenant databases to describe. This
     * value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>If
     * you specify this parameter, the value must match the ID of an existing DB
     * snapshot.</p> </li> <li> <p>If you specify an automatic snapshot, you must also
     * specify <code>SnapshotType</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const{ return m_dBSnapshotIdentifier; }

    /**
     * <p>The ID of a DB snapshot that contains the tenant databases to describe. This
     * value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>If
     * you specify this parameter, the value must match the ID of an existing DB
     * snapshot.</p> </li> <li> <p>If you specify an automatic snapshot, you must also
     * specify <code>SnapshotType</code>.</p> </li> </ul>
     */
    inline bool DBSnapshotIdentifierHasBeenSet() const { return m_dBSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The ID of a DB snapshot that contains the tenant databases to describe. This
     * value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>If
     * you specify this parameter, the value must match the ID of an existing DB
     * snapshot.</p> </li> <li> <p>If you specify an automatic snapshot, you must also
     * specify <code>SnapshotType</code>.</p> </li> </ul>
     */
    inline void SetDBSnapshotIdentifier(const Aws::String& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p>The ID of a DB snapshot that contains the tenant databases to describe. This
     * value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>If
     * you specify this parameter, the value must match the ID of an existing DB
     * snapshot.</p> </li> <li> <p>If you specify an automatic snapshot, you must also
     * specify <code>SnapshotType</code>.</p> </li> </ul>
     */
    inline void SetDBSnapshotIdentifier(Aws::String&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = std::move(value); }

    /**
     * <p>The ID of a DB snapshot that contains the tenant databases to describe. This
     * value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>If
     * you specify this parameter, the value must match the ID of an existing DB
     * snapshot.</p> </li> <li> <p>If you specify an automatic snapshot, you must also
     * specify <code>SnapshotType</code>.</p> </li> </ul>
     */
    inline void SetDBSnapshotIdentifier(const char* value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier.assign(value); }

    /**
     * <p>The ID of a DB snapshot that contains the tenant databases to describe. This
     * value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>If
     * you specify this parameter, the value must match the ID of an existing DB
     * snapshot.</p> </li> <li> <p>If you specify an automatic snapshot, you must also
     * specify <code>SnapshotType</code>.</p> </li> </ul>
     */
    inline DescribeDBSnapshotTenantDatabasesRequest& WithDBSnapshotIdentifier(const Aws::String& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The ID of a DB snapshot that contains the tenant databases to describe. This
     * value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>If
     * you specify this parameter, the value must match the ID of an existing DB
     * snapshot.</p> </li> <li> <p>If you specify an automatic snapshot, you must also
     * specify <code>SnapshotType</code>.</p> </li> </ul>
     */
    inline DescribeDBSnapshotTenantDatabasesRequest& WithDBSnapshotIdentifier(Aws::String&& value) { SetDBSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of a DB snapshot that contains the tenant databases to describe. This
     * value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>If
     * you specify this parameter, the value must match the ID of an existing DB
     * snapshot.</p> </li> <li> <p>If you specify an automatic snapshot, you must also
     * specify <code>SnapshotType</code>.</p> </li> </ul>
     */
    inline DescribeDBSnapshotTenantDatabasesRequest& WithDBSnapshotIdentifier(const char* value) { SetDBSnapshotIdentifier(value); return *this;}


    /**
     * <p>The type of DB snapshots to be returned. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>automated</code> – All DB snapshots that have
     * been automatically taken by Amazon RDS for my Amazon Web Services account.</p>
     * </li> <li> <p> <code>manual</code> – All DB snapshots that have been taken by my
     * Amazon Web Services account.</p> </li> <li> <p> <code>shared</code> – All manual
     * DB snapshots that have been shared to my Amazon Web Services account.</p> </li>
     * <li> <p> <code>public</code> – All DB snapshots that have been marked as
     * public.</p> </li> <li> <p> <code>awsbackup</code> – All DB snapshots managed by
     * the Amazon Web Services Backup service.</p> </li> </ul>
     */
    inline const Aws::String& GetSnapshotType() const{ return m_snapshotType; }

    /**
     * <p>The type of DB snapshots to be returned. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>automated</code> – All DB snapshots that have
     * been automatically taken by Amazon RDS for my Amazon Web Services account.</p>
     * </li> <li> <p> <code>manual</code> – All DB snapshots that have been taken by my
     * Amazon Web Services account.</p> </li> <li> <p> <code>shared</code> – All manual
     * DB snapshots that have been shared to my Amazon Web Services account.</p> </li>
     * <li> <p> <code>public</code> – All DB snapshots that have been marked as
     * public.</p> </li> <li> <p> <code>awsbackup</code> – All DB snapshots managed by
     * the Amazon Web Services Backup service.</p> </li> </ul>
     */
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }

    /**
     * <p>The type of DB snapshots to be returned. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>automated</code> – All DB snapshots that have
     * been automatically taken by Amazon RDS for my Amazon Web Services account.</p>
     * </li> <li> <p> <code>manual</code> – All DB snapshots that have been taken by my
     * Amazon Web Services account.</p> </li> <li> <p> <code>shared</code> – All manual
     * DB snapshots that have been shared to my Amazon Web Services account.</p> </li>
     * <li> <p> <code>public</code> – All DB snapshots that have been marked as
     * public.</p> </li> <li> <p> <code>awsbackup</code> – All DB snapshots managed by
     * the Amazon Web Services Backup service.</p> </li> </ul>
     */
    inline void SetSnapshotType(const Aws::String& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }

    /**
     * <p>The type of DB snapshots to be returned. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>automated</code> – All DB snapshots that have
     * been automatically taken by Amazon RDS for my Amazon Web Services account.</p>
     * </li> <li> <p> <code>manual</code> – All DB snapshots that have been taken by my
     * Amazon Web Services account.</p> </li> <li> <p> <code>shared</code> – All manual
     * DB snapshots that have been shared to my Amazon Web Services account.</p> </li>
     * <li> <p> <code>public</code> – All DB snapshots that have been marked as
     * public.</p> </li> <li> <p> <code>awsbackup</code> – All DB snapshots managed by
     * the Amazon Web Services Backup service.</p> </li> </ul>
     */
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::move(value); }

    /**
     * <p>The type of DB snapshots to be returned. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>automated</code> – All DB snapshots that have
     * been automatically taken by Amazon RDS for my Amazon Web Services account.</p>
     * </li> <li> <p> <code>manual</code> – All DB snapshots that have been taken by my
     * Amazon Web Services account.</p> </li> <li> <p> <code>shared</code> – All manual
     * DB snapshots that have been shared to my Amazon Web Services account.</p> </li>
     * <li> <p> <code>public</code> – All DB snapshots that have been marked as
     * public.</p> </li> <li> <p> <code>awsbackup</code> – All DB snapshots managed by
     * the Amazon Web Services Backup service.</p> </li> </ul>
     */
    inline void SetSnapshotType(const char* value) { m_snapshotTypeHasBeenSet = true; m_snapshotType.assign(value); }

    /**
     * <p>The type of DB snapshots to be returned. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>automated</code> – All DB snapshots that have
     * been automatically taken by Amazon RDS for my Amazon Web Services account.</p>
     * </li> <li> <p> <code>manual</code> – All DB snapshots that have been taken by my
     * Amazon Web Services account.</p> </li> <li> <p> <code>shared</code> – All manual
     * DB snapshots that have been shared to my Amazon Web Services account.</p> </li>
     * <li> <p> <code>public</code> – All DB snapshots that have been marked as
     * public.</p> </li> <li> <p> <code>awsbackup</code> – All DB snapshots managed by
     * the Amazon Web Services Backup service.</p> </li> </ul>
     */
    inline DescribeDBSnapshotTenantDatabasesRequest& WithSnapshotType(const Aws::String& value) { SetSnapshotType(value); return *this;}

    /**
     * <p>The type of DB snapshots to be returned. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>automated</code> – All DB snapshots that have
     * been automatically taken by Amazon RDS for my Amazon Web Services account.</p>
     * </li> <li> <p> <code>manual</code> – All DB snapshots that have been taken by my
     * Amazon Web Services account.</p> </li> <li> <p> <code>shared</code> – All manual
     * DB snapshots that have been shared to my Amazon Web Services account.</p> </li>
     * <li> <p> <code>public</code> – All DB snapshots that have been marked as
     * public.</p> </li> <li> <p> <code>awsbackup</code> – All DB snapshots managed by
     * the Amazon Web Services Backup service.</p> </li> </ul>
     */
    inline DescribeDBSnapshotTenantDatabasesRequest& WithSnapshotType(Aws::String&& value) { SetSnapshotType(std::move(value)); return *this;}

    /**
     * <p>The type of DB snapshots to be returned. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>automated</code> – All DB snapshots that have
     * been automatically taken by Amazon RDS for my Amazon Web Services account.</p>
     * </li> <li> <p> <code>manual</code> – All DB snapshots that have been taken by my
     * Amazon Web Services account.</p> </li> <li> <p> <code>shared</code> – All manual
     * DB snapshots that have been shared to my Amazon Web Services account.</p> </li>
     * <li> <p> <code>public</code> – All DB snapshots that have been marked as
     * public.</p> </li> <li> <p> <code>awsbackup</code> – All DB snapshots managed by
     * the Amazon Web Services Backup service.</p> </li> </ul>
     */
    inline DescribeDBSnapshotTenantDatabasesRequest& WithSnapshotType(const char* value) { SetSnapshotType(value); return *this;}


    /**
     * <p>A filter that specifies one or more tenant databases to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>tenant-db-name</code> - Tenant
     * database names. The results list only includes information about the tenant
     * databases that match these tenant DB names.</p> </li> <li> <p>
     * <code>tenant-database-resource-id</code> - Tenant database resource identifiers.
     * The results list only includes information about the tenant databases contained
     * within the DB snapshots.</p> </li> <li> <p> <code>dbi-resource-id</code> - DB
     * instance resource identifiers. The results list only includes information about
     * snapshots containing tenant databases contained within the DB instances
     * identified by these resource identifiers.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs).</p> </li> <li> <p> <code>db-snapshot-id</code> -
     * Accepts DB snapshot identifiers.</p> </li> <li> <p> <code>snapshot-type</code> -
     * Accepts types of DB snapshots.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A filter that specifies one or more tenant databases to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>tenant-db-name</code> - Tenant
     * database names. The results list only includes information about the tenant
     * databases that match these tenant DB names.</p> </li> <li> <p>
     * <code>tenant-database-resource-id</code> - Tenant database resource identifiers.
     * The results list only includes information about the tenant databases contained
     * within the DB snapshots.</p> </li> <li> <p> <code>dbi-resource-id</code> - DB
     * instance resource identifiers. The results list only includes information about
     * snapshots containing tenant databases contained within the DB instances
     * identified by these resource identifiers.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs).</p> </li> <li> <p> <code>db-snapshot-id</code> -
     * Accepts DB snapshot identifiers.</p> </li> <li> <p> <code>snapshot-type</code> -
     * Accepts types of DB snapshots.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A filter that specifies one or more tenant databases to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>tenant-db-name</code> - Tenant
     * database names. The results list only includes information about the tenant
     * databases that match these tenant DB names.</p> </li> <li> <p>
     * <code>tenant-database-resource-id</code> - Tenant database resource identifiers.
     * The results list only includes information about the tenant databases contained
     * within the DB snapshots.</p> </li> <li> <p> <code>dbi-resource-id</code> - DB
     * instance resource identifiers. The results list only includes information about
     * snapshots containing tenant databases contained within the DB instances
     * identified by these resource identifiers.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs).</p> </li> <li> <p> <code>db-snapshot-id</code> -
     * Accepts DB snapshot identifiers.</p> </li> <li> <p> <code>snapshot-type</code> -
     * Accepts types of DB snapshots.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A filter that specifies one or more tenant databases to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>tenant-db-name</code> - Tenant
     * database names. The results list only includes information about the tenant
     * databases that match these tenant DB names.</p> </li> <li> <p>
     * <code>tenant-database-resource-id</code> - Tenant database resource identifiers.
     * The results list only includes information about the tenant databases contained
     * within the DB snapshots.</p> </li> <li> <p> <code>dbi-resource-id</code> - DB
     * instance resource identifiers. The results list only includes information about
     * snapshots containing tenant databases contained within the DB instances
     * identified by these resource identifiers.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs).</p> </li> <li> <p> <code>db-snapshot-id</code> -
     * Accepts DB snapshot identifiers.</p> </li> <li> <p> <code>snapshot-type</code> -
     * Accepts types of DB snapshots.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A filter that specifies one or more tenant databases to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>tenant-db-name</code> - Tenant
     * database names. The results list only includes information about the tenant
     * databases that match these tenant DB names.</p> </li> <li> <p>
     * <code>tenant-database-resource-id</code> - Tenant database resource identifiers.
     * The results list only includes information about the tenant databases contained
     * within the DB snapshots.</p> </li> <li> <p> <code>dbi-resource-id</code> - DB
     * instance resource identifiers. The results list only includes information about
     * snapshots containing tenant databases contained within the DB instances
     * identified by these resource identifiers.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs).</p> </li> <li> <p> <code>db-snapshot-id</code> -
     * Accepts DB snapshot identifiers.</p> </li> <li> <p> <code>snapshot-type</code> -
     * Accepts types of DB snapshots.</p> </li> </ul>
     */
    inline DescribeDBSnapshotTenantDatabasesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A filter that specifies one or more tenant databases to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>tenant-db-name</code> - Tenant
     * database names. The results list only includes information about the tenant
     * databases that match these tenant DB names.</p> </li> <li> <p>
     * <code>tenant-database-resource-id</code> - Tenant database resource identifiers.
     * The results list only includes information about the tenant databases contained
     * within the DB snapshots.</p> </li> <li> <p> <code>dbi-resource-id</code> - DB
     * instance resource identifiers. The results list only includes information about
     * snapshots containing tenant databases contained within the DB instances
     * identified by these resource identifiers.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs).</p> </li> <li> <p> <code>db-snapshot-id</code> -
     * Accepts DB snapshot identifiers.</p> </li> <li> <p> <code>snapshot-type</code> -
     * Accepts types of DB snapshots.</p> </li> </ul>
     */
    inline DescribeDBSnapshotTenantDatabasesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A filter that specifies one or more tenant databases to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>tenant-db-name</code> - Tenant
     * database names. The results list only includes information about the tenant
     * databases that match these tenant DB names.</p> </li> <li> <p>
     * <code>tenant-database-resource-id</code> - Tenant database resource identifiers.
     * The results list only includes information about the tenant databases contained
     * within the DB snapshots.</p> </li> <li> <p> <code>dbi-resource-id</code> - DB
     * instance resource identifiers. The results list only includes information about
     * snapshots containing tenant databases contained within the DB instances
     * identified by these resource identifiers.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs).</p> </li> <li> <p> <code>db-snapshot-id</code> -
     * Accepts DB snapshot identifiers.</p> </li> <li> <p> <code>snapshot-type</code> -
     * Accepts types of DB snapshots.</p> </li> </ul>
     */
    inline DescribeDBSnapshotTenantDatabasesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A filter that specifies one or more tenant databases to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>tenant-db-name</code> - Tenant
     * database names. The results list only includes information about the tenant
     * databases that match these tenant DB names.</p> </li> <li> <p>
     * <code>tenant-database-resource-id</code> - Tenant database resource identifiers.
     * The results list only includes information about the tenant databases contained
     * within the DB snapshots.</p> </li> <li> <p> <code>dbi-resource-id</code> - DB
     * instance resource identifiers. The results list only includes information about
     * snapshots containing tenant databases contained within the DB instances
     * identified by these resource identifiers.</p> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and DB instance
     * Amazon Resource Names (ARNs).</p> </li> <li> <p> <code>db-snapshot-id</code> -
     * Accepts DB snapshot identifiers.</p> </li> <li> <p> <code>snapshot-type</code> -
     * Accepts types of DB snapshots.</p> </li> </ul>
     */
    inline DescribeDBSnapshotTenantDatabasesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline DescribeDBSnapshotTenantDatabasesRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBSnapshotTenantDatabases</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBSnapshotTenantDatabases</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBSnapshotTenantDatabases</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBSnapshotTenantDatabases</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBSnapshotTenantDatabases</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBSnapshotTenantDatabases</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBSnapshotTenantDatabasesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBSnapshotTenantDatabases</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBSnapshotTenantDatabasesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBSnapshotTenantDatabases</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBSnapshotTenantDatabasesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A specific DB resource identifier to describe.</p>
     */
    inline const Aws::String& GetDbiResourceId() const{ return m_dbiResourceId; }

    /**
     * <p>A specific DB resource identifier to describe.</p>
     */
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }

    /**
     * <p>A specific DB resource identifier to describe.</p>
     */
    inline void SetDbiResourceId(const Aws::String& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = value; }

    /**
     * <p>A specific DB resource identifier to describe.</p>
     */
    inline void SetDbiResourceId(Aws::String&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::move(value); }

    /**
     * <p>A specific DB resource identifier to describe.</p>
     */
    inline void SetDbiResourceId(const char* value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId.assign(value); }

    /**
     * <p>A specific DB resource identifier to describe.</p>
     */
    inline DescribeDBSnapshotTenantDatabasesRequest& WithDbiResourceId(const Aws::String& value) { SetDbiResourceId(value); return *this;}

    /**
     * <p>A specific DB resource identifier to describe.</p>
     */
    inline DescribeDBSnapshotTenantDatabasesRequest& WithDbiResourceId(Aws::String&& value) { SetDbiResourceId(std::move(value)); return *this;}

    /**
     * <p>A specific DB resource identifier to describe.</p>
     */
    inline DescribeDBSnapshotTenantDatabasesRequest& WithDbiResourceId(const char* value) { SetDbiResourceId(value); return *this;}

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_dBSnapshotIdentifier;
    bool m_dBSnapshotIdentifierHasBeenSet = false;

    Aws::String m_snapshotType;
    bool m_snapshotTypeHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
