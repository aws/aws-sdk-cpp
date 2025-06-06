﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListTrafficPoliciesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListTrafficPoliciesResult::ListTrafficPoliciesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListTrafficPoliciesResult& ListTrafficPoliciesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode trafficPolicySummariesNode = resultNode.FirstChild("TrafficPolicySummaries");
    if(!trafficPolicySummariesNode.IsNull())
    {
      XmlNode trafficPolicySummariesMember = trafficPolicySummariesNode.FirstChild("TrafficPolicySummary");
      m_trafficPolicySummariesHasBeenSet = !trafficPolicySummariesMember.IsNull();
      while(!trafficPolicySummariesMember.IsNull())
      {
        m_trafficPolicySummaries.push_back(trafficPolicySummariesMember);
        trafficPolicySummariesMember = trafficPolicySummariesMember.NextNode("TrafficPolicySummary");
      }

      m_trafficPolicySummariesHasBeenSet = true;
    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isTruncatedNode.GetText()).c_str()).c_str());
      m_isTruncatedHasBeenSet = true;
    }
    XmlNode trafficPolicyIdMarkerNode = resultNode.FirstChild("TrafficPolicyIdMarker");
    if(!trafficPolicyIdMarkerNode.IsNull())
    {
      m_trafficPolicyIdMarker = Aws::Utils::Xml::DecodeEscapedXmlText(trafficPolicyIdMarkerNode.GetText());
      m_trafficPolicyIdMarkerHasBeenSet = true;
    }
    XmlNode maxItemsNode = resultNode.FirstChild("MaxItems");
    if(!maxItemsNode.IsNull())
    {
      m_maxItems = Aws::Utils::Xml::DecodeEscapedXmlText(maxItemsNode.GetText());
      m_maxItemsHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
