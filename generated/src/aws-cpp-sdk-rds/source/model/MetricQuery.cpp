/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/MetricQuery.h>
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

MetricQuery::MetricQuery() : 
    m_performanceInsightsMetricQueryHasBeenSet(false)
{
}

MetricQuery::MetricQuery(const XmlNode& xmlNode) : 
    m_performanceInsightsMetricQueryHasBeenSet(false)
{
  *this = xmlNode;
}

MetricQuery& MetricQuery::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode performanceInsightsMetricQueryNode = resultNode.FirstChild("PerformanceInsightsMetricQuery");
    if(!performanceInsightsMetricQueryNode.IsNull())
    {
      m_performanceInsightsMetricQuery = performanceInsightsMetricQueryNode;
      m_performanceInsightsMetricQueryHasBeenSet = true;
    }
  }

  return *this;
}

void MetricQuery::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_performanceInsightsMetricQueryHasBeenSet)
  {
      Aws::StringStream performanceInsightsMetricQueryLocationAndMemberSs;
      performanceInsightsMetricQueryLocationAndMemberSs << location << index << locationValue << ".PerformanceInsightsMetricQuery";
      m_performanceInsightsMetricQuery.OutputToStream(oStream, performanceInsightsMetricQueryLocationAndMemberSs.str().c_str());
  }

}

void MetricQuery::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_performanceInsightsMetricQueryHasBeenSet)
  {
      Aws::String performanceInsightsMetricQueryLocationAndMember(location);
      performanceInsightsMetricQueryLocationAndMember += ".PerformanceInsightsMetricQuery";
      m_performanceInsightsMetricQuery.OutputToStream(oStream, performanceInsightsMetricQueryLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
