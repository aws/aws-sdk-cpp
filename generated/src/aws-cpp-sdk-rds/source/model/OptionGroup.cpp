/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/OptionGroup.h>
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

OptionGroup::OptionGroup() : 
    m_optionGroupNameHasBeenSet(false),
    m_optionGroupDescriptionHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_majorEngineVersionHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_allowsVpcAndNonVpcInstanceMemberships(false),
    m_allowsVpcAndNonVpcInstanceMembershipsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_optionGroupArnHasBeenSet(false),
    m_sourceOptionGroupHasBeenSet(false),
    m_sourceAccountIdHasBeenSet(false),
    m_copyTimestampHasBeenSet(false)
{
}

OptionGroup::OptionGroup(const XmlNode& xmlNode) : 
    m_optionGroupNameHasBeenSet(false),
    m_optionGroupDescriptionHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_majorEngineVersionHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_allowsVpcAndNonVpcInstanceMemberships(false),
    m_allowsVpcAndNonVpcInstanceMembershipsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_optionGroupArnHasBeenSet(false),
    m_sourceOptionGroupHasBeenSet(false),
    m_sourceAccountIdHasBeenSet(false),
    m_copyTimestampHasBeenSet(false)
{
  *this = xmlNode;
}

OptionGroup& OptionGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode optionGroupNameNode = resultNode.FirstChild("OptionGroupName");
    if(!optionGroupNameNode.IsNull())
    {
      m_optionGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(optionGroupNameNode.GetText());
      m_optionGroupNameHasBeenSet = true;
    }
    XmlNode optionGroupDescriptionNode = resultNode.FirstChild("OptionGroupDescription");
    if(!optionGroupDescriptionNode.IsNull())
    {
      m_optionGroupDescription = Aws::Utils::Xml::DecodeEscapedXmlText(optionGroupDescriptionNode.GetText());
      m_optionGroupDescriptionHasBeenSet = true;
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
    XmlNode optionsNode = resultNode.FirstChild("Options");
    if(!optionsNode.IsNull())
    {
      XmlNode optionsMember = optionsNode.FirstChild("Option");
      while(!optionsMember.IsNull())
      {
        m_options.push_back(optionsMember);
        optionsMember = optionsMember.NextNode("Option");
      }

      m_optionsHasBeenSet = true;
    }
    XmlNode allowsVpcAndNonVpcInstanceMembershipsNode = resultNode.FirstChild("AllowsVpcAndNonVpcInstanceMemberships");
    if(!allowsVpcAndNonVpcInstanceMembershipsNode.IsNull())
    {
      m_allowsVpcAndNonVpcInstanceMemberships = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allowsVpcAndNonVpcInstanceMembershipsNode.GetText()).c_str()).c_str());
      m_allowsVpcAndNonVpcInstanceMembershipsHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode optionGroupArnNode = resultNode.FirstChild("OptionGroupArn");
    if(!optionGroupArnNode.IsNull())
    {
      m_optionGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(optionGroupArnNode.GetText());
      m_optionGroupArnHasBeenSet = true;
    }
    XmlNode sourceOptionGroupNode = resultNode.FirstChild("SourceOptionGroup");
    if(!sourceOptionGroupNode.IsNull())
    {
      m_sourceOptionGroup = Aws::Utils::Xml::DecodeEscapedXmlText(sourceOptionGroupNode.GetText());
      m_sourceOptionGroupHasBeenSet = true;
    }
    XmlNode sourceAccountIdNode = resultNode.FirstChild("SourceAccountId");
    if(!sourceAccountIdNode.IsNull())
    {
      m_sourceAccountId = Aws::Utils::Xml::DecodeEscapedXmlText(sourceAccountIdNode.GetText());
      m_sourceAccountIdHasBeenSet = true;
    }
    XmlNode copyTimestampNode = resultNode.FirstChild("CopyTimestamp");
    if(!copyTimestampNode.IsNull())
    {
      m_copyTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(copyTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_copyTimestampHasBeenSet = true;
    }
  }

  return *this;
}

void OptionGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_optionGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  }

  if(m_optionGroupDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptionGroupDescription=" << StringUtils::URLEncode(m_optionGroupDescription.c_str()) << "&";
  }

  if(m_engineNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineName=" << StringUtils::URLEncode(m_engineName.c_str()) << "&";
  }

  if(m_majorEngineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".MajorEngineVersion=" << StringUtils::URLEncode(m_majorEngineVersion.c_str()) << "&";
  }

  if(m_optionsHasBeenSet)
  {
      unsigned optionsIdx = 1;
      for(auto& item : m_options)
      {
        Aws::StringStream optionsSs;
        optionsSs << location << index << locationValue << ".Option." << optionsIdx++;
        item.OutputToStream(oStream, optionsSs.str().c_str());
      }
  }

  if(m_allowsVpcAndNonVpcInstanceMembershipsHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowsVpcAndNonVpcInstanceMemberships=" << std::boolalpha << m_allowsVpcAndNonVpcInstanceMemberships << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_optionGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptionGroupArn=" << StringUtils::URLEncode(m_optionGroupArn.c_str()) << "&";
  }

  if(m_sourceOptionGroupHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceOptionGroup=" << StringUtils::URLEncode(m_sourceOptionGroup.c_str()) << "&";
  }

  if(m_sourceAccountIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceAccountId=" << StringUtils::URLEncode(m_sourceAccountId.c_str()) << "&";
  }

  if(m_copyTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".CopyTimestamp=" << StringUtils::URLEncode(m_copyTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void OptionGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_optionGroupNameHasBeenSet)
  {
      oStream << location << ".OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  }
  if(m_optionGroupDescriptionHasBeenSet)
  {
      oStream << location << ".OptionGroupDescription=" << StringUtils::URLEncode(m_optionGroupDescription.c_str()) << "&";
  }
  if(m_engineNameHasBeenSet)
  {
      oStream << location << ".EngineName=" << StringUtils::URLEncode(m_engineName.c_str()) << "&";
  }
  if(m_majorEngineVersionHasBeenSet)
  {
      oStream << location << ".MajorEngineVersion=" << StringUtils::URLEncode(m_majorEngineVersion.c_str()) << "&";
  }
  if(m_optionsHasBeenSet)
  {
      unsigned optionsIdx = 1;
      for(auto& item : m_options)
      {
        Aws::StringStream optionsSs;
        optionsSs << location <<  ".Option." << optionsIdx++;
        item.OutputToStream(oStream, optionsSs.str().c_str());
      }
  }
  if(m_allowsVpcAndNonVpcInstanceMembershipsHasBeenSet)
  {
      oStream << location << ".AllowsVpcAndNonVpcInstanceMemberships=" << std::boolalpha << m_allowsVpcAndNonVpcInstanceMemberships << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_optionGroupArnHasBeenSet)
  {
      oStream << location << ".OptionGroupArn=" << StringUtils::URLEncode(m_optionGroupArn.c_str()) << "&";
  }
  if(m_sourceOptionGroupHasBeenSet)
  {
      oStream << location << ".SourceOptionGroup=" << StringUtils::URLEncode(m_sourceOptionGroup.c_str()) << "&";
  }
  if(m_sourceAccountIdHasBeenSet)
  {
      oStream << location << ".SourceAccountId=" << StringUtils::URLEncode(m_sourceAccountId.c_str()) << "&";
  }
  if(m_copyTimestampHasBeenSet)
  {
      oStream << location << ".CopyTimestamp=" << StringUtils::URLEncode(m_copyTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
