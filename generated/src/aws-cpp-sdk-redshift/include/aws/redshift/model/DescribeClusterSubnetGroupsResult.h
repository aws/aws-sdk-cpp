/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/ClusterSubnetGroup.h>
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
   * <p>Contains the output from the <a>DescribeClusterSubnetGroups</a> action.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterSubnetGroupMessage">AWS
   * API Reference</a></p>
   */
  class DescribeClusterSubnetGroupsResult
  {
  public:
    AWS_REDSHIFT_API DescribeClusterSubnetGroupsResult() = default;
    AWS_REDSHIFT_API DescribeClusterSubnetGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeClusterSubnetGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeClusterSubnetGroupsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a>ClusterSubnetGroup</a> instances. </p>
     */
    inline const Aws::Vector<ClusterSubnetGroup>& GetClusterSubnetGroups() const { return m_clusterSubnetGroups; }
    template<typename ClusterSubnetGroupsT = Aws::Vector<ClusterSubnetGroup>>
    void SetClusterSubnetGroups(ClusterSubnetGroupsT&& value) { m_clusterSubnetGroupsHasBeenSet = true; m_clusterSubnetGroups = std::forward<ClusterSubnetGroupsT>(value); }
    template<typename ClusterSubnetGroupsT = Aws::Vector<ClusterSubnetGroup>>
    DescribeClusterSubnetGroupsResult& WithClusterSubnetGroups(ClusterSubnetGroupsT&& value) { SetClusterSubnetGroups(std::forward<ClusterSubnetGroupsT>(value)); return *this;}
    template<typename ClusterSubnetGroupsT = ClusterSubnetGroup>
    DescribeClusterSubnetGroupsResult& AddClusterSubnetGroups(ClusterSubnetGroupsT&& value) { m_clusterSubnetGroupsHasBeenSet = true; m_clusterSubnetGroups.emplace_back(std::forward<ClusterSubnetGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeClusterSubnetGroupsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<ClusterSubnetGroup> m_clusterSubnetGroups;
    bool m_clusterSubnetGroupsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
