/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeOrderableClusterOptionsResult.h>
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

DescribeOrderableClusterOptionsResult::DescribeOrderableClusterOptionsResult()
{
}

DescribeOrderableClusterOptionsResult::DescribeOrderableClusterOptionsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeOrderableClusterOptionsResult& DescribeOrderableClusterOptionsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeOrderableClusterOptionsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeOrderableClusterOptionsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode orderableClusterOptionsNode = resultNode.FirstChild("OrderableClusterOptions");
    if(!orderableClusterOptionsNode.IsNull())
    {
      XmlNode orderableClusterOptionsMember = orderableClusterOptionsNode.FirstChild("OrderableClusterOption");
      while(!orderableClusterOptionsMember.IsNull())
      {
        m_orderableClusterOptions.push_back(orderableClusterOptionsMember);
        orderableClusterOptionsMember = orderableClusterOptionsMember.NextNode("OrderableClusterOption");
      }

    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeOrderableClusterOptionsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
