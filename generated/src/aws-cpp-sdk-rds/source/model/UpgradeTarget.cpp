/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/UpgradeTarget.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

UpgradeTarget::UpgradeTarget() : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_autoUpgrade(false),
    m_autoUpgradeHasBeenSet(false),
    m_isMajorVersionUpgrade(false),
    m_isMajorVersionUpgradeHasBeenSet(false),
    m_supportedEngineModesHasBeenSet(false),
    m_supportsParallelQuery(false),
    m_supportsParallelQueryHasBeenSet(false),
    m_supportsGlobalDatabases(false),
    m_supportsGlobalDatabasesHasBeenSet(false),
    m_supportsBabelfish(false),
    m_supportsBabelfishHasBeenSet(false),
    m_supportsLocalWriteForwarding(false),
    m_supportsLocalWriteForwardingHasBeenSet(false),
    m_supportsIntegrations(false),
    m_supportsIntegrationsHasBeenSet(false)
{
}

UpgradeTarget::UpgradeTarget(const XmlNode& xmlNode) : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_autoUpgrade(false),
    m_autoUpgradeHasBeenSet(false),
    m_isMajorVersionUpgrade(false),
    m_isMajorVersionUpgradeHasBeenSet(false),
    m_supportedEngineModesHasBeenSet(false),
    m_supportsParallelQuery(false),
    m_supportsParallelQueryHasBeenSet(false),
    m_supportsGlobalDatabases(false),
    m_supportsGlobalDatabasesHasBeenSet(false),
    m_supportsBabelfish(false),
    m_supportsBabelfishHasBeenSet(false),
    m_supportsLocalWriteForwarding(false),
    m_supportsLocalWriteForwardingHasBeenSet(false),
    m_supportsIntegrations(false),
    m_supportsIntegrationsHasBeenSet(false)
{
  *this = xmlNode;
}

UpgradeTarget& UpgradeTarget::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode autoUpgradeNode = resultNode.FirstChild("AutoUpgrade");
    if(!autoUpgradeNode.IsNull())
    {
      m_autoUpgrade = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoUpgradeNode.GetText()).c_str()).c_str());
      m_autoUpgradeHasBeenSet = true;
    }
    XmlNode isMajorVersionUpgradeNode = resultNode.FirstChild("IsMajorVersionUpgrade");
    if(!isMajorVersionUpgradeNode.IsNull())
    {
      m_isMajorVersionUpgrade = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isMajorVersionUpgradeNode.GetText()).c_str()).c_str());
      m_isMajorVersionUpgradeHasBeenSet = true;
    }
    XmlNode supportedEngineModesNode = resultNode.FirstChild("SupportedEngineModes");
    if(!supportedEngineModesNode.IsNull())
    {
      XmlNode supportedEngineModesMember = supportedEngineModesNode.FirstChild("member");
      while(!supportedEngineModesMember.IsNull())
      {
        m_supportedEngineModes.push_back(supportedEngineModesMember.GetText());
        supportedEngineModesMember = supportedEngineModesMember.NextNode("member");
      }

      m_supportedEngineModesHasBeenSet = true;
    }
    XmlNode supportsParallelQueryNode = resultNode.FirstChild("SupportsParallelQuery");
    if(!supportsParallelQueryNode.IsNull())
    {
      m_supportsParallelQuery = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsParallelQueryNode.GetText()).c_str()).c_str());
      m_supportsParallelQueryHasBeenSet = true;
    }
    XmlNode supportsGlobalDatabasesNode = resultNode.FirstChild("SupportsGlobalDatabases");
    if(!supportsGlobalDatabasesNode.IsNull())
    {
      m_supportsGlobalDatabases = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsGlobalDatabasesNode.GetText()).c_str()).c_str());
      m_supportsGlobalDatabasesHasBeenSet = true;
    }
    XmlNode supportsBabelfishNode = resultNode.FirstChild("SupportsBabelfish");
    if(!supportsBabelfishNode.IsNull())
    {
      m_supportsBabelfish = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsBabelfishNode.GetText()).c_str()).c_str());
      m_supportsBabelfishHasBeenSet = true;
    }
    XmlNode supportsLocalWriteForwardingNode = resultNode.FirstChild("SupportsLocalWriteForwarding");
    if(!supportsLocalWriteForwardingNode.IsNull())
    {
      m_supportsLocalWriteForwarding = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsLocalWriteForwardingNode.GetText()).c_str()).c_str());
      m_supportsLocalWriteForwardingHasBeenSet = true;
    }
    XmlNode supportsIntegrationsNode = resultNode.FirstChild("SupportsIntegrations");
    if(!supportsIntegrationsNode.IsNull())
    {
      m_supportsIntegrations = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsIntegrationsNode.GetText()).c_str()).c_str());
      m_supportsIntegrationsHasBeenSet = true;
    }
  }

  return *this;
}

