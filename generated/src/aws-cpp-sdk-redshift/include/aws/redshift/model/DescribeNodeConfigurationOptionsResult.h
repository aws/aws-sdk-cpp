/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/NodeConfigurationOption.h>
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
  class DescribeNodeConfigurationOptionsResult
  {
  public:
    AWS_REDSHIFT_API DescribeNodeConfigurationOptionsResult() = default;
    AWS_REDSHIFT_API DescribeNodeConfigurationOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeNodeConfigurationOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of valid node configurations.</p>
     */
    inline const Aws::Vector<NodeConfigurationOption>& GetNodeConfigurationOptionList() const { return m_nodeConfigurationOptionList; }
    template<typename NodeConfigurationOptionListT = Aws::Vector<NodeConfigurationOption>>
    void SetNodeConfigurationOptionList(NodeConfigurationOptionListT&& value) { m_nodeConfigurationOptionListHasBeenSet = true; m_nodeConfigurationOptionList = std::forward<NodeConfigurationOptionListT>(value); }
    template<typename NodeConfigurationOptionListT = Aws::Vector<NodeConfigurationOption>>
    DescribeNodeConfigurationOptionsResult& WithNodeConfigurationOptionList(NodeConfigurationOptionListT&& value) { SetNodeConfigurationOptionList(std::forward<NodeConfigurationOptionListT>(value)); return *this;}
    template<typename NodeConfigurationOptionListT = NodeConfigurationOption>
    DescribeNodeConfigurationOptionsResult& AddNodeConfigurationOptionList(NodeConfigurationOptionListT&& value) { m_nodeConfigurationOptionListHasBeenSet = true; m_nodeConfigurationOptionList.emplace_back(std::forward<NodeConfigurationOptionListT>(value)); return *this; }
    ///@}

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
    DescribeNodeConfigurationOptionsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeNodeConfigurationOptionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NodeConfigurationOption> m_nodeConfigurationOptionList;
    bool m_nodeConfigurationOptionListHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
