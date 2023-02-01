/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeDataSharesForConsumerResult.h>
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

DescribeDataSharesForConsumerResult::DescribeDataSharesForConsumerResult()
{
}

DescribeDataSharesForConsumerResult::DescribeDataSharesForConsumerResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDataSharesForConsumerResult& DescribeDataSharesForConsumerResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDataSharesForConsumerResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDataSharesForConsumerResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dataSharesNode = resultNode.FirstChild("DataShares");
    if(!dataSharesNode.IsNull())
    {
      XmlNode dataSharesMember = dataSharesNode.FirstChild("member");
      while(!dataSharesMember.IsNull())
      {
        m_dataShares.push_back(dataSharesMember);
        dataSharesMember = dataSharesMember.NextNode("member");
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
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeDataSharesForConsumerResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
