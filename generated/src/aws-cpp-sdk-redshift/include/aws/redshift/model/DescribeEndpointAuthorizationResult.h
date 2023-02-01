/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/EndpointAuthorization.h>
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
namespace Redshift
{
namespace Model
{
  class DescribeEndpointAuthorizationResult
  {
  public:
    AWS_REDSHIFT_API DescribeEndpointAuthorizationResult();
    AWS_REDSHIFT_API DescribeEndpointAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeEndpointAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The authorizations to an endpoint.</p>
     */
    inline const Aws::Vector<EndpointAuthorization>& GetEndpointAuthorizationList() const{ return m_endpointAuthorizationList; }

    /**
     * <p>The authorizations to an endpoint.</p>
     */
    inline void SetEndpointAuthorizationList(const Aws::Vector<EndpointAuthorization>& value) { m_endpointAuthorizationList = value; }

    /**
     * <p>The authorizations to an endpoint.</p>
     */
    inline void SetEndpointAuthorizationList(Aws::Vector<EndpointAuthorization>&& value) { m_endpointAuthorizationList = std::move(value); }

    /**
     * <p>The authorizations to an endpoint.</p>
     */
    inline DescribeEndpointAuthorizationResult& WithEndpointAuthorizationList(const Aws::Vector<EndpointAuthorization>& value) { SetEndpointAuthorizationList(value); return *this;}

    /**
     * <p>The authorizations to an endpoint.</p>
     */
    inline DescribeEndpointAuthorizationResult& WithEndpointAuthorizationList(Aws::Vector<EndpointAuthorization>&& value) { SetEndpointAuthorizationList(std::move(value)); return *this;}

    /**
     * <p>The authorizations to an endpoint.</p>
     */
    inline DescribeEndpointAuthorizationResult& AddEndpointAuthorizationList(const EndpointAuthorization& value) { m_endpointAuthorizationList.push_back(value); return *this; }

    /**
     * <p>The authorizations to an endpoint.</p>
     */
    inline DescribeEndpointAuthorizationResult& AddEndpointAuthorizationList(EndpointAuthorization&& value) { m_endpointAuthorizationList.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAuthorization</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAuthorization</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAuthorization</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAuthorization</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAuthorization</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter.</p>
     */
    inline DescribeEndpointAuthorizationResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAuthorization</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter.</p>
     */
    inline DescribeEndpointAuthorizationResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAuthorization</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by the <code>MaxRecords</code> parameter.</p>
     */
    inline DescribeEndpointAuthorizationResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeEndpointAuthorizationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeEndpointAuthorizationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<EndpointAuthorization> m_endpointAuthorizationList;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
