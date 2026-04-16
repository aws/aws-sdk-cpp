/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rds/model/DescribeServerlessV2PlatformVersionsResult.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeServerlessV2PlatformVersionsResult::DescribeServerlessV2PlatformVersionsResult(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

DescribeServerlessV2PlatformVersionsResult& DescribeServerlessV2PlatformVersionsResult::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeServerlessV2PlatformVersionsResult")) {
    resultNode = rootNode.FirstChild("DescribeServerlessV2PlatformVersionsResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if (!markerNode.IsNull()) {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
    XmlNode serverlessV2PlatformVersionsNode = resultNode.FirstChild("ServerlessV2PlatformVersions");
    if (!serverlessV2PlatformVersionsNode.IsNull()) {
      XmlNode serverlessV2PlatformVersionsMember = serverlessV2PlatformVersionsNode.FirstChild("member");
      m_serverlessV2PlatformVersionsHasBeenSet = !serverlessV2PlatformVersionsMember.IsNull();
      while (!serverlessV2PlatformVersionsMember.IsNull()) {
        m_serverlessV2PlatformVersions.push_back(serverlessV2PlatformVersionsMember);
        serverlessV2PlatformVersionsMember = serverlessV2PlatformVersionsMember.NextNode("member");
      }

      m_serverlessV2PlatformVersionsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeServerlessV2PlatformVersionsResult",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
