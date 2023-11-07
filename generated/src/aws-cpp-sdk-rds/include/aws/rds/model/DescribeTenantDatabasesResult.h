/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/TenantDatabase.h>
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
  class DescribeTenantDatabasesResult
  {
  public:
    AWS_RDS_API DescribeTenantDatabasesResult();
    AWS_RDS_API DescribeTenantDatabasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeTenantDatabasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTenantDatabases</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTenantDatabases</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTenantDatabases</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>.</p>
     */
    inline DescribeTenantDatabasesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTenantDatabases</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>.</p>
     */
    inline DescribeTenantDatabasesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTenantDatabases</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>.</p>
     */
    inline DescribeTenantDatabasesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>An array of the tenant databases requested by the
     * <code>DescribeTenantDatabases</code> operation.</p>
     */
    inline const Aws::Vector<TenantDatabase>& GetTenantDatabases() const{ return m_tenantDatabases; }

    /**
     * <p>An array of the tenant databases requested by the
     * <code>DescribeTenantDatabases</code> operation.</p>
     */
    inline void SetTenantDatabases(const Aws::Vector<TenantDatabase>& value) { m_tenantDatabases = value; }

    /**
     * <p>An array of the tenant databases requested by the
     * <code>DescribeTenantDatabases</code> operation.</p>
     */
    inline void SetTenantDatabases(Aws::Vector<TenantDatabase>&& value) { m_tenantDatabases = std::move(value); }

    /**
     * <p>An array of the tenant databases requested by the
     * <code>DescribeTenantDatabases</code> operation.</p>
     */
    inline DescribeTenantDatabasesResult& WithTenantDatabases(const Aws::Vector<TenantDatabase>& value) { SetTenantDatabases(value); return *this;}

    /**
     * <p>An array of the tenant databases requested by the
     * <code>DescribeTenantDatabases</code> operation.</p>
     */
    inline DescribeTenantDatabasesResult& WithTenantDatabases(Aws::Vector<TenantDatabase>&& value) { SetTenantDatabases(std::move(value)); return *this;}

    /**
     * <p>An array of the tenant databases requested by the
     * <code>DescribeTenantDatabases</code> operation.</p>
     */
    inline DescribeTenantDatabasesResult& AddTenantDatabases(const TenantDatabase& value) { m_tenantDatabases.push_back(value); return *this; }

    /**
     * <p>An array of the tenant databases requested by the
     * <code>DescribeTenantDatabases</code> operation.</p>
     */
    inline DescribeTenantDatabasesResult& AddTenantDatabases(TenantDatabase&& value) { m_tenantDatabases.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeTenantDatabasesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTenantDatabasesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<TenantDatabase> m_tenantDatabases;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
