/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/ProtectionAlreadyExists.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {

ProtectionAlreadyExists::ProtectionAlreadyExists(const XmlNode& xmlNode) { *this = xmlNode; }

ProtectionAlreadyExists& ProtectionAlreadyExists::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode messageNode = resultNode.FirstChild("Message");
    if (!messageNode.IsNull()) {
      m_message = Aws::Utils::Xml::DecodeEscapedXmlText(messageNode.GetText());
      m_messageHasBeenSet = true;
    }
    XmlNode errorsNode = resultNode.FirstChild("Errors");
    if (!errorsNode.IsNull()) {
      XmlNode errorsMember = errorsNode.FirstChild("ProtectionError");
      m_errorsHasBeenSet = !errorsMember.IsNull();
      while (!errorsMember.IsNull()) {
        m_errors.push_back(errorsMember);
        errorsMember = errorsMember.NextNode("ProtectionError");
      }

      m_errorsHasBeenSet = true;
    }
  }

  return *this;
}

void ProtectionAlreadyExists::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_messageHasBeenSet) {
    XmlNode messageNode = parentNode.CreateChildElement("Message");
    messageNode.SetText(m_message);
  }

  if (m_errorsHasBeenSet) {
    XmlNode errorsParentNode = parentNode.CreateChildElement("Errors");
    for (const auto& item : m_errors) {
      XmlNode errorsNode = errorsParentNode.CreateChildElement("ProtectionError");
      item.AddToNode(errorsNode);
    }
  }
}

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
