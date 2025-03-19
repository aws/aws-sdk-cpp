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
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBSnapshotsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeDBSnapshotsRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DescribeDBSnapshotsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDBSnapshots"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the DB instance to retrieve the list of DB snapshots for. This
     * parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the identifier of an existing DBInstance.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const { return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    template<typename DBInstanceIdentifierT = Aws::String>
    void SetDBInstanceIdentifier(DBInstanceIdentifierT&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::forward<DBInstanceIdentifierT>(value); }
    template<typename DBInstanceIdentifierT = Aws::String>
    DescribeDBSnapshotsRequest& WithDBInstanceIdentifier(DBInstanceIdentifierT&& value) { SetDBInstanceIdentifier(std::forward<DBInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A specific DB snapshot identifier to describe. This value is stored as a
     * lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * the identifier of an existing DBSnapshot.</p> </li> <li> <p>If this identifier
     * is for an automated snapshot, the <code>SnapshotType</code> parameter must also
     * be specified.</p> </li> </ul>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const { return m_dBSnapshotIdentifier; }
    inline bool DBSnapshotIdentifierHasBeenSet() const { return m_dBSnapshotIdentifierHasBeenSet; }
    template<typename DBSnapshotIdentifierT = Aws::String>
    void SetDBSnapshotIdentifier(DBSnapshotIdentifierT&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = std::forward<DBSnapshotIdentifierT>(value); }
    template<typename DBSnapshotIdentifierT = Aws::String>
    DescribeDBSnapshotsRequest& WithDBSnapshotIdentifier(DBSnapshotIdentifierT&& value) { SetDBSnapshotIdentifier(std::forward<DBSnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of snapshots to be returned. You can specify one of the following
     * values:</p> <ul> <li> <p> <code>automated</code> - Return all DB snapshots that
     * have been automatically taken by Amazon RDS for my Amazon Web Services
     * account.</p> </li> <li> <p> <code>manual</code> - Return all DB snapshots that
     * have been taken by my Amazon Web Services account.</p> </li> <li> <p>
     * <code>shared</code> - Return all manual DB snapshots that have been shared to my
     * Amazon Web Services account.</p> </li> <li> <p> <code>public</code> - Return all
     * DB snapshots that have been marked as public.</p> </li> <li> <p>
     * <code>awsbackup</code> - Return the DB snapshots managed by the Amazon Web
     * Services Backup service.</p> <p>For information about Amazon Web Services
     * Backup, see the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html">
     * <i>Amazon Web Services Backup Developer Guide.</i> </a> </p> <p>The
     * <code>awsbackup</code> type does not apply to Aurora.</p> </li> </ul> <p>If you
     * don't specify a <code>SnapshotType</code> value, then both automated and manual
     * snapshots are returned. Shared and public DB snapshots are not included in the
     * returned results by default. You can include shared snapshots with these results
     * by enabling the <code>IncludeShared</code> parameter. You can include public
     * snapshots with these results by enabling the <code>IncludePublic</code>
     * parameter.</p> <p>The <code>IncludeShared</code> and <code>IncludePublic</code>
     * parameters don't apply for <code>SnapshotType</code> values of
     * <code>manual</code> or <code>automated</code>. The <code>IncludePublic</code>
     * parameter doesn't apply when <code>SnapshotType</code> is set to
     * <code>shared</code>. The <code>IncludeShared</code> parameter doesn't apply when
     * <code>SnapshotType</code> is set to <code>public</code>.</p>
     */
    inline const Aws::String& GetSnapshotType() const { return m_snapshotType; }
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }
    template<typename SnapshotTypeT = Aws::String>
    void SetSnapshotType(SnapshotTypeT&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::forward<SnapshotTypeT>(value); }
    template<typename SnapshotTypeT = Aws::String>
    DescribeDBSnapshotsRequest& WithSnapshotType(SnapshotTypeT&& value) { SetSnapshotType(std::forward<SnapshotTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that specifies one or more DB snapshots to describe.</p>
     * <p>Supported filters:</p> <ul> <li> <p> <code>db-instance-id</code> - Accepts DB
     * instance identifiers and DB instance Amazon Resource Names (ARNs).</p> </li>
     * <li> <p> <code>db-snapshot-id</code> - Accepts DB snapshot identifiers.</p>
     * </li> <li> <p> <code>dbi-resource-id</code> - Accepts identifiers of source DB
     * instances.</p> </li> <li> <p> <code>snapshot-type</code> - Accepts types of DB
     * snapshots.</p> </li> <li> <p> <code>engine</code> - Accepts names of database
     * engines.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeDBSnapshotsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeDBSnapshotsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum
     * 100.</p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeDBSnapshotsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBSnapshots</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeDBSnapshotsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include shared manual DB cluster snapshots from other
     * Amazon Web Services accounts that this Amazon Web Services account has been
     * given permission to copy or restore. By default, these snapshots are not
     * included.</p> <p>You can give an Amazon Web Services account permission to
     * restore a manual DB snapshot from another Amazon Web Services account by using
     * the <code>ModifyDBSnapshotAttribute</code> API action.</p> <p>This setting
     * doesn't apply to RDS Custom.</p>
     */
    inline bool GetIncludeShared() const { return m_includeShared; }
    inline bool IncludeSharedHasBeenSet() const { return m_includeSharedHasBeenSet; }
    inline void SetIncludeShared(bool value) { m_includeSharedHasBeenSet = true; m_includeShared = value; }
    inline DescribeDBSnapshotsRequest& WithIncludeShared(bool value) { SetIncludeShared(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include manual DB cluster snapshots that are public and
     * can be copied or restored by any Amazon Web Services account. By default, the
     * public snapshots are not included.</p> <p>You can share a manual DB snapshot as
     * public by using the <a>ModifyDBSnapshotAttribute</a> API.</p> <p>This setting
     * doesn't apply to RDS Custom.</p>
     */
    inline bool GetIncludePublic() const { return m_includePublic; }
    inline bool IncludePublicHasBeenSet() const { return m_includePublicHasBeenSet; }
    inline void SetIncludePublic(bool value) { m_includePublicHasBeenSet = true; m_includePublic = value; }
    inline DescribeDBSnapshotsRequest& WithIncludePublic(bool value) { SetIncludePublic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A specific DB resource ID to describe.</p>
     */
    inline const Aws::String& GetDbiResourceId() const { return m_dbiResourceId; }
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }
    template<typename DbiResourceIdT = Aws::String>
    void SetDbiResourceId(DbiResourceIdT&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::forward<DbiResourceIdT>(value); }
    template<typename DbiResourceIdT = Aws::String>
    DescribeDBSnapshotsRequest& WithDbiResourceId(DbiResourceIdT&& value) { SetDbiResourceId(std::forward<DbiResourceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_dBSnapshotIdentifier;
    bool m_dBSnapshotIdentifierHasBeenSet = false;

    Aws::String m_snapshotType;
    bool m_snapshotTypeHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    bool m_includeShared{false};
    bool m_includeSharedHasBeenSet = false;

    bool m_includePublic{false};
    bool m_includePublicHasBeenSet = false;

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
