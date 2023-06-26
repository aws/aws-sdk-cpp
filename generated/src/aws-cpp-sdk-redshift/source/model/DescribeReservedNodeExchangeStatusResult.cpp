/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeReservedNodeExchangeStatusResult.h>
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

DescribeReservedNodeExchangeStatusResult::DescribeReservedNodeExchangeStatusResult()
{
}

DescribeReservedNodeExchangeStatusResult::DescribeReservedNodeExchangeStatusResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeReservedNodeExchangeStatusResult& DescribeReservedNodeExchangeStatusResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeReservedNodeExchangeStatusResult"))
  {
    resultNode = rootNode.FirstChild("DescribeReservedNodeExchangeStatusResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode reservedNodeExchangeStatusDetailsNode = resultNode.FirstChild("ReservedNodeExchangeStatusDetails");
    if(!reservedNodeExchangeStatusDetailsNode.IsNull())
    {
      XmlNode reservedNodeExchangeStatusDetailsMember = reservedNodeExchangeStatusDetailsNode.FirstChild("ReservedNodeExchangeStatus");
      while(!reservedNodeExchangeStatusDetailsMember.IsNull())
      {
        m_reservedNodeExchangeStatusDetails.push_back(reservedNodeExchangeStatusDetailsMember);
        reservedNodeExchangeStatusDetailsMember = reservedNodeExchangeStatusDetailsMember.NextNode("ReservedNodeExchangeStatus");
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
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeReservedNodeExchangeStatusResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
