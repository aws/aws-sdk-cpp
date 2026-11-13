/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/ProtectionError.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {

ProtectionError::ProtectionError(const XmlNode& xmlNode) { *this = xmlNode; }

ProtectionError& ProtectionError::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode recordNameNode = resultNode.FirstChild("RecordName");
    if (!recordNameNode.IsNull()) {
      m_recordName = Aws::Utils::Xml::DecodeEscapedXmlText(recordNameNode.GetText());
      m_recordNameHasBeenSet = true;
    }
    XmlNode recordTypeNode = resultNode.FirstChild("RecordType");
    if (!recordTypeNode.IsNull()) {
      m_recordType =
          RRTypeMapper::GetRRTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(recordTypeNode.GetText()).c_str()));
      m_recordTypeHasBeenSet = true;
    }
    XmlNode codeNode = resultNode.FirstChild("Code");
    if (!codeNode.IsNull()) {
      m_code = Aws::Utils::Xml::DecodeEscapedXmlText(codeNode.GetText());
      m_codeHasBeenSet = true;
    }
    XmlNode messageNode = resultNode.FirstChild("Message");
    if (!messageNode.IsNull()) {
      m_message = Aws::Utils::Xml::DecodeEscapedXmlText(messageNode.GetText());
      m_messageHasBeenSet = true;
    }
  }

  return *this;
}

void ProtectionError::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_recordNameHasBeenSet) {
    XmlNode recordNameNode = parentNode.CreateChildElement("RecordName");
    recordNameNode.SetText(m_recordName);
  }

  if (m_recordTypeHasBeenSet) {
    XmlNode recordTypeNode = parentNode.CreateChildElement("RecordType");
    recordTypeNode.SetText(RRTypeMapper::GetNameForRRType(m_recordType));
  }

  if (m_codeHasBeenSet) {
    XmlNode codeNode = parentNode.CreateChildElement("Code");
    codeNode.SetText(m_code);
  }

  if (m_messageHasBeenSet) {
    XmlNode messageNode = parentNode.CreateChildElement("Message");
    messageNode.SetText(m_message);
  }
}

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
