/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3control/model/StorageLensCostAndUsageReportsPublish.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace S3Control {
namespace Model {

StorageLensCostAndUsageReportsPublish::StorageLensCostAndUsageReportsPublish(const XmlNode& xmlNode) { *this = xmlNode; }

StorageLensCostAndUsageReportsPublish& StorageLensCostAndUsageReportsPublish::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode prefixLevelNode = resultNode.FirstChild("PrefixLevel");
    if (!prefixLevelNode.IsNull()) {
      m_prefixLevel = prefixLevelNode;
      m_prefixLevelHasBeenSet = true;
    }
  }

  return *this;
}

void StorageLensCostAndUsageReportsPublish::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_prefixLevelHasBeenSet) {
    XmlNode prefixLevelNode = parentNode.CreateChildElement("PrefixLevel");
    m_prefixLevel.AddToNode(prefixLevelNode);
  }
}

}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
