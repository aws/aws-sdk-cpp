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
    XmlNode failureReasonsNode = resultNode.FirstChild("FailureReasons");
    if (!failureReasonsNode.IsNull()) {
      m_failureReasons = failureReasonsNode;
      m_failureReasonsHasBeenSet = true;
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

  if (m_failureReasonsHasBeenSet) {
    XmlNode failureReasonsNode = parentNode.CreateChildElement("FailureReasons");
    m_failureReasons.AddToNode(failureReasonsNode);
  }
}

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
