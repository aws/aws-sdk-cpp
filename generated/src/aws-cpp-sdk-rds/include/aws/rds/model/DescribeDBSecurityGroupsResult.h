﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBSecurityGroup.h>
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
   * <p>Contains the result of a successful invocation of the
   * <code>DescribeDBSecurityGroups</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBSecurityGroupMessage">AWS
   * API Reference</a></p>
   */
  class DescribeDBSecurityGroupsResult
  {
  public:
    AWS_RDS_API DescribeDBSecurityGroupsResult();
    AWS_RDS_API DescribeDBSecurityGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBSecurityGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline DescribeDBSecurityGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeDBSecurityGroupsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeDBSecurityGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>DBSecurityGroup</code> instances.</p>
     */
    inline const Aws::Vector<DBSecurityGroup>& GetDBSecurityGroups() const{ return m_dBSecurityGroups; }
    inline void SetDBSecurityGroups(const Aws::Vector<DBSecurityGroup>& value) { m_dBSecurityGroups = value; }
    inline void SetDBSecurityGroups(Aws::Vector<DBSecurityGroup>&& value) { m_dBSecurityGroups = std::move(value); }
    inline DescribeDBSecurityGroupsResult& WithDBSecurityGroups(const Aws::Vector<DBSecurityGroup>& value) { SetDBSecurityGroups(value); return *this;}
    inline DescribeDBSecurityGroupsResult& WithDBSecurityGroups(Aws::Vector<DBSecurityGroup>&& value) { SetDBSecurityGroups(std::move(value)); return *this;}
    inline DescribeDBSecurityGroupsResult& AddDBSecurityGroups(const DBSecurityGroup& value) { m_dBSecurityGroups.push_back(value); return *this; }
    inline DescribeDBSecurityGroupsResult& AddDBSecurityGroups(DBSecurityGroup&& value) { m_dBSecurityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeDBSecurityGroupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeDBSecurityGroupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;

    Aws::Vector<DBSecurityGroup> m_dBSecurityGroups;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
