/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/SupportedEngineLifecycle.h>
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

SupportedEngineLifecycle::SupportedEngineLifecycle(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

SupportedEngineLifecycle& SupportedEngineLifecycle::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode lifecycleSupportNameNode = resultNode.FirstChild("LifecycleSupportName");
    if(!lifecycleSupportNameNode.IsNull())
    {
      m_lifecycleSupportName = LifecycleSupportNameMapper::GetLifecycleSupportNameForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lifecycleSupportNameNode.GetText()).c_str()));
      m_lifecycleSupportNameHasBeenSet = true;
    }
    XmlNode lifecycleSupportStartDateNode = resultNode.FirstChild("LifecycleSupportStartDate");
    if(!lifecycleSupportStartDateNode.IsNull())
    {
      m_lifecycleSupportStartDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lifecycleSupportStartDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lifecycleSupportStartDateHasBeenSet = true;
    }
    XmlNode lifecycleSupportEndDateNode = resultNode.FirstChild("LifecycleSupportEndDate");
    if(!lifecycleSupportEndDateNode.IsNull())
    {
      m_lifecycleSupportEndDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lifecycleSupportEndDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lifecycleSupportEndDateHasBeenSet = true;
    }
  }

  return *this;
}

void SupportedEngineLifecycle::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_lifecycleSupportNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".LifecycleSupportName=" << StringUtils::URLEncode(LifecycleSupportNameMapper::GetNameForLifecycleSupportName(m_lifecycleSupportName)) << "&";
  }

  if(m_lifecycleSupportStartDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".LifecycleSupportStartDate=" << StringUtils::URLEncode(m_lifecycleSupportStartDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_lifecycleSupportEndDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".LifecycleSupportEndDate=" << StringUtils::URLEncode(m_lifecycleSupportEndDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void SupportedEngineLifecycle::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_lifecycleSupportNameHasBeenSet)
  {
      oStream << location << ".LifecycleSupportName=" << StringUtils::URLEncode(LifecycleSupportNameMapper::GetNameForLifecycleSupportName(m_lifecycleSupportName)) << "&";
  }
  if(m_lifecycleSupportStartDateHasBeenSet)
  {
      oStream << location << ".LifecycleSupportStartDate=" << StringUtils::URLEncode(m_lifecycleSupportStartDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_lifecycleSupportEndDateHasBeenSet)
  {
      oStream << location << ".LifecycleSupportEndDate=" << StringUtils::URLEncode(m_lifecycleSupportEndDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
