/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/ResourceRecordSetProtectionKey.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {

ResourceRecordSetProtectionKey::ResourceRecordSetProtectionKey(const XmlNode& xmlNode) { *this = xmlNode; }

ResourceRecordSetProtectionKey& ResourceRecordSetProtectionKey::operator=(const XmlNode& xmlNode) {
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
  }

  return *this;
}

void ResourceRecordSetProtectionKey::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_recordNameHasBeenSet) {
    XmlNode recordNameNode = parentNode.CreateChildElement("RecordName");
    recordNameNode.SetText(m_recordName);
  }

  if (m_recordTypeHasBeenSet) {
    XmlNode recordTypeNode = parentNode.CreateChildElement("RecordType");
    recordTypeNode.SetText(RRTypeMapper::GetNameForRRType(m_recordType));
  }
}

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
