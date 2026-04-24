/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/HostedZoneFailureReasons.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {

HostedZoneFailureReasons::HostedZoneFailureReasons(const XmlNode& xmlNode) { *this = xmlNode; }

HostedZoneFailureReasons& HostedZoneFailureReasons::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode acceleratedRecoveryNode = resultNode.FirstChild("AcceleratedRecovery");
    if (!acceleratedRecoveryNode.IsNull()) {
      m_acceleratedRecovery = Aws::Utils::Xml::DecodeEscapedXmlText(acceleratedRecoveryNode.GetText());
      m_acceleratedRecoveryHasBeenSet = true;
    }
  }

  return *this;
}

void HostedZoneFailureReasons::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_acceleratedRecoveryHasBeenSet) {
    XmlNode acceleratedRecoveryNode = parentNode.CreateChildElement("AcceleratedRecovery");
    acceleratedRecoveryNode.SetText(m_acceleratedRecovery);
  }
}

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
