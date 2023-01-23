/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBProxy.h>
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
  class DescribeDBProxiesResult
  {
  public:
    AWS_RDS_API DescribeDBProxiesResult();
    AWS_RDS_API DescribeDBProxiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBProxiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A return value representing an arbitrary number of <code>DBProxy</code> data
     * structures.</p>
     */
    inline const Aws::Vector<DBProxy>& GetDBProxies() const{ return m_dBProxies; }

    /**
     * <p>A return value representing an arbitrary number of <code>DBProxy</code> data
     * structures.</p>
     */
    inline void SetDBProxies(const Aws::Vector<DBProxy>& value) { m_dBProxies = value; }

    /**
     * <p>A return value representing an arbitrary number of <code>DBProxy</code> data
     * structures.</p>
     */
    inline void SetDBProxies(Aws::Vector<DBProxy>&& value) { m_dBProxies = std::move(value); }

    /**
     * <p>A return value representing an arbitrary number of <code>DBProxy</code> data
     * structures.</p>
     */
    inline DescribeDBProxiesResult& WithDBProxies(const Aws::Vector<DBProxy>& value) { SetDBProxies(value); return *this;}

    /**
     * <p>A return value representing an arbitrary number of <code>DBProxy</code> data
     * structures.</p>
     */
    inline DescribeDBProxiesResult& WithDBProxies(Aws::Vector<DBProxy>&& value) { SetDBProxies(std::move(value)); return *this;}

    /**
     * <p>A return value representing an arbitrary number of <code>DBProxy</code> data
     * structures.</p>
     */
    inline DescribeDBProxiesResult& AddDBProxies(const DBProxy& value) { m_dBProxies.push_back(value); return *this; }

    /**
     * <p>A return value representing an arbitrary number of <code>DBProxy</code> data
     * structures.</p>
     */
    inline DescribeDBProxiesResult& AddDBProxies(DBProxy&& value) { m_dBProxies.push_back(std::move(value)); return *this; }


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
    inline DescribeDBProxiesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBProxiesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBProxiesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDBProxiesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDBProxiesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<DBProxy> m_dBProxies;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
