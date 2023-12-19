/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/PerformanceInsightsMetricDimensionGroup.h>
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

PerformanceInsightsMetricDimensionGroup::PerformanceInsightsMetricDimensionGroup() : 
    m_dimensionsHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

PerformanceInsightsMetricDimensionGroup::PerformanceInsightsMetricDimensionGroup(const XmlNode& xmlNode) : 
    m_dimensionsHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
  *this = xmlNode;
}

PerformanceInsightsMetricDimensionGroup& PerformanceInsightsMetricDimensionGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dimensionsNode = resultNode.FirstChild("Dimensions");
    if(!dimensionsNode.IsNull())
    {
      XmlNode dimensionsMember = dimensionsNode.FirstChild("member");
      while(!dimensionsMember.IsNull())
      {
        m_dimensions.push_back(dimensionsMember.GetText());
        dimensionsMember = dimensionsMember.NextNode("member");
      }

      m_dimensionsHasBeenSet = true;
    }
    XmlNode groupNode = resultNode.FirstChild("Group");
    if(!groupNode.IsNull())
    {
      m_group = Aws::Utils::Xml::DecodeEscapedXmlText(groupNode.GetText());
      m_groupHasBeenSet = true;
    }
    XmlNode limitNode = resultNode.FirstChild("Limit");
    if(!limitNode.IsNull())
    {
      m_limit = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(limitNode.GetText()).c_str()).c_str());
      m_limitHasBeenSet = true;
    }
  }

  return *this;
}

void PerformanceInsightsMetricDimensionGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dimensionsHasBeenSet)
  {
      unsigned dimensionsIdx = 1;
      for(auto& item : m_dimensions)
      {
        oStream << location << index << locationValue << ".Dimensions.member." << dimensionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_groupHasBeenSet)
  {
      oStream << location << index << locationValue << ".Group=" << StringUtils::URLEncode(m_group.c_str()) << "&";
  }

  if(m_limitHasBeenSet)
  {
      oStream << location << index << locationValue << ".Limit=" << m_limit << "&";
  }

}

void PerformanceInsightsMetricDimensionGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dimensionsHasBeenSet)
  {
      unsigned dimensionsIdx = 1;
      for(auto& item : m_dimensions)
      {
        oStream << location << ".Dimensions.member." << dimensionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_groupHasBeenSet)
  {
      oStream << location << ".Group=" << StringUtils::URLEncode(m_group.c_str()) << "&";
  }
  if(m_limitHasBeenSet)
  {
      oStream << location << ".Limit=" << m_limit << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
