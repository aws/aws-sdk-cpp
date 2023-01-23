/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/OptionGroupOptionSetting.h>
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

OptionGroupOptionSetting::OptionGroupOptionSetting() : 
    m_settingNameHasBeenSet(false),
    m_settingDescriptionHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_applyTypeHasBeenSet(false),
    m_allowedValuesHasBeenSet(false),
    m_isModifiable(false),
    m_isModifiableHasBeenSet(false),
    m_isRequired(false),
    m_isRequiredHasBeenSet(false),
    m_minimumEngineVersionPerAllowedValueHasBeenSet(false)
{
}

OptionGroupOptionSetting::OptionGroupOptionSetting(const XmlNode& xmlNode) : 
    m_settingNameHasBeenSet(false),
    m_settingDescriptionHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_applyTypeHasBeenSet(false),
    m_allowedValuesHasBeenSet(false),
    m_isModifiable(false),
    m_isModifiableHasBeenSet(false),
    m_isRequired(false),
    m_isRequiredHasBeenSet(false),
    m_minimumEngineVersionPerAllowedValueHasBeenSet(false)
{
  *this = xmlNode;
}

OptionGroupOptionSetting& OptionGroupOptionSetting::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode settingNameNode = resultNode.FirstChild("SettingName");
    if(!settingNameNode.IsNull())
    {
      m_settingName = Aws::Utils::Xml::DecodeEscapedXmlText(settingNameNode.GetText());
      m_settingNameHasBeenSet = true;
    }
    XmlNode settingDescriptionNode = resultNode.FirstChild("SettingDescription");
    if(!settingDescriptionNode.IsNull())
    {
      m_settingDescription = Aws::Utils::Xml::DecodeEscapedXmlText(settingDescriptionNode.GetText());
      m_settingDescriptionHasBeenSet = true;
    }
    XmlNode defaultValueNode = resultNode.FirstChild("DefaultValue");
    if(!defaultValueNode.IsNull())
    {
      m_defaultValue = Aws::Utils::Xml::DecodeEscapedXmlText(defaultValueNode.GetText());
      m_defaultValueHasBeenSet = true;
    }
    XmlNode applyTypeNode = resultNode.FirstChild("ApplyType");
    if(!applyTypeNode.IsNull())
    {
      m_applyType = Aws::Utils::Xml::DecodeEscapedXmlText(applyTypeNode.GetText());
      m_applyTypeHasBeenSet = true;
    }
    XmlNode allowedValuesNode = resultNode.FirstChild("AllowedValues");
    if(!allowedValuesNode.IsNull())
    {
      m_allowedValues = Aws::Utils::Xml::DecodeEscapedXmlText(allowedValuesNode.GetText());
      m_allowedValuesHasBeenSet = true;
    }
    XmlNode isModifiableNode = resultNode.FirstChild("IsModifiable");
    if(!isModifiableNode.IsNull())
    {
      m_isModifiable = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isModifiableNode.GetText()).c_str()).c_str());
      m_isModifiableHasBeenSet = true;
    }
    XmlNode isRequiredNode = resultNode.FirstChild("IsRequired");
    if(!isRequiredNode.IsNull())
    {
      m_isRequired = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isRequiredNode.GetText()).c_str()).c_str());
      m_isRequiredHasBeenSet = true;
    }
    XmlNode minimumEngineVersionPerAllowedValueNode = resultNode.FirstChild("MinimumEngineVersionPerAllowedValue");
    if(!minimumEngineVersionPerAllowedValueNode.IsNull())
    {
      XmlNode minimumEngineVersionPerAllowedValueMember = minimumEngineVersionPerAllowedValueNode.FirstChild("MinimumEngineVersionPerAllowedValue");
      while(!minimumEngineVersionPerAllowedValueMember.IsNull())
      {
        m_minimumEngineVersionPerAllowedValue.push_back(minimumEngineVersionPerAllowedValueMember);
        minimumEngineVersionPerAllowedValueMember = minimumEngineVersionPerAllowedValueMember.NextNode("MinimumEngineVersionPerAllowedValue");
      }

      m_minimumEngineVersionPerAllowedValueHasBeenSet = true;
    }
  }

  return *this;
}

void OptionGroupOptionSetting::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_settingNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".SettingName=" << StringUtils::URLEncode(m_settingName.c_str()) << "&";
  }

  if(m_settingDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".SettingDescription=" << StringUtils::URLEncode(m_settingDescription.c_str()) << "&";
  }

  if(m_defaultValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }

  if(m_applyTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ApplyType=" << StringUtils::URLEncode(m_applyType.c_str()) << "&";
  }

  if(m_allowedValuesHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowedValues=" << StringUtils::URLEncode(m_allowedValues.c_str()) << "&";
  }

  if(m_isModifiableHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsModifiable=" << std::boolalpha << m_isModifiable << "&";
  }

  if(m_isRequiredHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsRequired=" << std::boolalpha << m_isRequired << "&";
  }

  if(m_minimumEngineVersionPerAllowedValueHasBeenSet)
  {
      unsigned minimumEngineVersionPerAllowedValueIdx = 1;
      for(auto& item : m_minimumEngineVersionPerAllowedValue)
      {
        Aws::StringStream minimumEngineVersionPerAllowedValueSs;
        minimumEngineVersionPerAllowedValueSs << location << index << locationValue << ".MinimumEngineVersionPerAllowedValue." << minimumEngineVersionPerAllowedValueIdx++;
        item.OutputToStream(oStream, minimumEngineVersionPerAllowedValueSs.str().c_str());
      }
  }

}

void OptionGroupOptionSetting::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_settingNameHasBeenSet)
  {
      oStream << location << ".SettingName=" << StringUtils::URLEncode(m_settingName.c_str()) << "&";
  }
  if(m_settingDescriptionHasBeenSet)
  {
      oStream << location << ".SettingDescription=" << StringUtils::URLEncode(m_settingDescription.c_str()) << "&";
  }
  if(m_defaultValueHasBeenSet)
  {
      oStream << location << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }
  if(m_applyTypeHasBeenSet)
  {
      oStream << location << ".ApplyType=" << StringUtils::URLEncode(m_applyType.c_str()) << "&";
  }
  if(m_allowedValuesHasBeenSet)
  {
      oStream << location << ".AllowedValues=" << StringUtils::URLEncode(m_allowedValues.c_str()) << "&";
  }
  if(m_isModifiableHasBeenSet)
  {
      oStream << location << ".IsModifiable=" << std::boolalpha << m_isModifiable << "&";
  }
  if(m_isRequiredHasBeenSet)
  {
      oStream << location << ".IsRequired=" << std::boolalpha << m_isRequired << "&";
  }
  if(m_minimumEngineVersionPerAllowedValueHasBeenSet)
  {
      unsigned minimumEngineVersionPerAllowedValueIdx = 1;
      for(auto& item : m_minimumEngineVersionPerAllowedValue)
      {
        Aws::StringStream minimumEngineVersionPerAllowedValueSs;
        minimumEngineVersionPerAllowedValueSs << location <<  ".MinimumEngineVersionPerAllowedValue." << minimumEngineVersionPerAllowedValueIdx++;
        item.OutputToStream(oStream, minimumEngineVersionPerAllowedValueSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
