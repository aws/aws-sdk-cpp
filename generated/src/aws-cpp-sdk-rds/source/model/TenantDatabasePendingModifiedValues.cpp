/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/TenantDatabasePendingModifiedValues.h>
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

TenantDatabasePendingModifiedValues::TenantDatabasePendingModifiedValues() : 
    m_masterUserPasswordHasBeenSet(false),
    m_tenantDBNameHasBeenSet(false)
{
}

TenantDatabasePendingModifiedValues::TenantDatabasePendingModifiedValues(const XmlNode& xmlNode) : 
    m_masterUserPasswordHasBeenSet(false),
    m_tenantDBNameHasBeenSet(false)
{
  *this = xmlNode;
}

TenantDatabasePendingModifiedValues& TenantDatabasePendingModifiedValues::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode masterUserPasswordNode = resultNode.FirstChild("MasterUserPassword");
    if(!masterUserPasswordNode.IsNull())
    {
      m_masterUserPassword = Aws::Utils::Xml::DecodeEscapedXmlText(masterUserPasswordNode.GetText());
      m_masterUserPasswordHasBeenSet = true;
    }
    XmlNode tenantDBNameNode = resultNode.FirstChild("TenantDBName");
    if(!tenantDBNameNode.IsNull())
    {
      m_tenantDBName = Aws::Utils::Xml::DecodeEscapedXmlText(tenantDBNameNode.GetText());
      m_tenantDBNameHasBeenSet = true;
    }
  }

  return *this;
}

void TenantDatabasePendingModifiedValues::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_masterUserPasswordHasBeenSet)
  {
      oStream << location << index << locationValue << ".MasterUserPassword=" << StringUtils::URLEncode(m_masterUserPassword.c_str()) << "&";
  }

  if(m_tenantDBNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TenantDBName=" << StringUtils::URLEncode(m_tenantDBName.c_str()) << "&";
  }

}

void TenantDatabasePendingModifiedValues::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_masterUserPasswordHasBeenSet)
  {
      oStream << location << ".MasterUserPassword=" << StringUtils::URLEncode(m_masterUserPassword.c_str()) << "&";
  }
  if(m_tenantDBNameHasBeenSet)
  {
      oStream << location << ".TenantDBName=" << StringUtils::URLEncode(m_tenantDBName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
