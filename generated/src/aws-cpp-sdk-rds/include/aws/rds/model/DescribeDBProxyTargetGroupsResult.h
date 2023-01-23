/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBProxyTargetGroup.h>
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
  class DescribeDBProxyTargetGroupsResult
  {
  public:
    AWS_RDS_API DescribeDBProxyTargetGroupsResult();
    AWS_RDS_API DescribeDBProxyTargetGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBProxyTargetGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An arbitrary number of <code>DBProxyTargetGroup</code> objects, containing
     * details of the corresponding target groups.</p>
     */
    inline const Aws::Vector<DBProxyTargetGroup>& GetTargetGroups() const{ return m_targetGroups; }

    /**
     * <p>An arbitrary number of <code>DBProxyTargetGroup</code> objects, containing
     * details of the corresponding target groups.</p>
     */
    inline void SetTargetGroups(const Aws::Vector<DBProxyTargetGroup>& value) { m_targetGroups = value; }

    /**
     * <p>An arbitrary number of <code>DBProxyTargetGroup</code> objects, containing
     * details of the corresponding target groups.</p>
     */
    inline void SetTargetGroups(Aws::Vector<DBProxyTargetGroup>&& value) { m_targetGroups = std::move(value); }

    /**
     * <p>An arbitrary number of <code>DBProxyTargetGroup</code> objects, containing
     * details of the corresponding target groups.</p>
     */
    inline DescribeDBProxyTargetGroupsResult& WithTargetGroups(const Aws::Vector<DBProxyTargetGroup>& value) { SetTargetGroups(value); return *this;}

    /**
     * <p>An arbitrary number of <code>DBProxyTargetGroup</code> objects, containing
     * details of the corresponding target groups.</p>
     */
    inline DescribeDBProxyTargetGroupsResult& WithTargetGroups(Aws::Vector<DBProxyTargetGroup>&& value) { SetTargetGroups(std::move(value)); return *this;}

    /**
     * <p>An arbitrary number of <code>DBProxyTargetGroup</code> objects, containing
     * details of the corresponding target groups.</p>
     */
    inline DescribeDBProxyTargetGroupsResult& AddTargetGroups(const DBProxyTargetGroup& value) { m_targetGroups.push_back(value); return *this; }

    /**
     * <p>An arbitrary number of <code>DBProxyTargetGroup</code> objects, containing
     * details of the corresponding target groups.</p>
     */
    inline DescribeDBProxyTargetGroupsResult& AddTargetGroups(DBProxyTargetGroup&& value) { m_targetGroups.push_back(std::move(value)); return *this; }


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
    inline DescribeDBProxyTargetGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBProxyTargetGroupsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeDBProxyTargetGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDBProxyTargetGroupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDBProxyTargetGroupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<DBProxyTargetGroup> m_targetGroups;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
