/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/ServerlessV2ScalingConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Neptune
{
namespace Model
{

ServerlessV2ScalingConfiguration::ServerlessV2ScalingConfiguration() : 
    m_minCapacity(0.0),
    m_minCapacityHasBeenSet(false),
    m_maxCapacity(0.0),
    m_maxCapacityHasBeenSet(false)
{
}

ServerlessV2ScalingConfiguration::ServerlessV2ScalingConfiguration(const XmlNode& xmlNode) : 
    m_minCapacity(0.0),
    m_minCapacityHasBeenSet(false),
    m_maxCapacity(0.0),
    m_maxCapacityHasBeenSet(false)
{
  *this = xmlNode;
}

ServerlessV2ScalingConfiguration& ServerlessV2ScalingConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode minCapacityNode = resultNode.FirstChild("MinCapacity");
    if(!minCapacityNode.IsNull())
    {
      m_minCapacity = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minCapacityNode.GetText()).c_str()).c_str());
      m_minCapacityHasBeenSet = true;
    }
    XmlNode maxCapacityNode = resultNode.FirstChild("MaxCapacity");
    if(!maxCapacityNode.IsNull())
    {
      m_maxCapacity = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxCapacityNode.GetText()).c_str()).c_str());
      m_maxCapacityHasBeenSet = true;
    }
  }

  return *this;
}

void ServerlessV2ScalingConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_minCapacityHasBeenSet)
  {
        oStream << location << index << locationValue << ".MinCapacity=" << StringUtils::URLEncode(m_minCapacity) << "&";
  }

  if(m_maxCapacityHasBeenSet)
  {
        oStream << location << index << locationValue << ".MaxCapacity=" << StringUtils::URLEncode(m_maxCapacity) << "&";
  }

}

void ServerlessV2ScalingConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_minCapacityHasBeenSet)
  {
        oStream << location << ".MinCapacity=" << StringUtils::URLEncode(m_minCapacity) << "&";
  }
  if(m_maxCapacityHasBeenSet)
  {
        oStream << location << ".MaxCapacity=" << StringUtils::URLEncode(m_maxCapacity) << "&";
  }
}

} // namespace Model
} // namespace Neptune
} // namespace Aws
