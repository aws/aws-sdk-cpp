/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeEndpointAccessResult.h>
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

DescribeEndpointAccessResult::DescribeEndpointAccessResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeEndpointAccessResult& DescribeEndpointAccessResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeEndpointAccessResult"))
  {
    resultNode = rootNode.FirstChild("DescribeEndpointAccessResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode endpointAccessListNode = resultNode.FirstChild("EndpointAccessList");
    if(!endpointAccessListNode.IsNull())
    {
      XmlNode endpointAccessListMember = endpointAccessListNode.FirstChild("member");
      m_endpointAccessListHasBeenSet = !endpointAccessListMember.IsNull();
      while(!endpointAccessListMember.IsNull())
      {
        m_endpointAccessList.push_back(endpointAccessListMember);
        endpointAccessListMember = endpointAccessListMember.NextNode("member");
      }

      m_endpointAccessListHasBeenSet = true;
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
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeEndpointAccessResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
