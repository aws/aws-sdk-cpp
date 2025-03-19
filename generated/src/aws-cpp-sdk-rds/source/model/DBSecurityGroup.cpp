/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBSecurityGroup.h>
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

DBSecurityGroup::DBSecurityGroup(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DBSecurityGroup& DBSecurityGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ownerIdNode = resultNode.FirstChild("OwnerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode dBSecurityGroupNameNode = resultNode.FirstChild("DBSecurityGroupName");
    if(!dBSecurityGroupNameNode.IsNull())
    {
      m_dBSecurityGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(dBSecurityGroupNameNode.GetText());
      m_dBSecurityGroupNameHasBeenSet = true;
    }
    XmlNode dBSecurityGroupDescriptionNode = resultNode.FirstChild("DBSecurityGroupDescription");
    if(!dBSecurityGroupDescriptionNode.IsNull())
    {
      m_dBSecurityGroupDescription = Aws::Utils::Xml::DecodeEscapedXmlText(dBSecurityGroupDescriptionNode.GetText());
      m_dBSecurityGroupDescriptionHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode eC2SecurityGroupsNode = resultNode.FirstChild("EC2SecurityGroups");
    if(!eC2SecurityGroupsNode.IsNull())
    {
      XmlNode eC2SecurityGroupsMember = eC2SecurityGroupsNode.FirstChild("EC2SecurityGroup");
      m_eC2SecurityGroupsHasBeenSet = !eC2SecurityGroupsMember.IsNull();
      while(!eC2SecurityGroupsMember.IsNull())
      {
        m_eC2SecurityGroups.push_back(eC2SecurityGroupsMember);
        eC2SecurityGroupsMember = eC2SecurityGroupsMember.NextNode("EC2SecurityGroup");
      }

      m_eC2SecurityGroupsHasBeenSet = true;
    }
    XmlNode iPRangesNode = resultNode.FirstChild("IPRanges");
    if(!iPRangesNode.IsNull())
    {
      XmlNode iPRangesMember = iPRangesNode.FirstChild("IPRange");
      m_iPRangesHasBeenSet = !iPRangesMember.IsNull();
      while(!iPRangesMember.IsNull())
      {
        m_iPRanges.push_back(iPRangesMember);
        iPRangesMember = iPRangesMember.NextNode("IPRange");
      }

      m_iPRangesHasBeenSet = true;
    }
    XmlNode dBSecurityGroupArnNode = resultNode.FirstChild("DBSecurityGroupArn");
    if(!dBSecurityGroupArnNode.IsNull())
    {
      m_dBSecurityGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBSecurityGroupArnNode.GetText());
      m_dBSecurityGroupArnHasBeenSet = true;
    }
  }

  return *this;
}

void DBSecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_dBSecurityGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSecurityGroupName=" << StringUtils::URLEncode(m_dBSecurityGroupName.c_str()) << "&";
  }

  if(m_dBSecurityGroupDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSecurityGroupDescription=" << StringUtils::URLEncode(m_dBSecurityGroupDescription.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_eC2SecurityGroupsHasBeenSet)
  {
      unsigned eC2SecurityGroupsIdx = 1;
      for(auto& item : m_eC2SecurityGroups)
      {
        Aws::StringStream eC2SecurityGroupsSs;
        eC2SecurityGroupsSs << location << index << locationValue << ".EC2SecurityGroups.EC2SecurityGroup." << eC2SecurityGroupsIdx++;
        item.OutputToStream(oStream, eC2SecurityGroupsSs.str().c_str());
      }
  }

  if(m_iPRangesHasBeenSet)
  {
      unsigned iPRangesIdx = 1;
      for(auto& item : m_iPRanges)
      {
        Aws::StringStream iPRangesSs;
        iPRangesSs << location << index << locationValue << ".IPRanges.IPRange." << iPRangesIdx++;
        item.OutputToStream(oStream, iPRangesSs.str().c_str());
      }
  }

  if(m_dBSecurityGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSecurityGroupArn=" << StringUtils::URLEncode(m_dBSecurityGroupArn.c_str()) << "&";
  }

}

void DBSecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_dBSecurityGroupNameHasBeenSet)
  {
      oStream << location << ".DBSecurityGroupName=" << StringUtils::URLEncode(m_dBSecurityGroupName.c_str()) << "&";
  }
  if(m_dBSecurityGroupDescriptionHasBeenSet)
  {
      oStream << location << ".DBSecurityGroupDescription=" << StringUtils::URLEncode(m_dBSecurityGroupDescription.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_eC2SecurityGroupsHasBeenSet)
  {
      unsigned eC2SecurityGroupsIdx = 1;
      for(auto& item : m_eC2SecurityGroups)
      {
        Aws::StringStream eC2SecurityGroupsSs;
        eC2SecurityGroupsSs << location << ".EC2SecurityGroups.EC2SecurityGroup." << eC2SecurityGroupsIdx++;
        item.OutputToStream(oStream, eC2SecurityGroupsSs.str().c_str());
      }
  }
  if(m_iPRangesHasBeenSet)
  {
      unsigned iPRangesIdx = 1;
      for(auto& item : m_iPRanges)
      {
        Aws::StringStream iPRangesSs;
        iPRangesSs << location << ".IPRanges.IPRange." << iPRangesIdx++;
        item.OutputToStream(oStream, iPRangesSs.str().c_str());
      }
  }
  if(m_dBSecurityGroupArnHasBeenSet)
  {
      oStream << location << ".DBSecurityGroupArn=" << StringUtils::URLEncode(m_dBSecurityGroupArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
