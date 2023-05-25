/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/MetricMathAnomalyDetector.h>
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

MetricMathAnomalyDetector::MetricMathAnomalyDetector() : 
    m_metricDataQueriesHasBeenSet(false)
{
}

MetricMathAnomalyDetector::MetricMathAnomalyDetector(const XmlNode& xmlNode) : 
    m_metricDataQueriesHasBeenSet(false)
{
  *this = xmlNode;
}

MetricMathAnomalyDetector& MetricMathAnomalyDetector::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode metricDataQueriesNode = resultNode.FirstChild("MetricDataQueries");
    if(!metricDataQueriesNode.IsNull())
    {
      XmlNode metricDataQueriesMember = metricDataQueriesNode.FirstChild("member");
      while(!metricDataQueriesMember.IsNull())
      {
        m_metricDataQueries.push_back(metricDataQueriesMember);
        metricDataQueriesMember = metricDataQueriesMember.NextNode("member");
      }

      m_metricDataQueriesHasBeenSet = true;
    }
  }

  return *this;
}

void MetricMathAnomalyDetector::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_metricDataQueriesHasBeenSet)
  {
      unsigned metricDataQueriesIdx = 1;
      for(auto& item : m_metricDataQueries)
      {
        Aws::StringStream metricDataQueriesSs;
        metricDataQueriesSs << location << index << locationValue << ".MetricDataQueries.member." << metricDataQueriesIdx++;
        item.OutputToStream(oStream, metricDataQueriesSs.str().c_str());
      }
  }

}

void MetricMathAnomalyDetector::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_metricDataQueriesHasBeenSet)
  {
      unsigned metricDataQueriesIdx = 1;
      for(auto& item : m_metricDataQueries)
      {
        Aws::StringStream metricDataQueriesSs;
        metricDataQueriesSs << location <<  ".MetricDataQueries.member." << metricDataQueriesIdx++;
        item.OutputToStream(oStream, metricDataQueriesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
