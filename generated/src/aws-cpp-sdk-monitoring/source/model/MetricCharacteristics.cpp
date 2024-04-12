/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/MetricCharacteristics.h>
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

MetricCharacteristics::MetricCharacteristics() : 
    m_periodicSpikes(false),
    m_periodicSpikesHasBeenSet(false)
{
}

MetricCharacteristics::MetricCharacteristics(const XmlNode& xmlNode) : 
    m_periodicSpikes(false),
    m_periodicSpikesHasBeenSet(false)
{
  *this = xmlNode;
}

MetricCharacteristics& MetricCharacteristics::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode periodicSpikesNode = resultNode.FirstChild("PeriodicSpikes");
    if(!periodicSpikesNode.IsNull())
    {
      m_periodicSpikes = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(periodicSpikesNode.GetText()).c_str()).c_str());
      m_periodicSpikesHasBeenSet = true;
    }
  }

  return *this;
}

void MetricCharacteristics::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_periodicSpikesHasBeenSet)
  {
      oStream << location << index << locationValue << ".PeriodicSpikes=" << std::boolalpha << m_periodicSpikes << "&";
  }

}

void MetricCharacteristics::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_periodicSpikesHasBeenSet)
  {
      oStream << location << ".PeriodicSpikes=" << std::boolalpha << m_periodicSpikes << "&";
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
