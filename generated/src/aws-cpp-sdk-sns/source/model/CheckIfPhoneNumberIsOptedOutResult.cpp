/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/CheckIfPhoneNumberIsOptedOutResult.h>
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

CheckIfPhoneNumberIsOptedOutResult::CheckIfPhoneNumberIsOptedOutResult() : 
    m_isOptedOut(false)
{
}

CheckIfPhoneNumberIsOptedOutResult::CheckIfPhoneNumberIsOptedOutResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_isOptedOut(false)
{
  *this = result;
}

CheckIfPhoneNumberIsOptedOutResult& CheckIfPhoneNumberIsOptedOutResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CheckIfPhoneNumberIsOptedOutResult"))
  {
    resultNode = rootNode.FirstChild("CheckIfPhoneNumberIsOptedOutResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode isOptedOutNode = resultNode.FirstChild("isOptedOut");
    if(!isOptedOutNode.IsNull())
    {
      m_isOptedOut = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isOptedOutNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SNS::Model::CheckIfPhoneNumberIsOptedOutResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
