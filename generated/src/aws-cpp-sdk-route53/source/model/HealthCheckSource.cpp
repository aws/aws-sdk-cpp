/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/HealthCheckSource.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {

HealthCheckSource::HealthCheckSource(const XmlNode& xmlNode) { *this = xmlNode; }

HealthCheckSource& HealthCheckSource::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

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
    XmlNode healthCheckSourceConfigNode = resultNode.FirstChild("HealthCheckSourceConfig");
    if (!healthCheckSourceConfigNode.IsNull()) {
      m_healthCheckSourceConfig = healthCheckSourceConfigNode;
      m_healthCheckSourceConfigHasBeenSet = true;
    }
    XmlNode statusReasonCodeNode = resultNode.FirstChild("StatusReasonCode");
    if (!statusReasonCodeNode.IsNull()) {
      m_statusReasonCode = HealthCheckSourceStatusReasonCodeMapper::GetHealthCheckSourceStatusReasonCodeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusReasonCodeNode.GetText()).c_str()));
      m_statusReasonCodeHasBeenSet = true;
    }
    XmlNode statusReasonNode = resultNode.FirstChild("StatusReason");
    if (!statusReasonNode.IsNull()) {
      m_statusReason = Aws::Utils::Xml::DecodeEscapedXmlText(statusReasonNode.GetText());
      m_statusReasonHasBeenSet = true;
    }
  }

  return *this;
}

void HealthCheckSource::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_healthCheckSourceIdHasBeenSet) {
    XmlNode healthCheckSourceIdNode = parentNode.CreateChildElement("HealthCheckSourceId");
    healthCheckSourceIdNode.SetText(m_healthCheckSourceId);
  }

  if (m_healthCheckSourceStatusHasBeenSet) {
    XmlNode healthCheckSourceStatusNode = parentNode.CreateChildElement("HealthCheckSourceStatus");
    healthCheckSourceStatusNode.SetText(HealthCheckSourceStatusMapper::GetNameForHealthCheckSourceStatus(m_healthCheckSourceStatus));
  }

  if (m_healthCheckSourceConfigHasBeenSet) {
    XmlNode healthCheckSourceConfigNode = parentNode.CreateChildElement("HealthCheckSourceConfig");
    m_healthCheckSourceConfig.AddToNode(healthCheckSourceConfigNode);
  }

  if (m_statusReasonCodeHasBeenSet) {
    XmlNode statusReasonCodeNode = parentNode.CreateChildElement("StatusReasonCode");
    statusReasonCodeNode.SetText(HealthCheckSourceStatusReasonCodeMapper::GetNameForHealthCheckSourceStatusReasonCode(m_statusReasonCode));
  }

  if (m_statusReasonHasBeenSet) {
    XmlNode statusReasonNode = parentNode.CreateChildElement("StatusReason");
    statusReasonNode.SetText(m_statusReason);
  }
}

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
