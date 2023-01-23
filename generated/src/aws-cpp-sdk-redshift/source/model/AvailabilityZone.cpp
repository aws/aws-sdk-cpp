/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/AvailabilityZone.h>
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

AvailabilityZone::AvailabilityZone() : 
    m_nameHasBeenSet(false),
    m_supportedPlatformsHasBeenSet(false)
{
}

AvailabilityZone::AvailabilityZone(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_supportedPlatformsHasBeenSet(false)
{
  *this = xmlNode;
}

AvailabilityZone& AvailabilityZone::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode supportedPlatformsNode = resultNode.FirstChild("SupportedPlatforms");
    if(!supportedPlatformsNode.IsNull())
    {
      XmlNode supportedPlatformsMember = supportedPlatformsNode.FirstChild("SupportedPlatform");
      while(!supportedPlatformsMember.IsNull())
      {
        m_supportedPlatforms.push_back(supportedPlatformsMember);
        supportedPlatformsMember = supportedPlatformsMember.NextNode("SupportedPlatform");
      }

      m_supportedPlatformsHasBeenSet = true;
    }
  }

  return *this;
}

void AvailabilityZone::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_supportedPlatformsHasBeenSet)
  {
      unsigned supportedPlatformsIdx = 1;
      for(auto& item : m_supportedPlatforms)
      {
        Aws::StringStream supportedPlatformsSs;
        supportedPlatformsSs << location << index << locationValue << ".SupportedPlatform." << supportedPlatformsIdx++;
        item.OutputToStream(oStream, supportedPlatformsSs.str().c_str());
      }
  }

}

void AvailabilityZone::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_supportedPlatformsHasBeenSet)
  {
      unsigned supportedPlatformsIdx = 1;
      for(auto& item : m_supportedPlatforms)
      {
        Aws::StringStream supportedPlatformsSs;
        supportedPlatformsSs << location <<  ".SupportedPlatform." << supportedPlatformsIdx++;
        item.OutputToStream(oStream, supportedPlatformsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
