/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3control/model/S3ObjectLockRetentionEventHoldDuration.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace S3Control {
namespace Model {

S3ObjectLockRetentionEventHoldDuration::S3ObjectLockRetentionEventHoldDuration(const XmlNode& xmlNode) { *this = xmlNode; }

S3ObjectLockRetentionEventHoldDuration& S3ObjectLockRetentionEventHoldDuration::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode daysNode = resultNode.FirstChild("Days");
    if (!daysNode.IsNull()) {
      m_days = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(daysNode.GetText()).c_str()).c_str());
      m_daysHasBeenSet = true;
    }
    XmlNode yearsNode = resultNode.FirstChild("Years");
    if (!yearsNode.IsNull()) {
      m_years = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(yearsNode.GetText()).c_str()).c_str());
      m_yearsHasBeenSet = true;
    }
  }

  return *this;
}

void S3ObjectLockRetentionEventHoldDuration::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_daysHasBeenSet) {
    XmlNode daysNode = parentNode.CreateChildElement("Days");
    ss << m_days;
    daysNode.SetText(ss.str());
    ss.str("");
  }

  if (m_yearsHasBeenSet) {
    XmlNode yearsNode = parentNode.CreateChildElement("Years");
    ss << m_years;
    yearsNode.SetText(ss.str());
    ss.str("");
  }
}

}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
