/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/OptionGroupMembership.h>
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

OptionGroupMembership::OptionGroupMembership() : 
    m_optionGroupNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

OptionGroupMembership::OptionGroupMembership(const XmlNode& xmlNode) : 
    m_optionGroupNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

OptionGroupMembership& OptionGroupMembership::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode optionGroupNameNode = resultNode.FirstChild("OptionGroupName");
    if(!optionGroupNameNode.IsNull())
    {
      m_optionGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(optionGroupNameNode.GetText());
      m_optionGroupNameHasBeenSet = true;
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

void OptionGroupMembership::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_optionGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

}

void OptionGroupMembership::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_optionGroupNameHasBeenSet)
  {
      oStream << location << ".OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
