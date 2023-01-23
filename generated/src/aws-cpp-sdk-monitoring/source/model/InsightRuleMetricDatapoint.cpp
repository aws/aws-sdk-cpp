/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/InsightRuleMetricDatapoint.h>
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

InsightRuleMetricDatapoint::InsightRuleMetricDatapoint() : 
    m_timestampHasBeenSet(false),
    m_uniqueContributors(0.0),
    m_uniqueContributorsHasBeenSet(false),
    m_maxContributorValue(0.0),
    m_maxContributorValueHasBeenSet(false),
    m_sampleCount(0.0),
    m_sampleCountHasBeenSet(false),
    m_average(0.0),
    m_averageHasBeenSet(false),
    m_sum(0.0),
    m_sumHasBeenSet(false),
    m_minimum(0.0),
    m_minimumHasBeenSet(false),
    m_maximum(0.0),
    m_maximumHasBeenSet(false)
{
}

InsightRuleMetricDatapoint::InsightRuleMetricDatapoint(const XmlNode& xmlNode) : 
    m_timestampHasBeenSet(false),
    m_uniqueContributors(0.0),
    m_uniqueContributorsHasBeenSet(false),
    m_maxContributorValue(0.0),
    m_maxContributorValueHasBeenSet(false),
    m_sampleCount(0.0),
    m_sampleCountHasBeenSet(false),
    m_average(0.0),
    m_averageHasBeenSet(false),
    m_sum(0.0),
    m_sumHasBeenSet(false),
    m_minimum(0.0),
    m_minimumHasBeenSet(false),
    m_maximum(0.0),
    m_maximumHasBeenSet(false)
{
  *this = xmlNode;
}

InsightRuleMetricDatapoint& InsightRuleMetricDatapoint::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode timestampNode = resultNode.FirstChild("Timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_timestampHasBeenSet = true;
    }
    XmlNode uniqueContributorsNode = resultNode.FirstChild("UniqueContributors");
    if(!uniqueContributorsNode.IsNull())
    {
      m_uniqueContributors = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(uniqueContributorsNode.GetText()).c_str()).c_str());
      m_uniqueContributorsHasBeenSet = true;
    }
    XmlNode maxContributorValueNode = resultNode.FirstChild("MaxContributorValue");
    if(!maxContributorValueNode.IsNull())
    {
      m_maxContributorValue = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxContributorValueNode.GetText()).c_str()).c_str());
      m_maxContributorValueHasBeenSet = true;
    }
    XmlNode sampleCountNode = resultNode.FirstChild("SampleCount");
    if(!sampleCountNode.IsNull())
    {
      m_sampleCount = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sampleCountNode.GetText()).c_str()).c_str());
      m_sampleCountHasBeenSet = true;
    }
    XmlNode averageNode = resultNode.FirstChild("Average");
    if(!averageNode.IsNull())
    {
      m_average = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(averageNode.GetText()).c_str()).c_str());
      m_averageHasBeenSet = true;
    }
    XmlNode sumNode = resultNode.FirstChild("Sum");
    if(!sumNode.IsNull())
    {
      m_sum = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sumNode.GetText()).c_str()).c_str());
      m_sumHasBeenSet = true;
    }
    XmlNode minimumNode = resultNode.FirstChild("Minimum");
    if(!minimumNode.IsNull())
    {
      m_minimum = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minimumNode.GetText()).c_str()).c_str());
      m_minimumHasBeenSet = true;
    }
    XmlNode maximumNode = resultNode.FirstChild("Maximum");
    if(!maximumNode.IsNull())
    {
      m_maximum = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maximumNode.GetText()).c_str()).c_str());
      m_maximumHasBeenSet = true;
    }
  }

  return *this;
}

void InsightRuleMetricDatapoint::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_timestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_uniqueContributorsHasBeenSet)
  {
        oStream << location << index << locationValue << ".UniqueContributors=" << StringUtils::URLEncode(m_uniqueContributors) << "&";
  }

  if(m_maxContributorValueHasBeenSet)
  {
        oStream << location << index << locationValue << ".MaxContributorValue=" << StringUtils::URLEncode(m_maxContributorValue) << "&";
  }

  if(m_sampleCountHasBeenSet)
  {
        oStream << location << index << locationValue << ".SampleCount=" << StringUtils::URLEncode(m_sampleCount) << "&";
  }

  if(m_averageHasBeenSet)
  {
        oStream << location << index << locationValue << ".Average=" << StringUtils::URLEncode(m_average) << "&";
  }

  if(m_sumHasBeenSet)
  {
        oStream << location << index << locationValue << ".Sum=" << StringUtils::URLEncode(m_sum) << "&";
  }

  if(m_minimumHasBeenSet)
  {
        oStream << location << index << locationValue << ".Minimum=" << StringUtils::URLEncode(m_minimum) << "&";
  }

  if(m_maximumHasBeenSet)
  {
        oStream << location << index << locationValue << ".Maximum=" << StringUtils::URLEncode(m_maximum) << "&";
  }

}

void InsightRuleMetricDatapoint::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_timestampHasBeenSet)
  {
      oStream << location << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_uniqueContributorsHasBeenSet)
  {
        oStream << location << ".UniqueContributors=" << StringUtils::URLEncode(m_uniqueContributors) << "&";
  }
  if(m_maxContributorValueHasBeenSet)
  {
        oStream << location << ".MaxContributorValue=" << StringUtils::URLEncode(m_maxContributorValue) << "&";
  }
  if(m_sampleCountHasBeenSet)
  {
        oStream << location << ".SampleCount=" << StringUtils::URLEncode(m_sampleCount) << "&";
  }
  if(m_averageHasBeenSet)
  {
        oStream << location << ".Average=" << StringUtils::URLEncode(m_average) << "&";
  }
  if(m_sumHasBeenSet)
  {
        oStream << location << ".Sum=" << StringUtils::URLEncode(m_sum) << "&";
  }
  if(m_minimumHasBeenSet)
  {
        oStream << location << ".Minimum=" << StringUtils::URLEncode(m_minimum) << "&";
  }
  if(m_maximumHasBeenSet)
  {
        oStream << location << ".Maximum=" << StringUtils::URLEncode(m_maximum) << "&";
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
