/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/HealthCheckSourceConfig.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {

HealthCheckSourceConfig::HealthCheckSourceConfig(const XmlNode& xmlNode) { *this = xmlNode; }

HealthCheckSourceConfig& HealthCheckSourceConfig::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if (!vpcIdNode.IsNull()) {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode subnetConfigurationListNode = resultNode.FirstChild("SubnetConfigurationList");
    if (!subnetConfigurationListNode.IsNull()) {
      XmlNode subnetConfigurationListMember = subnetConfigurationListNode.FirstChild("SubnetConfiguration");
      m_subnetConfigurationListHasBeenSet = !subnetConfigurationListMember.IsNull();
      while (!subnetConfigurationListMember.IsNull()) {
        m_subnetConfigurationList.push_back(subnetConfigurationListMember);
        subnetConfigurationListMember = subnetConfigurationListMember.NextNode("SubnetConfiguration");
      }

      m_subnetConfigurationListHasBeenSet = true;
    }
  }

  return *this;
}

void HealthCheckSourceConfig::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_vpcIdHasBeenSet) {
    XmlNode vpcIdNode = parentNode.CreateChildElement("VpcId");
    vpcIdNode.SetText(m_vpcId);
  }

  if (m_subnetConfigurationListHasBeenSet) {
    XmlNode subnetConfigurationListParentNode = parentNode.CreateChildElement("SubnetConfigurationList");
    for (const auto& item : m_subnetConfigurationList) {
      XmlNode subnetConfigurationListNode = subnetConfigurationListParentNode.CreateChildElement("SubnetConfiguration");
      item.AddToNode(subnetConfigurationListNode);
    }
  }
}

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
