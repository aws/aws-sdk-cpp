/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/MetricStreamStatisticsMetric.h>
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

MetricStreamStatisticsMetric::MetricStreamStatisticsMetric() : 
    m_namespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false)
{
}

MetricStreamStatisticsMetric::MetricStreamStatisticsMetric(const XmlNode& xmlNode) : 
    m_namespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false)
{
  *this = xmlNode;
}

MetricStreamStatisticsMetric& MetricStreamStatisticsMetric::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode namespaceNode = resultNode.FirstChild("Namespace");
    if(!namespaceNode.IsNull())
    {
      m_namespace = Aws::Utils::Xml::DecodeEscapedXmlText(namespaceNode.GetText());
      m_namespaceHasBeenSet = true;
    }
    XmlNode metricNameNode = resultNode.FirstChild("MetricName");
    if(!metricNameNode.IsNull())
    {
      m_metricName = Aws::Utils::Xml::DecodeEscapedXmlText(metricNameNode.GetText());
      m_metricNameHasBeenSet = true;
    }
  }

  return *this;
}

void MetricStreamStatisticsMetric::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_namespaceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }

  if(m_metricNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
  }

}

void MetricStreamStatisticsMetric::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_namespaceHasBeenSet)
  {
      oStream << location << ".Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }
  if(m_metricNameHasBeenSet)
  {
      oStream << location << ".MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
