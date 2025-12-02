/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rds/model/ValidVolumeOptions.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RDS {
namespace Model {

ValidVolumeOptions::ValidVolumeOptions(const XmlNode& xmlNode) { *this = xmlNode; }

ValidVolumeOptions& ValidVolumeOptions::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode volumeNameNode = resultNode.FirstChild("VolumeName");
    if (!volumeNameNode.IsNull()) {
      m_volumeName = Aws::Utils::Xml::DecodeEscapedXmlText(volumeNameNode.GetText());
      m_volumeNameHasBeenSet = true;
    }
    XmlNode storageNode = resultNode.FirstChild("Storage");
    if (!storageNode.IsNull()) {
      XmlNode storageMember = storageNode.FirstChild("ValidStorageOptions");
      m_storageHasBeenSet = !storageMember.IsNull();
      while (!storageMember.IsNull()) {
        m_storage.push_back(storageMember);
        storageMember = storageMember.NextNode("ValidStorageOptions");
      }

      m_storageHasBeenSet = true;
    }
  }

  return *this;
}

void ValidVolumeOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_volumeNameHasBeenSet) {
    oStream << location << index << locationValue << ".VolumeName=" << StringUtils::URLEncode(m_volumeName.c_str()) << "&";
  }

  if (m_storageHasBeenSet) {
    unsigned storageIdx = 1;
    for (auto& item : m_storage) {
      Aws::StringStream storageSs;
      storageSs << location << index << locationValue << ".Storage.ValidStorageOptions." << storageIdx++;
      item.OutputToStream(oStream, storageSs.str().c_str());
    }
  }
}

void ValidVolumeOptions::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_volumeNameHasBeenSet) {
    oStream << location << ".VolumeName=" << StringUtils::URLEncode(m_volumeName.c_str()) << "&";
  }
  if (m_storageHasBeenSet) {
    unsigned storageIdx = 1;
    for (auto& item : m_storage) {
      Aws::StringStream storageSs;
      storageSs << location << ".Storage.ValidStorageOptions." << storageIdx++;
      item.OutputToStream(oStream, storageSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
