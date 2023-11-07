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
    AWS_RDS_API DescribeDBSnapshotTenantDatabasesResult();
    AWS_RDS_API DescribeDBSnapshotTenantDatabasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBSnapshotTenantDatabasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBSnapshotTenantDatabasesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBSnapshotTenantDatabasesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBSnapshotTenantDatabasesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of DB snapshot tenant databases.</p>
     */
    inline const Aws::Vector<DBSnapshotTenantDatabase>& GetDBSnapshotTenantDatabases() const{ return m_dBSnapshotTenantDatabases; }

    /**
     * <p>A list of DB snapshot tenant databases.</p>
     */
    inline void SetDBSnapshotTenantDatabases(const Aws::Vector<DBSnapshotTenantDatabase>& value) { m_dBSnapshotTenantDatabases = value; }

    /**
     * <p>A list of DB snapshot tenant databases.</p>
     */
    inline void SetDBSnapshotTenantDatabases(Aws::Vector<DBSnapshotTenantDatabase>&& value) { m_dBSnapshotTenantDatabases = std::move(value); }

    /**
     * <p>A list of DB snapshot tenant databases.</p>
     */
    inline DescribeDBSnapshotTenantDatabasesResult& WithDBSnapshotTenantDatabases(const Aws::Vector<DBSnapshotTenantDatabase>& value) { SetDBSnapshotTenantDatabases(value); return *this;}

    /**
     * <p>A list of DB snapshot tenant databases.</p>
     */
    inline DescribeDBSnapshotTenantDatabasesResult& WithDBSnapshotTenantDatabases(Aws::Vector<DBSnapshotTenantDatabase>&& value) { SetDBSnapshotTenantDatabases(std::move(value)); return *this;}

    /**
     * <p>A list of DB snapshot tenant databases.</p>
     */
    inline DescribeDBSnapshotTenantDatabasesResult& AddDBSnapshotTenantDatabases(const DBSnapshotTenantDatabase& value) { m_dBSnapshotTenantDatabases.push_back(value); return *this; }

    /**
     * <p>A list of DB snapshot tenant databases.</p>
     */
    inline DescribeDBSnapshotTenantDatabasesResult& AddDBSnapshotTenantDatabases(DBSnapshotTenantDatabase&& value) { m_dBSnapshotTenantDatabases.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDBSnapshotTenantDatabasesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDBSnapshotTenantDatabasesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<DBSnapshotTenantDatabase> m_dBSnapshotTenantDatabases;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
