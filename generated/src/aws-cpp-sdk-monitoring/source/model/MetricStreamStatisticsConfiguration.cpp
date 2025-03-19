/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/MetricStreamStatisticsConfiguration.h>
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

MetricStreamStatisticsConfiguration::MetricStreamStatisticsConfiguration(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

MetricStreamStatisticsConfiguration& MetricStreamStatisticsConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode includeMetricsNode = resultNode.FirstChild("IncludeMetrics");
    if(!includeMetricsNode.IsNull())
    {
      XmlNode includeMetricsMember = includeMetricsNode.FirstChild("member");
      m_includeMetricsHasBeenSet = !includeMetricsMember.IsNull();
      while(!includeMetricsMember.IsNull())
      {
        m_includeMetrics.push_back(includeMetricsMember);
        includeMetricsMember = includeMetricsMember.NextNode("member");
      }

      m_includeMetricsHasBeenSet = true;
    }
    XmlNode additionalStatisticsNode = resultNode.FirstChild("AdditionalStatistics");
    if(!additionalStatisticsNode.IsNull())
    {
      XmlNode additionalStatisticsMember = additionalStatisticsNode.FirstChild("member");
      m_additionalStatisticsHasBeenSet = !additionalStatisticsMember.IsNull();
      while(!additionalStatisticsMember.IsNull())
      {
        m_additionalStatistics.push_back(additionalStatisticsMember.GetText());
        additionalStatisticsMember = additionalStatisticsMember.NextNode("member");
      }

      m_additionalStatisticsHasBeenSet = true;
    }
  }

  return *this;
}

void MetricStreamStatisticsConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_includeMetricsHasBeenSet)
  {
      unsigned includeMetricsIdx = 1;
      for(auto& item : m_includeMetrics)
      {
        Aws::StringStream includeMetricsSs;
        includeMetricsSs << location << index << locationValue << ".IncludeMetrics.member." << includeMetricsIdx++;
        item.OutputToStream(oStream, includeMetricsSs.str().c_str());
      }
  }

  if(m_additionalStatisticsHasBeenSet)
  {
      unsigned additionalStatisticsIdx = 1;
      for(auto& item : m_additionalStatistics)
      {
        oStream << location << index << locationValue << ".AdditionalStatistics.member." << additionalStatisticsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void MetricStreamStatisticsConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_includeMetricsHasBeenSet)
  {
      unsigned includeMetricsIdx = 1;
      for(auto& item : m_includeMetrics)
      {
        Aws::StringStream includeMetricsSs;
        includeMetricsSs << location << ".IncludeMetrics.member." << includeMetricsIdx++;
        item.OutputToStream(oStream, includeMetricsSs.str().c_str());
      }
  }
  if(m_additionalStatisticsHasBeenSet)
  {
      unsigned additionalStatisticsIdx = 1;
      for(auto& item : m_additionalStatistics)
      {
        oStream << location << ".AdditionalStatistics.member." << additionalStatisticsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
