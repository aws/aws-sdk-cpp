/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBSnapshotTenantDatabase.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  class DescribeDBSnapshotTenantDatabasesResult
  {
  public:
    AWS_RDS_API DescribeDBSnapshotTenantDatabasesResult() = default;
    AWS_RDS_API DescribeDBSnapshotTenantDatabasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBSnapshotTenantDatabasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeDBSnapshotTenantDatabasesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DB snapshot tenant databases.</p>
     */
    inline const Aws::Vector<DBSnapshotTenantDatabase>& GetDBSnapshotTenantDatabases() const { return m_dBSnapshotTenantDatabases; }
    template<typename DBSnapshotTenantDatabasesT = Aws::Vector<DBSnapshotTenantDatabase>>
    void SetDBSnapshotTenantDatabases(DBSnapshotTenantDatabasesT&& value) { m_dBSnapshotTenantDatabasesHasBeenSet = true; m_dBSnapshotTenantDatabases = std::forward<DBSnapshotTenantDatabasesT>(value); }
    template<typename DBSnapshotTenantDatabasesT = Aws::Vector<DBSnapshotTenantDatabase>>
    DescribeDBSnapshotTenantDatabasesResult& WithDBSnapshotTenantDatabases(DBSnapshotTenantDatabasesT&& value) { SetDBSnapshotTenantDatabases(std::forward<DBSnapshotTenantDatabasesT>(value)); return *this;}
    template<typename DBSnapshotTenantDatabasesT = DBSnapshotTenantDatabase>
    DescribeDBSnapshotTenantDatabasesResult& AddDBSnapshotTenantDatabases(DBSnapshotTenantDatabasesT&& value) { m_dBSnapshotTenantDatabasesHasBeenSet = true; m_dBSnapshotTenantDatabases.emplace_back(std::forward<DBSnapshotTenantDatabasesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDBSnapshotTenantDatabasesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<DBSnapshotTenantDatabase> m_dBSnapshotTenantDatabases;
    bool m_dBSnapshotTenantDatabasesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
