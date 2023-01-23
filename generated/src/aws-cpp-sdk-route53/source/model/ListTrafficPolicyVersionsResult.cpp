/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListTrafficPolicyVersionsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListTrafficPolicyVersionsResult::ListTrafficPolicyVersionsResult() : 
    m_isTruncated(false)
{
}

ListTrafficPolicyVersionsResult::ListTrafficPolicyVersionsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_isTruncated(false)
{
  *this = result;
}

ListTrafficPolicyVersionsResult& ListTrafficPolicyVersionsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode trafficPoliciesNode = resultNode.FirstChild("TrafficPolicies");
    if(!trafficPoliciesNode.IsNull())
    {
      XmlNode trafficPoliciesMember = trafficPoliciesNode.FirstChild("TrafficPolicy");
      while(!trafficPoliciesMember.IsNull())
      {
        m_trafficPolicies.push_back(trafficPoliciesMember);
        trafficPoliciesMember = trafficPoliciesMember.NextNode("TrafficPolicy");
      }

    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isTruncatedNode.GetText()).c_str()).c_str());
    }
    XmlNode trafficPolicyVersionMarkerNode = resultNode.FirstChild("TrafficPolicyVersionMarker");
    if(!trafficPolicyVersionMarkerNode.IsNull())
    {
      m_trafficPolicyVersionMarker = Aws::Utils::Xml::DecodeEscapedXmlText(trafficPolicyVersionMarkerNode.GetText());
    }
    XmlNode maxItemsNode = resultNode.FirstChild("MaxItems");
    if(!maxItemsNode.IsNull())
    {
      m_maxItems = Aws::Utils::Xml::DecodeEscapedXmlText(maxItemsNode.GetText());
    }
  }

  return *this;
}
