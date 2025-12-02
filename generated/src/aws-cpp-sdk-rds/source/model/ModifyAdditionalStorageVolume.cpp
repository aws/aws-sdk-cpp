/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rds/model/ModifyAdditionalStorageVolume.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RDS {
namespace Model {

ModifyAdditionalStorageVolume::ModifyAdditionalStorageVolume(const XmlNode& xmlNode) { *this = xmlNode; }

ModifyAdditionalStorageVolume& ModifyAdditionalStorageVolume::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode volumeNameNode = resultNode.FirstChild("VolumeName");
    if (!volumeNameNode.IsNull()) {
      m_volumeName = Aws::Utils::Xml::DecodeEscapedXmlText(volumeNameNode.GetText());
      m_volumeNameHasBeenSet = true;
    }
    XmlNode allocatedStorageNode = resultNode.FirstChild("AllocatedStorage");
    if (!allocatedStorageNode.IsNull()) {
      m_allocatedStorage = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allocatedStorageNode.GetText()).c_str()).c_str());
      m_allocatedStorageHasBeenSet = true;
    }
    XmlNode iOPSNode = resultNode.FirstChild("IOPS");
    if (!iOPSNode.IsNull()) {
      m_iOPS = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iOPSNode.GetText()).c_str()).c_str());
      m_iOPSHasBeenSet = true;
    }
    XmlNode maxAllocatedStorageNode = resultNode.FirstChild("MaxAllocatedStorage");
    if (!maxAllocatedStorageNode.IsNull()) {
      m_maxAllocatedStorage = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxAllocatedStorageNode.GetText()).c_str()).c_str());
      m_maxAllocatedStorageHasBeenSet = true;
    }
    XmlNode storageThroughputNode = resultNode.FirstChild("StorageThroughput");
    if (!storageThroughputNode.IsNull()) {
      m_storageThroughput = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(storageThroughputNode.GetText()).c_str()).c_str());
      m_storageThroughputHasBeenSet = true;
    }
    XmlNode storageTypeNode = resultNode.FirstChild("StorageType");
    if (!storageTypeNode.IsNull()) {
      m_storageType = Aws::Utils::Xml::DecodeEscapedXmlText(storageTypeNode.GetText());
      m_storageTypeHasBeenSet = true;
    }
    XmlNode setForDeleteNode = resultNode.FirstChild("SetForDelete");
    if (!setForDeleteNode.IsNull()) {
      m_setForDelete =
          StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(setForDeleteNode.GetText()).c_str()).c_str());
      m_setForDeleteHasBeenSet = true;
    }
  }

  return *this;
}

void ModifyAdditionalStorageVolume::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                   const char* locationValue) const {
  if (m_volumeNameHasBeenSet) {
    oStream << location << index << locationValue << ".VolumeName=" << StringUtils::URLEncode(m_volumeName.c_str()) << "&";
  }

  if (m_allocatedStorageHasBeenSet) {
    oStream << location << index << locationValue << ".AllocatedStorage=" << m_allocatedStorage << "&";
  }

  if (m_iOPSHasBeenSet) {
    oStream << location << index << locationValue << ".IOPS=" << m_iOPS << "&";
  }

  if (m_maxAllocatedStorageHasBeenSet) {
    oStream << location << index << locationValue << ".MaxAllocatedStorage=" << m_maxAllocatedStorage << "&";
  }

  if (m_storageThroughputHasBeenSet) {
    oStream << location << index << locationValue << ".StorageThroughput=" << m_storageThroughput << "&";
  }

  if (m_storageTypeHasBeenSet) {
    oStream << location << index << locationValue << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }

  if (m_setForDeleteHasBeenSet) {
    oStream << location << index << locationValue << ".SetForDelete=" << std::boolalpha << m_setForDelete << "&";
  }
}

void ModifyAdditionalStorageVolume::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_volumeNameHasBeenSet) {
    oStream << location << ".VolumeName=" << StringUtils::URLEncode(m_volumeName.c_str()) << "&";
  }
  if (m_allocatedStorageHasBeenSet) {
    oStream << location << ".AllocatedStorage=" << m_allocatedStorage << "&";
  }
  if (m_iOPSHasBeenSet) {
    oStream << location << ".IOPS=" << m_iOPS << "&";
  }
  if (m_maxAllocatedStorageHasBeenSet) {
    oStream << location << ".MaxAllocatedStorage=" << m_maxAllocatedStorage << "&";
  }
  if (m_storageThroughputHasBeenSet) {
    oStream << location << ".StorageThroughput=" << m_storageThroughput << "&";
  }
  if (m_storageTypeHasBeenSet) {
    oStream << location << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }
  if (m_setForDeleteHasBeenSet) {
    oStream << location << ".SetForDelete=" << std::boolalpha << m_setForDelete << "&";
  }
}

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
