/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/MetricStreamFilter.h>
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

MetricStreamFilter::MetricStreamFilter() : 
    m_namespaceHasBeenSet(false),
    m_metricNamesHasBeenSet(false)
{
}

MetricStreamFilter::MetricStreamFilter(const XmlNode& xmlNode) : 
    m_namespaceHasBeenSet(false),
    m_metricNamesHasBeenSet(false)
{
  *this = xmlNode;
}

MetricStreamFilter& MetricStreamFilter::operator =(const XmlNode& xmlNode)
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
    XmlNode metricNamesNode = resultNode.FirstChild("MetricNames");
    if(!metricNamesNode.IsNull())
    {
      XmlNode metricNamesMember = metricNamesNode.FirstChild("member");
      while(!metricNamesMember.IsNull())
      {
        m_metricNames.push_back(metricNamesMember.GetText());
        metricNamesMember = metricNamesMember.NextNode("member");
      }

      m_metricNamesHasBeenSet = true;
    }
  }

  return *this;
}

void MetricStreamFilter::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_namespaceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }

  if(m_metricNamesHasBeenSet)
  {
      unsigned metricNamesIdx = 1;
      for(auto& item : m_metricNames)
      {
        oStream << location << index << locationValue << ".MetricNames.member." << metricNamesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void MetricStreamFilter::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_namespaceHasBeenSet)
  {
      oStream << location << ".Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }
  if(m_metricNamesHasBeenSet)
  {
      unsigned metricNamesIdx = 1;
      for(auto& item : m_metricNames)
      {
        oStream << location << ".MetricNames.member." << metricNamesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
