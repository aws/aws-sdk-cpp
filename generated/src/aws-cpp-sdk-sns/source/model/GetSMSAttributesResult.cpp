/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/GetSMSAttributesResult.h>
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

GetSMSAttributesResult::GetSMSAttributesResult()
{
}

GetSMSAttributesResult::GetSMSAttributesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetSMSAttributesResult& GetSMSAttributesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetSMSAttributesResult"))
  {
    resultNode = rootNode.FirstChild("GetSMSAttributesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode attributesNode = resultNode.FirstChild("attributes");

    if(!attributesNode.IsNull())
    {
      XmlNode attributesEntry = attributesNode.FirstChild("entry");
      while(!attributesEntry.IsNull())
      {
        XmlNode keyNode = attributesEntry.FirstChild("key");
        XmlNode valueNode = attributesEntry.FirstChild("value");
        m_attributes[keyNode.GetText()] =
            valueNode.GetText();
        attributesEntry = attributesEntry.NextNode("entry");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SNS::Model::GetSMSAttributesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
