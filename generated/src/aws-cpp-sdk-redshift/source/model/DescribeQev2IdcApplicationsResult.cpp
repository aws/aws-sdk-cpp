/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/redshift/model/DescribeQev2IdcApplicationsResult.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeQev2IdcApplicationsResult::DescribeQev2IdcApplicationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

DescribeQev2IdcApplicationsResult& DescribeQev2IdcApplicationsResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeQev2IdcApplicationsResult")) {
    resultNode = rootNode.FirstChild("DescribeQev2IdcApplicationsResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode qev2IdcApplicationsNode = resultNode.FirstChild("Qev2IdcApplications");
    if (!qev2IdcApplicationsNode.IsNull()) {
      XmlNode qev2IdcApplicationsMember = qev2IdcApplicationsNode.FirstChild("member");
      m_qev2IdcApplicationsHasBeenSet = !qev2IdcApplicationsMember.IsNull();
      while (!qev2IdcApplicationsMember.IsNull()) {
        m_qev2IdcApplications.push_back(qev2IdcApplicationsMember);
        qev2IdcApplicationsMember = qev2IdcApplicationsMember.NextNode("member");
      }

      m_qev2IdcApplicationsHasBeenSet = true;
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if (!markerNode.IsNull()) {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeQev2IdcApplicationsResult",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
