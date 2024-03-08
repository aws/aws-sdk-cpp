/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/PerformanceIssueDetails.h>
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

PerformanceIssueDetails::PerformanceIssueDetails() : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_analysisHasBeenSet(false)
{
}

PerformanceIssueDetails::PerformanceIssueDetails(const XmlNode& xmlNode) : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_analysisHasBeenSet(false)
{
  *this = xmlNode;
}

PerformanceIssueDetails& PerformanceIssueDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode startTimeNode = resultNode.FirstChild("StartTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_startTimeHasBeenSet = true;
    }
    XmlNode endTimeNode = resultNode.FirstChild("EndTime");
    if(!endTimeNode.IsNull())
    {
      m_endTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_endTimeHasBeenSet = true;
    }
    XmlNode metricsNode = resultNode.FirstChild("Metrics");
    if(!metricsNode.IsNull())
    {
      XmlNode metricsMember = metricsNode.FirstChild("member");
      while(!metricsMember.IsNull())
      {
        m_metrics.push_back(metricsMember);
        metricsMember = metricsMember.NextNode("member");
      }

      m_metricsHasBeenSet = true;
    }
    XmlNode analysisNode = resultNode.FirstChild("Analysis");
    if(!analysisNode.IsNull())
    {
      m_analysis = Aws::Utils::Xml::DecodeEscapedXmlText(analysisNode.GetText());
      m_analysisHasBeenSet = true;
    }
  }

  return *this;
}

void PerformanceIssueDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_startTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_metricsHasBeenSet)
  {
      unsigned metricsIdx = 1;
      for(auto& item : m_metrics)
      {
        Aws::StringStream metricsSs;
        metricsSs << location << index << locationValue << ".Metrics.member." << metricsIdx++;
        item.OutputToStream(oStream, metricsSs.str().c_str());
      }
  }

  if(m_analysisHasBeenSet)
  {
      oStream << location << index << locationValue << ".Analysis=" << StringUtils::URLEncode(m_analysis.c_str()) << "&";
  }

}

void PerformanceIssueDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_startTimeHasBeenSet)
  {
      oStream << location << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endTimeHasBeenSet)
  {
      oStream << location << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_metricsHasBeenSet)
  {
      unsigned metricsIdx = 1;
      for(auto& item : m_metrics)
      {
        Aws::StringStream metricsSs;
        metricsSs << location <<  ".Metrics.member." << metricsIdx++;
        item.OutputToStream(oStream, metricsSs.str().c_str());
      }
  }
  if(m_analysisHasBeenSet)
  {
      oStream << location << ".Analysis=" << StringUtils::URLEncode(m_analysis.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
