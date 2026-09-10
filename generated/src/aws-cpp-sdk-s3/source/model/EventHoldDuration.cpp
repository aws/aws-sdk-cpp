/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3/model/EventHoldDuration.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace S3 {
namespace Model {

EventHoldDuration::EventHoldDuration(const XmlNode& xmlNode) { *this = xmlNode; }

EventHoldDuration& EventHoldDuration::operator=(const XmlNode& xmlNode) {
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

void EventHoldDuration::AddToNode(XmlNode& parentNode) const {
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
}  // namespace S3
}  // namespace Aws
