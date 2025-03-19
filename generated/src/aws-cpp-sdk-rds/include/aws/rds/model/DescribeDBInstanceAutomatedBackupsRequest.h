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
   * <p>Parameter input for DescribeDBInstanceAutomatedBackups.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBInstanceAutomatedBackupsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeDBInstanceAutomatedBackupsRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DescribeDBInstanceAutomatedBackupsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDBInstanceAutomatedBackups"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The resource ID of the DB instance that is the source of the automated
     * backup. This parameter isn't case-sensitive.</p>
     */
    inline const Aws::String& GetDbiResourceId() const { return m_dbiResourceId; }
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }
    template<typename DbiResourceIdT = Aws::String>
    void SetDbiResourceId(DbiResourceIdT&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::forward<DbiResourceIdT>(value); }
    template<typename DbiResourceIdT = Aws::String>
    DescribeDBInstanceAutomatedBackupsRequest& WithDbiResourceId(DbiResourceIdT&& value) { SetDbiResourceId(std::forward<DbiResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The user-supplied instance identifier. If this parameter is
     * specified, it must match the identifier of an existing DB instance. It returns
     * information from the specific DB instance's automated backup. This parameter
     * isn't case-sensitive.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const { return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    template<typename DBInstanceIdentifierT = Aws::String>
    void SetDBInstanceIdentifier(DBInstanceIdentifierT&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::forward<DBInstanceIdentifierT>(value); }
    template<typename DBInstanceIdentifierT = Aws::String>
    DescribeDBInstanceAutomatedBackupsRequest& WithDBInstanceIdentifier(DBInstanceIdentifierT&& value) { SetDBInstanceIdentifier(std::forward<DBInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that specifies which resources to return based on status.</p>
     * <p>Supported filters are the following:</p> <ul> <li> <p> <code>status</code>
     * </p> <ul> <li> <p> <code>active</code> - Automated backups for current
     * instances.</p> </li> <li> <p> <code>creating</code> - Automated backups that are
     * waiting for the first automated snapshot to be available.</p> </li> <li> <p>
     * <code>retained</code> - Automated backups for deleted instances and after backup
     * replication is stopped.</p> </li> </ul> </li> <li> <p>
     * <code>db-instance-id</code> - Accepts DB instance identifiers and Amazon
     * Resource Names (ARNs). The results list includes only information about the DB
     * instance automated backups identified by these ARNs.</p> </li> <li> <p>
     * <code>dbi-resource-id</code> - Accepts DB resource identifiers and Amazon
     * Resource Names (ARNs). The results list includes only information about the DB
     * instance resources identified by these ARNs.</p> </li> </ul> <p>Returns all
     * resources by default. The status for each resource is specified in the
     * response.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeDBInstanceAutomatedBackupsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeDBInstanceAutomatedBackupsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeDBInstanceAutomatedBackupsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token provided in the previous request. If this parameter is
     * specified the response includes only records beyond the marker, up to
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeDBInstanceAutomatedBackupsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replicated automated backups, for
     * example,
     * <code>arn:aws:rds:us-east-1:123456789012:auto-backup:ab-L2IJCEXJP7XQ7HOJ4SIEXAMPLE</code>.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline const Aws::String& GetDBInstanceAutomatedBackupsArn() const { return m_dBInstanceAutomatedBackupsArn; }
    inline bool DBInstanceAutomatedBackupsArnHasBeenSet() const { return m_dBInstanceAutomatedBackupsArnHasBeenSet; }
    template<typename DBInstanceAutomatedBackupsArnT = Aws::String>
    void SetDBInstanceAutomatedBackupsArn(DBInstanceAutomatedBackupsArnT&& value) { m_dBInstanceAutomatedBackupsArnHasBeenSet = true; m_dBInstanceAutomatedBackupsArn = std::forward<DBInstanceAutomatedBackupsArnT>(value); }
    template<typename DBInstanceAutomatedBackupsArnT = Aws::String>
    DescribeDBInstanceAutomatedBackupsRequest& WithDBInstanceAutomatedBackupsArn(DBInstanceAutomatedBackupsArnT&& value) { SetDBInstanceAutomatedBackupsArn(std::forward<DBInstanceAutomatedBackupsArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet = false;

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_dBInstanceAutomatedBackupsArn;
    bool m_dBInstanceAutomatedBackupsArnHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
