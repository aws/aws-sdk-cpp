﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBClusterParameterGroup.h>
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
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterParameterGroupsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeDBClusterParameterGroupsResult
  {
  public:
    AWS_RDS_API DescribeDBClusterParameterGroupsResult();
    AWS_RDS_API DescribeDBClusterParameterGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBClusterParameterGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBClusterParameterGroups</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeDBClusterParameterGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeDBClusterParameterGroupsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeDBClusterParameterGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DB cluster parameter groups.</p>
     */
    inline const Aws::Vector<DBClusterParameterGroup>& GetDBClusterParameterGroups() const{ return m_dBClusterParameterGroups; }
    inline void SetDBClusterParameterGroups(const Aws::Vector<DBClusterParameterGroup>& value) { m_dBClusterParameterGroups = value; }
    inline void SetDBClusterParameterGroups(Aws::Vector<DBClusterParameterGroup>&& value) { m_dBClusterParameterGroups = std::move(value); }
    inline DescribeDBClusterParameterGroupsResult& WithDBClusterParameterGroups(const Aws::Vector<DBClusterParameterGroup>& value) { SetDBClusterParameterGroups(value); return *this;}
    inline DescribeDBClusterParameterGroupsResult& WithDBClusterParameterGroups(Aws::Vector<DBClusterParameterGroup>&& value) { SetDBClusterParameterGroups(std::move(value)); return *this;}
    inline DescribeDBClusterParameterGroupsResult& AddDBClusterParameterGroups(const DBClusterParameterGroup& value) { m_dBClusterParameterGroups.push_back(value); return *this; }
    inline DescribeDBClusterParameterGroupsResult& AddDBClusterParameterGroups(DBClusterParameterGroup&& value) { m_dBClusterParameterGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeDBClusterParameterGroupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeDBClusterParameterGroupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;

    Aws::Vector<DBClusterParameterGroup> m_dBClusterParameterGroups;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
