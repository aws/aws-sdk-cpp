/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3control/model/StorageLensCostAndUsageReportsSelectionCriteria.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace S3Control {
namespace Model {

StorageLensCostAndUsageReportsSelectionCriteria::StorageLensCostAndUsageReportsSelectionCriteria(const XmlNode& xmlNode) {
  *this = xmlNode;
}

StorageLensCostAndUsageReportsSelectionCriteria& StorageLensCostAndUsageReportsSelectionCriteria::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode minDepthNode = resultNode.FirstChild("MinDepth");
    if (!minDepthNode.IsNull()) {
      m_minDepth =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minDepthNode.GetText()).c_str()).c_str());
      m_minDepthHasBeenSet = true;
    }
    XmlNode maxDepthNode = resultNode.FirstChild("MaxDepth");
    if (!maxDepthNode.IsNull()) {
      m_maxDepth =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxDepthNode.GetText()).c_str()).c_str());
      m_maxDepthHasBeenSet = true;
    }
  }

  return *this;
}

void StorageLensCostAndUsageReportsSelectionCriteria::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_minDepthHasBeenSet) {
    XmlNode minDepthNode = parentNode.CreateChildElement("MinDepth");
    ss << m_minDepth;
    minDepthNode.SetText(ss.str());
    ss.str("");
  }

  if (m_maxDepthHasBeenSet) {
    XmlNode maxDepthNode = parentNode.CreateChildElement("MaxDepth");
    ss << m_maxDepth;
    maxDepthNode.SetText(ss.str());
    ss.str("");
  }
}

}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
