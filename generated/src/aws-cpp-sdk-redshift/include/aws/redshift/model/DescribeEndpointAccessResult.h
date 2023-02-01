/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/EndpointAccess.h>
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
  class DescribeEndpointAccessResult
  {
  public:
    AWS_REDSHIFT_API DescribeEndpointAccessResult();
    AWS_REDSHIFT_API DescribeEndpointAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeEndpointAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The list of endpoints with access to the cluster.</p>
     */
    inline const Aws::Vector<EndpointAccess>& GetEndpointAccessList() const{ return m_endpointAccessList; }

    /**
     * <p>The list of endpoints with access to the cluster.</p>
     */
    inline void SetEndpointAccessList(const Aws::Vector<EndpointAccess>& value) { m_endpointAccessList = value; }

    /**
     * <p>The list of endpoints with access to the cluster.</p>
     */
    inline void SetEndpointAccessList(Aws::Vector<EndpointAccess>&& value) { m_endpointAccessList = std::move(value); }

    /**
     * <p>The list of endpoints with access to the cluster.</p>
     */
    inline DescribeEndpointAccessResult& WithEndpointAccessList(const Aws::Vector<EndpointAccess>& value) { SetEndpointAccessList(value); return *this;}

    /**
     * <p>The list of endpoints with access to the cluster.</p>
     */
    inline DescribeEndpointAccessResult& WithEndpointAccessList(Aws::Vector<EndpointAccess>&& value) { SetEndpointAccessList(std::move(value)); return *this;}

    /**
     * <p>The list of endpoints with access to the cluster.</p>
     */
    inline DescribeEndpointAccessResult& AddEndpointAccessList(const EndpointAccess& value) { m_endpointAccessList.push_back(value); return *this; }

    /**
     * <p>The list of endpoints with access to the cluster.</p>
     */
    inline DescribeEndpointAccessResult& AddEndpointAccessList(EndpointAccess&& value) { m_endpointAccessList.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAccess</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * the <code>MaxRecords</code> parameter.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAccess</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * the <code>MaxRecords</code> parameter.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAccess</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * the <code>MaxRecords</code> parameter.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAccess</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * the <code>MaxRecords</code> parameter.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAccess</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * the <code>MaxRecords</code> parameter.</p>
     */
    inline DescribeEndpointAccessResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAccess</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * the <code>MaxRecords</code> parameter.</p>
     */
    inline DescribeEndpointAccessResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAccess</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * the <code>MaxRecords</code> parameter.</p>
     */
    inline DescribeEndpointAccessResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeEndpointAccessResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeEndpointAccessResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<EndpointAccess> m_endpointAccessList;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
