/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBProxyEndpoint.h>
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
  class DescribeDBProxyEndpointsResult
  {
  public:
    AWS_RDS_API DescribeDBProxyEndpointsResult() = default;
    AWS_RDS_API DescribeDBProxyEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBProxyEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The list of <code>ProxyEndpoint</code> objects returned by the API
     * operation.</p>
     */
    inline const Aws::Vector<DBProxyEndpoint>& GetDBProxyEndpoints() const { return m_dBProxyEndpoints; }
    template<typename DBProxyEndpointsT = Aws::Vector<DBProxyEndpoint>>
    void SetDBProxyEndpoints(DBProxyEndpointsT&& value) { m_dBProxyEndpointsHasBeenSet = true; m_dBProxyEndpoints = std::forward<DBProxyEndpointsT>(value); }
    template<typename DBProxyEndpointsT = Aws::Vector<DBProxyEndpoint>>
    DescribeDBProxyEndpointsResult& WithDBProxyEndpoints(DBProxyEndpointsT&& value) { SetDBProxyEndpoints(std::forward<DBProxyEndpointsT>(value)); return *this;}
    template<typename DBProxyEndpointsT = DBProxyEndpoint>
    DescribeDBProxyEndpointsResult& AddDBProxyEndpoints(DBProxyEndpointsT&& value) { m_dBProxyEndpointsHasBeenSet = true; m_dBProxyEndpoints.emplace_back(std::forward<DBProxyEndpointsT>(value)); return *this; }
    ///@}

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
    DescribeDBProxyEndpointsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDBProxyEndpointsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DBProxyEndpoint> m_dBProxyEndpoints;
    bool m_dBProxyEndpointsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
