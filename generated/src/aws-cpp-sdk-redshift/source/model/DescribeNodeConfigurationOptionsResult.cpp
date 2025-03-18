/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeNodeConfigurationOptionsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeNodeConfigurationOptionsResult::DescribeNodeConfigurationOptionsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeNodeConfigurationOptionsResult& DescribeNodeConfigurationOptionsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeNodeConfigurationOptionsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeNodeConfigurationOptionsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode nodeConfigurationOptionListNode = resultNode.FirstChild("NodeConfigurationOptionList");
    if(!nodeConfigurationOptionListNode.IsNull())
    {
      XmlNode nodeConfigurationOptionListMember = nodeConfigurationOptionListNode.FirstChild("NodeConfigurationOption");
      m_nodeConfigurationOptionListHasBeenSet = !nodeConfigurationOptionListMember.IsNull();
      while(!nodeConfigurationOptionListMember.IsNull())
      {
        m_nodeConfigurationOptionList.push_back(nodeConfigurationOptionListMember);
        nodeConfigurationOptionListMember = nodeConfigurationOptionListMember.NextNode("NodeConfigurationOption");
      }

      m_nodeConfigurationOptionListHasBeenSet = true;
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeNodeConfigurationOptionsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
