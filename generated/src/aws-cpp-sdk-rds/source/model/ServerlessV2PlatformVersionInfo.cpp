/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rds/model/ServerlessV2PlatformVersionInfo.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RDS {
namespace Model {

ServerlessV2PlatformVersionInfo::ServerlessV2PlatformVersionInfo(const XmlNode& xmlNode) { *this = xmlNode; }

ServerlessV2PlatformVersionInfo& ServerlessV2PlatformVersionInfo::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode serverlessV2PlatformVersionNode = resultNode.FirstChild("ServerlessV2PlatformVersion");
    if (!serverlessV2PlatformVersionNode.IsNull()) {
      m_serverlessV2PlatformVersion = Aws::Utils::Xml::DecodeEscapedXmlText(serverlessV2PlatformVersionNode.GetText());
      m_serverlessV2PlatformVersionHasBeenSet = true;
    }
    XmlNode serverlessV2PlatformVersionDescriptionNode = resultNode.FirstChild("ServerlessV2PlatformVersionDescription");
    if (!serverlessV2PlatformVersionDescriptionNode.IsNull()) {
      m_serverlessV2PlatformVersionDescription =
          Aws::Utils::Xml::DecodeEscapedXmlText(serverlessV2PlatformVersionDescriptionNode.GetText());
      m_serverlessV2PlatformVersionDescriptionHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if (!engineNode.IsNull()) {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode serverlessV2FeaturesSupportNode = resultNode.FirstChild("ServerlessV2FeaturesSupport");
    if (!serverlessV2FeaturesSupportNode.IsNull()) {
      m_serverlessV2FeaturesSupport = serverlessV2FeaturesSupportNode;
      m_serverlessV2FeaturesSupportHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if (!statusNode.IsNull()) {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode isDefaultNode = resultNode.FirstChild("IsDefault");
    if (!isDefaultNode.IsNull()) {
      m_isDefault =
          StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isDefaultNode.GetText()).c_str()).c_str());
      m_isDefaultHasBeenSet = true;
    }
  }

  return *this;
}

void ServerlessV2PlatformVersionInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                     const char* locationValue) const {
  if (m_serverlessV2PlatformVersionHasBeenSet) {
    oStream << location << index << locationValue
            << ".ServerlessV2PlatformVersion=" << StringUtils::URLEncode(m_serverlessV2PlatformVersion.c_str()) << "&";
  }

  if (m_serverlessV2PlatformVersionDescriptionHasBeenSet) {
    oStream << location << index << locationValue
            << ".ServerlessV2PlatformVersionDescription=" << StringUtils::URLEncode(m_serverlessV2PlatformVersionDescription.c_str())
            << "&";
  }

  if (m_engineHasBeenSet) {
    oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if (m_serverlessV2FeaturesSupportHasBeenSet) {
    Aws::StringStream serverlessV2FeaturesSupportLocationAndMemberSs;
    serverlessV2FeaturesSupportLocationAndMemberSs << location << index << locationValue << ".ServerlessV2FeaturesSupport";
    m_serverlessV2FeaturesSupport.OutputToStream(oStream, serverlessV2FeaturesSupportLocationAndMemberSs.str().c_str());
  }

  if (m_statusHasBeenSet) {
    oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if (m_isDefaultHasBeenSet) {
    oStream << location << index << locationValue << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }
}

void ServerlessV2PlatformVersionInfo::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_serverlessV2PlatformVersionHasBeenSet) {
    oStream << location << ".ServerlessV2PlatformVersion=" << StringUtils::URLEncode(m_serverlessV2PlatformVersion.c_str()) << "&";
  }
  if (m_serverlessV2PlatformVersionDescriptionHasBeenSet) {
    oStream << location
            << ".ServerlessV2PlatformVersionDescription=" << StringUtils::URLEncode(m_serverlessV2PlatformVersionDescription.c_str())
            << "&";
  }
  if (m_engineHasBeenSet) {
    oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if (m_serverlessV2FeaturesSupportHasBeenSet) {
    Aws::String serverlessV2FeaturesSupportLocationAndMember(location);
    serverlessV2FeaturesSupportLocationAndMember += ".ServerlessV2FeaturesSupport";
    m_serverlessV2FeaturesSupport.OutputToStream(oStream, serverlessV2FeaturesSupportLocationAndMember.c_str());
  }
  if (m_statusHasBeenSet) {
    oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if (m_isDefaultHasBeenSet) {
    oStream << location << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }
}

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
