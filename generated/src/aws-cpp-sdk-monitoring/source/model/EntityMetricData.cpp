/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/EntityMetricData.h>
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

EntityMetricData::EntityMetricData(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

EntityMetricData& EntityMetricData::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode entityNode = resultNode.FirstChild("Entity");
    if(!entityNode.IsNull())
    {
      m_entity = entityNode;
      m_entityHasBeenSet = true;
    }
    XmlNode metricDataNode = resultNode.FirstChild("MetricData");
    if(!metricDataNode.IsNull())
    {
      XmlNode metricDataMember = metricDataNode.FirstChild("member");
      m_metricDataHasBeenSet = !metricDataMember.IsNull();
      while(!metricDataMember.IsNull())
      {
        m_metricData.push_back(metricDataMember);
        metricDataMember = metricDataMember.NextNode("member");
      }

      m_metricDataHasBeenSet = true;
    }
  }

  return *this;
}

void EntityMetricData::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_entityHasBeenSet)
  {
      Aws::StringStream entityLocationAndMemberSs;
      entityLocationAndMemberSs << location << index << locationValue << ".Entity";
      m_entity.OutputToStream(oStream, entityLocationAndMemberSs.str().c_str());
  }

  if(m_metricDataHasBeenSet)
  {
      unsigned metricDataIdx = 1;
      for(auto& item : m_metricData)
      {
        Aws::StringStream metricDataSs;
        metricDataSs << location << index << locationValue << ".MetricData.member." << metricDataIdx++;
        item.OutputToStream(oStream, metricDataSs.str().c_str());
      }
  }

}

void EntityMetricData::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_entityHasBeenSet)
  {
      Aws::String entityLocationAndMember(location);
      entityLocationAndMember += ".Entity";
      m_entity.OutputToStream(oStream, entityLocationAndMember.c_str());
  }
  if(m_metricDataHasBeenSet)
  {
      unsigned metricDataIdx = 1;
      for(auto& item : m_metricData)
      {
        Aws::StringStream metricDataSs;
        metricDataSs << location << ".MetricData.member." << metricDataIdx++;
        item.OutputToStream(oStream, metricDataSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
