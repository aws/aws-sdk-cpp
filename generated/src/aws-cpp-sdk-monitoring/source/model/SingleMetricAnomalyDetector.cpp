﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/SingleMetricAnomalyDetector.h>
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

SingleMetricAnomalyDetector::SingleMetricAnomalyDetector(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

SingleMetricAnomalyDetector& SingleMetricAnomalyDetector::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode accountIdNode = resultNode.FirstChild("AccountId");
    if(!accountIdNode.IsNull())
    {
      m_accountId = Aws::Utils::Xml::DecodeEscapedXmlText(accountIdNode.GetText());
      m_accountIdHasBeenSet = true;
    }
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
    XmlNode dimensionsNode = resultNode.FirstChild("Dimensions");
    if(!dimensionsNode.IsNull())
    {
      XmlNode dimensionsMember = dimensionsNode.FirstChild("member");
      m_dimensionsHasBeenSet = !dimensionsMember.IsNull();
      while(!dimensionsMember.IsNull())
      {
        m_dimensions.push_back(dimensionsMember);
        dimensionsMember = dimensionsMember.NextNode("member");
      }

      m_dimensionsHasBeenSet = true;
    }
    XmlNode statNode = resultNode.FirstChild("Stat");
    if(!statNode.IsNull())
    {
      m_stat = Aws::Utils::Xml::DecodeEscapedXmlText(statNode.GetText());
      m_statHasBeenSet = true;
    }
  }

  return *this;
}

void SingleMetricAnomalyDetector::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_accountIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AccountId=" << StringUtils::URLEncode(m_accountId.c_str()) << "&";
  }

  if(m_namespaceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }

  if(m_metricNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
  }

  if(m_dimensionsHasBeenSet)
  {
      unsigned dimensionsIdx = 1;
      for(auto& item : m_dimensions)
      {
        Aws::StringStream dimensionsSs;
        dimensionsSs << location << index << locationValue << ".Dimensions.member." << dimensionsIdx++;
        item.OutputToStream(oStream, dimensionsSs.str().c_str());
      }
  }

  if(m_statHasBeenSet)
  {
      oStream << location << index << locationValue << ".Stat=" << StringUtils::URLEncode(m_stat.c_str()) << "&";
  }

}

void SingleMetricAnomalyDetector::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_accountIdHasBeenSet)
  {
      oStream << location << ".AccountId=" << StringUtils::URLEncode(m_accountId.c_str()) << "&";
  }
  if(m_namespaceHasBeenSet)
  {
      oStream << location << ".Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }
  if(m_metricNameHasBeenSet)
  {
      oStream << location << ".MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
  }
  if(m_dimensionsHasBeenSet)
  {
      unsigned dimensionsIdx = 1;
      for(auto& item : m_dimensions)
      {
        Aws::StringStream dimensionsSs;
        dimensionsSs << location << ".Dimensions.member." << dimensionsIdx++;
        item.OutputToStream(oStream, dimensionsSs.str().c_str());
      }
  }
  if(m_statHasBeenSet)
  {
      oStream << location << ".Stat=" << StringUtils::URLEncode(m_stat.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
