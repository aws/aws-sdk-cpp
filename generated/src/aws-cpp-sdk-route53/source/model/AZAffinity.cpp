/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/AZAffinity.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {

AZAffinity::AZAffinity(const XmlNode& xmlNode) { *this = xmlNode; }

AZAffinity& AZAffinity::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode locationTypeNode = resultNode.FirstChild("LocationType");
    if (!locationTypeNode.IsNull()) {
      m_locationType = AZAffinityLocationTypeMapper::GetAZAffinityLocationTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(locationTypeNode.GetText()).c_str()));
      m_locationTypeHasBeenSet = true;
    }
    XmlNode locationIdNode = resultNode.FirstChild("LocationId");
    if (!locationIdNode.IsNull()) {
      m_locationId = Aws::Utils::Xml::DecodeEscapedXmlText(locationIdNode.GetText());
      m_locationIdHasBeenSet = true;
    }
  }

  return *this;
}

void AZAffinity::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_locationTypeHasBeenSet) {
    XmlNode locationTypeNode = parentNode.CreateChildElement("LocationType");
    locationTypeNode.SetText(AZAffinityLocationTypeMapper::GetNameForAZAffinityLocationType(m_locationType));
  }

  if (m_locationIdHasBeenSet) {
    XmlNode locationIdNode = parentNode.CreateChildElement("LocationId");
    locationIdNode.SetText(m_locationId);
  }
}

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
