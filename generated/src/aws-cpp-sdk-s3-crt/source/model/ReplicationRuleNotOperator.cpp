/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3-crt/model/ReplicationRuleNotOperator.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace S3Crt {
namespace Model {

ReplicationRuleNotOperator::ReplicationRuleNotOperator(const XmlNode& xmlNode) { *this = xmlNode; }

ReplicationRuleNotOperator& ReplicationRuleNotOperator::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode prefixNode = resultNode.FirstChild("Prefix");
    if (!prefixNode.IsNull()) {
      m_prefix = Aws::Utils::Xml::DecodeEscapedXmlText(prefixNode.GetText());
      m_prefixHasBeenSet = true;
    }
    XmlNode tagNode = resultNode.FirstChild("Tag");
    if (!tagNode.IsNull()) {
      m_tag = tagNode;
      m_tagHasBeenSet = true;
    }
    XmlNode orNode = resultNode.FirstChild("Or");
    if (!orNode.IsNull()) {
      m_or = orNode;
      m_orHasBeenSet = true;
    }
  }

  return *this;
}

void ReplicationRuleNotOperator::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_prefixHasBeenSet) {
    XmlNode prefixNode = parentNode.CreateChildElement("Prefix");
    prefixNode.SetText(m_prefix);
  }

  if (m_tagHasBeenSet) {
    XmlNode tagNode = parentNode.CreateChildElement("Tag");
    m_tag.AddToNode(tagNode);
  }

  if (m_orHasBeenSet) {
    XmlNode orNode = parentNode.CreateChildElement("Or");
    m_or.AddToNode(orNode);
  }
}

}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
