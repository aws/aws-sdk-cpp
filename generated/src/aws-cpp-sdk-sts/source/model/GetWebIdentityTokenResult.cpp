/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/sts/model/GetWebIdentityTokenResult.h>

#include <utility>

using namespace Aws::STS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetWebIdentityTokenResult::GetWebIdentityTokenResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

GetWebIdentityTokenResult& GetWebIdentityTokenResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetWebIdentityTokenResult")) {
    resultNode = rootNode.FirstChild("GetWebIdentityTokenResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode webIdentityTokenNode = resultNode.FirstChild("WebIdentityToken");
    if (!webIdentityTokenNode.IsNull()) {
      m_webIdentityToken = Aws::Utils::Xml::DecodeEscapedXmlText(webIdentityTokenNode.GetText());
      m_webIdentityTokenHasBeenSet = true;
    }
    XmlNode expirationNode = resultNode.FirstChild("Expiration");
    if (!expirationNode.IsNull()) {
      m_expiration = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(expirationNode.GetText()).c_str()).c_str(),
                              Aws::Utils::DateFormat::ISO_8601);
      m_expirationHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::STS::Model::GetWebIdentityTokenResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
