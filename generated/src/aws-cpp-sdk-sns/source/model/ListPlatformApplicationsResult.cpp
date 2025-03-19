/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/ListPlatformApplicationsResult.h>
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

ListPlatformApplicationsResult::ListPlatformApplicationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListPlatformApplicationsResult& ListPlatformApplicationsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListPlatformApplicationsResult"))
  {
    resultNode = rootNode.FirstChild("ListPlatformApplicationsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode platformApplicationsNode = resultNode.FirstChild("PlatformApplications");
    if(!platformApplicationsNode.IsNull())
    {
      XmlNode platformApplicationsMember = platformApplicationsNode.FirstChild("member");
      m_platformApplicationsHasBeenSet = !platformApplicationsMember.IsNull();
      while(!platformApplicationsMember.IsNull())
      {
        m_platformApplications.push_back(platformApplicationsMember);
        platformApplicationsMember = platformApplicationsMember.NextNode("member");
      }

      m_platformApplicationsHasBeenSet = true;
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
    AWS_LOGSTREAM_DEBUG("Aws::SNS::Model::ListPlatformApplicationsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
