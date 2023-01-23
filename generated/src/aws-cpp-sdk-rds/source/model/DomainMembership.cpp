/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DomainMembership.h>
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

DomainMembership::DomainMembership() : 
    m_domainHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_fQDNHasBeenSet(false),
    m_iAMRoleNameHasBeenSet(false)
{
}

DomainMembership::DomainMembership(const XmlNode& xmlNode) : 
    m_domainHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_fQDNHasBeenSet(false),
    m_iAMRoleNameHasBeenSet(false)
{
  *this = xmlNode;
}

DomainMembership& DomainMembership::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode domainNode = resultNode.FirstChild("Domain");
    if(!domainNode.IsNull())
    {
      m_domain = Aws::Utils::Xml::DecodeEscapedXmlText(domainNode.GetText());
      m_domainHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode fQDNNode = resultNode.FirstChild("FQDN");
    if(!fQDNNode.IsNull())
    {
      m_fQDN = Aws::Utils::Xml::DecodeEscapedXmlText(fQDNNode.GetText());
      m_fQDNHasBeenSet = true;
    }
    XmlNode iAMRoleNameNode = resultNode.FirstChild("IAMRoleName");
    if(!iAMRoleNameNode.IsNull())
    {
      m_iAMRoleName = Aws::Utils::Xml::DecodeEscapedXmlText(iAMRoleNameNode.GetText());
      m_iAMRoleNameHasBeenSet = true;
    }
  }

  return *this;
}

void DomainMembership::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_domainHasBeenSet)
  {
      oStream << location << index << locationValue << ".Domain=" << StringUtils::URLEncode(m_domain.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_fQDNHasBeenSet)
  {
      oStream << location << index << locationValue << ".FQDN=" << StringUtils::URLEncode(m_fQDN.c_str()) << "&";
  }

  if(m_iAMRoleNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".IAMRoleName=" << StringUtils::URLEncode(m_iAMRoleName.c_str()) << "&";
  }

}

void DomainMembership::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_domainHasBeenSet)
  {
      oStream << location << ".Domain=" << StringUtils::URLEncode(m_domain.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_fQDNHasBeenSet)
  {
      oStream << location << ".FQDN=" << StringUtils::URLEncode(m_fQDN.c_str()) << "&";
  }
  if(m_iAMRoleNameHasBeenSet)
  {
      oStream << location << ".IAMRoleName=" << StringUtils::URLEncode(m_iAMRoleName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
