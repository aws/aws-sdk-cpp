﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ClusterSubnetGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

ClusterSubnetGroup::ClusterSubnetGroup(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ClusterSubnetGroup& ClusterSubnetGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode clusterSubnetGroupNameNode = resultNode.FirstChild("ClusterSubnetGroupName");
    if(!clusterSubnetGroupNameNode.IsNull())
    {
      m_clusterSubnetGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(clusterSubnetGroupNameNode.GetText());
      m_clusterSubnetGroupNameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode subnetGroupStatusNode = resultNode.FirstChild("SubnetGroupStatus");
    if(!subnetGroupStatusNode.IsNull())
    {
      m_subnetGroupStatus = Aws::Utils::Xml::DecodeEscapedXmlText(subnetGroupStatusNode.GetText());
      m_subnetGroupStatusHasBeenSet = true;
    }
    XmlNode subnetsNode = resultNode.FirstChild("Subnets");
    if(!subnetsNode.IsNull())
    {
      XmlNode subnetsMember = subnetsNode.FirstChild("Subnet");
      m_subnetsHasBeenSet = !subnetsMember.IsNull();
      while(!subnetsMember.IsNull())
      {
        m_subnets.push_back(subnetsMember);
        subnetsMember = subnetsMember.NextNode("Subnet");
      }

      m_subnetsHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("Tag");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("Tag");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode supportedClusterIpAddressTypesNode = resultNode.FirstChild("SupportedClusterIpAddressTypes");
    if(!supportedClusterIpAddressTypesNode.IsNull())
    {
      XmlNode supportedClusterIpAddressTypesMember = supportedClusterIpAddressTypesNode.FirstChild("item");
      m_supportedClusterIpAddressTypesHasBeenSet = !supportedClusterIpAddressTypesMember.IsNull();
      while(!supportedClusterIpAddressTypesMember.IsNull())
      {
        m_supportedClusterIpAddressTypes.push_back(supportedClusterIpAddressTypesMember.GetText());
        supportedClusterIpAddressTypesMember = supportedClusterIpAddressTypesMember.NextNode("item");
      }

      m_supportedClusterIpAddressTypesHasBeenSet = true;
    }
  }

  return *this;
}

void ClusterSubnetGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_clusterSubnetGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterSubnetGroupName=" << StringUtils::URLEncode(m_clusterSubnetGroupName.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_subnetGroupStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetGroupStatus=" << StringUtils::URLEncode(m_subnetGroupStatus.c_str()) << "&";
  }

  if(m_subnetsHasBeenSet)
  {
      unsigned subnetsIdx = 1;
      for(auto& item : m_subnets)
      {
        Aws::StringStream subnetsSs;
        subnetsSs << location << index << locationValue << ".Subnets.Subnet." << subnetsIdx++;
        item.OutputToStream(oStream, subnetsSs.str().c_str());
      }
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".Tags.Tag." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  if(m_supportedClusterIpAddressTypesHasBeenSet)
  {
      unsigned supportedClusterIpAddressTypesIdx = 1;
      for(auto& item : m_supportedClusterIpAddressTypes)
      {
        oStream << location << index << locationValue << ".SupportedClusterIpAddressTypes.item." << supportedClusterIpAddressTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void ClusterSubnetGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_clusterSubnetGroupNameHasBeenSet)
  {
      oStream << location << ".ClusterSubnetGroupName=" << StringUtils::URLEncode(m_clusterSubnetGroupName.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_subnetGroupStatusHasBeenSet)
  {
      oStream << location << ".SubnetGroupStatus=" << StringUtils::URLEncode(m_subnetGroupStatus.c_str()) << "&";
  }
  if(m_subnetsHasBeenSet)
  {
      unsigned subnetsIdx = 1;
      for(auto& item : m_subnets)
      {
        Aws::StringStream subnetsSs;
        subnetsSs << location << ".Subnets.Subnet." << subnetsIdx++;
        item.OutputToStream(oStream, subnetsSs.str().c_str());
      }
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << ".Tags.Tag." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_supportedClusterIpAddressTypesHasBeenSet)
  {
      unsigned supportedClusterIpAddressTypesIdx = 1;
      for(auto& item : m_supportedClusterIpAddressTypes)
      {
        oStream << location << ".SupportedClusterIpAddressTypes.item." << supportedClusterIpAddressTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
