/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/DashboardEntry.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

DashboardEntry::DashboardEntry() : 
    m_dashboardNameHasBeenSet(false),
    m_dashboardArnHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
}

DashboardEntry::DashboardEntry(const XmlNode& xmlNode) : 
    m_dashboardNameHasBeenSet(false),
    m_dashboardArnHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
  *this = xmlNode;
}

DashboardEntry& DashboardEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dashboardNameNode = resultNode.FirstChild("DashboardName");
    if(!dashboardNameNode.IsNull())
    {
      m_dashboardName = Aws::Utils::Xml::DecodeEscapedXmlText(dashboardNameNode.GetText());
      m_dashboardNameHasBeenSet = true;
    }
    XmlNode dashboardArnNode = resultNode.FirstChild("DashboardArn");
    if(!dashboardArnNode.IsNull())
    {
      m_dashboardArn = Aws::Utils::Xml::DecodeEscapedXmlText(dashboardArnNode.GetText());
      m_dashboardArnHasBeenSet = true;
    }
    XmlNode lastModifiedNode = resultNode.FirstChild("LastModified");
    if(!lastModifiedNode.IsNull())
    {
      m_lastModified = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastModifiedNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastModifiedHasBeenSet = true;
    }
    XmlNode sizeNode = resultNode.FirstChild("Size");
    if(!sizeNode.IsNull())
    {
      m_size = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sizeNode.GetText()).c_str()).c_str());
      m_sizeHasBeenSet = true;
    }
  }

  return *this;
}

void DashboardEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dashboardNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DashboardName=" << StringUtils::URLEncode(m_dashboardName.c_str()) << "&";
  }

  if(m_dashboardArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DashboardArn=" << StringUtils::URLEncode(m_dashboardArn.c_str()) << "&";
  }

  if(m_lastModifiedHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastModified=" << StringUtils::URLEncode(m_lastModified.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_sizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Size=" << m_size << "&";
  }

}

void DashboardEntry::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dashboardNameHasBeenSet)
  {
      oStream << location << ".DashboardName=" << StringUtils::URLEncode(m_dashboardName.c_str()) << "&";
  }
  if(m_dashboardArnHasBeenSet)
  {
      oStream << location << ".DashboardArn=" << StringUtils::URLEncode(m_dashboardArn.c_str()) << "&";
  }
  if(m_lastModifiedHasBeenSet)
  {
      oStream << location << ".LastModified=" << StringUtils::URLEncode(m_lastModified.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_sizeHasBeenSet)
  {
      oStream << location << ".Size=" << m_size << "&";
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
