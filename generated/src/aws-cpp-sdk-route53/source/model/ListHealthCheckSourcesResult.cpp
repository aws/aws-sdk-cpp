/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/ListHealthCheckSourcesResult.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListHealthCheckSourcesResult::ListHealthCheckSourcesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

ListHealthCheckSourcesResult& ListHealthCheckSourcesResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if (!resultNode.IsNull()) {
    XmlNode healthCheckSourcesNode = resultNode.FirstChild("HealthCheckSources");
    if (!healthCheckSourcesNode.IsNull()) {
      XmlNode healthCheckSourcesMember = healthCheckSourcesNode.FirstChild("HealthCheckSource");
      m_healthCheckSourcesHasBeenSet = !healthCheckSourcesMember.IsNull();
      while (!healthCheckSourcesMember.IsNull()) {
        m_healthCheckSources.push_back(healthCheckSourcesMember);
        healthCheckSourcesMember = healthCheckSourcesMember.NextNode("HealthCheckSource");
      }

      m_healthCheckSourcesHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if (!nextTokenNode.IsNull()) {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
