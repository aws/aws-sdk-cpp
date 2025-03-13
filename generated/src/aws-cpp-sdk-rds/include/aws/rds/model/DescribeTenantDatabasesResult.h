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
    AWS_RDS_API DescribeTenantDatabasesResult() = default;
    AWS_RDS_API DescribeTenantDatabasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeTenantDatabasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeTenantDatabases</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeTenantDatabasesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of the tenant databases requested by the
     * <code>DescribeTenantDatabases</code> operation.</p>
     */
    inline const Aws::Vector<TenantDatabase>& GetTenantDatabases() const { return m_tenantDatabases; }
    template<typename TenantDatabasesT = Aws::Vector<TenantDatabase>>
    void SetTenantDatabases(TenantDatabasesT&& value) { m_tenantDatabasesHasBeenSet = true; m_tenantDatabases = std::forward<TenantDatabasesT>(value); }
    template<typename TenantDatabasesT = Aws::Vector<TenantDatabase>>
    DescribeTenantDatabasesResult& WithTenantDatabases(TenantDatabasesT&& value) { SetTenantDatabases(std::forward<TenantDatabasesT>(value)); return *this;}
    template<typename TenantDatabasesT = TenantDatabase>
    DescribeTenantDatabasesResult& AddTenantDatabases(TenantDatabasesT&& value) { m_tenantDatabasesHasBeenSet = true; m_tenantDatabases.emplace_back(std::forward<TenantDatabasesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeTenantDatabasesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<TenantDatabase> m_tenantDatabases;
    bool m_tenantDatabasesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
