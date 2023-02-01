/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/CreatePlatformApplicationResult.h>
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

CreatePlatformApplicationResult::CreatePlatformApplicationResult()
{
}

CreatePlatformApplicationResult::CreatePlatformApplicationResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreatePlatformApplicationResult& CreatePlatformApplicationResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreatePlatformApplicationResult"))
  {
    resultNode = rootNode.FirstChild("CreatePlatformApplicationResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode platformApplicationArnNode = resultNode.FirstChild("PlatformApplicationArn");
    if(!platformApplicationArnNode.IsNull())
    {
      m_platformApplicationArn = Aws::Utils::Xml::DecodeEscapedXmlText(platformApplicationArnNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SNS::Model::CreatePlatformApplicationResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
