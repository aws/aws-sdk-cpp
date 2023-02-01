/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/EndpointAccess.h>
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

EndpointAccess::EndpointAccess() : 
    m_clusterIdentifierHasBeenSet(false),
    m_resourceOwnerHasBeenSet(false),
    m_subnetGroupNameHasBeenSet(false),
    m_endpointStatusHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_endpointCreateTimeHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_vpcEndpointHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
}

EndpointAccess::EndpointAccess(const XmlNode& xmlNode) : 
    m_clusterIdentifierHasBeenSet(false),
    m_resourceOwnerHasBeenSet(false),
    m_subnetGroupNameHasBeenSet(false),
    m_endpointStatusHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_endpointCreateTimeHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false),
    m_vpcEndpointHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
  *this = xmlNode;
}

EndpointAccess& EndpointAccess::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode clusterIdentifierNode = resultNode.FirstChild("ClusterIdentifier");
    if(!clusterIdentifierNode.IsNull())
    {
      m_clusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(clusterIdentifierNode.GetText());
      m_clusterIdentifierHasBeenSet = true;
    }
    XmlNode resourceOwnerNode = resultNode.FirstChild("ResourceOwner");
    if(!resourceOwnerNode.IsNull())
    {
      m_resourceOwner = Aws::Utils::Xml::DecodeEscapedXmlText(resourceOwnerNode.GetText());
      m_resourceOwnerHasBeenSet = true;
    }
    XmlNode subnetGroupNameNode = resultNode.FirstChild("SubnetGroupName");
    if(!subnetGroupNameNode.IsNull())
    {
      m_subnetGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(subnetGroupNameNode.GetText());
      m_subnetGroupNameHasBeenSet = true;
    }
    XmlNode endpointStatusNode = resultNode.FirstChild("EndpointStatus");
    if(!endpointStatusNode.IsNull())
    {
      m_endpointStatus = Aws::Utils::Xml::DecodeEscapedXmlText(endpointStatusNode.GetText());
      m_endpointStatusHasBeenSet = true;
    }
    XmlNode endpointNameNode = resultNode.FirstChild("EndpointName");
    if(!endpointNameNode.IsNull())
    {
      m_endpointName = Aws::Utils::Xml::DecodeEscapedXmlText(endpointNameNode.GetText());
      m_endpointNameHasBeenSet = true;
    }
    XmlNode endpointCreateTimeNode = resultNode.FirstChild("EndpointCreateTime");
    if(!endpointCreateTimeNode.IsNull())
    {
      m_endpointCreateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endpointCreateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_endpointCreateTimeHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode addressNode = resultNode.FirstChild("Address");
    if(!addressNode.IsNull())
    {
      m_address = Aws::Utils::Xml::DecodeEscapedXmlText(addressNode.GetText());
      m_addressHasBeenSet = true;
    }
    XmlNode vpcSecurityGroupsNode = resultNode.FirstChild("VpcSecurityGroups");
    if(!vpcSecurityGroupsNode.IsNull())
    {
      XmlNode vpcSecurityGroupsMember = vpcSecurityGroupsNode.FirstChild("VpcSecurityGroup");
      while(!vpcSecurityGroupsMember.IsNull())
      {
        m_vpcSecurityGroups.push_back(vpcSecurityGroupsMember);
        vpcSecurityGroupsMember = vpcSecurityGroupsMember.NextNode("VpcSecurityGroup");
      }

      m_vpcSecurityGroupsHasBeenSet = true;
    }
    XmlNode vpcEndpointNode = resultNode.FirstChild("VpcEndpoint");
    if(!vpcEndpointNode.IsNull())
    {
      m_vpcEndpoint = vpcEndpointNode;
      m_vpcEndpointHasBeenSet = true;
    }
  }

  return *this;
}

void EndpointAccess::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_resourceOwnerHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceOwner=" << StringUtils::URLEncode(m_resourceOwner.c_str()) << "&";
  }

  if(m_subnetGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetGroupName=" << StringUtils::URLEncode(m_subnetGroupName.c_str()) << "&";
  }

  if(m_endpointStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndpointStatus=" << StringUtils::URLEncode(m_endpointStatus.c_str()) << "&";
  }

  if(m_endpointNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndpointName=" << StringUtils::URLEncode(m_endpointName.c_str()) << "&";
  }

  if(m_endpointCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndpointCreateTime=" << StringUtils::URLEncode(m_endpointCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_addressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Address=" << StringUtils::URLEncode(m_address.c_str()) << "&";
  }

  if(m_vpcSecurityGroupsHasBeenSet)
  {
      unsigned vpcSecurityGroupsIdx = 1;
      for(auto& item : m_vpcSecurityGroups)
      {
        Aws::StringStream vpcSecurityGroupsSs;
        vpcSecurityGroupsSs << location << index << locationValue << ".VpcSecurityGroup." << vpcSecurityGroupsIdx++;
        item.OutputToStream(oStream, vpcSecurityGroupsSs.str().c_str());
      }
  }

  if(m_vpcEndpointHasBeenSet)
  {
      Aws::StringStream vpcEndpointLocationAndMemberSs;
      vpcEndpointLocationAndMemberSs << location << index << locationValue << ".VpcEndpoint";
      m_vpcEndpoint.OutputToStream(oStream, vpcEndpointLocationAndMemberSs.str().c_str());
  }

  if(m_responseMetadataHasBeenSet)
  {
      Aws::StringStream responseMetadataLocationAndMemberSs;
      responseMetadataLocationAndMemberSs << location << index << locationValue << ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMemberSs.str().c_str());
  }

}

void EndpointAccess::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }
  if(m_resourceOwnerHasBeenSet)
  {
      oStream << location << ".ResourceOwner=" << StringUtils::URLEncode(m_resourceOwner.c_str()) << "&";
  }
  if(m_subnetGroupNameHasBeenSet)
  {
      oStream << location << ".SubnetGroupName=" << StringUtils::URLEncode(m_subnetGroupName.c_str()) << "&";
  }
  if(m_endpointStatusHasBeenSet)
  {
      oStream << location << ".EndpointStatus=" << StringUtils::URLEncode(m_endpointStatus.c_str()) << "&";
  }
  if(m_endpointNameHasBeenSet)
  {
      oStream << location << ".EndpointName=" << StringUtils::URLEncode(m_endpointName.c_str()) << "&";
  }
  if(m_endpointCreateTimeHasBeenSet)
  {
      oStream << location << ".EndpointCreateTime=" << StringUtils::URLEncode(m_endpointCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_addressHasBeenSet)
  {
      oStream << location << ".Address=" << StringUtils::URLEncode(m_address.c_str()) << "&";
  }
  if(m_vpcSecurityGroupsHasBeenSet)
  {
      unsigned vpcSecurityGroupsIdx = 1;
      for(auto& item : m_vpcSecurityGroups)
      {
        Aws::StringStream vpcSecurityGroupsSs;
        vpcSecurityGroupsSs << location <<  ".VpcSecurityGroup." << vpcSecurityGroupsIdx++;
        item.OutputToStream(oStream, vpcSecurityGroupsSs.str().c_str());
      }
  }
  if(m_vpcEndpointHasBeenSet)
  {
      Aws::String vpcEndpointLocationAndMember(location);
      vpcEndpointLocationAndMember += ".VpcEndpoint";
      m_vpcEndpoint.OutputToStream(oStream, vpcEndpointLocationAndMember.c_str());
  }
  if(m_responseMetadataHasBeenSet)
  {
      Aws::String responseMetadataLocationAndMember(location);
      responseMetadataLocationAndMember += ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
