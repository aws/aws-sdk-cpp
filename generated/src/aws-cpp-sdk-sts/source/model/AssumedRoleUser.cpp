/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sts/model/AssumedRoleUser.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace STS
{
namespace Model
{

AssumedRoleUser::AssumedRoleUser() : 
    m_assumedRoleIdHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

AssumedRoleUser::AssumedRoleUser(const XmlNode& xmlNode) : 
    m_assumedRoleIdHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = xmlNode;
}

AssumedRoleUser& AssumedRoleUser::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode assumedRoleIdNode = resultNode.FirstChild("AssumedRoleId");
    if(!assumedRoleIdNode.IsNull())
    {
      m_assumedRoleId = Aws::Utils::Xml::DecodeEscapedXmlText(assumedRoleIdNode.GetText());
      m_assumedRoleIdHasBeenSet = true;
    }
    XmlNode arnNode = resultNode.FirstChild("Arn");
    if(!arnNode.IsNull())
    {
      m_arn = Aws::Utils::Xml::DecodeEscapedXmlText(arnNode.GetText());
      m_arnHasBeenSet = true;
    }
  }

  return *this;
}

void AssumedRoleUser::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_assumedRoleIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssumedRoleId=" << StringUtils::URLEncode(m_assumedRoleId.c_str()) << "&";
  }

  if(m_arnHasBeenSet)
  {
      oStream << location << index << locationValue << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }

}

void AssumedRoleUser::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_assumedRoleIdHasBeenSet)
  {
      oStream << location << ".AssumedRoleId=" << StringUtils::URLEncode(m_assumedRoleId.c_str()) << "&";
  }
  if(m_arnHasBeenSet)
  {
      oStream << location << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace STS
} // namespace Aws
