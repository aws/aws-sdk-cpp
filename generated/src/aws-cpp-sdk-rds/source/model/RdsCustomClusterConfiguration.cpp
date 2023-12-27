/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/RdsCustomClusterConfiguration.h>
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

RdsCustomClusterConfiguration::RdsCustomClusterConfiguration() : 
    m_interconnectSubnetIdHasBeenSet(false),
    m_transitGatewayMulticastDomainIdHasBeenSet(false),
    m_replicaMode(ReplicaMode::NOT_SET),
    m_replicaModeHasBeenSet(false)
{
}

RdsCustomClusterConfiguration::RdsCustomClusterConfiguration(const XmlNode& xmlNode) : 
    m_interconnectSubnetIdHasBeenSet(false),
    m_transitGatewayMulticastDomainIdHasBeenSet(false),
    m_replicaMode(ReplicaMode::NOT_SET),
    m_replicaModeHasBeenSet(false)
{
  *this = xmlNode;
}

RdsCustomClusterConfiguration& RdsCustomClusterConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode interconnectSubnetIdNode = resultNode.FirstChild("InterconnectSubnetId");
    if(!interconnectSubnetIdNode.IsNull())
    {
      m_interconnectSubnetId = Aws::Utils::Xml::DecodeEscapedXmlText(interconnectSubnetIdNode.GetText());
      m_interconnectSubnetIdHasBeenSet = true;
    }
    XmlNode transitGatewayMulticastDomainIdNode = resultNode.FirstChild("TransitGatewayMulticastDomainId");
    if(!transitGatewayMulticastDomainIdNode.IsNull())
    {
      m_transitGatewayMulticastDomainId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayMulticastDomainIdNode.GetText());
      m_transitGatewayMulticastDomainIdHasBeenSet = true;
    }
    XmlNode replicaModeNode = resultNode.FirstChild("ReplicaMode");
    if(!replicaModeNode.IsNull())
    {
      m_replicaMode = ReplicaModeMapper::GetReplicaModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(replicaModeNode.GetText()).c_str()).c_str());
      m_replicaModeHasBeenSet = true;
    }
  }

  return *this;
}

void RdsCustomClusterConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_interconnectSubnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InterconnectSubnetId=" << StringUtils::URLEncode(m_interconnectSubnetId.c_str()) << "&";
  }

  if(m_transitGatewayMulticastDomainIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayMulticastDomainId=" << StringUtils::URLEncode(m_transitGatewayMulticastDomainId.c_str()) << "&";
  }

  if(m_replicaModeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplicaMode=" << ReplicaModeMapper::GetNameForReplicaMode(m_replicaMode) << "&";
  }

}

void RdsCustomClusterConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_interconnectSubnetIdHasBeenSet)
  {
      oStream << location << ".InterconnectSubnetId=" << StringUtils::URLEncode(m_interconnectSubnetId.c_str()) << "&";
  }
  if(m_transitGatewayMulticastDomainIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayMulticastDomainId=" << StringUtils::URLEncode(m_transitGatewayMulticastDomainId.c_str()) << "&";
  }
  if(m_replicaModeHasBeenSet)
  {
      oStream << location << ".ReplicaMode=" << ReplicaModeMapper::GetNameForReplicaMode(m_replicaMode) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
