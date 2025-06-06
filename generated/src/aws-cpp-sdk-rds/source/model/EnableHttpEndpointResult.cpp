﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/EnableHttpEndpointResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

EnableHttpEndpointResult::EnableHttpEndpointResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

EnableHttpEndpointResult& EnableHttpEndpointResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "EnableHttpEndpointResult"))
  {
    resultNode = rootNode.FirstChild("EnableHttpEndpointResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode resourceArnNode = resultNode.FirstChild("ResourceArn");
    if(!resourceArnNode.IsNull())
    {
      m_resourceArn = Aws::Utils::Xml::DecodeEscapedXmlText(resourceArnNode.GetText());
      m_resourceArnHasBeenSet = true;
    }
    XmlNode httpEndpointEnabledNode = resultNode.FirstChild("HttpEndpointEnabled");
    if(!httpEndpointEnabledNode.IsNull())
    {
      m_httpEndpointEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpEndpointEnabledNode.GetText()).c_str()).c_str());
      m_httpEndpointEnabledHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::EnableHttpEndpointResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
