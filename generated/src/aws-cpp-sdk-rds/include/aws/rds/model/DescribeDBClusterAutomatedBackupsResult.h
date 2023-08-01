/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBClusterAutomatedBackup.h>
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
  class DescribeDBClusterAutomatedBackupsResult
  {
  public:
    AWS_RDS_API DescribeDBClusterAutomatedBackupsResult();
    AWS_RDS_API DescribeDBClusterAutomatedBackupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBClusterAutomatedBackupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The pagination token provided in the previous request. If this parameter is
     * specified the response includes only records beyond the marker, up to
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The pagination token provided in the previous request. If this parameter is
     * specified the response includes only records beyond the marker, up to
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The pagination token provided in the previous request. If this parameter is
     * specified the response includes only records beyond the marker, up to
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The pagination token provided in the previous request. If this parameter is
     * specified the response includes only records beyond the marker, up to
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The pagination token provided in the previous request. If this parameter is
     * specified the response includes only records beyond the marker, up to
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeDBClusterAutomatedBackupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The pagination token provided in the previous request. If this parameter is
     * specified the response includes only records beyond the marker, up to
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeDBClusterAutomatedBackupsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The pagination token provided in the previous request. If this parameter is
     * specified the response includes only records beyond the marker, up to
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeDBClusterAutomatedBackupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of <code>DBClusterAutomatedBackup</code> backups.</p>
     */
    inline const Aws::Vector<DBClusterAutomatedBackup>& GetDBClusterAutomatedBackups() const{ return m_dBClusterAutomatedBackups; }

    /**
     * <p>A list of <code>DBClusterAutomatedBackup</code> backups.</p>
     */
    inline void SetDBClusterAutomatedBackups(const Aws::Vector<DBClusterAutomatedBackup>& value) { m_dBClusterAutomatedBackups = value; }

    /**
     * <p>A list of <code>DBClusterAutomatedBackup</code> backups.</p>
     */
    inline void SetDBClusterAutomatedBackups(Aws::Vector<DBClusterAutomatedBackup>&& value) { m_dBClusterAutomatedBackups = std::move(value); }

    /**
     * <p>A list of <code>DBClusterAutomatedBackup</code> backups.</p>
     */
    inline DescribeDBClusterAutomatedBackupsResult& WithDBClusterAutomatedBackups(const Aws::Vector<DBClusterAutomatedBackup>& value) { SetDBClusterAutomatedBackups(value); return *this;}

    /**
     * <p>A list of <code>DBClusterAutomatedBackup</code> backups.</p>
     */
    inline DescribeDBClusterAutomatedBackupsResult& WithDBClusterAutomatedBackups(Aws::Vector<DBClusterAutomatedBackup>&& value) { SetDBClusterAutomatedBackups(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DBClusterAutomatedBackup</code> backups.</p>
     */
    inline DescribeDBClusterAutomatedBackupsResult& AddDBClusterAutomatedBackups(const DBClusterAutomatedBackup& value) { m_dBClusterAutomatedBackups.push_back(value); return *this; }

    /**
     * <p>A list of <code>DBClusterAutomatedBackup</code> backups.</p>
     */
    inline DescribeDBClusterAutomatedBackupsResult& AddDBClusterAutomatedBackups(DBClusterAutomatedBackup&& value) { m_dBClusterAutomatedBackups.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDBClusterAutomatedBackupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDBClusterAutomatedBackupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<DBClusterAutomatedBackup> m_dBClusterAutomatedBackups;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
