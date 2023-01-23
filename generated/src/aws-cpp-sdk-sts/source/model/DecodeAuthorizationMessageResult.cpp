/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sts/model/DecodeAuthorizationMessageResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::STS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DecodeAuthorizationMessageResult::DecodeAuthorizationMessageResult()
{
}

DecodeAuthorizationMessageResult::DecodeAuthorizationMessageResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DecodeAuthorizationMessageResult& DecodeAuthorizationMessageResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DecodeAuthorizationMessageResult"))
  {
    resultNode = rootNode.FirstChild("DecodeAuthorizationMessageResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode decodedMessageNode = resultNode.FirstChild("DecodedMessage");
    if(!decodedMessageNode.IsNull())
    {
      m_decodedMessage = Aws::Utils::Xml::DecodeEscapedXmlText(decodedMessageNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::STS::Model::DecodeAuthorizationMessageResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
