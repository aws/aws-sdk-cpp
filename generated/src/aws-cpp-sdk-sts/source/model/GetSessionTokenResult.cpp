/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/sts/model/GetSessionTokenResult.h>

#include <utility>

using namespace Aws::STS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetSessionTokenResult::GetSessionTokenResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

GetSessionTokenResult& GetSessionTokenResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetSessionTokenResult")) {
    resultNode = rootNode.FirstChild("GetSessionTokenResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode credentialsNode = resultNode.FirstChild("Credentials");
    if (!credentialsNode.IsNull()) {
      m_credentials = credentialsNode;
      m_credentialsHasBeenSet = true;
    }
    XmlNode sessionTokenUtilizationNode = resultNode.FirstChild("SessionTokenUtilization");
    if (!sessionTokenUtilizationNode.IsNull()) {
      m_sessionTokenUtilization = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sessionTokenUtilizationNode.GetText()).c_str()).c_str());
      m_sessionTokenUtilizationHasBeenSet = true;
    }
    XmlNode sessionTokenSizeNode = resultNode.FirstChild("SessionTokenSize");
    if (!sessionTokenSizeNode.IsNull()) {
      m_sessionTokenSize = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sessionTokenSizeNode.GetText()).c_str()).c_str());
      m_sessionTokenSizeHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::STS::Model::GetSessionTokenResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
