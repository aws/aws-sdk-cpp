/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListTrafficPolicyInstancesByHostedZoneResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListTrafficPolicyInstancesByHostedZoneResult::ListTrafficPolicyInstancesByHostedZoneResult() : 
    m_trafficPolicyInstanceTypeMarker(RRType::NOT_SET),
    m_isTruncated(false)
{
}

ListTrafficPolicyInstancesByHostedZoneResult::ListTrafficPolicyInstancesByHostedZoneResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_trafficPolicyInstanceTypeMarker(RRType::NOT_SET),
    m_isTruncated(false)
{
  *this = result;
}

ListTrafficPolicyInstancesByHostedZoneResult& ListTrafficPolicyInstancesByHostedZoneResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode trafficPolicyInstancesNode = resultNode.FirstChild("TrafficPolicyInstances");
    if(!trafficPolicyInstancesNode.IsNull())
    {
      XmlNode trafficPolicyInstancesMember = trafficPolicyInstancesNode.FirstChild("TrafficPolicyInstance");
      while(!trafficPolicyInstancesMember.IsNull())
      {
        m_trafficPolicyInstances.push_back(trafficPolicyInstancesMember);
        trafficPolicyInstancesMember = trafficPolicyInstancesMember.NextNode("TrafficPolicyInstance");
      }

    }
    XmlNode trafficPolicyInstanceNameMarkerNode = resultNode.FirstChild("TrafficPolicyInstanceNameMarker");
    if(!trafficPolicyInstanceNameMarkerNode.IsNull())
    {
      m_trafficPolicyInstanceNameMarker = Aws::Utils::Xml::DecodeEscapedXmlText(trafficPolicyInstanceNameMarkerNode.GetText());
    }
    XmlNode trafficPolicyInstanceTypeMarkerNode = resultNode.FirstChild("TrafficPolicyInstanceTypeMarker");
    if(!trafficPolicyInstanceTypeMarkerNode.IsNull())
    {
      m_trafficPolicyInstanceTypeMarker = RRTypeMapper::GetRRTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(trafficPolicyInstanceTypeMarkerNode.GetText()).c_str()).c_str());
    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isTruncatedNode.GetText()).c_str()).c_str());
    }
    XmlNode maxItemsNode = resultNode.FirstChild("MaxItems");
    if(!maxItemsNode.IsNull())
    {
      m_maxItems = Aws::Utils::Xml::DecodeEscapedXmlText(maxItemsNode.GetText());
    }
  }

  return *this;
}
