/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/AccountWithRestoreAccess.h>
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

AccountWithRestoreAccess::AccountWithRestoreAccess() : 
    m_accountIdHasBeenSet(false),
    m_accountAliasHasBeenSet(false)
{
}

AccountWithRestoreAccess::AccountWithRestoreAccess(const XmlNode& xmlNode) : 
    m_accountIdHasBeenSet(false),
    m_accountAliasHasBeenSet(false)
{
  *this = xmlNode;
}

AccountWithRestoreAccess& AccountWithRestoreAccess::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode accountIdNode = resultNode.FirstChild("AccountId");
    if(!accountIdNode.IsNull())
    {
      m_accountId = Aws::Utils::Xml::DecodeEscapedXmlText(accountIdNode.GetText());
      m_accountIdHasBeenSet = true;
    }
    XmlNode accountAliasNode = resultNode.FirstChild("AccountAlias");
    if(!accountAliasNode.IsNull())
    {
      m_accountAlias = Aws::Utils::Xml::DecodeEscapedXmlText(accountAliasNode.GetText());
      m_accountAliasHasBeenSet = true;
    }
  }

  return *this;
}

void AccountWithRestoreAccess::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_accountIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AccountId=" << StringUtils::URLEncode(m_accountId.c_str()) << "&";
  }

  if(m_accountAliasHasBeenSet)
  {
      oStream << location << index << locationValue << ".AccountAlias=" << StringUtils::URLEncode(m_accountAlias.c_str()) << "&";
  }

}

void AccountWithRestoreAccess::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_accountIdHasBeenSet)
  {
      oStream << location << ".AccountId=" << StringUtils::URLEncode(m_accountId.c_str()) << "&";
  }
  if(m_accountAliasHasBeenSet)
  {
      oStream << location << ".AccountAlias=" << StringUtils::URLEncode(m_accountAlias.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
