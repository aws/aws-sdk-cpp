/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/model/ChangeHistoryFeature.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {

ChangeHistoryFeature::ChangeHistoryFeature(const XmlNode& xmlNode) { *this = xmlNode; }

ChangeHistoryFeature& ChangeHistoryFeature::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode statusNode = resultNode.FirstChild("Status");
    if (!statusNode.IsNull()) {
      m_status = FeatureEnablementMapper::GetFeatureEnablementForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode retentionStartsAtNode = resultNode.FirstChild("RetentionStartsAt");
    if (!retentionStartsAtNode.IsNull()) {
      m_retentionStartsAt =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(retentionStartsAtNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_retentionStartsAtHasBeenSet = true;
    }
  }

  return *this;
}

void ChangeHistoryFeature::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_statusHasBeenSet) {
    XmlNode statusNode = parentNode.CreateChildElement("Status");
    statusNode.SetText(FeatureEnablementMapper::GetNameForFeatureEnablement(m_status));
  }

  if (m_retentionStartsAtHasBeenSet) {
    XmlNode retentionStartsAtNode = parentNode.CreateChildElement("RetentionStartsAt");
    retentionStartsAtNode.SetText(m_retentionStartsAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }
}

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
