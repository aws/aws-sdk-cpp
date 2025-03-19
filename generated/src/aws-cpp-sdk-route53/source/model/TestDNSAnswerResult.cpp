/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/TestDNSAnswerResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

TestDNSAnswerResult::TestDNSAnswerResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

TestDNSAnswerResult& TestDNSAnswerResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode nameserverNode = resultNode.FirstChild("Nameserver");
    if(!nameserverNode.IsNull())
    {
      m_nameserver = Aws::Utils::Xml::DecodeEscapedXmlText(nameserverNode.GetText());
      m_nameserverHasBeenSet = true;
    }
    XmlNode recordNameNode = resultNode.FirstChild("RecordName");
    if(!recordNameNode.IsNull())
    {
      m_recordName = Aws::Utils::Xml::DecodeEscapedXmlText(recordNameNode.GetText());
      m_recordNameHasBeenSet = true;
    }
    XmlNode recordTypeNode = resultNode.FirstChild("RecordType");
    if(!recordTypeNode.IsNull())
    {
      m_recordType = RRTypeMapper::GetRRTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(recordTypeNode.GetText()).c_str()));
      m_recordTypeHasBeenSet = true;
    }
    XmlNode recordDataNode = resultNode.FirstChild("RecordData");
    if(!recordDataNode.IsNull())
    {
      XmlNode recordDataMember = recordDataNode.FirstChild("RecordDataEntry");
      m_recordDataHasBeenSet = !recordDataMember.IsNull();
      while(!recordDataMember.IsNull())
      {
        m_recordData.push_back(recordDataMember.GetText());
        recordDataMember = recordDataMember.NextNode("RecordDataEntry");
      }

      m_recordDataHasBeenSet = true;
    }
    XmlNode responseCodeNode = resultNode.FirstChild("ResponseCode");
    if(!responseCodeNode.IsNull())
    {
      m_responseCode = Aws::Utils::Xml::DecodeEscapedXmlText(responseCodeNode.GetText());
      m_responseCodeHasBeenSet = true;
    }
    XmlNode protocolNode = resultNode.FirstChild("Protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText());
      m_protocolHasBeenSet = true;
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
