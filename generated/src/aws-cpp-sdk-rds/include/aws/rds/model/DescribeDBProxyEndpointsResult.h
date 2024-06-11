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
    AWS_RDS_API DescribeDBProxyEndpointsResult();
    AWS_RDS_API DescribeDBProxyEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBProxyEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The list of <code>ProxyEndpoint</code> objects returned by the API
     * operation.</p>
     */
    inline const Aws::Vector<DBProxyEndpoint>& GetDBProxyEndpoints() const{ return m_dBProxyEndpoints; }
    inline void SetDBProxyEndpoints(const Aws::Vector<DBProxyEndpoint>& value) { m_dBProxyEndpoints = value; }
    inline void SetDBProxyEndpoints(Aws::Vector<DBProxyEndpoint>&& value) { m_dBProxyEndpoints = std::move(value); }
    inline DescribeDBProxyEndpointsResult& WithDBProxyEndpoints(const Aws::Vector<DBProxyEndpoint>& value) { SetDBProxyEndpoints(value); return *this;}
    inline DescribeDBProxyEndpointsResult& WithDBProxyEndpoints(Aws::Vector<DBProxyEndpoint>&& value) { SetDBProxyEndpoints(std::move(value)); return *this;}
    inline DescribeDBProxyEndpointsResult& AddDBProxyEndpoints(const DBProxyEndpoint& value) { m_dBProxyEndpoints.push_back(value); return *this; }
    inline DescribeDBProxyEndpointsResult& AddDBProxyEndpoints(DBProxyEndpoint&& value) { m_dBProxyEndpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeDBProxyEndpointsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeDBProxyEndpointsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeDBProxyEndpointsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeDBProxyEndpointsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeDBProxyEndpointsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DBProxyEndpoint> m_dBProxyEndpoints;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
