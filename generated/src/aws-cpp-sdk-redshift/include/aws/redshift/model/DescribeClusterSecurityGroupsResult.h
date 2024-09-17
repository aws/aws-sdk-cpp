/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/ClusterSecurityGroup.h>
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
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterSecurityGroupMessage">AWS
   * API Reference</a></p>
   */
  class DescribeClusterSecurityGroupsResult
  {
  public:
    AWS_REDSHIFT_API DescribeClusterSecurityGroupsResult();
    AWS_REDSHIFT_API DescribeClusterSecurityGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeClusterSecurityGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeClusterSecurityGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeClusterSecurityGroupsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeClusterSecurityGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a>ClusterSecurityGroup</a> instances. </p>
     */
    inline const Aws::Vector<ClusterSecurityGroup>& GetClusterSecurityGroups() const{ return m_clusterSecurityGroups; }
    inline void SetClusterSecurityGroups(const Aws::Vector<ClusterSecurityGroup>& value) { m_clusterSecurityGroups = value; }
    inline void SetClusterSecurityGroups(Aws::Vector<ClusterSecurityGroup>&& value) { m_clusterSecurityGroups = std::move(value); }
    inline DescribeClusterSecurityGroupsResult& WithClusterSecurityGroups(const Aws::Vector<ClusterSecurityGroup>& value) { SetClusterSecurityGroups(value); return *this;}
    inline DescribeClusterSecurityGroupsResult& WithClusterSecurityGroups(Aws::Vector<ClusterSecurityGroup>&& value) { SetClusterSecurityGroups(std::move(value)); return *this;}
    inline DescribeClusterSecurityGroupsResult& AddClusterSecurityGroups(const ClusterSecurityGroup& value) { m_clusterSecurityGroups.push_back(value); return *this; }
    inline DescribeClusterSecurityGroupsResult& AddClusterSecurityGroups(ClusterSecurityGroup&& value) { m_clusterSecurityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeClusterSecurityGroupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeClusterSecurityGroupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;

    Aws::Vector<ClusterSecurityGroup> m_clusterSecurityGroups;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
