/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBProxyEndpointsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeDBProxyEndpointsResult::DescribeDBProxyEndpointsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDBProxyEndpointsResult& DescribeDBProxyEndpointsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDBProxyEndpointsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDBProxyEndpointsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dBProxyEndpointsNode = resultNode.FirstChild("DBProxyEndpoints");
    if(!dBProxyEndpointsNode.IsNull())
    {
      XmlNode dBProxyEndpointsMember = dBProxyEndpointsNode.FirstChild("member");
      m_dBProxyEndpointsHasBeenSet = !dBProxyEndpointsMember.IsNull();
      while(!dBProxyEndpointsMember.IsNull())
      {
        m_dBProxyEndpoints.push_back(dBProxyEndpointsMember);
        dBProxyEndpointsMember = dBProxyEndpointsMember.NextNode("member");
      }

      m_dBProxyEndpointsHasBeenSet = true;
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
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeDBProxyEndpointsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
