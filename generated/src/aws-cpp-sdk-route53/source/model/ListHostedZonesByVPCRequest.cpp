/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListHostedZonesByVPCRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

ListHostedZonesByVPCRequest::ListHostedZonesByVPCRequest() : 
    m_vPCIdHasBeenSet(false),
    m_vPCRegion(VPCRegion::NOT_SET),
    m_vPCRegionHasBeenSet(false),
    m_maxItemsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListHostedZonesByVPCRequest::SerializePayload() const
{
  return {};
}

void ListHostedZonesByVPCRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_vPCIdHasBeenSet)
    {
      ss << m_vPCId;
      uri.AddQueryStringParameter("vpcid", ss.str());
      ss.str("");
    }

    if(m_vPCRegionHasBeenSet)
    {
      ss << VPCRegionMapper::GetNameForVPCRegion(m_vPCRegion);
      uri.AddQueryStringParameter("vpcregion", ss.str());
      ss.str("");
    }

    if(m_maxItemsHasBeenSet)
    {
      ss << m_maxItems;
      uri.AddQueryStringParameter("maxitems", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nexttoken", ss.str());
      ss.str("");
    }

}

