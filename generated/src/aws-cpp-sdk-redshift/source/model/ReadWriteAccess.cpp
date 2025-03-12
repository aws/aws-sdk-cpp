﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ReadWriteAccess.h>
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

ReadWriteAccess::ReadWriteAccess() : 
    m_authorization(ServiceAuthorization::NOT_SET),
    m_authorizationHasBeenSet(false)
{
}

ReadWriteAccess::ReadWriteAccess(const XmlNode& xmlNode)
  : ReadWriteAccess()
{
  *this = xmlNode;
}

ReadWriteAccess& ReadWriteAccess::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode authorizationNode = resultNode.FirstChild("Authorization");
    if(!authorizationNode.IsNull())
    {
      m_authorization = ServiceAuthorizationMapper::GetServiceAuthorizationForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(authorizationNode.GetText()).c_str()).c_str());
      m_authorizationHasBeenSet = true;
    }
  }

  return *this;
}

void ReadWriteAccess::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_authorizationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Authorization=" << StringUtils::URLEncode(ServiceAuthorizationMapper::GetNameForServiceAuthorization(m_authorization)) << "&";
  }

}

void ReadWriteAccess::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_authorizationHasBeenSet)
  {
      oStream << location << ".Authorization=" << StringUtils::URLEncode(ServiceAuthorizationMapper::GetNameForServiceAuthorization(m_authorization)) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
