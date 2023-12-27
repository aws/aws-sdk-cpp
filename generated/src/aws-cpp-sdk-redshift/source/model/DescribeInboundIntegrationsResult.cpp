/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeInboundIntegrationsResult.h>
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

DescribeInboundIntegrationsResult::DescribeInboundIntegrationsResult()
{
}

DescribeInboundIntegrationsResult::DescribeInboundIntegrationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeInboundIntegrationsResult& DescribeInboundIntegrationsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeInboundIntegrationsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeInboundIntegrationsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode inboundIntegrationsNode = resultNode.FirstChild("InboundIntegrations");
    if(!inboundIntegrationsNode.IsNull())
    {
      XmlNode inboundIntegrationsMember = inboundIntegrationsNode.FirstChild("InboundIntegration");
      while(!inboundIntegrationsMember.IsNull())
      {
        m_inboundIntegrations.push_back(inboundIntegrationsMember);
        inboundIntegrationsMember = inboundIntegrationsMember.NextNode("InboundIntegration");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeInboundIntegrationsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
