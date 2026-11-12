/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/ResourceRecordSetProtection.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {

ResourceRecordSetProtection::ResourceRecordSetProtection(const XmlNode& xmlNode) { *this = xmlNode; }

ResourceRecordSetProtection& ResourceRecordSetProtection::operator=(const XmlNode& xmlNode) {
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
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if (!commentNode.IsNull()) {
      m_comment = Aws::Utils::Xml::DecodeEscapedXmlText(commentNode.GetText());
      m_commentHasBeenSet = true;
    }
  }

  return *this;
}

void ResourceRecordSetProtection::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_recordNameHasBeenSet) {
    XmlNode recordNameNode = parentNode.CreateChildElement("RecordName");
    recordNameNode.SetText(m_recordName);
  }

  if (m_recordTypeHasBeenSet) {
    XmlNode recordTypeNode = parentNode.CreateChildElement("RecordType");
    recordTypeNode.SetText(RRTypeMapper::GetNameForRRType(m_recordType));
  }

  if (m_commentHasBeenSet) {
    XmlNode commentNode = parentNode.CreateChildElement("Comment");
    commentNode.SetText(m_comment);
  }
}

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
