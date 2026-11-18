/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3/model/ReplicationRuleOrOperator.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace S3 {
namespace Model {

ReplicationRuleOrOperator::ReplicationRuleOrOperator(const XmlNode& xmlNode) { *this = xmlNode; }

ReplicationRuleOrOperator& ReplicationRuleOrOperator::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode prefixesNode = resultNode.FirstChild("Prefix");
    if (!prefixesNode.IsNull()) {
      XmlNode prefixMember = prefixesNode;
      m_prefixesHasBeenSet = !prefixMember.IsNull();
      while (!prefixMember.IsNull()) {
        m_prefixes.push_back(prefixMember.GetText());
        prefixMember = prefixMember.NextNode("Prefix");
      }

      m_prefixesHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tag");
    if (!tagsNode.IsNull()) {
      XmlNode tagMember = tagsNode;
      m_tagsHasBeenSet = !tagMember.IsNull();
      while (!tagMember.IsNull()) {
        m_tags.push_back(tagMember);
        tagMember = tagMember.NextNode("Tag");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void ReplicationRuleOrOperator::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_prefixesHasBeenSet) {
    for (const auto& item : m_prefixes) {
      XmlNode prefixesNode = parentNode.CreateChildElement("Prefix");
      prefixesNode.SetText(item);
    }
  }

  if (m_tagsHasBeenSet) {
    for (const auto& item : m_tags) {
      XmlNode tagsNode = parentNode.CreateChildElement("Tag");
      item.AddToNode(tagsNode);
    }
  }
}

}  // namespace Model
}  // namespace S3
}  // namespace Aws
