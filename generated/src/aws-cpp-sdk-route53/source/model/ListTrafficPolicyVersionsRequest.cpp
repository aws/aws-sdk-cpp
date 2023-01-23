/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListTrafficPolicyVersionsRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

ListTrafficPolicyVersionsRequest::ListTrafficPolicyVersionsRequest() : 
    m_idHasBeenSet(false),
    m_trafficPolicyVersionMarkerHasBeenSet(false),
    m_maxItemsHasBeenSet(false)
{
}

Aws::String ListTrafficPolicyVersionsRequest::SerializePayload() const
{
  return {};
}

void ListTrafficPolicyVersionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_trafficPolicyVersionMarkerHasBeenSet)
    {
      ss << m_trafficPolicyVersionMarker;
      uri.AddQueryStringParameter("trafficpolicyversion", ss.str());
      ss.str("");
    }

    if(m_maxItemsHasBeenSet)
    {
      ss << m_maxItems;
      uri.AddQueryStringParameter("maxitems", ss.str());
      ss.str("");
    }

}

