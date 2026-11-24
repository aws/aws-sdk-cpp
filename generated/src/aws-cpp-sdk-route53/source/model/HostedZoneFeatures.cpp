/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/HostedZoneFeatures.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {

HostedZoneFeatures::HostedZoneFeatures(const XmlNode& xmlNode) { *this = xmlNode; }

HostedZoneFeatures& HostedZoneFeatures::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode acceleratedRecoveryStatusNode = resultNode.FirstChild("AcceleratedRecoveryStatus");
    if (!acceleratedRecoveryStatusNode.IsNull()) {
      m_acceleratedRecoveryStatus = AcceleratedRecoveryStatusMapper::GetAcceleratedRecoveryStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(acceleratedRecoveryStatusNode.GetText()).c_str()));
      m_acceleratedRecoveryStatusHasBeenSet = true;
    }
    XmlNode publicDNSFallbackStatusNode = resultNode.FirstChild("PublicDNSFallbackStatus");
    if (!publicDNSFallbackStatusNode.IsNull()) {
      m_publicDNSFallbackStatus = FeatureStatusMapper::GetFeatureStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(publicDNSFallbackStatusNode.GetText()).c_str()));
      m_publicDNSFallbackStatusHasBeenSet = true;
    }
    XmlNode changeHistoryNode = resultNode.FirstChild("ChangeHistory");
    if (!changeHistoryNode.IsNull()) {
      m_changeHistory = changeHistoryNode;
      m_changeHistoryHasBeenSet = true;
    }
    XmlNode failureReasonsNode = resultNode.FirstChild("FailureReasons");
    if (!failureReasonsNode.IsNull()) {
      m_failureReasons = failureReasonsNode;
      m_failureReasonsHasBeenSet = true;
    }
    XmlNode changeGuardrailsNode = resultNode.FirstChild("ChangeGuardrails");
    if (!changeGuardrailsNode.IsNull()) {
      XmlNode changeGuardrailsMember = changeGuardrailsNode.FirstChild("ChangeGuardrail");
      m_changeGuardrailsHasBeenSet = !changeGuardrailsMember.IsNull();
      while (!changeGuardrailsMember.IsNull()) {
        m_changeGuardrails.push_back(changeGuardrailsMember);
        changeGuardrailsMember = changeGuardrailsMember.NextNode("ChangeGuardrail");
      }

      m_changeGuardrailsHasBeenSet = true;
    }
  }

  return *this;
}

void HostedZoneFeatures::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_acceleratedRecoveryStatusHasBeenSet) {
    XmlNode acceleratedRecoveryStatusNode = parentNode.CreateChildElement("AcceleratedRecoveryStatus");
    acceleratedRecoveryStatusNode.SetText(
        AcceleratedRecoveryStatusMapper::GetNameForAcceleratedRecoveryStatus(m_acceleratedRecoveryStatus));
  }

  if (m_publicDNSFallbackStatusHasBeenSet) {
    XmlNode publicDNSFallbackStatusNode = parentNode.CreateChildElement("PublicDNSFallbackStatus");
    publicDNSFallbackStatusNode.SetText(FeatureStatusMapper::GetNameForFeatureStatus(m_publicDNSFallbackStatus));
  }

  if (m_changeHistoryHasBeenSet) {
    XmlNode changeHistoryNode = parentNode.CreateChildElement("ChangeHistory");
    m_changeHistory.AddToNode(changeHistoryNode);
  }

  if (m_failureReasonsHasBeenSet) {
    XmlNode failureReasonsNode = parentNode.CreateChildElement("FailureReasons");
    m_failureReasons.AddToNode(failureReasonsNode);
  }

  if (m_changeGuardrailsHasBeenSet) {
    XmlNode changeGuardrailsParentNode = parentNode.CreateChildElement("ChangeGuardrails");
    for (const auto& item : m_changeGuardrails) {
      XmlNode changeGuardrailsNode = changeGuardrailsParentNode.CreateChildElement("ChangeGuardrail");
      item.AddToNode(changeGuardrailsNode);
    }
  }
}

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