void UpgradeTarget::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_autoUpgradeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoUpgrade=" << std::boolalpha << m_autoUpgrade << "&";
  }

  if(m_isMajorVersionUpgradeHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsMajorVersionUpgrade=" << std::boolalpha << m_isMajorVersionUpgrade << "&";
  }

  if(m_supportedEngineModesHasBeenSet)
  {
      unsigned supportedEngineModesIdx = 1;
      for(auto& item : m_supportedEngineModes)
      {
        oStream << location << index << locationValue << ".SupportedEngineModes.member." << supportedEngineModesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_supportsParallelQueryHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsParallelQuery=" << std::boolalpha << m_supportsParallelQuery << "&";
  }

  if(m_supportsGlobalDatabasesHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsGlobalDatabases=" << std::boolalpha << m_supportsGlobalDatabases << "&";
  }

  if(m_supportsBabelfishHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsBabelfish=" << std::boolalpha << m_supportsBabelfish << "&";
  }

  if(m_supportsLocalWriteForwardingHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsLocalWriteForwarding=" << std::boolalpha << m_supportsLocalWriteForwarding << "&";
  }

  if(m_supportsIntegrationsHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsIntegrations=" << std::boolalpha << m_supportsIntegrations << "&";
  }

}

void UpgradeTarget::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_autoUpgradeHasBeenSet)
  {
      oStream << location << ".AutoUpgrade=" << std::boolalpha << m_autoUpgrade << "&";
  }
  if(m_isMajorVersionUpgradeHasBeenSet)
  {
      oStream << location << ".IsMajorVersionUpgrade=" << std::boolalpha << m_isMajorVersionUpgrade << "&";
  }
  if(m_supportedEngineModesHasBeenSet)
  {
      unsigned supportedEngineModesIdx = 1;
      for(auto& item : m_supportedEngineModes)
      {
        oStream << location << ".SupportedEngineModes.member." << supportedEngineModesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_supportsParallelQueryHasBeenSet)
  {
      oStream << location << ".SupportsParallelQuery=" << std::boolalpha << m_supportsParallelQuery << "&";
  }
  if(m_supportsGlobalDatabasesHasBeenSet)
  {
      oStream << location << ".SupportsGlobalDatabases=" << std::boolalpha << m_supportsGlobalDatabases << "&";
  }
  if(m_supportsBabelfishHasBeenSet)
  {
      oStream << location << ".SupportsBabelfish=" << std::boolalpha << m_supportsBabelfish << "&";
  }
  if(m_supportsLocalWriteForwardingHasBeenSet)
  {
      oStream << location << ".SupportsLocalWriteForwarding=" << std::boolalpha << m_supportsLocalWriteForwarding << "&";
  }
  if(m_supportsIntegrationsHasBeenSet)
  {
      oStream << location << ".SupportsIntegrations=" << std::boolalpha << m_supportsIntegrations << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
