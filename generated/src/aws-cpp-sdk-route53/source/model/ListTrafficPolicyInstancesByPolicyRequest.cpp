/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListTrafficPolicyInstancesByPolicyRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

ListTrafficPolicyInstancesByPolicyRequest::ListTrafficPolicyInstancesByPolicyRequest() : 
    m_trafficPolicyIdHasBeenSet(false),
    m_trafficPolicyVersion(0),
    m_trafficPolicyVersionHasBeenSet(false),
    m_hostedZoneIdMarkerHasBeenSet(false),
    m_trafficPolicyInstanceNameMarkerHasBeenSet(false),
    m_trafficPolicyInstanceTypeMarker(RRType::NOT_SET),
    m_trafficPolicyInstanceTypeMarkerHasBeenSet(false),
    m_maxItemsHasBeenSet(false)
{
}

Aws::String ListTrafficPolicyInstancesByPolicyRequest::SerializePayload() const
{
  return {};
}

void ListTrafficPolicyInstancesByPolicyRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_trafficPolicyIdHasBeenSet)
    {
      ss << m_trafficPolicyId;
      uri.AddQueryStringParameter("id", ss.str());
      ss.str("");
    }

    if(m_trafficPolicyVersionHasBeenSet)
    {
      ss << m_trafficPolicyVersion;
      uri.AddQueryStringParameter("version", ss.str());
      ss.str("");
    }

    if(m_hostedZoneIdMarkerHasBeenSet)
    {
      ss << m_hostedZoneIdMarker;
      uri.AddQueryStringParameter("hostedzoneid", ss.str());
      ss.str("");
    }

    if(m_trafficPolicyInstanceNameMarkerHasBeenSet)
    {
      ss << m_trafficPolicyInstanceNameMarker;
      uri.AddQueryStringParameter("trafficpolicyinstancename", ss.str());
      ss.str("");
    }

    if(m_trafficPolicyInstanceTypeMarkerHasBeenSet)
    {
      ss << RRTypeMapper::GetNameForRRType(m_trafficPolicyInstanceTypeMarker);
      uri.AddQueryStringParameter("trafficpolicyinstancetype", ss.str());
      ss.str("");
    }

    if(m_maxItemsHasBeenSet)
    {
      ss << m_maxItems;
      uri.AddQueryStringParameter("maxitems", ss.str());
      ss.str("");
    }

}

