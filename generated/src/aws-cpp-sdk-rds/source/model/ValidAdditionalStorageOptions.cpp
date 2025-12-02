/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rds/model/ValidAdditionalStorageOptions.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RDS {
namespace Model {

ValidAdditionalStorageOptions::ValidAdditionalStorageOptions(const XmlNode& xmlNode) { *this = xmlNode; }

ValidAdditionalStorageOptions& ValidAdditionalStorageOptions::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode supportsAdditionalStorageVolumesNode = resultNode.FirstChild("SupportsAdditionalStorageVolumes");
    if (!supportsAdditionalStorageVolumesNode.IsNull()) {
      m_supportsAdditionalStorageVolumes = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsAdditionalStorageVolumesNode.GetText()).c_str()).c_str());
      m_supportsAdditionalStorageVolumesHasBeenSet = true;
    }
    XmlNode volumesNode = resultNode.FirstChild("Volumes");
    if (!volumesNode.IsNull()) {
      XmlNode volumesMember = volumesNode.FirstChild("member");
      m_volumesHasBeenSet = !volumesMember.IsNull();
      while (!volumesMember.IsNull()) {
        m_volumes.push_back(volumesMember);
        volumesMember = volumesMember.NextNode("member");
      }

      m_volumesHasBeenSet = true;
    }
  }

  return *this;
}

void ValidAdditionalStorageOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                   const char* locationValue) const {
  if (m_supportsAdditionalStorageVolumesHasBeenSet) {
    oStream << location << index << locationValue << ".SupportsAdditionalStorageVolumes=" << std::boolalpha
            << m_supportsAdditionalStorageVolumes << "&";
  }

  if (m_volumesHasBeenSet) {
    unsigned volumesIdx = 1;
    for (auto& item : m_volumes) {
      Aws::StringStream volumesSs;
      volumesSs << location << index << locationValue << ".Volumes.member." << volumesIdx++;
      item.OutputToStream(oStream, volumesSs.str().c_str());
    }
  }
}

void ValidAdditionalStorageOptions::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_supportsAdditionalStorageVolumesHasBeenSet) {
    oStream << location << ".SupportsAdditionalStorageVolumes=" << std::boolalpha << m_supportsAdditionalStorageVolumes << "&";
  }
  if (m_volumesHasBeenSet) {
    unsigned volumesIdx = 1;
    for (auto& item : m_volumes) {
      Aws::StringStream volumesSs;
      volumesSs << location << ".Volumes.member." << volumesIdx++;
      item.OutputToStream(oStream, volumesSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
