/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListCidrBlocksResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListCidrBlocksResult::ListCidrBlocksResult()
{
}

ListCidrBlocksResult::ListCidrBlocksResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListCidrBlocksResult& ListCidrBlocksResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
    XmlNode cidrBlocksNode = resultNode.FirstChild("CidrBlocks");
    if(!cidrBlocksNode.IsNull())
    {
      XmlNode cidrBlocksMember = cidrBlocksNode.FirstChild("member");
      while(!cidrBlocksMember.IsNull())
      {
        m_cidrBlocks.push_back(cidrBlocksMember);
        cidrBlocksMember = cidrBlocksMember.NextNode("member");
      }

    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

  return *this;
}
