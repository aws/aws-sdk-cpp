/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/ChangeGuardrail.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {

ChangeGuardrail::ChangeGuardrail(const XmlNode& xmlNode) { *this = xmlNode; }

ChangeGuardrail& ChangeGuardrail::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if (!nameNode.IsNull()) {
      m_name = ChangeGuardrailNameMapper::GetChangeGuardrailNameForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText()).c_str()));
      m_nameHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if (!statusNode.IsNull()) {
      m_status = ChangeGuardrailStatusMapper::GetChangeGuardrailStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void ChangeGuardrail::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_nameHasBeenSet) {
    XmlNode nameNode = parentNode.CreateChildElement("Name");
    nameNode.SetText(ChangeGuardrailNameMapper::GetNameForChangeGuardrailName(m_name));
  }

  if (m_statusHasBeenSet) {
    XmlNode statusNode = parentNode.CreateChildElement("Status");
    statusNode.SetText(ChangeGuardrailStatusMapper::GetNameForChangeGuardrailStatus(m_status));
  }
}

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
