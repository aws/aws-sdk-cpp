/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBProxyTarget.h>
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

DBProxyTarget::DBProxyTarget() : 
    m_targetArnHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_trackedClusterIdHasBeenSet(false),
    m_rdsResourceIdHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_type(TargetType::NOT_SET),
    m_typeHasBeenSet(false),
    m_role(TargetRole::NOT_SET),
    m_roleHasBeenSet(false),
    m_targetHealthHasBeenSet(false)
{
}

DBProxyTarget::DBProxyTarget(const XmlNode& xmlNode) : 
    m_targetArnHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_trackedClusterIdHasBeenSet(false),
    m_rdsResourceIdHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_type(TargetType::NOT_SET),
    m_typeHasBeenSet(false),
    m_role(TargetRole::NOT_SET),
    m_roleHasBeenSet(false),
    m_targetHealthHasBeenSet(false)
{
  *this = xmlNode;
}

DBProxyTarget& DBProxyTarget::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode targetArnNode = resultNode.FirstChild("TargetArn");
    if(!targetArnNode.IsNull())
    {
      m_targetArn = Aws::Utils::Xml::DecodeEscapedXmlText(targetArnNode.GetText());
      m_targetArnHasBeenSet = true;
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = Aws::Utils::Xml::DecodeEscapedXmlText(endpointNode.GetText());
      m_endpointHasBeenSet = true;
    }
    XmlNode trackedClusterIdNode = resultNode.FirstChild("TrackedClusterId");
    if(!trackedClusterIdNode.IsNull())
    {
      m_trackedClusterId = Aws::Utils::Xml::DecodeEscapedXmlText(trackedClusterIdNode.GetText());
      m_trackedClusterIdHasBeenSet = true;
    }
    XmlNode rdsResourceIdNode = resultNode.FirstChild("RdsResourceId");
    if(!rdsResourceIdNode.IsNull())
    {
      m_rdsResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(rdsResourceIdNode.GetText());
      m_rdsResourceIdHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = TargetTypeMapper::GetTargetTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode roleNode = resultNode.FirstChild("Role");
    if(!roleNode.IsNull())
    {
      m_role = TargetRoleMapper::GetTargetRoleForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(roleNode.GetText()).c_str()).c_str());
      m_roleHasBeenSet = true;
    }
    XmlNode targetHealthNode = resultNode.FirstChild("TargetHealth");
    if(!targetHealthNode.IsNull())
    {
      m_targetHealth = targetHealthNode;
      m_targetHealthHasBeenSet = true;
    }
  }

  return *this;
}

void DBProxyTarget::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_targetArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetArn=" << StringUtils::URLEncode(m_targetArn.c_str()) << "&";
  }

  if(m_endpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }

  if(m_trackedClusterIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TrackedClusterId=" << StringUtils::URLEncode(m_trackedClusterId.c_str()) << "&";
  }

  if(m_rdsResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RdsResourceId=" << StringUtils::URLEncode(m_rdsResourceId.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << TargetTypeMapper::GetNameForTargetType(m_type) << "&";
  }

  if(m_roleHasBeenSet)
  {
      oStream << location << index << locationValue << ".Role=" << TargetRoleMapper::GetNameForTargetRole(m_role) << "&";
  }

  if(m_targetHealthHasBeenSet)
  {
      Aws::StringStream targetHealthLocationAndMemberSs;
      targetHealthLocationAndMemberSs << location << index << locationValue << ".TargetHealth";
      m_targetHealth.OutputToStream(oStream, targetHealthLocationAndMemberSs.str().c_str());
  }

}

void DBProxyTarget::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_targetArnHasBeenSet)
  {
      oStream << location << ".TargetArn=" << StringUtils::URLEncode(m_targetArn.c_str()) << "&";
  }
  if(m_endpointHasBeenSet)
  {
      oStream << location << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }
  if(m_trackedClusterIdHasBeenSet)
  {
      oStream << location << ".TrackedClusterId=" << StringUtils::URLEncode(m_trackedClusterId.c_str()) << "&";
  }
  if(m_rdsResourceIdHasBeenSet)
  {
      oStream << location << ".RdsResourceId=" << StringUtils::URLEncode(m_rdsResourceId.c_str()) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << TargetTypeMapper::GetNameForTargetType(m_type) << "&";
  }
  if(m_roleHasBeenSet)
  {
      oStream << location << ".Role=" << TargetRoleMapper::GetNameForTargetRole(m_role) << "&";
  }
  if(m_targetHealthHasBeenSet)
  {
      Aws::String targetHealthLocationAndMember(location);
      targetHealthLocationAndMember += ".TargetHealth";
      m_targetHealth.OutputToStream(oStream, targetHealthLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
