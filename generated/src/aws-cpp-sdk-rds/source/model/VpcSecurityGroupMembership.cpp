/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/VpcSecurityGroupMembership.h>
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

VpcSecurityGroupMembership::VpcSecurityGroupMembership() : 
    m_vpcSecurityGroupIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

VpcSecurityGroupMembership::VpcSecurityGroupMembership(const XmlNode& xmlNode) : 
    m_vpcSecurityGroupIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

VpcSecurityGroupMembership& VpcSecurityGroupMembership::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode vpcSecurityGroupIdNode = resultNode.FirstChild("VpcSecurityGroupId");
    if(!vpcSecurityGroupIdNode.IsNull())
    {
      m_vpcSecurityGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcSecurityGroupIdNode.GetText());
      m_vpcSecurityGroupIdHasBeenSet = true;
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

void VpcSecurityGroupMembership::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_vpcSecurityGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcSecurityGroupId=" << StringUtils::URLEncode(m_vpcSecurityGroupId.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

}

void VpcSecurityGroupMembership::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_vpcSecurityGroupIdHasBeenSet)
  {
      oStream << location << ".VpcSecurityGroupId=" << StringUtils::URLEncode(m_vpcSecurityGroupId.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
