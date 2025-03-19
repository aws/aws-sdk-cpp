/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/ClusterParameterGroup.h>
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
   * <p>Contains the output from the <a>DescribeClusterParameterGroups</a> action.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterParameterGroupsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeClusterParameterGroupsResult
  {
  public:
    AWS_REDSHIFT_API DescribeClusterParameterGroupsResult() = default;
    AWS_REDSHIFT_API DescribeClusterParameterGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeClusterParameterGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    DescribeClusterParameterGroupsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a>ClusterParameterGroup</a> instances. Each instance describes one
     * cluster parameter group. </p>
     */
    inline const Aws::Vector<ClusterParameterGroup>& GetParameterGroups() const { return m_parameterGroups; }
    template<typename ParameterGroupsT = Aws::Vector<ClusterParameterGroup>>
    void SetParameterGroups(ParameterGroupsT&& value) { m_parameterGroupsHasBeenSet = true; m_parameterGroups = std::forward<ParameterGroupsT>(value); }
    template<typename ParameterGroupsT = Aws::Vector<ClusterParameterGroup>>
    DescribeClusterParameterGroupsResult& WithParameterGroups(ParameterGroupsT&& value) { SetParameterGroups(std::forward<ParameterGroupsT>(value)); return *this;}
    template<typename ParameterGroupsT = ClusterParameterGroup>
    DescribeClusterParameterGroupsResult& AddParameterGroups(ParameterGroupsT&& value) { m_parameterGroupsHasBeenSet = true; m_parameterGroups.emplace_back(std::forward<ParameterGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeClusterParameterGroupsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<ClusterParameterGroup> m_parameterGroups;
    bool m_parameterGroupsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
