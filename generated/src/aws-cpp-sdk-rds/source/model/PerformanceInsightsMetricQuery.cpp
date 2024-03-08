/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/PerformanceInsightsMetricQuery.h>
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

PerformanceInsightsMetricQuery::PerformanceInsightsMetricQuery() : 
    m_groupByHasBeenSet(false),
    m_metricHasBeenSet(false)
{
}

PerformanceInsightsMetricQuery::PerformanceInsightsMetricQuery(const XmlNode& xmlNode) : 
    m_groupByHasBeenSet(false),
    m_metricHasBeenSet(false)
{
  *this = xmlNode;
}

PerformanceInsightsMetricQuery& PerformanceInsightsMetricQuery::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode groupByNode = resultNode.FirstChild("GroupBy");
    if(!groupByNode.IsNull())
    {
      m_groupBy = groupByNode;
      m_groupByHasBeenSet = true;
    }
    XmlNode metricNode = resultNode.FirstChild("Metric");
    if(!metricNode.IsNull())
    {
      m_metric = Aws::Utils::Xml::DecodeEscapedXmlText(metricNode.GetText());
      m_metricHasBeenSet = true;
    }
  }

  return *this;
}

void PerformanceInsightsMetricQuery::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_groupByHasBeenSet)
  {
      Aws::StringStream groupByLocationAndMemberSs;
      groupByLocationAndMemberSs << location << index << locationValue << ".GroupBy";
      m_groupBy.OutputToStream(oStream, groupByLocationAndMemberSs.str().c_str());
  }

  if(m_metricHasBeenSet)
  {
      oStream << location << index << locationValue << ".Metric=" << StringUtils::URLEncode(m_metric.c_str()) << "&";
  }

}

void PerformanceInsightsMetricQuery::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_groupByHasBeenSet)
  {
      Aws::String groupByLocationAndMember(location);
      groupByLocationAndMember += ".GroupBy";
      m_groupBy.OutputToStream(oStream, groupByLocationAndMember.c_str());
  }
  if(m_metricHasBeenSet)
  {
      oStream << location << ".Metric=" << StringUtils::URLEncode(m_metric.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
