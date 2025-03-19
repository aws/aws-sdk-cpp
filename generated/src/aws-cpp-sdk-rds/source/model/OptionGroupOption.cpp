/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/OptionGroupOption.h>
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

OptionGroupOption::OptionGroupOption(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

OptionGroupOption& OptionGroupOption::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode engineNameNode = resultNode.FirstChild("EngineName");
    if(!engineNameNode.IsNull())
    {
      m_engineName = Aws::Utils::Xml::DecodeEscapedXmlText(engineNameNode.GetText());
      m_engineNameHasBeenSet = true;
    }
    XmlNode majorEngineVersionNode = resultNode.FirstChild("MajorEngineVersion");
    if(!majorEngineVersionNode.IsNull())
    {
      m_majorEngineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(majorEngineVersionNode.GetText());
      m_majorEngineVersionHasBeenSet = true;
    }
    XmlNode minimumRequiredMinorEngineVersionNode = resultNode.FirstChild("MinimumRequiredMinorEngineVersion");
    if(!minimumRequiredMinorEngineVersionNode.IsNull())
    {
      m_minimumRequiredMinorEngineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(minimumRequiredMinorEngineVersionNode.GetText());
      m_minimumRequiredMinorEngineVersionHasBeenSet = true;
    }
    XmlNode portRequiredNode = resultNode.FirstChild("PortRequired");
    if(!portRequiredNode.IsNull())
    {
      m_portRequired = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portRequiredNode.GetText()).c_str()).c_str());
      m_portRequiredHasBeenSet = true;
    }
    XmlNode defaultPortNode = resultNode.FirstChild("DefaultPort");
    if(!defaultPortNode.IsNull())
    {
      m_defaultPort = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultPortNode.GetText()).c_str()).c_str());
      m_defaultPortHasBeenSet = true;
    }
    XmlNode optionsDependedOnNode = resultNode.FirstChild("OptionsDependedOn");
    if(!optionsDependedOnNode.IsNull())
    {
      XmlNode optionsDependedOnMember = optionsDependedOnNode.FirstChild("OptionName");
      m_optionsDependedOnHasBeenSet = !optionsDependedOnMember.IsNull();
      while(!optionsDependedOnMember.IsNull())
      {
        m_optionsDependedOn.push_back(optionsDependedOnMember.GetText());
        optionsDependedOnMember = optionsDependedOnMember.NextNode("OptionName");
      }

      m_optionsDependedOnHasBeenSet = true;
    }
    XmlNode optionsConflictsWithNode = resultNode.FirstChild("OptionsConflictsWith");
    if(!optionsConflictsWithNode.IsNull())
    {
      XmlNode optionsConflictsWithMember = optionsConflictsWithNode.FirstChild("OptionConflictName");
      m_optionsConflictsWithHasBeenSet = !optionsConflictsWithMember.IsNull();
      while(!optionsConflictsWithMember.IsNull())
      {
        m_optionsConflictsWith.push_back(optionsConflictsWithMember.GetText());
        optionsConflictsWithMember = optionsConflictsWithMember.NextNode("OptionConflictName");
      }

      m_optionsConflictsWithHasBeenSet = true;
    }
    XmlNode persistentNode = resultNode.FirstChild("Persistent");
    if(!persistentNode.IsNull())
    {
      m_persistent = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(persistentNode.GetText()).c_str()).c_str());
      m_persistentHasBeenSet = true;
    }
    XmlNode permanentNode = resultNode.FirstChild("Permanent");
    if(!permanentNode.IsNull())
    {
      m_permanent = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(permanentNode.GetText()).c_str()).c_str());
      m_permanentHasBeenSet = true;
    }
    XmlNode requiresAutoMinorEngineVersionUpgradeNode = resultNode.FirstChild("RequiresAutoMinorEngineVersionUpgrade");
    if(!requiresAutoMinorEngineVersionUpgradeNode.IsNull())
    {
      m_requiresAutoMinorEngineVersionUpgrade = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(requiresAutoMinorEngineVersionUpgradeNode.GetText()).c_str()).c_str());
      m_requiresAutoMinorEngineVersionUpgradeHasBeenSet = true;
    }
    XmlNode vpcOnlyNode = resultNode.FirstChild("VpcOnly");
    if(!vpcOnlyNode.IsNull())
    {
      m_vpcOnly = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(vpcOnlyNode.GetText()).c_str()).c_str());
      m_vpcOnlyHasBeenSet = true;
    }
    XmlNode supportsOptionVersionDowngradeNode = resultNode.FirstChild("SupportsOptionVersionDowngrade");
    if(!supportsOptionVersionDowngradeNode.IsNull())
    {
      m_supportsOptionVersionDowngrade = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsOptionVersionDowngradeNode.GetText()).c_str()).c_str());
      m_supportsOptionVersionDowngradeHasBeenSet = true;
    }
    XmlNode optionGroupOptionSettingsNode = resultNode.FirstChild("OptionGroupOptionSettings");
    if(!optionGroupOptionSettingsNode.IsNull())
    {
      XmlNode optionGroupOptionSettingsMember = optionGroupOptionSettingsNode.FirstChild("OptionGroupOptionSetting");
      m_optionGroupOptionSettingsHasBeenSet = !optionGroupOptionSettingsMember.IsNull();
      while(!optionGroupOptionSettingsMember.IsNull())
      {
        m_optionGroupOptionSettings.push_back(optionGroupOptionSettingsMember);
        optionGroupOptionSettingsMember = optionGroupOptionSettingsMember.NextNode("OptionGroupOptionSetting");
      }

      m_optionGroupOptionSettingsHasBeenSet = true;
    }
    XmlNode optionGroupOptionVersionsNode = resultNode.FirstChild("OptionGroupOptionVersions");
    if(!optionGroupOptionVersionsNode.IsNull())
    {
      XmlNode optionGroupOptionVersionsMember = optionGroupOptionVersionsNode.FirstChild("OptionVersion");
      m_optionGroupOptionVersionsHasBeenSet = !optionGroupOptionVersionsMember.IsNull();
      while(!optionGroupOptionVersionsMember.IsNull())
      {
        m_optionGroupOptionVersions.push_back(optionGroupOptionVersionsMember);
        optionGroupOptionVersionsMember = optionGroupOptionVersionsMember.NextNode("OptionVersion");
      }

      m_optionGroupOptionVersionsHasBeenSet = true;
    }
    XmlNode copyableCrossAccountNode = resultNode.FirstChild("CopyableCrossAccount");
    if(!copyableCrossAccountNode.IsNull())
    {
      m_copyableCrossAccount = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(copyableCrossAccountNode.GetText()).c_str()).c_str());
      m_copyableCrossAccountHasBeenSet = true;
    }
  }

  return *this;
}

