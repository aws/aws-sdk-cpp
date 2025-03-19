/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListResourceRecordSetsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListResourceRecordSetsResult::ListResourceRecordSetsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListResourceRecordSetsResult& ListResourceRecordSetsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode resourceRecordSetsNode = resultNode.FirstChild("ResourceRecordSets");
    if(!resourceRecordSetsNode.IsNull())
    {
      XmlNode resourceRecordSetsMember = resourceRecordSetsNode.FirstChild("ResourceRecordSet");
      m_resourceRecordSetsHasBeenSet = !resourceRecordSetsMember.IsNull();
      while(!resourceRecordSetsMember.IsNull())
      {
        m_resourceRecordSets.push_back(resourceRecordSetsMember);
        resourceRecordSetsMember = resourceRecordSetsMember.NextNode("ResourceRecordSet");
      }

      m_resourceRecordSetsHasBeenSet = true;
    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isTruncatedNode.GetText()).c_str()).c_str());
      m_isTruncatedHasBeenSet = true;
    }
    XmlNode nextRecordNameNode = resultNode.FirstChild("NextRecordName");
    if(!nextRecordNameNode.IsNull())
    {
      m_nextRecordName = Aws::Utils::Xml::DecodeEscapedXmlText(nextRecordNameNode.GetText());
      m_nextRecordNameHasBeenSet = true;
    }
    XmlNode nextRecordTypeNode = resultNode.FirstChild("NextRecordType");
    if(!nextRecordTypeNode.IsNull())
    {
      m_nextRecordType = RRTypeMapper::GetRRTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(nextRecordTypeNode.GetText()).c_str()));
      m_nextRecordTypeHasBeenSet = true;
    }
    XmlNode nextRecordIdentifierNode = resultNode.FirstChild("NextRecordIdentifier");
    if(!nextRecordIdentifierNode.IsNull())
    {
      m_nextRecordIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(nextRecordIdentifierNode.GetText());
      m_nextRecordIdentifierHasBeenSet = true;
    }
    XmlNode maxItemsNode = resultNode.FirstChild("MaxItems");
    if(!maxItemsNode.IsNull())
    {
      m_maxItems = Aws::Utils::Xml::DecodeEscapedXmlText(maxItemsNode.GetText());
      m_maxItemsHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
