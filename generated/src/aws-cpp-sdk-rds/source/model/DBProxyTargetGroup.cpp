/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBProxyTargetGroup.h>
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

DBProxyTargetGroup::DBProxyTargetGroup() : 
    m_dBProxyNameHasBeenSet(false),
    m_targetGroupNameHasBeenSet(false),
    m_targetGroupArnHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_connectionPoolConfigHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_updatedDateHasBeenSet(false)
{
}

DBProxyTargetGroup::DBProxyTargetGroup(const XmlNode& xmlNode) : 
    m_dBProxyNameHasBeenSet(false),
    m_targetGroupNameHasBeenSet(false),
    m_targetGroupArnHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_connectionPoolConfigHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_updatedDateHasBeenSet(false)
{
  *this = xmlNode;
}

DBProxyTargetGroup& DBProxyTargetGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBProxyNameNode = resultNode.FirstChild("DBProxyName");
    if(!dBProxyNameNode.IsNull())
    {
      m_dBProxyName = Aws::Utils::Xml::DecodeEscapedXmlText(dBProxyNameNode.GetText());
      m_dBProxyNameHasBeenSet = true;
    }
    XmlNode targetGroupNameNode = resultNode.FirstChild("TargetGroupName");
    if(!targetGroupNameNode.IsNull())
    {
      m_targetGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(targetGroupNameNode.GetText());
      m_targetGroupNameHasBeenSet = true;
    }
    XmlNode targetGroupArnNode = resultNode.FirstChild("TargetGroupArn");
    if(!targetGroupArnNode.IsNull())
    {
      m_targetGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(targetGroupArnNode.GetText());
      m_targetGroupArnHasBeenSet = true;
    }
    XmlNode isDefaultNode = resultNode.FirstChild("IsDefault");
    if(!isDefaultNode.IsNull())
    {
      m_isDefault = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isDefaultNode.GetText()).c_str()).c_str());
      m_isDefaultHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode connectionPoolConfigNode = resultNode.FirstChild("ConnectionPoolConfig");
    if(!connectionPoolConfigNode.IsNull())
    {
      m_connectionPoolConfig = connectionPoolConfigNode;
      m_connectionPoolConfigHasBeenSet = true;
    }
    XmlNode createdDateNode = resultNode.FirstChild("CreatedDate");
    if(!createdDateNode.IsNull())
    {
      m_createdDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdDateHasBeenSet = true;
    }
    XmlNode updatedDateNode = resultNode.FirstChild("UpdatedDate");
    if(!updatedDateNode.IsNull())
    {
      m_updatedDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updatedDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_updatedDateHasBeenSet = true;
    }
  }

  return *this;
}

void DBProxyTargetGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBProxyNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBProxyName=" << StringUtils::URLEncode(m_dBProxyName.c_str()) << "&";
  }

  if(m_targetGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetGroupName=" << StringUtils::URLEncode(m_targetGroupName.c_str()) << "&";
  }

  if(m_targetGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetGroupArn=" << StringUtils::URLEncode(m_targetGroupArn.c_str()) << "&";
  }

  if(m_isDefaultHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_connectionPoolConfigHasBeenSet)
  {
      Aws::StringStream connectionPoolConfigLocationAndMemberSs;
      connectionPoolConfigLocationAndMemberSs << location << index << locationValue << ".ConnectionPoolConfig";
      m_connectionPoolConfig.OutputToStream(oStream, connectionPoolConfigLocationAndMemberSs.str().c_str());
  }

  if(m_createdDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedDate=" << StringUtils::URLEncode(m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_updatedDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdatedDate=" << StringUtils::URLEncode(m_updatedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void DBProxyTargetGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBProxyNameHasBeenSet)
  {
      oStream << location << ".DBProxyName=" << StringUtils::URLEncode(m_dBProxyName.c_str()) << "&";
  }
  if(m_targetGroupNameHasBeenSet)
  {
      oStream << location << ".TargetGroupName=" << StringUtils::URLEncode(m_targetGroupName.c_str()) << "&";
  }
  if(m_targetGroupArnHasBeenSet)
  {
      oStream << location << ".TargetGroupArn=" << StringUtils::URLEncode(m_targetGroupArn.c_str()) << "&";
  }
  if(m_isDefaultHasBeenSet)
  {
      oStream << location << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_connectionPoolConfigHasBeenSet)
  {
      Aws::String connectionPoolConfigLocationAndMember(location);
      connectionPoolConfigLocationAndMember += ".ConnectionPoolConfig";
      m_connectionPoolConfig.OutputToStream(oStream, connectionPoolConfigLocationAndMember.c_str());
  }
  if(m_createdDateHasBeenSet)
  {
      oStream << location << ".CreatedDate=" << StringUtils::URLEncode(m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_updatedDateHasBeenSet)
  {
      oStream << location << ".UpdatedDate=" << StringUtils::URLEncode(m_updatedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