void OptionGroupOption::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_engineNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineName=" << StringUtils::URLEncode(m_engineName.c_str()) << "&";
  }

  if(m_majorEngineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".MajorEngineVersion=" << StringUtils::URLEncode(m_majorEngineVersion.c_str()) << "&";
  }

  if(m_minimumRequiredMinorEngineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinimumRequiredMinorEngineVersion=" << StringUtils::URLEncode(m_minimumRequiredMinorEngineVersion.c_str()) << "&";
  }

  if(m_portRequiredHasBeenSet)
  {
      oStream << location << index << locationValue << ".PortRequired=" << std::boolalpha << m_portRequired << "&";
  }

  if(m_defaultPortHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultPort=" << m_defaultPort << "&";
  }

  if(m_optionsDependedOnHasBeenSet)
  {
      unsigned optionsDependedOnIdx = 1;
      for(auto& item : m_optionsDependedOn)
      {
        oStream << location << index << locationValue << ".OptionsDependedOn.OptionName." << optionsDependedOnIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_optionsConflictsWithHasBeenSet)
  {
      unsigned optionsConflictsWithIdx = 1;
      for(auto& item : m_optionsConflictsWith)
      {
        oStream << location << index << locationValue << ".OptionsConflictsWith.OptionConflictName." << optionsConflictsWithIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_persistentHasBeenSet)
  {
      oStream << location << index << locationValue << ".Persistent=" << std::boolalpha << m_persistent << "&";
  }

  if(m_permanentHasBeenSet)
  {
      oStream << location << index << locationValue << ".Permanent=" << std::boolalpha << m_permanent << "&";
  }

  if(m_requiresAutoMinorEngineVersionUpgradeHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequiresAutoMinorEngineVersionUpgrade=" << std::boolalpha << m_requiresAutoMinorEngineVersionUpgrade << "&";
  }

  if(m_vpcOnlyHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcOnly=" << std::boolalpha << m_vpcOnly << "&";
  }

  if(m_supportsOptionVersionDowngradeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsOptionVersionDowngrade=" << std::boolalpha << m_supportsOptionVersionDowngrade << "&";
  }

  if(m_optionGroupOptionSettingsHasBeenSet)
  {
      unsigned optionGroupOptionSettingsIdx = 1;
      for(auto& item : m_optionGroupOptionSettings)
      {
        Aws::StringStream optionGroupOptionSettingsSs;
        optionGroupOptionSettingsSs << location << index << locationValue << ".OptionGroupOptionSettings.OptionGroupOptionSetting." << optionGroupOptionSettingsIdx++;
        item.OutputToStream(oStream, optionGroupOptionSettingsSs.str().c_str());
      }
  }

  if(m_optionGroupOptionVersionsHasBeenSet)
  {
      unsigned optionGroupOptionVersionsIdx = 1;
      for(auto& item : m_optionGroupOptionVersions)
      {
        Aws::StringStream optionGroupOptionVersionsSs;
        optionGroupOptionVersionsSs << location << index << locationValue << ".OptionGroupOptionVersions.OptionVersion." << optionGroupOptionVersionsIdx++;
        item.OutputToStream(oStream, optionGroupOptionVersionsSs.str().c_str());
      }
  }

  if(m_copyableCrossAccountHasBeenSet)
  {
      oStream << location << index << locationValue << ".CopyableCrossAccount=" << std::boolalpha << m_copyableCrossAccount << "&";
  }

}

void OptionGroupOption::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_engineNameHasBeenSet)
  {
      oStream << location << ".EngineName=" << StringUtils::URLEncode(m_engineName.c_str()) << "&";
  }
  if(m_majorEngineVersionHasBeenSet)
  {
      oStream << location << ".MajorEngineVersion=" << StringUtils::URLEncode(m_majorEngineVersion.c_str()) << "&";
  }
  if(m_minimumRequiredMinorEngineVersionHasBeenSet)
  {
      oStream << location << ".MinimumRequiredMinorEngineVersion=" << StringUtils::URLEncode(m_minimumRequiredMinorEngineVersion.c_str()) << "&";
  }
  if(m_portRequiredHasBeenSet)
  {
      oStream << location << ".PortRequired=" << std::boolalpha << m_portRequired << "&";
  }
  if(m_defaultPortHasBeenSet)
  {
      oStream << location << ".DefaultPort=" << m_defaultPort << "&";
  }
  if(m_optionsDependedOnHasBeenSet)
  {
      unsigned optionsDependedOnIdx = 1;
      for(auto& item : m_optionsDependedOn)
      {
        oStream << location << ".OptionsDependedOn.OptionName." << optionsDependedOnIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_optionsConflictsWithHasBeenSet)
  {
      unsigned optionsConflictsWithIdx = 1;
      for(auto& item : m_optionsConflictsWith)
      {
        oStream << location << ".OptionsConflictsWith.OptionConflictName." << optionsConflictsWithIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_persistentHasBeenSet)
  {
      oStream << location << ".Persistent=" << std::boolalpha << m_persistent << "&";
  }
  if(m_permanentHasBeenSet)
  {
      oStream << location << ".Permanent=" << std::boolalpha << m_permanent << "&";
  }
  if(m_requiresAutoMinorEngineVersionUpgradeHasBeenSet)
  {
      oStream << location << ".RequiresAutoMinorEngineVersionUpgrade=" << std::boolalpha << m_requiresAutoMinorEngineVersionUpgrade << "&";
  }
  if(m_vpcOnlyHasBeenSet)
  {
      oStream << location << ".VpcOnly=" << std::boolalpha << m_vpcOnly << "&";
  }
  if(m_supportsOptionVersionDowngradeHasBeenSet)
  {
      oStream << location << ".SupportsOptionVersionDowngrade=" << std::boolalpha << m_supportsOptionVersionDowngrade << "&";
  }
  if(m_optionGroupOptionSettingsHasBeenSet)
  {
      unsigned optionGroupOptionSettingsIdx = 1;
      for(auto& item : m_optionGroupOptionSettings)
      {
        Aws::StringStream optionGroupOptionSettingsSs;
        optionGroupOptionSettingsSs << location << ".OptionGroupOptionSettings.OptionGroupOptionSetting." << optionGroupOptionSettingsIdx++;
        item.OutputToStream(oStream, optionGroupOptionSettingsSs.str().c_str());
      }
  }
  if(m_optionGroupOptionVersionsHasBeenSet)
  {
      unsigned optionGroupOptionVersionsIdx = 1;
      for(auto& item : m_optionGroupOptionVersions)
      {
        Aws::StringStream optionGroupOptionVersionsSs;
        optionGroupOptionVersionsSs << location << ".OptionGroupOptionVersions.OptionVersion." << optionGroupOptionVersionsIdx++;
        item.OutputToStream(oStream, optionGroupOptionVersionsSs.str().c_str());
      }
  }
  if(m_copyableCrossAccountHasBeenSet)
  {
      oStream << location << ".CopyableCrossAccount=" << std::boolalpha << m_copyableCrossAccount << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
