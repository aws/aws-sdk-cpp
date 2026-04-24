/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rds/model/AvailableAdditionalStorageVolumesOption.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RDS {
namespace Model {

AvailableAdditionalStorageVolumesOption::AvailableAdditionalStorageVolumesOption(const XmlNode& xmlNode) { *this = xmlNode; }

AvailableAdditionalStorageVolumesOption& AvailableAdditionalStorageVolumesOption::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode supportsStorageAutoscalingNode = resultNode.FirstChild("SupportsStorageAutoscaling");
    if (!supportsStorageAutoscalingNode.IsNull()) {
      m_supportsStorageAutoscaling = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsStorageAutoscalingNode.GetText()).c_str()).c_str());
      m_supportsStorageAutoscalingHasBeenSet = true;
    }
    XmlNode supportsStorageThroughputNode = resultNode.FirstChild("SupportsStorageThroughput");
    if (!supportsStorageThroughputNode.IsNull()) {
      m_supportsStorageThroughput = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsStorageThroughputNode.GetText()).c_str()).c_str());
      m_supportsStorageThroughputHasBeenSet = true;
    }
    XmlNode supportsIopsNode = resultNode.FirstChild("SupportsIops");
    if (!supportsIopsNode.IsNull()) {
      m_supportsIops =
          StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsIopsNode.GetText()).c_str()).c_str());
      m_supportsIopsHasBeenSet = true;
    }
    XmlNode storageTypeNode = resultNode.FirstChild("StorageType");
    if (!storageTypeNode.IsNull()) {
      m_storageType = Aws::Utils::Xml::DecodeEscapedXmlText(storageTypeNode.GetText());
      m_storageTypeHasBeenSet = true;
    }
    XmlNode minStorageSizeNode = resultNode.FirstChild("MinStorageSize");
    if (!minStorageSizeNode.IsNull()) {
      m_minStorageSize = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minStorageSizeNode.GetText()).c_str()).c_str());
      m_minStorageSizeHasBeenSet = true;
    }
    XmlNode maxStorageSizeNode = resultNode.FirstChild("MaxStorageSize");
    if (!maxStorageSizeNode.IsNull()) {
      m_maxStorageSize = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxStorageSizeNode.GetText()).c_str()).c_str());
      m_maxStorageSizeHasBeenSet = true;
    }
    XmlNode minIopsNode = resultNode.FirstChild("MinIops");
    if (!minIopsNode.IsNull()) {
      m_minIops =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minIopsNode.GetText()).c_str()).c_str());
      m_minIopsHasBeenSet = true;
    }
    XmlNode maxIopsNode = resultNode.FirstChild("MaxIops");
    if (!maxIopsNode.IsNull()) {
      m_maxIops =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxIopsNode.GetText()).c_str()).c_str());
      m_maxIopsHasBeenSet = true;
    }
    XmlNode minIopsPerGibNode = resultNode.FirstChild("MinIopsPerGib");
    if (!minIopsPerGibNode.IsNull()) {
      m_minIopsPerGib = StringUtils::ConvertToDouble(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minIopsPerGibNode.GetText()).c_str()).c_str());
      m_minIopsPerGibHasBeenSet = true;
    }
    XmlNode maxIopsPerGibNode = resultNode.FirstChild("MaxIopsPerGib");
    if (!maxIopsPerGibNode.IsNull()) {
      m_maxIopsPerGib = StringUtils::ConvertToDouble(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxIopsPerGibNode.GetText()).c_str()).c_str());
      m_maxIopsPerGibHasBeenSet = true;
    }
    XmlNode minStorageThroughputNode = resultNode.FirstChild("MinStorageThroughput");
    if (!minStorageThroughputNode.IsNull()) {
      m_minStorageThroughput = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minStorageThroughputNode.GetText()).c_str()).c_str());
      m_minStorageThroughputHasBeenSet = true;
    }
    XmlNode maxStorageThroughputNode = resultNode.FirstChild("MaxStorageThroughput");
    if (!maxStorageThroughputNode.IsNull()) {
      m_maxStorageThroughput = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxStorageThroughputNode.GetText()).c_str()).c_str());
      m_maxStorageThroughputHasBeenSet = true;
    }
  }

  return *this;
}

