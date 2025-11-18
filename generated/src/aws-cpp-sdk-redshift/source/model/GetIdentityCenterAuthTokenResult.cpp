/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/redshift/model/GetIdentityCenterAuthTokenResult.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetIdentityCenterAuthTokenResult::GetIdentityCenterAuthTokenResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

GetIdentityCenterAuthTokenResult& GetIdentityCenterAuthTokenResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetIdentityCenterAuthTokenResult")) {
    resultNode = rootNode.FirstChild("GetIdentityCenterAuthTokenResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode tokenNode = resultNode.FirstChild("Token");
    if (!tokenNode.IsNull()) {
      m_token = Aws::Utils::Xml::DecodeEscapedXmlText(tokenNode.GetText());
      m_tokenHasBeenSet = true;
    }
    XmlNode expirationTimeNode = resultNode.FirstChild("ExpirationTime");
    if (!expirationTimeNode.IsNull()) {
      m_expirationTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(expirationTimeNode.GetText()).c_str()).c_str(),
                                  Aws::Utils::DateFormat::ISO_8601);
      m_expirationTimeHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::GetIdentityCenterAuthTokenResult",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
