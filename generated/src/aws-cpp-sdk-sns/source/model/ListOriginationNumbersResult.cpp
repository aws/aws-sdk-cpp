/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/ListOriginationNumbersResult.h>
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

ListOriginationNumbersResult::ListOriginationNumbersResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListOriginationNumbersResult& ListOriginationNumbersResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListOriginationNumbersResult"))
  {
    resultNode = rootNode.FirstChild("ListOriginationNumbersResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
    XmlNode phoneNumbersNode = resultNode.FirstChild("PhoneNumbers");
    if(!phoneNumbersNode.IsNull())
    {
      XmlNode phoneNumbersMember = phoneNumbersNode.FirstChild("member");
      m_phoneNumbersHasBeenSet = !phoneNumbersMember.IsNull();
      while(!phoneNumbersMember.IsNull())
      {
        m_phoneNumbers.push_back(phoneNumbersMember);
        phoneNumbersMember = phoneNumbersMember.NextNode("member");
      }

      m_phoneNumbersHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::SNS::Model::ListOriginationNumbersResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
