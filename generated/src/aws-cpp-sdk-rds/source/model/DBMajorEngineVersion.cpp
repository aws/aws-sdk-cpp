/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBMajorEngineVersion.h>
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

DBMajorEngineVersion::DBMajorEngineVersion(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DBMajorEngineVersion& DBMajorEngineVersion::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode majorEngineVersionNode = resultNode.FirstChild("MajorEngineVersion");
    if(!majorEngineVersionNode.IsNull())
    {
      m_majorEngineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(majorEngineVersionNode.GetText());
      m_majorEngineVersionHasBeenSet = true;
    }
    XmlNode supportedEngineLifecyclesNode = resultNode.FirstChild("SupportedEngineLifecycles");
    if(!supportedEngineLifecyclesNode.IsNull())
    {
      XmlNode supportedEngineLifecyclesMember = supportedEngineLifecyclesNode.FirstChild("SupportedEngineLifecycle");
      m_supportedEngineLifecyclesHasBeenSet = !supportedEngineLifecyclesMember.IsNull();
      while(!supportedEngineLifecyclesMember.IsNull())
      {
        m_supportedEngineLifecycles.push_back(supportedEngineLifecyclesMember);
        supportedEngineLifecyclesMember = supportedEngineLifecyclesMember.NextNode("SupportedEngineLifecycle");
      }

      m_supportedEngineLifecyclesHasBeenSet = true;
    }
  }

  return *this;
}

void DBMajorEngineVersion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_majorEngineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".MajorEngineVersion=" << StringUtils::URLEncode(m_majorEngineVersion.c_str()) << "&";
  }

  if(m_supportedEngineLifecyclesHasBeenSet)
  {
      unsigned supportedEngineLifecyclesIdx = 1;
      for(auto& item : m_supportedEngineLifecycles)
      {
        Aws::StringStream supportedEngineLifecyclesSs;
        supportedEngineLifecyclesSs << location << index << locationValue << ".SupportedEngineLifecycles.SupportedEngineLifecycle." << supportedEngineLifecyclesIdx++;
        item.OutputToStream(oStream, supportedEngineLifecyclesSs.str().c_str());
      }
  }

}

void DBMajorEngineVersion::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_majorEngineVersionHasBeenSet)
  {
      oStream << location << ".MajorEngineVersion=" << StringUtils::URLEncode(m_majorEngineVersion.c_str()) << "&";
  }
  if(m_supportedEngineLifecyclesHasBeenSet)
  {
      unsigned supportedEngineLifecyclesIdx = 1;
      for(auto& item : m_supportedEngineLifecycles)
      {
        Aws::StringStream supportedEngineLifecyclesSs;
        supportedEngineLifecyclesSs << location << ".SupportedEngineLifecycles.SupportedEngineLifecycle." << supportedEngineLifecyclesIdx++;
        item.OutputToStream(oStream, supportedEngineLifecyclesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
