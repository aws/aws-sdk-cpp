/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/AuthenticationProfile.h>
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

AuthenticationProfile::AuthenticationProfile() : 
    m_authenticationProfileNameHasBeenSet(false),
    m_authenticationProfileContentHasBeenSet(false)
{
}

AuthenticationProfile::AuthenticationProfile(const XmlNode& xmlNode) : 
    m_authenticationProfileNameHasBeenSet(false),
    m_authenticationProfileContentHasBeenSet(false)
{
  *this = xmlNode;
}

AuthenticationProfile& AuthenticationProfile::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode authenticationProfileNameNode = resultNode.FirstChild("AuthenticationProfileName");
    if(!authenticationProfileNameNode.IsNull())
    {
      m_authenticationProfileName = Aws::Utils::Xml::DecodeEscapedXmlText(authenticationProfileNameNode.GetText());
      m_authenticationProfileNameHasBeenSet = true;
    }
    XmlNode authenticationProfileContentNode = resultNode.FirstChild("AuthenticationProfileContent");
    if(!authenticationProfileContentNode.IsNull())
    {
      m_authenticationProfileContent = Aws::Utils::Xml::DecodeEscapedXmlText(authenticationProfileContentNode.GetText());
      m_authenticationProfileContentHasBeenSet = true;
    }
  }

  return *this;
}

void AuthenticationProfile::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_authenticationProfileNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AuthenticationProfileName=" << StringUtils::URLEncode(m_authenticationProfileName.c_str()) << "&";
  }

  if(m_authenticationProfileContentHasBeenSet)
  {
      oStream << location << index << locationValue << ".AuthenticationProfileContent=" << StringUtils::URLEncode(m_authenticationProfileContent.c_str()) << "&";
  }

}

void AuthenticationProfile::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_authenticationProfileNameHasBeenSet)
  {
      oStream << location << ".AuthenticationProfileName=" << StringUtils::URLEncode(m_authenticationProfileName.c_str()) << "&";
  }
  if(m_authenticationProfileContentHasBeenSet)
  {
      oStream << location << ".AuthenticationProfileContent=" << StringUtils::URLEncode(m_authenticationProfileContent.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
