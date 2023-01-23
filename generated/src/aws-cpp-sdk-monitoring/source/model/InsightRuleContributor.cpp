/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/InsightRuleContributor.h>
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

InsightRuleContributor::InsightRuleContributor() : 
    m_keysHasBeenSet(false),
    m_approximateAggregateValue(0.0),
    m_approximateAggregateValueHasBeenSet(false),
    m_datapointsHasBeenSet(false)
{
}

InsightRuleContributor::InsightRuleContributor(const XmlNode& xmlNode) : 
    m_keysHasBeenSet(false),
    m_approximateAggregateValue(0.0),
    m_approximateAggregateValueHasBeenSet(false),
    m_datapointsHasBeenSet(false)
{
  *this = xmlNode;
}

InsightRuleContributor& InsightRuleContributor::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode keysNode = resultNode.FirstChild("Keys");
    if(!keysNode.IsNull())
    {
      XmlNode keysMember = keysNode.FirstChild("member");
      while(!keysMember.IsNull())
      {
        m_keys.push_back(keysMember.GetText());
        keysMember = keysMember.NextNode("member");
      }

      m_keysHasBeenSet = true;
    }
    XmlNode approximateAggregateValueNode = resultNode.FirstChild("ApproximateAggregateValue");
    if(!approximateAggregateValueNode.IsNull())
    {
      m_approximateAggregateValue = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(approximateAggregateValueNode.GetText()).c_str()).c_str());
      m_approximateAggregateValueHasBeenSet = true;
    }
    XmlNode datapointsNode = resultNode.FirstChild("Datapoints");
    if(!datapointsNode.IsNull())
    {
      XmlNode datapointsMember = datapointsNode.FirstChild("member");
      while(!datapointsMember.IsNull())
      {
        m_datapoints.push_back(datapointsMember);
        datapointsMember = datapointsMember.NextNode("member");
      }

      m_datapointsHasBeenSet = true;
    }
  }

  return *this;
}

void InsightRuleContributor::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_keysHasBeenSet)
  {
      unsigned keysIdx = 1;
      for(auto& item : m_keys)
      {
        oStream << location << index << locationValue << ".Keys.member." << keysIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_approximateAggregateValueHasBeenSet)
  {
        oStream << location << index << locationValue << ".ApproximateAggregateValue=" << StringUtils::URLEncode(m_approximateAggregateValue) << "&";
  }

  if(m_datapointsHasBeenSet)
  {
      unsigned datapointsIdx = 1;
      for(auto& item : m_datapoints)
      {
        Aws::StringStream datapointsSs;
        datapointsSs << location << index << locationValue << ".Datapoints.member." << datapointsIdx++;
        item.OutputToStream(oStream, datapointsSs.str().c_str());
      }
  }

}

void InsightRuleContributor::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_keysHasBeenSet)
  {
      unsigned keysIdx = 1;
      for(auto& item : m_keys)
      {
        oStream << location << ".Keys.member." << keysIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_approximateAggregateValueHasBeenSet)
  {
        oStream << location << ".ApproximateAggregateValue=" << StringUtils::URLEncode(m_approximateAggregateValue) << "&";
  }
  if(m_datapointsHasBeenSet)
  {
      unsigned datapointsIdx = 1;
      for(auto& item : m_datapoints)
      {
        Aws::StringStream datapointsSs;
        datapointsSs << location <<  ".Datapoints.member." << datapointsIdx++;
        item.OutputToStream(oStream, datapointsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
