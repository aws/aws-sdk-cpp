/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/SubnetConfiguration.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {

SubnetConfiguration::SubnetConfiguration(const XmlNode& xmlNode) { *this = xmlNode; }

SubnetConfiguration& SubnetConfiguration::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode subnetIdNode = resultNode.FirstChild("SubnetId");
    if (!subnetIdNode.IsNull()) {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode availabilityZoneIdNode = resultNode.FirstChild("AvailabilityZoneId");
    if (!availabilityZoneIdNode.IsNull()) {
      m_availabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneIdNode.GetText());
      m_availabilityZoneIdHasBeenSet = true;
    }
    XmlNode securityGroupIdListNode = resultNode.FirstChild("SecurityGroupIdList");
    if (!securityGroupIdListNode.IsNull()) {
      XmlNode securityGroupIdListMember = securityGroupIdListNode.FirstChild("SecurityGroupId");
      m_securityGroupIdListHasBeenSet = !securityGroupIdListMember.IsNull();
      while (!securityGroupIdListMember.IsNull()) {
        m_securityGroupIdList.push_back(securityGroupIdListMember.GetText());
        securityGroupIdListMember = securityGroupIdListMember.NextNode("SecurityGroupId");
      }

      m_securityGroupIdListHasBeenSet = true;
    }
  }

  return *this;
}

void SubnetConfiguration::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_subnetIdHasBeenSet) {
    XmlNode subnetIdNode = parentNode.CreateChildElement("SubnetId");
    subnetIdNode.SetText(m_subnetId);
  }

  if (m_availabilityZoneIdHasBeenSet) {
    XmlNode availabilityZoneIdNode = parentNode.CreateChildElement("AvailabilityZoneId");
    availabilityZoneIdNode.SetText(m_availabilityZoneId);
  }

  if (m_securityGroupIdListHasBeenSet) {
    XmlNode securityGroupIdListParentNode = parentNode.CreateChildElement("SecurityGroupIdList");
    for (const auto& item : m_securityGroupIdList) {
      XmlNode securityGroupIdListNode = securityGroupIdListParentNode.CreateChildElement("SecurityGroupId");
      securityGroupIdListNode.SetText(item);
    }
  }
}

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
