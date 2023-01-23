/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBSecurityGroupMembership.h>
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

DBSecurityGroupMembership::DBSecurityGroupMembership() : 
    m_dBSecurityGroupNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

DBSecurityGroupMembership::DBSecurityGroupMembership(const XmlNode& xmlNode) : 
    m_dBSecurityGroupNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

DBSecurityGroupMembership& DBSecurityGroupMembership::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBSecurityGroupNameNode = resultNode.FirstChild("DBSecurityGroupName");
    if(!dBSecurityGroupNameNode.IsNull())
    {
      m_dBSecurityGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(dBSecurityGroupNameNode.GetText());
      m_dBSecurityGroupNameHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void DBSecurityGroupMembership::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBSecurityGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSecurityGroupName=" << StringUtils::URLEncode(m_dBSecurityGroupName.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

}

void DBSecurityGroupMembership::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBSecurityGroupNameHasBeenSet)
  {
      oStream << location << ".DBSecurityGroupName=" << StringUtils::URLEncode(m_dBSecurityGroupName.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
