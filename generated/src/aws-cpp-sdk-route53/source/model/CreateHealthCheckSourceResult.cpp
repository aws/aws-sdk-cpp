/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/CreateHealthCheckSourceResult.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

CreateHealthCheckSourceResult::CreateHealthCheckSourceResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

CreateHealthCheckSourceResult& CreateHealthCheckSourceResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if (!resultNode.IsNull()) {
    XmlNode healthCheckSourceIdNode = resultNode.FirstChild("HealthCheckSourceId");
    if (!healthCheckSourceIdNode.IsNull()) {
      m_healthCheckSourceId = Aws::Utils::Xml::DecodeEscapedXmlText(healthCheckSourceIdNode.GetText());
      m_healthCheckSourceIdHasBeenSet = true;
    }
    XmlNode healthCheckSourceStatusNode = resultNode.FirstChild("HealthCheckSourceStatus");
    if (!healthCheckSourceStatusNode.IsNull()) {
      m_healthCheckSourceStatus = HealthCheckSourceStatusMapper::GetHealthCheckSourceStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(healthCheckSourceStatusNode.GetText()).c_str()));
      m_healthCheckSourceStatusHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& locationIter = headers.find("location");
  if (locationIter != headers.end()) {
    m_location = locationIter->second;
    m_locationHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