void AvailableAdditionalStorageVolumesOption::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                             const char* locationValue) const {
  if (m_supportsStorageAutoscalingHasBeenSet) {
    oStream << location << index << locationValue << ".SupportsStorageAutoscaling=" << std::boolalpha << m_supportsStorageAutoscaling
            << "&";
  }

  if (m_supportsStorageThroughputHasBeenSet) {
    oStream << location << index << locationValue << ".SupportsStorageThroughput=" << std::boolalpha << m_supportsStorageThroughput << "&";
  }

  if (m_supportsIopsHasBeenSet) {
    oStream << location << index << locationValue << ".SupportsIops=" << std::boolalpha << m_supportsIops << "&";
  }

  if (m_storageTypeHasBeenSet) {
    oStream << location << index << locationValue << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }

  if (m_minStorageSizeHasBeenSet) {
    oStream << location << index << locationValue << ".MinStorageSize=" << m_minStorageSize << "&";
  }

  if (m_maxStorageSizeHasBeenSet) {
    oStream << location << index << locationValue << ".MaxStorageSize=" << m_maxStorageSize << "&";
  }

  if (m_minIopsHasBeenSet) {
    oStream << location << index << locationValue << ".MinIops=" << m_minIops << "&";
  }

  if (m_maxIopsHasBeenSet) {
    oStream << location << index << locationValue << ".MaxIops=" << m_maxIops << "&";
  }

  if (m_minIopsPerGibHasBeenSet) {
    oStream << location << index << locationValue << ".MinIopsPerGib=" << StringUtils::URLEncode(m_minIopsPerGib) << "&";
  }

  if (m_maxIopsPerGibHasBeenSet) {
    oStream << location << index << locationValue << ".MaxIopsPerGib=" << StringUtils::URLEncode(m_maxIopsPerGib) << "&";
  }

  if (m_minStorageThroughputHasBeenSet) {
    oStream << location << index << locationValue << ".MinStorageThroughput=" << m_minStorageThroughput << "&";
  }

  if (m_maxStorageThroughputHasBeenSet) {
    oStream << location << index << locationValue << ".MaxStorageThroughput=" << m_maxStorageThroughput << "&";
  }
}

void AvailableAdditionalStorageVolumesOption::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_supportsStorageAutoscalingHasBeenSet) {
    oStream << location << ".SupportsStorageAutoscaling=" << std::boolalpha << m_supportsStorageAutoscaling << "&";
  }
  if (m_supportsStorageThroughputHasBeenSet) {
    oStream << location << ".SupportsStorageThroughput=" << std::boolalpha << m_supportsStorageThroughput << "&";
  }
  if (m_supportsIopsHasBeenSet) {
    oStream << location << ".SupportsIops=" << std::boolalpha << m_supportsIops << "&";
  }
  if (m_storageTypeHasBeenSet) {
    oStream << location << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }
  if (m_minStorageSizeHasBeenSet) {
    oStream << location << ".MinStorageSize=" << m_minStorageSize << "&";
  }
  if (m_maxStorageSizeHasBeenSet) {
    oStream << location << ".MaxStorageSize=" << m_maxStorageSize << "&";
  }
  if (m_minIopsHasBeenSet) {
    oStream << location << ".MinIops=" << m_minIops << "&";
  }
  if (m_maxIopsHasBeenSet) {
    oStream << location << ".MaxIops=" << m_maxIops << "&";
  }
  if (m_minIopsPerGibHasBeenSet) {
    oStream << location << ".MinIopsPerGib=" << StringUtils::URLEncode(m_minIopsPerGib) << "&";
  }
  if (m_maxIopsPerGibHasBeenSet) {
    oStream << location << ".MaxIopsPerGib=" << StringUtils::URLEncode(m_maxIopsPerGib) << "&";
  }
  if (m_minStorageThroughputHasBeenSet) {
    oStream << location << ".MinStorageThroughput=" << m_minStorageThroughput << "&";
  }
  if (m_maxStorageThroughputHasBeenSet) {
    oStream << location << ".MaxStorageThroughput=" << m_maxStorageThroughput << "&";
  }
}

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
