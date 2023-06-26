/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListHostedZonesByNameRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

ListHostedZonesByNameRequest::ListHostedZonesByNameRequest() : 
    m_dNSNameHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false),
    m_maxItemsHasBeenSet(false)
{
}

Aws::String ListHostedZonesByNameRequest::SerializePayload() const
{
  return {};
}

void ListHostedZonesByNameRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_dNSNameHasBeenSet)
    {
      ss << m_dNSName;
      uri.AddQueryStringParameter("dnsname", ss.str());
      ss.str("");
    }

    if(m_hostedZoneIdHasBeenSet)
    {
      ss << m_hostedZoneId;
      uri.AddQueryStringParameter("hostedzoneid", ss.str());
      ss.str("");
    }

    if(m_maxItemsHasBeenSet)
    {
      ss << m_maxItems;
      uri.AddQueryStringParameter("maxitems", ss.str());
      ss.str("");
    }

}

