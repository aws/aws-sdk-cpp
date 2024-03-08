/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/Metric.h>
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

Metric::Metric() : 
    m_nameHasBeenSet(false),
    m_referencesHasBeenSet(false),
    m_statisticsDetailsHasBeenSet(false),
    m_metricQueryHasBeenSet(false)
{
}

Metric::Metric(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_referencesHasBeenSet(false),
    m_statisticsDetailsHasBeenSet(false),
    m_metricQueryHasBeenSet(false)
{
  *this = xmlNode;
}

Metric& Metric::operator =(const XmlNode& xmlNode)
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
    XmlNode referencesNode = resultNode.FirstChild("References");
    if(!referencesNode.IsNull())
    {
      XmlNode referencesMember = referencesNode.FirstChild("member");
      while(!referencesMember.IsNull())
      {
        m_references.push_back(referencesMember);
        referencesMember = referencesMember.NextNode("member");
      }

      m_referencesHasBeenSet = true;
    }
    XmlNode statisticsDetailsNode = resultNode.FirstChild("StatisticsDetails");
    if(!statisticsDetailsNode.IsNull())
    {
      m_statisticsDetails = Aws::Utils::Xml::DecodeEscapedXmlText(statisticsDetailsNode.GetText());
      m_statisticsDetailsHasBeenSet = true;
    }
    XmlNode metricQueryNode = resultNode.FirstChild("MetricQuery");
    if(!metricQueryNode.IsNull())
    {
      m_metricQuery = metricQueryNode;
      m_metricQueryHasBeenSet = true;
    }
  }

  return *this;
}

void Metric::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_referencesHasBeenSet)
  {
      unsigned referencesIdx = 1;
      for(auto& item : m_references)
      {
        Aws::StringStream referencesSs;
        referencesSs << location << index << locationValue << ".References.member." << referencesIdx++;
        item.OutputToStream(oStream, referencesSs.str().c_str());
      }
  }

  if(m_statisticsDetailsHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatisticsDetails=" << StringUtils::URLEncode(m_statisticsDetails.c_str()) << "&";
  }

  if(m_metricQueryHasBeenSet)
  {
      Aws::StringStream metricQueryLocationAndMemberSs;
      metricQueryLocationAndMemberSs << location << index << locationValue << ".MetricQuery";
      m_metricQuery.OutputToStream(oStream, metricQueryLocationAndMemberSs.str().c_str());
  }

}

void Metric::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_referencesHasBeenSet)
  {
      unsigned referencesIdx = 1;
      for(auto& item : m_references)
      {
        Aws::StringStream referencesSs;
        referencesSs << location <<  ".References.member." << referencesIdx++;
        item.OutputToStream(oStream, referencesSs.str().c_str());
      }
  }
  if(m_statisticsDetailsHasBeenSet)
  {
      oStream << location << ".StatisticsDetails=" << StringUtils::URLEncode(m_statisticsDetails.c_str()) << "&";
  }
  if(m_metricQueryHasBeenSet)
  {
      Aws::String metricQueryLocationAndMember(location);
      metricQueryLocationAndMember += ".MetricQuery";
      m_metricQuery.OutputToStream(oStream, metricQueryLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
