﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/ListEndpointsByPlatformApplicationResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::SNS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ListEndpointsByPlatformApplicationResult::ListEndpointsByPlatformApplicationResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListEndpointsByPlatformApplicationResult& ListEndpointsByPlatformApplicationResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListEndpointsByPlatformApplicationResult"))
  {
    resultNode = rootNode.FirstChild("ListEndpointsByPlatformApplicationResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode endpointsNode = resultNode.FirstChild("Endpoints");
    if(!endpointsNode.IsNull())
    {
      XmlNode endpointsMember = endpointsNode.FirstChild("member");
      m_endpointsHasBeenSet = !endpointsMember.IsNull();
      while(!endpointsMember.IsNull())
      {
        m_endpoints.push_back(endpointsMember.GetText());
        endpointsMember = endpointsMember.NextNode("member");
      }

      m_endpointsHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::SNS::Model::ListEndpointsByPlatformApplicationResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
