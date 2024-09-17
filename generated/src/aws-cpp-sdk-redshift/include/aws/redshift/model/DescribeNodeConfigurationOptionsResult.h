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
    AWS_REDSHIFT_API DescribeNodeConfigurationOptionsResult();
    AWS_REDSHIFT_API DescribeNodeConfigurationOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeNodeConfigurationOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of valid node configurations.</p>
     */
    inline const Aws::Vector<NodeConfigurationOption>& GetNodeConfigurationOptionList() const{ return m_nodeConfigurationOptionList; }
    inline void SetNodeConfigurationOptionList(const Aws::Vector<NodeConfigurationOption>& value) { m_nodeConfigurationOptionList = value; }
    inline void SetNodeConfigurationOptionList(Aws::Vector<NodeConfigurationOption>&& value) { m_nodeConfigurationOptionList = std::move(value); }
    inline DescribeNodeConfigurationOptionsResult& WithNodeConfigurationOptionList(const Aws::Vector<NodeConfigurationOption>& value) { SetNodeConfigurationOptionList(value); return *this;}
    inline DescribeNodeConfigurationOptionsResult& WithNodeConfigurationOptionList(Aws::Vector<NodeConfigurationOption>&& value) { SetNodeConfigurationOptionList(std::move(value)); return *this;}
    inline DescribeNodeConfigurationOptionsResult& AddNodeConfigurationOptionList(const NodeConfigurationOption& value) { m_nodeConfigurationOptionList.push_back(value); return *this; }
    inline DescribeNodeConfigurationOptionsResult& AddNodeConfigurationOptionList(NodeConfigurationOption&& value) { m_nodeConfigurationOptionList.push_back(std::move(value)); return *this; }
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
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeNodeConfigurationOptionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeNodeConfigurationOptionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeNodeConfigurationOptionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeNodeConfigurationOptionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeNodeConfigurationOptionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NodeConfigurationOption> m_nodeConfigurationOptionList;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
